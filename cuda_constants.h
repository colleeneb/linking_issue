/**
 * @file cuda_constants.h
 * @author Giuseppe Barca (you@domain.com)
 * @brief Contains declaration of constants for the evaluation of the kernels
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef GENFOCK_CUDA_CONSTANTS_CUH
#define GENFOCK_CUDA_CONSTANTS_CUH

//These constants will fit in constant memory
namespace genfock {
namespace CUDA_GPU {
__device__ double inv_scal_fact[25];
}
}
#endif
