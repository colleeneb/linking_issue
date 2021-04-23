#include "cuda_constants.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
#ifndef BLOCKDIM 
#define BLOCKDIM 128 
#endif 
#ifndef MAX_KAB 
#define MAX_KAB 81
#endif 
#ifndef MAX_THREADS_PER_BLOCK
#define MAX_THREADS_PER_BLOCK 1024
#endif
#ifndef MIN_WARPS_PER_EU
#define MIN_WARPS_PER_EU 255
#endif
// interpolation based boys function
namespace genfock {
namespace CUDA_GPU {
__device__ double boysf_interpolation( const unsigned int M, const double T){

    inv_scal_fact[0] = 5.0;
    return 0;
}
}
}
