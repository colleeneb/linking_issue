/**
 * @file scf.cpp
 * @author Giuseppe Barca (gbarca@gbarca.com)
 * @brief Also modified by David Poole, Jorge Galvez, Melisa Alkan. Contains main SCF routine
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "device_kit.h"
#include "stdio.h"
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <omp.h>
#include <typeinfo>
#include <unistd.h>
#include <vector>

/**
 * @brief RHF SCF routine. Evaluate one eletron integrals, for transformation matrices, do ERIs and digest
 * them into fock matrix, do DIIS and return RHF energy.
 * @author Many. Melisa Alkan, Giuseppe Barca, Jorge Galvez, David Poole (alphabetical)
 * @date Every day since November 2019
 * @param basis Basis set object
 * @param max_K Maximum degree of contraction
 * @param max_nbas Max number of basis function per shell
 * @param n_bas_functs Number of basis functions
 * @param nocc Number of occupied orbitals
 * @param E_nuc Nuclear repulsion energy
 * @param D Density matrix (sad guess)
 * @param n_atoms Number of atoms
 * @param R Atomic coordinate vector
 * @param element_number Element number for atom vector
 * @param rhf_group H5 debug group for output
 * @param niter Number of iterations to execute
 * @param ngpus Number of gpus per rank (1)
 * @param gfb_batch_size Batch size for ERI evaluation and digestion
 * @param ndiis DIIS size
 * @param dele SCF convergence threshold
 * @param dynamic_threshold Schwarz based screening threshold
 * @param density_threshold Density screening threshold
 * @param comm MPI process
 * @return double RHF energy
 */
int main()
{
  printf( "%lf\n", genfock::CUDA_GPU::inv_scal_fact[0]);
  return 0;
}
