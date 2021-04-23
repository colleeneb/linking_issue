/**
 * @file device_kit.h
 * @author Giuseppe Barca (you@domain.com)
 * @brief Contains GPU managing routines
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DEVICE_KIT_HPP
#define DEVICE_KIT_HPP

//#include <cusolverDn.h>
#include <iostream>

//#include "cuda_constants.h"
/*
extern  double corr_norm_fact[35];
extern  double inv_scal_fact[25];
extern  double factm[25];
extern  double boys_asymp_val[25];
extern __device__ double exp_cheby_coefs[30001 * 4];
extern __device__ double cheby_coefs[30001 * 25 * 4];
*/
namespace genfock {

namespace CUDA_GPU {

extern  double inv_scal_fact[25];
/**
 * @brief Device Kit class. Initialize variables needed for execution 
 * @author Giuseppe Barca. Modified by many.
 */

} // namespace CUDA_GPU

} // namespace genfock

#endif
