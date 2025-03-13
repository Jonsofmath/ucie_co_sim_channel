/*
 * ucie_sim_c_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ucie_sim_c".
 *
 * Model version              : 1.33
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Mar 13 13:31:50 2025
 *
 * Target selection: systemverilog_dpi_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom Processor
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->Custom)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ucie_sim_c_private_h_
#define ucie_sim_c_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ucie_sim_c_types.h"
#include "ucie_sim_c.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 rtmSetErrorStatus(ucie_sim_c_M, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif

extern double* ucie_sim_c_clock_times_buf;
                             // Pointer to the clock_times buffer of AMI_GetWave
extern long long ucie_sim_c_clock_times_idx;
                 // Position of the last written entry in the clock_times buffer
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern int32_T div_s32(int32_T numerator, int32_T denominator);

#endif                                 /* ucie_sim_c_private_h_ */
