#include "device_kit.h"
#include "stdio.h"

int main()
{
  printf( "%lf\n", genfock::CUDA_GPU::inv_scal_fact[0]);
  return 0;
}
