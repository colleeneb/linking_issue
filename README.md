# Test code to show linking issue

This shows a simple example where we wanted to define a global device
variable in one object file and use it in another.

This will work with nvidia if we compile with -rdc=true,
but not with amd with -fgpu-rdc.

## For CUDA:

```
> nvcc -x cu -rdc=true -c GPU_HGP_kernels.cpp
> nvcc -c scf.cpp
> nvcc  scf.o GPU_HGP_kernels.o
```

This will work, and we verify by running nm on `GPU_HGP_kernels.o` and see that
`_ZN7genfock8CUDA_GPU13inv_scal_factE` is labelled "B" and not "b", meaning that
it's global.

If we don't use `-rdc=true`, then it will be "b" and local, and above will fail
at the link step.


## For AMD:

```
> hipcc -c -fgpu-rdc GPU_HGP_kernels.cpp
> hipcc -c -fgpu-rdc scf.cpp
> hipcc -fgpu-rdc scf.o GPU_HGP_kernels.o
/usr/lib64/gcc/x86_64-suse-linux/7/../../../../x86_64-suse-linux/bin/ld: /tmp/scf-a5dde1.o: in function `main':
scf.cpp:(.text+0x5): undefined reference to `genfock::CUDA_GPU::inv_scal_fact'
clang-12: error: linker command failed with exit code 1 (use -v to see invocation)
```

This doesn't work and we can verify by running nm on `GPU_HGP_kernels.o` and see that
`_ZN7genfock8CUDA_GPU13inv_scal_factE` is labelled "b" and not "B", meaning that
it's local, not global.

```
> nm GPU_HGP_kernels.o
                 U atexit
                 U __cxa_atexit
                 U __dso_handle
0000000000000000 t _GLOBAL__sub_I_GPU_HGP_kernels.cpp
                 U __hip_fatbin
0000000000000000 r __hip_fatbin_wrapper
00000000000000d0 V __hip_gpubin_handle
0000000000000000 t __hip_module_ctor
0000000000000060 t __hip_module_dtor
                 U __hipRegisterFatBinary
                 U __hipRegisterVar
                 U __hipUnregisterFatBinary
0000000000000000 b _ZN7genfock8CUDA_GPU13inv_scal_factE
                 U _ZNSt8ios_base4InitC1Ev
                 U _ZNSt8ios_base4InitD1Ev
00000000000000c8 b _ZStL8__ioinit
```