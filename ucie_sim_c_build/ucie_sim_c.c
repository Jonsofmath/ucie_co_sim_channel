/*
 * ucie_sim_c.c
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

#include "ucie_sim_c.h"
#include "rtwtypes.h"
#include "ucie_sim_c_types.h"
#include "ucie_sim_c_private.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include "ucie_sim_c_capi.h"
#include "zero_crossing_types.h"
#include <float.h>

// Variables used for writing to clock_times of AMI_GetWave from the generated model output function
double *ucie_sim_c_clock_times_buf;    // Pointer to the clock_times buffer
long long ucie_sim_c_clock_times_idx;
                         // Position of the last entry in the clock_times buffer

/* Forward declaration for local functions */
static void ucie_sim_c_emxInit_real_T(emxArray_real_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxInitStruct_serdes_FFE(serdes_FFE_ucie_sim_c_T *pStruct,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_FFE_setupWeights(serdes_FFE_ucie_sim_c_T *obj);
static void ucie_sim_c_emxEnsureCapacity_real_T(emxArray_real_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxInit_char_T(emxArray_char_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions);
static void ucie_sim_c_emxFree_char_T(emxArray_char_T_ucie_sim_c_T **pEmxArray);
static void ucie_sim_c_emxEnsureCapacity_char_T(emxArray_char_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel);
static void ucie_sim_c_sprintf(real_T varargin_1, emxArray_char_T_ucie_sim_c_T
  *str);
static real_T ucie_sim_c_rt_hypotd_snf(real_T u0, real_T u1, B_ucie_sim_c_T
  *ucie_sim_c_B);
static real_T ucie_sim_c_linsolve_m(const creal_T A_data[], creal_T B_data[],
  B_ucie_sim_c_T *ucie_sim_c_B);
static boolean_T ucie_sim_c_any(const boolean_T x_data[], const int32_T x_size[2]);
static void ucie_sim_c_calculateCTLECoefficients(real_T dt, real_T coef_inCoeff
  [12], real_T coef_outCoeff[8], real_T coef_inDelay[3], real_T coef_outDelay[2],
  real_T coef_nz[4], real_T coef_np[4], real_T *coef_dt, real_T
  *coef_setSelection, boolean_T *coef_isdefined, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_sort(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2]);
static void ucie_sim_c_diff(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2]);
static void ucie_sim_c_merge(int32_T idx_data[], real_T x_data[], int32_T offset,
  int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[]);
static void ucie_sim_c_sort_m(real_T x_data[], const int32_T *x_size, int32_T
  varargin_1);
static void ucie_sim_c_CTLE_setupImpl(serdes_CTLE_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxInitStruct_serdes_CDR(serdes_CDR_ucie_sim_c_T *pStruct,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxInitStruct_serdes_Stimulus
  (serdes_Stimulus_ucie_sim_c_T *pStruct, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_twister_state_vector_m(uint32_T mt[625]);
static real_T ucie_sim_c_mod_m(real_T x, real_T y);
static void ucie_sim_c_emxFree_real_T(emxArray_real_T_ucie_sim_c_T **pEmxArray);
static real_T ucie_sim_c_rt_powd_snf(real_T u0, real_T u1, B_ucie_sim_c_T
  *ucie_sim_c_B);
static void ucie_sim_c_SystemCore_setup_m(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B, DW_ucie_sim_c_T *ucie_sim_c_DW);
static void ucie_sim_c_twister_state_vector(uint32_T mt[625]);
static void ucie_sim_c_SystemCore_setup(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B, DW_ucie_sim_c_T *ucie_sim_c_DW);
static void ucie_sim_c_emxInitStruct_serdes_FFE1(serdes_FFE_ucie_sim_c_j_T
  *pStruct, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_SystemCore_step_bn(serdes_VGA_ucie_sim_c_k_T *obj,
  emxArray_real_T_ucie_sim_c_T *varargin_1);
static void ucie_sim_c_FFE_setupWeights_d(serdes_FFE_ucie_sim_c_j_T *obj);
static real_T ucie_sim_c_mod_j(real_T x, real_T y);
static void ucie_sim_c_binary_expand_op_16(emxArray_real_T_ucie_sim_c_T *in1,
  real_T in2, const emxArray_real_T_ucie_sim_c_T *in3, B_ucie_sim_c_T
  *ucie_sim_c_B);
static void ucie_sim_c_SystemCore_step_b(serdes_FFE_ucie_sim_c_j_T *obj, const
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T
  *varargout_1, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxFreeStruct_serdes_FFE1(serdes_FFE_ucie_sim_c_j_T
  *pStruct);
static void ucie_sim_c_diff_m(const emxArray_real_T_ucie_sim_c_T *x,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_6(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, int32_T in3, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CDR_resetImpl(serdes_CDR_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_plus(emxArray_real_T_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_impulse2pulse(const emxArray_real_T_ucie_sim_c_T *b_I,
  real_T N, real_T dt, emxArray_real_T_ucie_sim_c_T *P, B_ucie_sim_c_T
  *ucie_sim_c_B);
static void ucie_sim_c_emxInit_boolean_T(emxArray_boolean_T_ucie_sim_c_T
  **pEmxArray, int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxEnsureCapacity_boolean_T
  (emxArray_boolean_T_ucie_sim_c_T *emxArray, int32_T oldNumel, B_ucie_sim_c_T
   *ucie_sim_c_B);
static void ucie_sim_c_maximum_f(const emxArray_real_T_ucie_sim_c_T *x, real_T
  *ex, int32_T *idx, B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_maximum_fp(const real_T x[2]);
static real_T ucie_sim_c_minimum(const real_T x[2]);
static void ucie_sim_c_or(emxArray_boolean_T_ucie_sim_c_T *in1, const
  emxArray_boolean_T_ucie_sim_c_T *in2, const emxArray_boolean_T_ucie_sim_c_T
  *in3, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxFree_boolean_T(emxArray_boolean_T_ucie_sim_c_T
  **pEmxArray);
static void ucie_sim_c_emxInit_int32_T(emxArray_int32_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxEnsureCapacity_int32_T(emxArray_int32_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CTLE_applyCascaded_h(serdes_CTLE_ucie_sim_c_n_T *obj,
  const emxArray_real_T_ucie_sim_c_T *waveIn, real_T Index,
  emxArray_real_T_ucie_sim_c_T *waveOut, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxFree_int32_T(emxArray_int32_T_ucie_sim_c_T **pEmxArray);
static void ucie_sim_c_circshift_l(emxArray_real_T_ucie_sim_c_T *a,
  B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_sum_b(const emxArray_real_T_ucie_sim_c_T *x,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_10(emxArray_real_T_ucie_sim_c_T *in1,
  int32_T in2, const emxArray_real_T_ucie_sim_c_T *in3, const
  emxArray_real_T_ucie_sim_c_T *in4, const emxArray_real_T_ucie_sim_c_T *in5,
  const emxArray_real_T_ucie_sim_c_T *in6, B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_maximum(const emxArray_real_T_ucie_sim_c_T *x,
  B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_mod_g(real_T x, real_T y);
static void ucie_sim_c_emxInit_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  **pEmxArray, int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxEnsureCapacity_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxFree_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  **pEmxArray);
static real_T ucie_sim_c_CTLE_PulseGoodness_n(const emxArray_real_T_ucie_sim_c_T
  *pulse, real_T SamplesPerSymbol, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CTLE_stepImpl_g(serdes_CTLE_ucie_sim_c_n_T *obj, const
  emxArray_real_T_ucie_sim_c_T *waveIn, emxArray_real_T_ucie_sim_c_T *waveOut,
  real_T *Config, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_sprintf_e(real_T varargin_1, emxArray_char_T_ucie_sim_c_T
  *str);
static real_T ucie_sim_c_linsolve_fq(const creal_T A_data[], creal_T B_data[],
  B_ucie_sim_c_T *ucie_sim_c_B);
static boolean_T ucie_sim_c_any_b(const boolean_T x_data[], const int32_T
  x_size[2]);
static void ucie_sim_c_calculateCTLECoefficients_o(real_T dt, real_T
  coef_inCoeff[12], real_T coef_outCoeff[8], real_T coef_inDelay[3], real_T
  coef_outDelay[2], real_T coef_nz[4], real_T coef_np[4], real_T *coef_dt,
  real_T *coef_setSelection, boolean_T *coef_isdefined, B_ucie_sim_c_T
  *ucie_sim_c_B);
static void ucie_sim_c_sort_h(real_T x_data[], int32_T x_size[2]);
static void ucie_sim_c_diff_o(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2]);
static void ucie_sim_c_merge_o(int32_T idx_data[], real_T x_data[], int32_T
  offset, int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[]);
static void ucie_sim_c_sort_hz(real_T x_data[], const int32_T *x_size, int32_T
  varargin_1, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_SystemCore_step(serdes_CTLE_ucie_sim_c_n_T *obj, const
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T
  *varargout_1, real_T *varargout_2, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_sort_mj(const real_T x[2], real_T b_x[2]);
static void ucie_sim_c_Stimulus_resetImpl_m(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_Stimulus_resetImpl(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B);
static boolean_T ucie_sim_c_isequaln(real_T varargin_1, real_T varargin_2);
static void ucie_sim_c_stepFilter(real_T x, const real_T num_data[], const
  int32_T num_size[2], const real_T den_data[], const int32_T den_size[2], const
  real_T state_data[], const int32_T state_size[2], real_T *y, real_T
  b_state_data[], int32_T b_state_size[2], B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_CTLE_applyCascaded(serdes_CTLE_ucie_sim_c_T *obj,
  real_T waveIn, real_T Index, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CTLE_applyCascaded_m(serdes_CTLE_ucie_sim_c_T *obj, const
  real_T waveIn[2], real_T Index, real_T waveOut[2], B_ucie_sim_c_T
  *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_3(real_T in1_data[], int32_T *in1_size,
  const real_T in2_data[], const int32_T *in2_size, const real_T in3_data[],
  const int32_T *in3_size);
static void ucie_sim_c_circshift(emxArray_real_T_ucie_sim_c_T *a, B_ucie_sim_c_T
  *ucie_sim_c_B);
static real_T ucie_sim_c_sum(const emxArray_real_T_ucie_sim_c_T *x);
static real_T ucie_sim_c_binary_expand_op_2(const emxArray_real_T_ucie_sim_c_T
  *in1, const emxArray_real_T_ucie_sim_c_T *in2, const
  emxArray_real_T_ucie_sim_c_T *in3, const emxArray_real_T_ucie_sim_c_T *in4,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_4(real_T in1[2], int32_T in2, const
  emxArray_real_T_ucie_sim_c_T *in3, const emxArray_real_T_ucie_sim_c_T *in4,
  const emxArray_real_T_ucie_sim_c_T *in5, const emxArray_real_T_ucie_sim_c_T
  *in6, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CTLE_stepImpl(serdes_CTLE_ucie_sim_c_T *obj, real_T
  waveIn, real_T *waveOut, real_T *Config, B_ucie_sim_c_T *ucie_sim_c_B);
static boolean_T ucie_sim_c_isequal(const real_T varargin_1[4], const real_T
  varargin_2[4]);
static real_T ucie_sim_c_mod(real_T x);
static void ucie_sim_c_binary_expand_op_9(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, const emxArray_real_T_ucie_sim_c_T *in3,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_eml_float_colon(real_T a, real_T b,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_eml_float_colon_m(real_T a, real_T b,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_8(emxArray_real_T_ucie_sim_c_T *in1,
  const serdes_CDR_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op_7(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_CDR_stepImpl(serdes_CDR_ucie_sim_c_T *obj, real_T waveIn,
  real_T *phase, real_T *ClockAMI_clockTime, real_T *ClockAMI_clockValidOnRising,
  cdrOptional *optional, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_binary_expand_op(emxArray_real_T_ucie_sim_c_T *in1, const
  serdes_Stimulus_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_genrand_uint32_vector(uint32_T mt[625], uint32_T u[2]);
static boolean_T ucie_sim_c_is_valid_state(const uint32_T mt[625]);
static real_T ucie_sim_c_rand_m(DW_ucie_sim_c_T *ucie_sim_c_DW);
static void ucie_sim_c_binary_expand_op_13(emxArray_boolean_T_ucie_sim_c_T *in1,
  const emxArray_real_T_ucie_sim_c_T *in2, const real_T in3_data[], const
  int32_T in3_size[2], B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_prbs_mjc(const emxArray_real_T_ucie_sim_c_T *O, real_T N,
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T *P,
  B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_genrandu_m(uint32_T mt[625]);
static real_T ucie_sim_c_randn_m(DW_ucie_sim_c_T *ucie_sim_c_DW);
static void ucie_sim_c_binary_expand_op_12(emxArray_boolean_T_ucie_sim_c_T *in1,
  const emxArray_real_T_ucie_sim_c_T *in2, const real_T in3_data[], const
  int32_T in3_size[2], B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_prbs_mj(real_T O, emxArray_real_T_ucie_sim_c_T
  *varargin_1, B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_rand(DW_ucie_sim_c_T *ucie_sim_c_DW);
static void ucie_sim_c_prbs_m(const emxArray_real_T_ucie_sim_c_T *O, real_T N,
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T *P,
  B_ucie_sim_c_T *ucie_sim_c_B);
static real_T ucie_sim_c_genrandu(uint32_T mt[625]);
static real_T ucie_sim_c_randn(DW_ucie_sim_c_T *ucie_sim_c_DW);
static real_T ucie_sim_c_prbs(real_T O, emxArray_real_T_ucie_sim_c_T *varargin_1,
  B_ucie_sim_c_T *ucie_sim_c_B);
static void ucie_sim_c_emxFreeStruct_serdes_FFE(serdes_FFE_ucie_sim_c_T *pStruct);
static void ucie_sim_c_emxFreeStruct_serdes_CDR(serdes_CDR_ucie_sim_c_T *pStruct);
static void ucie_sim_c_emxFreeStruct_serdes_Stimulus
  (serdes_Stimulus_ucie_sim_c_T *pStruct);
static void rate_scheduler(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M);
int32_T div_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    uint32_T tempAbsQuotient;
    tempAbsQuotient = (numerator < 0 ? ~(uint32_T)numerator + 1U : (uint32_T)
                       numerator) / (denominator < 0 ? ~(uint32_T)denominator +
      1U : (uint32_T)denominator);
    quotient = (numerator < 0) != (denominator < 0) ? -(int32_T)tempAbsQuotient :
      (int32_T)tempAbsQuotient;
  }

  return quotient;
}

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ucie_sim_c_M->Timing.TaskCounters.TID[1])++;
  if ((ucie_sim_c_M->Timing.TaskCounters.TID[1]) > 127) {/* Sample time: [2.5E-10s, 0.0s] */
    ucie_sim_c_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void ucie_sim_c_emxInit_real_T(emxArray_real_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *emxArray;
  *pEmxArray = (emxArray_real_T_ucie_sim_c_T *)malloc(sizeof
    (emxArray_real_T_ucie_sim_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ucie_sim_c_B->i_er = 0; ucie_sim_c_B->i_er < numDimensions;
       ucie_sim_c_B->i_er++) {
    emxArray->size[ucie_sim_c_B->i_er] = 0;
  }
}

static void ucie_sim_c_emxInitStruct_serdes_FFE(serdes_FFE_ucie_sim_c_T *pStruct,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  ucie_sim_c_emxInit_real_T(&pStruct->Buff, 1, ucie_sim_c_B);
}

static void ucie_sim_c_FFE_setupWeights(serdes_FFE_ucie_sim_c_T *obj)
{
  real_T sumabs;
  real_T y_idx_1;

  /* Start for MATLABSystem: '<S20>/FFE' */
  sumabs = fabs(obj->TapWeights[0]);
  y_idx_1 = fabs(obj->TapWeights[1]);
  sumabs += y_idx_1;
  if (sumabs > 0.0) {
    obj->WeightsInternal[0] = obj->TapWeights[0] / sumabs;
    obj->WeightsInternal[1] = obj->TapWeights[1] / sumabs;
  } else if (sumabs == 0.0) {
    /* Start for MATLABSystem: '<S20>/FFE' */
    obj->WeightsInternal[0] = 0.0 * obj->TapWeights[0];
    obj->WeightsInternal[1] = 0.0 * obj->TapWeights[1];
    obj->WeightsInternal[0] = 1.0;
  } else {
    obj->WeightsInternal[0] = obj->TapWeights[0];
    obj->WeightsInternal[1] = obj->TapWeights[1];
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void ucie_sim_c_emxEnsureCapacity_real_T(emxArray_real_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ucie_sim_c_B->newNumel_i = 1;
  for (ucie_sim_c_B->i_my = 0; ucie_sim_c_B->i_my < emxArray->numDimensions;
       ucie_sim_c_B->i_my++) {
    ucie_sim_c_B->newNumel_i *= emxArray->size[ucie_sim_c_B->i_my];
  }

  if (ucie_sim_c_B->newNumel_i > emxArray->allocatedSize) {
    ucie_sim_c_B->i_my = emxArray->allocatedSize;
    if (ucie_sim_c_B->i_my < 16) {
      ucie_sim_c_B->i_my = 16;
    }

    while (ucie_sim_c_B->i_my < ucie_sim_c_B->newNumel_i) {
      if (ucie_sim_c_B->i_my > 1073741823) {
        ucie_sim_c_B->i_my = MAX_int32_T;
      } else {
        ucie_sim_c_B->i_my <<= 1;
      }
    }

    newData = malloc((uint32_T)ucie_sim_c_B->i_my * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = ucie_sim_c_B->i_my;
    emxArray->canFreeData = true;
  }
}

static void ucie_sim_c_emxInit_char_T(emxArray_char_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_ucie_sim_c_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T_ucie_sim_c_T *)malloc(sizeof
    (emxArray_char_T_ucie_sim_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void ucie_sim_c_emxFree_char_T(emxArray_char_T_ucie_sim_c_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_ucie_sim_c_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_ucie_sim_c_T *)NULL;
  }
}

static void ucie_sim_c_emxEnsureCapacity_char_T(emxArray_char_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = malloc((uint32_T)i * sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void ucie_sim_c_sprintf(real_T varargin_1, emxArray_char_T_ucie_sim_c_T
  *str)
{
  int32_T nbytes;
  int32_T tmp;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  nbytes = snprintf(NULL, 0, "%g", varargin_1);
  tmp = str->size[0] * str->size[1];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  str->size[0] = 1;
  str->size[1] = nbytes + 1;
  ucie_sim_c_emxEnsureCapacity_char_T(str, tmp);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  snprintf(&str->data[0], (size_t)(nbytes + 1), "%g", varargin_1);
  if (nbytes < 1) {
    nbytes = 0;
  }

  tmp = str->size[0] * str->size[1];
  str->size[1] = nbytes;
  ucie_sim_c_emxEnsureCapacity_char_T(str, tmp);
}

static real_T ucie_sim_c_rt_hypotd_snf(real_T u0, real_T u1, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  real_T y;
  ucie_sim_c_B->a_m = fabs(u0);
  ucie_sim_c_B->b_m = fabs(u1);
  if (ucie_sim_c_B->a_m < ucie_sim_c_B->b_m) {
    ucie_sim_c_B->a_m /= ucie_sim_c_B->b_m;
    y = sqrt(ucie_sim_c_B->a_m * ucie_sim_c_B->a_m + 1.0) * ucie_sim_c_B->b_m;
  } else if (ucie_sim_c_B->a_m > ucie_sim_c_B->b_m) {
    ucie_sim_c_B->b_m /= ucie_sim_c_B->a_m;
    y = sqrt(ucie_sim_c_B->b_m * ucie_sim_c_B->b_m + 1.0) * ucie_sim_c_B->a_m;
  } else if (rtIsNaN(ucie_sim_c_B->b_m)) {
    y = (rtNaN);
  } else {
    y = ucie_sim_c_B->a_m * 1.4142135623730951;
  }

  return y;
}

static real_T ucie_sim_c_linsolve_m(const creal_T A_data[], creal_T B_data[],
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T r;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg1;
  ucie_sim_c_B->oneNormA_k = 0.0;
  ucie_sim_c_B->b_j_f = 0;
  exitg1 = false;
  while ((!exitg1) && (ucie_sim_c_B->b_j_f < 2)) {
    ucie_sim_c_B->s_p = ucie_sim_c_rt_hypotd_snf(A_data[ucie_sim_c_B->b_j_f << 1]
      .re, A_data[ucie_sim_c_B->b_j_f << 1].im, ucie_sim_c_B);
    ucie_sim_c_B->s_p += ucie_sim_c_rt_hypotd_snf(A_data[(ucie_sim_c_B->b_j_f <<
      1) + 1].re, A_data[(ucie_sim_c_B->b_j_f << 1) + 1].im, ucie_sim_c_B);
    if (rtIsNaN(ucie_sim_c_B->s_p)) {
      ucie_sim_c_B->oneNormA_k = (rtNaN);
      exitg1 = true;
    } else {
      if (ucie_sim_c_B->s_p > ucie_sim_c_B->oneNormA_k) {
        ucie_sim_c_B->oneNormA_k = ucie_sim_c_B->s_p;
      }

      ucie_sim_c_B->b_j_f++;
    }
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  memcpy(&ucie_sim_c_B->c_A_data[0], &A_data[0], sizeof(creal_T) << 2U);
  ucie_sim_c_B->b_ipiv_data[0] = 1;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->iy = 0;
  ucie_sim_c_B->smax = fabs(ucie_sim_c_B->c_A_data[0].re) + fabs
    (ucie_sim_c_B->c_A_data[0].im);
  ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[1].re;
  ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[1].im;
  ucie_sim_c_B->s_p = fabs(ucie_sim_c_B->c_A_re) + fabs(ucie_sim_c_B->c_A_im);
  if (ucie_sim_c_B->s_p > ucie_sim_c_B->smax) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->iy = 1;
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->c_A = ((ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].re != 0.0) ||
                       (ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].im != 0.0));
  if (ucie_sim_c_B->c_A) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    if (ucie_sim_c_B->iy != 0) {
      ucie_sim_c_B->b_ipiv_data[0] = 2;
      ucie_sim_c_B->temp_re = ucie_sim_c_B->c_A_data[0].re;
      ucie_sim_c_B->temp_im = ucie_sim_c_B->c_A_data[0].im;
      ucie_sim_c_B->c_A_data[0] = ucie_sim_c_B->c_A_data[1];
      ucie_sim_c_B->c_A_data[1].re = ucie_sim_c_B->temp_re;
      ucie_sim_c_B->c_A_data[1].im = ucie_sim_c_B->temp_im;
      ucie_sim_c_B->temp_re = ucie_sim_c_B->c_A_data[2].re;
      ucie_sim_c_B->temp_im = ucie_sim_c_B->c_A_data[2].im;
      ucie_sim_c_B->c_A_data[2] = ucie_sim_c_B->c_A_data[3];
      ucie_sim_c_B->c_A_data[3].re = ucie_sim_c_B->temp_re;
      ucie_sim_c_B->c_A_data[3].im = ucie_sim_c_B->temp_im;
    }

    ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[1].re;
    ucie_sim_c_B->temp_re = ucie_sim_c_B->c_A_data[1].im;
    ucie_sim_c_B->smax = ucie_sim_c_B->c_A_data[0].re;
    ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[0].im;
    if (ucie_sim_c_B->c_A_im == 0.0) {
      if (ucie_sim_c_B->temp_re == 0.0) {
        ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_re / ucie_sim_c_B->smax;
        ucie_sim_c_B->temp_re = 0.0;
      } else if (ucie_sim_c_B->c_A_re == 0.0) {
        ucie_sim_c_B->bim_p = 0.0;
        ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
      } else {
        ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_re / ucie_sim_c_B->smax;
        ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
      }
    } else if (ucie_sim_c_B->smax == 0.0) {
      if (ucie_sim_c_B->c_A_re == 0.0) {
        ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re / ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->temp_re = 0.0;
      } else if (ucie_sim_c_B->temp_re == 0.0) {
        ucie_sim_c_B->bim_p = 0.0;
        ucie_sim_c_B->temp_re = -(ucie_sim_c_B->c_A_re / ucie_sim_c_B->c_A_im);
      } else {
        ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re / ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->temp_re = -(ucie_sim_c_B->c_A_re / ucie_sim_c_B->c_A_im);
      }
    } else {
      ucie_sim_c_B->brm = fabs(ucie_sim_c_B->smax);
      ucie_sim_c_B->bim_p = fabs(ucie_sim_c_B->c_A_im);
      if (ucie_sim_c_B->brm > ucie_sim_c_B->bim_p) {
        ucie_sim_c_B->s_p = ucie_sim_c_B->c_A_im / ucie_sim_c_B->smax;
        ucie_sim_c_B->brm = ucie_sim_c_B->s_p * ucie_sim_c_B->c_A_im +
          ucie_sim_c_B->smax;
        ucie_sim_c_B->bim_p = ucie_sim_c_B->s_p * ucie_sim_c_B->temp_re +
          ucie_sim_c_B->c_A_re;
        ucie_sim_c_B->temp_re -= ucie_sim_c_B->s_p * ucie_sim_c_B->c_A_re;
        ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
        ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
      } else if (ucie_sim_c_B->bim_p == ucie_sim_c_B->brm) {
        ucie_sim_c_B->sgnbr = ucie_sim_c_B->smax > 0.0 ? 0.5 : -0.5;
        ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_im > 0.0 ? 0.5 : -0.5;
        ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_re * ucie_sim_c_B->sgnbr +
          ucie_sim_c_B->temp_re * ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_re * ucie_sim_c_B->sgnbr -
          ucie_sim_c_B->c_A_re * ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
        ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
      } else {
        ucie_sim_c_B->s_p = ucie_sim_c_B->smax / ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->brm = ucie_sim_c_B->s_p * ucie_sim_c_B->smax +
          ucie_sim_c_B->c_A_im;
        ucie_sim_c_B->bim_p = ucie_sim_c_B->s_p * ucie_sim_c_B->c_A_re +
          ucie_sim_c_B->temp_re;
        ucie_sim_c_B->temp_re = ucie_sim_c_B->s_p * ucie_sim_c_B->temp_re -
          ucie_sim_c_B->c_A_re;
        ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
        ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
      }
    }

    ucie_sim_c_B->c_A_re = ucie_sim_c_B->bim_p;
    ucie_sim_c_B->c_A_data[1].re = ucie_sim_c_B->c_A_re;
    ucie_sim_c_B->c_A_data[1].im = ucie_sim_c_B->temp_re;
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[2].re;
  ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[2].im;
  ucie_sim_c_B->c_A = ((ucie_sim_c_B->c_A_re != 0.0) || (ucie_sim_c_B->c_A_im !=
    0.0));
  if (ucie_sim_c_B->c_A) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->temp_re = -ucie_sim_c_B->c_A_re - ucie_sim_c_B->c_A_im * 0.0;
    ucie_sim_c_B->temp_im = ucie_sim_c_B->c_A_re * 0.0 - ucie_sim_c_B->c_A_im;
    ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[1].re * ucie_sim_c_B->temp_re
      - ucie_sim_c_B->c_A_data[1].im * ucie_sim_c_B->temp_im;
    ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[1].re * ucie_sim_c_B->temp_im
      + ucie_sim_c_B->c_A_data[1].im * ucie_sim_c_B->temp_re;
    ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[3].re;
    ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[3].im;
    for (ucie_sim_c_B->b_j_f = 4; ucie_sim_c_B->b_j_f < 5; ucie_sim_c_B->b_j_f++)
    {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->brm += ucie_sim_c_B->c_A_re;
      ucie_sim_c_B->bim_p += ucie_sim_c_B->c_A_im;
    }

    ucie_sim_c_B->c_A_data[3].im = ucie_sim_c_B->bim_p;
    ucie_sim_c_B->c_A_data[3].re = ucie_sim_c_B->brm;
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (ucie_sim_c_B->b_ipiv_data[0] != 1) {
    ucie_sim_c_B->b_j_f = ucie_sim_c_B->b_ipiv_data[0];
    ucie_sim_c_B->temp_re = B_data[0].re;
    ucie_sim_c_B->temp_im = B_data[0].im;
    B_data[0] = B_data[ucie_sim_c_B->b_j_f - 1];
    B_data[ucie_sim_c_B->b_j_f - 1].re = ucie_sim_c_B->temp_re;
    B_data[ucie_sim_c_B->b_j_f - 1].im = ucie_sim_c_B->temp_im;
  }

  for (ucie_sim_c_B->iy = 0; ucie_sim_c_B->iy < 2; ucie_sim_c_B->iy++) {
    ucie_sim_c_B->jA_o = ucie_sim_c_B->iy;
    ucie_sim_c_B->yk_k = (ucie_sim_c_B->jA_o << 1) + 1;

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->c_A = ((B_data[ucie_sim_c_B->jA_o].re != 0.0) ||
                         (B_data[ucie_sim_c_B->jA_o].im != 0.0));
    if (ucie_sim_c_B->c_A) {
      ucie_sim_c_B->b_j_f = ucie_sim_c_B->jA_o;
      for (ucie_sim_c_B->ix_i = ucie_sim_c_B->b_j_f + 2; ucie_sim_c_B->ix_i < 3;
           ucie_sim_c_B->ix_i++) {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[ucie_sim_c_B->yk_k].re;
        ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[ucie_sim_c_B->yk_k].im;
        ucie_sim_c_B->s_p = B_data[ucie_sim_c_B->jA_o].re;
        ucie_sim_c_B->kase = B_data[ucie_sim_c_B->jA_o].im;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->smax = ucie_sim_c_B->brm * ucie_sim_c_B->s_p -
          ucie_sim_c_B->bim_p * ucie_sim_c_B->kase;
        ucie_sim_c_B->s_p = ucie_sim_c_B->bim_p * ucie_sim_c_B->s_p +
          ucie_sim_c_B->brm * ucie_sim_c_B->kase;
        B_data[1].re -= ucie_sim_c_B->smax;
        B_data[1].im -= ucie_sim_c_B->s_p;
      }
    }
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  for (ucie_sim_c_B->jA_o = 1; ucie_sim_c_B->jA_o >= 0; ucie_sim_c_B->jA_o--) {
    ucie_sim_c_B->yk_k = ucie_sim_c_B->jA_o << 1;
    ucie_sim_c_B->smax = B_data[ucie_sim_c_B->jA_o].re;
    ucie_sim_c_B->temp_re = B_data[ucie_sim_c_B->jA_o].im;
    ucie_sim_c_B->c_A = ((ucie_sim_c_B->smax != 0.0) || (ucie_sim_c_B->temp_re
      != 0.0));
    if (ucie_sim_c_B->c_A) {
      ucie_sim_c_B->iy = ucie_sim_c_B->jA_o + ucie_sim_c_B->yk_k;
      ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].re;
      ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].im;
      if (ucie_sim_c_B->c_A_re == 0.0) {
        if (ucie_sim_c_B->temp_re == 0.0) {
          ucie_sim_c_B->bim_p = ucie_sim_c_B->smax / ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->temp_re = 0.0;
        } else if (ucie_sim_c_B->smax == 0.0) {
          ucie_sim_c_B->bim_p = 0.0;
          ucie_sim_c_B->temp_re /= ucie_sim_c_B->c_A_im;
        } else {
          ucie_sim_c_B->bim_p = ucie_sim_c_B->smax / ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->temp_re /= ucie_sim_c_B->c_A_im;
        }
      } else if (ucie_sim_c_B->c_A_im == 0.0) {
        if (ucie_sim_c_B->smax == 0.0) {
          ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re / ucie_sim_c_B->c_A_re;
          ucie_sim_c_B->temp_re = 0.0;
        } else if (ucie_sim_c_B->temp_re == 0.0) {
          ucie_sim_c_B->bim_p = 0.0;
          ucie_sim_c_B->temp_re = -(ucie_sim_c_B->smax / ucie_sim_c_B->c_A_re);
        } else {
          ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re / ucie_sim_c_B->c_A_re;
          ucie_sim_c_B->temp_re = -(ucie_sim_c_B->smax / ucie_sim_c_B->c_A_re);
        }
      } else {
        ucie_sim_c_B->brm = fabs(ucie_sim_c_B->c_A_im);
        ucie_sim_c_B->bim_p = fabs(ucie_sim_c_B->c_A_re);
        if (ucie_sim_c_B->brm > ucie_sim_c_B->bim_p) {
          ucie_sim_c_B->s_p = ucie_sim_c_B->c_A_re / ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->brm = ucie_sim_c_B->s_p * ucie_sim_c_B->c_A_re +
            ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->bim_p = ucie_sim_c_B->s_p * ucie_sim_c_B->temp_re +
            ucie_sim_c_B->smax;
          ucie_sim_c_B->temp_re -= ucie_sim_c_B->s_p * ucie_sim_c_B->smax;
          ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
          ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
        } else if (ucie_sim_c_B->bim_p == ucie_sim_c_B->brm) {
          ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_im > 0.0 ? 0.5 : -0.5;
          ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_re > 0.0 ? 0.5 : -0.5;
          ucie_sim_c_B->bim_p = ucie_sim_c_B->smax * ucie_sim_c_B->sgnbr +
            ucie_sim_c_B->temp_re * ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_re * ucie_sim_c_B->sgnbr -
            ucie_sim_c_B->smax * ucie_sim_c_B->c_A_im;
          ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
          ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
        } else {
          ucie_sim_c_B->s_p = ucie_sim_c_B->c_A_im / ucie_sim_c_B->c_A_re;
          ucie_sim_c_B->brm = ucie_sim_c_B->s_p * ucie_sim_c_B->c_A_im +
            ucie_sim_c_B->c_A_re;
          ucie_sim_c_B->bim_p = ucie_sim_c_B->s_p * ucie_sim_c_B->smax +
            ucie_sim_c_B->temp_re;
          ucie_sim_c_B->temp_re = ucie_sim_c_B->s_p * ucie_sim_c_B->temp_re -
            ucie_sim_c_B->smax;
          ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
          ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
        }
      }

      ucie_sim_c_B->smax = ucie_sim_c_B->bim_p;
      B_data[ucie_sim_c_B->jA_o].re = ucie_sim_c_B->smax;
      B_data[ucie_sim_c_B->jA_o].im = ucie_sim_c_B->temp_re;
      ucie_sim_c_B->iy = ucie_sim_c_B->jA_o;
      for (ucie_sim_c_B->ix_i = 0; ucie_sim_c_B->ix_i < ucie_sim_c_B->iy;
           ucie_sim_c_B->ix_i++) {
        ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[ucie_sim_c_B->yk_k].re;
        ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[ucie_sim_c_B->yk_k].im;
        ucie_sim_c_B->s_p = B_data[ucie_sim_c_B->jA_o].re;
        ucie_sim_c_B->kase = B_data[ucie_sim_c_B->jA_o].im;
        ucie_sim_c_B->smax = ucie_sim_c_B->brm * ucie_sim_c_B->s_p -
          ucie_sim_c_B->bim_p * ucie_sim_c_B->kase;
        ucie_sim_c_B->s_p = ucie_sim_c_B->bim_p * ucie_sim_c_B->s_p +
          ucie_sim_c_B->brm * ucie_sim_c_B->kase;
        B_data[0].re -= ucie_sim_c_B->smax;
        B_data[0].im -= ucie_sim_c_B->s_p;
      }
    }
  }

  r = 0.0;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (!(ucie_sim_c_B->oneNormA_k == 0.0)) {
    ucie_sim_c_B->jA_o = 1;
    do {
      exitg2 = 0;
      if (ucie_sim_c_B->jA_o + 1 > 0) {
        ucie_sim_c_B->c_A = ((ucie_sim_c_B->c_A_data[(ucie_sim_c_B->jA_o << 1) +
                              ucie_sim_c_B->jA_o].re == 0.0) &&
                             (ucie_sim_c_B->c_A_data[(ucie_sim_c_B->jA_o << 1) +
                              ucie_sim_c_B->jA_o].im == 0.0));
        if (ucie_sim_c_B->c_A) {
          exitg2 = 1;
        } else {
          ucie_sim_c_B->jA_o--;
        }
      } else {
        ucie_sim_c_B->s_p = 0.0;
        ucie_sim_c_B->iter = 2;
        ucie_sim_c_B->kase = 1.0;
        ucie_sim_c_B->smax = 1.0;
        ucie_sim_c_B->j = 1;
        ucie_sim_c_B->x_data_b[0].re = 0.5;
        ucie_sim_c_B->x_data_b[0].im = 0.0;
        ucie_sim_c_B->x_data_b[1].re = 0.5;
        ucie_sim_c_B->x_data_b[1].im = 0.0;
        do {
          exitg3 = 0;
          if (ucie_sim_c_B->kase == 1.0) {
            for (ucie_sim_c_B->b_j_f = 0; ucie_sim_c_B->b_j_f < 2;
                 ucie_sim_c_B->b_j_f++) {
              ucie_sim_c_B->yk_k = ucie_sim_c_B->b_j_f;
              ucie_sim_c_B->jA_o = ((ucie_sim_c_B->yk_k << 1) +
                                    ucie_sim_c_B->yk_k) + 1;
              ucie_sim_c_B->iy = 1 - ucie_sim_c_B->yk_k;
              for (ucie_sim_c_B->ix_i = 0; ucie_sim_c_B->ix_i < ucie_sim_c_B->iy;
                   ucie_sim_c_B->ix_i++) {
                ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o].
                  re;
                ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o]
                  .im;
                ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b
                  [ucie_sim_c_B->yk_k].re;
                ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b
                  [ucie_sim_c_B->yk_k].im;
                ucie_sim_c_B->sgnbr = ucie_sim_c_B->brm * ucie_sim_c_B->temp_re
                  - ucie_sim_c_B->bim_p * ucie_sim_c_B->temp_im;
                ucie_sim_c_B->x_im = ucie_sim_c_B->bim_p * ucie_sim_c_B->temp_re
                  + ucie_sim_c_B->brm * ucie_sim_c_B->temp_im;
                ucie_sim_c_B->x_data_b[1].re -= ucie_sim_c_B->sgnbr;
                ucie_sim_c_B->x_data_b[1].im -= ucie_sim_c_B->x_im;
              }
            }

            for (ucie_sim_c_B->yk_k = 1; ucie_sim_c_B->yk_k >= 0;
                 ucie_sim_c_B->yk_k--) {
              ucie_sim_c_B->jA_o = ((ucie_sim_c_B->yk_k << 1) +
                                    ucie_sim_c_B->yk_k) - 1;
              ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .re;
              ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .im;
              ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o +
                1].re;
              ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o +
                1].im;
              if (ucie_sim_c_B->c_A_re == 0.0) {
                if (ucie_sim_c_B->temp_im == 0.0) {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_im;
                } else {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_im;
                }
              } else if (ucie_sim_c_B->c_A_im == 0.0) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->temp_im == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re = -(ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_re);
                } else {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->temp_re = -(ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_re);
                }
              } else {
                ucie_sim_c_B->brm = fabs(ucie_sim_c_B->c_A_im);
                ucie_sim_c_B->bim_p = fabs(ucie_sim_c_B->c_A_re);
                if (ucie_sim_c_B->brm > ucie_sim_c_B->bim_p) {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->brm = ucie_sim_c_B->sgnbr * ucie_sim_c_B->c_A_re
                    + ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_im + ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im -
                    ucie_sim_c_B->sgnbr * ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
                } else if (ucie_sim_c_B->bim_p == ucie_sim_c_B->brm) {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_im > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_re > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re *
                    ucie_sim_c_B->sgnbr + ucie_sim_c_B->temp_im *
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im *
                    ucie_sim_c_B->sgnbr - ucie_sim_c_B->temp_re *
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
                } else {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->brm = ucie_sim_c_B->sgnbr * ucie_sim_c_B->c_A_im
                    + ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_re + ucie_sim_c_B->temp_im;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_im - ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->brm;
                }
              }

              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].re =
                ucie_sim_c_B->bim_p;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].im =
                ucie_sim_c_B->temp_re;
              ucie_sim_c_B->iy = ucie_sim_c_B->yk_k;
              for (ucie_sim_c_B->ix_i = 0; ucie_sim_c_B->ix_i < ucie_sim_c_B->iy;
                   ucie_sim_c_B->ix_i++) {
                ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o].
                  re;
                ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o]
                  .im;
                ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b
                  [ucie_sim_c_B->yk_k].re;
                ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b
                  [ucie_sim_c_B->yk_k].im;
                ucie_sim_c_B->sgnbr = ucie_sim_c_B->brm * ucie_sim_c_B->temp_re
                  - ucie_sim_c_B->bim_p * ucie_sim_c_B->temp_im;
                ucie_sim_c_B->x_im = ucie_sim_c_B->bim_p * ucie_sim_c_B->temp_re
                  + ucie_sim_c_B->brm * ucie_sim_c_B->temp_im;
                ucie_sim_c_B->x_data_b[0].re -= ucie_sim_c_B->sgnbr;
                ucie_sim_c_B->x_data_b[0].im -= ucie_sim_c_B->x_im;
              }
            }
          } else {
            for (ucie_sim_c_B->b_j_f = 0; ucie_sim_c_B->b_j_f < 2;
                 ucie_sim_c_B->b_j_f++) {
              ucie_sim_c_B->yk_k = ucie_sim_c_B->b_j_f;
              ucie_sim_c_B->iy = ucie_sim_c_B->yk_k << 1;
              ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .re;
              ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .im;
              ucie_sim_c_B->jA_o = ucie_sim_c_B->yk_k;
              for (ucie_sim_c_B->ix_i = 0; ucie_sim_c_B->ix_i <
                   ucie_sim_c_B->jA_o; ucie_sim_c_B->ix_i++) {
                ucie_sim_c_B->sgnbr = ucie_sim_c_B->x_data_b[0].re;
                ucie_sim_c_B->x_im = ucie_sim_c_B->x_data_b[0].im;
                ucie_sim_c_B->brm = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].re;
                ucie_sim_c_B->bim_p = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].
                  im;
                ucie_sim_c_B->temp_re -= ucie_sim_c_B->brm * ucie_sim_c_B->sgnbr
                  + ucie_sim_c_B->bim_p * ucie_sim_c_B->x_im;
                ucie_sim_c_B->temp_im -= ucie_sim_c_B->brm * ucie_sim_c_B->x_im
                  - ucie_sim_c_B->bim_p * ucie_sim_c_B->sgnbr;
              }

              ucie_sim_c_B->iy += ucie_sim_c_B->yk_k;
              ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].re;
              ucie_sim_c_B->c_A_re = -ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].
                im;
              if (ucie_sim_c_B->c_A_re == 0.0) {
                if (ucie_sim_c_B->temp_im == 0.0) {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_im = 0.0;
                } else if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_im /= ucie_sim_c_B->c_A_im;
                } else {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_im /= ucie_sim_c_B->c_A_im;
                }
              } else if (ucie_sim_c_B->c_A_im == 0.0) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->temp_im = 0.0;
                } else if (ucie_sim_c_B->temp_im == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_im = -(ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_re);
                } else {
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->temp_im = -(ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->c_A_re);
                }
              } else {
                ucie_sim_c_B->brm = fabs(ucie_sim_c_B->c_A_im);
                ucie_sim_c_B->bim_p = fabs(ucie_sim_c_B->c_A_re);
                if (ucie_sim_c_B->brm > ucie_sim_c_B->bim_p) {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_re /
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->brm = ucie_sim_c_B->sgnbr * ucie_sim_c_B->c_A_re
                    + ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_im + ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im -
                    ucie_sim_c_B->sgnbr * ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_im = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->brm;
                } else if (ucie_sim_c_B->bim_p == ucie_sim_c_B->brm) {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_im > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_re > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->temp_re *
                    ucie_sim_c_B->sgnbr + ucie_sim_c_B->temp_im *
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im *
                    ucie_sim_c_B->sgnbr - ucie_sim_c_B->temp_re *
                    ucie_sim_c_B->c_A_im;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_im = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->brm;
                } else {
                  ucie_sim_c_B->sgnbr = ucie_sim_c_B->c_A_im /
                    ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->brm = ucie_sim_c_B->sgnbr * ucie_sim_c_B->c_A_im
                    + ucie_sim_c_B->c_A_re;
                  ucie_sim_c_B->bim_p = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_re + ucie_sim_c_B->temp_im;
                  ucie_sim_c_B->temp_re = ucie_sim_c_B->sgnbr *
                    ucie_sim_c_B->temp_im - ucie_sim_c_B->temp_re;
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->brm;
                  ucie_sim_c_B->temp_im = ucie_sim_c_B->temp_re /
                    ucie_sim_c_B->brm;
                }
              }

              ucie_sim_c_B->temp_re = ucie_sim_c_B->bim_p;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].re =
                ucie_sim_c_B->temp_re;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].im =
                ucie_sim_c_B->temp_im;
            }

            for (ucie_sim_c_B->yk_k = 1; ucie_sim_c_B->yk_k >= 0;
                 ucie_sim_c_B->yk_k--) {
              ucie_sim_c_B->iy = (ucie_sim_c_B->yk_k << 1) + 1;
              ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .re;
              ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k]
                .im;
              ucie_sim_c_B->b_j_f = ucie_sim_c_B->yk_k;
              for (ucie_sim_c_B->ix_i = 2; ucie_sim_c_B->ix_i >=
                   ucie_sim_c_B->b_j_f + 2; ucie_sim_c_B->ix_i--) {
                ucie_sim_c_B->c_A_re = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].
                  re;
                ucie_sim_c_B->c_A_im = ucie_sim_c_B->c_A_data[ucie_sim_c_B->iy].
                  im;
                ucie_sim_c_B->sgnbr = ucie_sim_c_B->x_data_b[1].re;
                ucie_sim_c_B->x_im = ucie_sim_c_B->x_data_b[1].im;
                ucie_sim_c_B->temp_re -= ucie_sim_c_B->c_A_re *
                  ucie_sim_c_B->sgnbr + ucie_sim_c_B->c_A_im *
                  ucie_sim_c_B->x_im;
                ucie_sim_c_B->temp_im -= ucie_sim_c_B->c_A_re *
                  ucie_sim_c_B->x_im - ucie_sim_c_B->c_A_im *
                  ucie_sim_c_B->sgnbr;
              }

              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].re =
                ucie_sim_c_B->temp_re;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->yk_k].im =
                ucie_sim_c_B->temp_im;
            }
          }

          if (ucie_sim_c_B->smax == 1.0) {
            ucie_sim_c_B->bim_p = ucie_sim_c_B->x_data_b[0].re;
            ucie_sim_c_B->kase = ucie_sim_c_B->bim_p;
            ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b[0].im;
            ucie_sim_c_B->temp_im = ucie_sim_c_B->temp_re;
            ucie_sim_c_B->smax = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->kase,
              ucie_sim_c_B->temp_im, ucie_sim_c_B);
            ucie_sim_c_B->s_p = ucie_sim_c_B->smax;
            ucie_sim_c_B->kase = ucie_sim_c_B->x_data_b[1].re;
            ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b[1].im;
            ucie_sim_c_B->brm = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->kase,
              ucie_sim_c_B->temp_im, ucie_sim_c_B);
            ucie_sim_c_B->s_p += ucie_sim_c_B->brm;
            if ((!rtIsInf(ucie_sim_c_B->s_p)) && (!rtIsNaN(ucie_sim_c_B->s_p)))
            {
              if (ucie_sim_c_B->smax > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->bim_p == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                } else {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                }

                ucie_sim_c_B->x_data_b[0].re = ucie_sim_c_B->bim_p;
                ucie_sim_c_B->x_data_b[0].im = ucie_sim_c_B->temp_re;
              } else {
                ucie_sim_c_B->x_data_b[0].re = 1.0;
                ucie_sim_c_B->x_data_b[0].im = 0.0;
              }

              ucie_sim_c_B->bim_p = ucie_sim_c_B->kase;
              ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im;
              ucie_sim_c_B->smax = ucie_sim_c_B->brm;
              if (ucie_sim_c_B->smax > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->bim_p == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                } else {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                }

                ucie_sim_c_B->x_data_b[1].re = ucie_sim_c_B->bim_p;
                ucie_sim_c_B->x_data_b[1].im = ucie_sim_c_B->temp_re;
              } else {
                ucie_sim_c_B->x_data_b[1].re = 1.0;
                ucie_sim_c_B->x_data_b[1].im = 0.0;
              }

              ucie_sim_c_B->kase = 2.0;
              ucie_sim_c_B->smax = 2.0;
            } else {
              exitg3 = 1;
            }
          } else if (ucie_sim_c_B->smax == 2.0) {
            ucie_sim_c_B->j = 1;
            ucie_sim_c_B->smax = fabs(ucie_sim_c_B->x_data_b[0].re);
            ucie_sim_c_B->temp_re = fabs(ucie_sim_c_B->x_data_b[1].re);
            if (!(ucie_sim_c_B->temp_re <= ucie_sim_c_B->smax)) {
              ucie_sim_c_B->j = 2;
            }

            ucie_sim_c_B->iter = 2;
            ucie_sim_c_B->x_data_b[0].re = 0.0;
            ucie_sim_c_B->x_data_b[0].im = 0.0;
            ucie_sim_c_B->x_data_b[1].re = 0.0;
            ucie_sim_c_B->x_data_b[1].im = 0.0;
            ucie_sim_c_B->x_data_b[ucie_sim_c_B->j - 1].re = 1.0;
            ucie_sim_c_B->x_data_b[ucie_sim_c_B->j - 1].im = 0.0;
            ucie_sim_c_B->kase = 1.0;
            ucie_sim_c_B->smax = 3.0;
          } else if (ucie_sim_c_B->smax == 3.0) {
            ucie_sim_c_B->bim_p = ucie_sim_c_B->x_data_b[0].re;
            ucie_sim_c_B->kase = ucie_sim_c_B->bim_p;
            ucie_sim_c_B->temp_re = ucie_sim_c_B->x_data_b[0].im;
            ucie_sim_c_B->temp_im = ucie_sim_c_B->temp_re;
            ucie_sim_c_B->smax = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->kase,
              ucie_sim_c_B->temp_im, ucie_sim_c_B);
            ucie_sim_c_B->s_p = ucie_sim_c_B->smax;
            ucie_sim_c_B->kase = ucie_sim_c_B->x_data_b[1].re;
            ucie_sim_c_B->temp_im = ucie_sim_c_B->x_data_b[1].im;
            ucie_sim_c_B->brm = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->kase,
              ucie_sim_c_B->temp_im, ucie_sim_c_B);
            ucie_sim_c_B->s_p += ucie_sim_c_B->brm;
            if (ucie_sim_c_B->s_p <= ucie_sim_c_B->x_data_b[0].re) {
              ucie_sim_c_B->x_data_b[0].re = 1.0;
              ucie_sim_c_B->x_data_b[0].im = 0.0;
              ucie_sim_c_B->x_data_b[1].re = -2.0;
              ucie_sim_c_B->x_data_b[1].im = 0.0;
              ucie_sim_c_B->kase = 1.0;
              ucie_sim_c_B->smax = 5.0;
            } else {
              if (ucie_sim_c_B->smax > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->bim_p == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                } else {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                }

                ucie_sim_c_B->x_data_b[0].re = ucie_sim_c_B->bim_p;
                ucie_sim_c_B->x_data_b[0].im = ucie_sim_c_B->temp_re;
              } else {
                ucie_sim_c_B->x_data_b[0].re = 1.0;
                ucie_sim_c_B->x_data_b[0].im = 0.0;
              }

              ucie_sim_c_B->bim_p = ucie_sim_c_B->kase;
              ucie_sim_c_B->temp_re = ucie_sim_c_B->temp_im;
              ucie_sim_c_B->smax = ucie_sim_c_B->brm;
              if (ucie_sim_c_B->smax > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->temp_re == 0.0) {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re = 0.0;
                } else if (ucie_sim_c_B->bim_p == 0.0) {
                  ucie_sim_c_B->bim_p = 0.0;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                } else {
                  ucie_sim_c_B->bim_p /= ucie_sim_c_B->smax;
                  ucie_sim_c_B->temp_re /= ucie_sim_c_B->smax;
                }

                ucie_sim_c_B->x_data_b[1].re = ucie_sim_c_B->bim_p;
                ucie_sim_c_B->x_data_b[1].im = ucie_sim_c_B->temp_re;
              } else {
                ucie_sim_c_B->x_data_b[1].re = 1.0;
                ucie_sim_c_B->x_data_b[1].im = 0.0;
              }

              ucie_sim_c_B->kase = 2.0;
              ucie_sim_c_B->smax = 4.0;
            }
          } else if (ucie_sim_c_B->smax == 4.0) {
            ucie_sim_c_B->kase = ucie_sim_c_B->j;
            ucie_sim_c_B->j = 1;
            ucie_sim_c_B->smax = fabs(ucie_sim_c_B->x_data_b[0].re);
            ucie_sim_c_B->temp_re = fabs(ucie_sim_c_B->x_data_b[1].re);
            if (!(ucie_sim_c_B->temp_re <= ucie_sim_c_B->smax)) {
              ucie_sim_c_B->j = 2;
            }

            ucie_sim_c_B->b_j_f = (int32_T)ucie_sim_c_B->kase - 1;
            if ((ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->x_data_b[ucie_sim_c_B->j
                  - 1].re, ucie_sim_c_B->x_data_b[ucie_sim_c_B->j - 1].im,
                  ucie_sim_c_B) != ucie_sim_c_rt_hypotd_snf
                 (ucie_sim_c_B->x_data_b[ucie_sim_c_B->b_j_f].re,
                  ucie_sim_c_B->x_data_b[ucie_sim_c_B->b_j_f].im, ucie_sim_c_B))
                && (ucie_sim_c_B->iter <= 5)) {
              ucie_sim_c_B->iter++;
              ucie_sim_c_B->x_data_b[0].re = 0.0;
              ucie_sim_c_B->x_data_b[0].im = 0.0;
              ucie_sim_c_B->x_data_b[1].re = 0.0;
              ucie_sim_c_B->x_data_b[1].im = 0.0;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->j - 1].re = 1.0;
              ucie_sim_c_B->x_data_b[ucie_sim_c_B->j - 1].im = 0.0;
              ucie_sim_c_B->kase = 1.0;
              ucie_sim_c_B->smax = 3.0;
            } else {
              ucie_sim_c_B->x_data_b[0].re = 1.0;
              ucie_sim_c_B->x_data_b[0].im = 0.0;
              ucie_sim_c_B->x_data_b[1].re = -2.0;
              ucie_sim_c_B->x_data_b[1].im = 0.0;
              ucie_sim_c_B->kase = 1.0;
              ucie_sim_c_B->smax = 5.0;
            }
          } else if (ucie_sim_c_B->smax == 5.0) {
            ucie_sim_c_B->sgnbr = ucie_sim_c_B->x_data_b[0].re;
            ucie_sim_c_B->x_im = ucie_sim_c_B->x_data_b[0].im;
            ucie_sim_c_B->kase = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->sgnbr,
              ucie_sim_c_B->x_im, ucie_sim_c_B);
            ucie_sim_c_B->sgnbr = ucie_sim_c_B->x_data_b[1].re;
            ucie_sim_c_B->x_im = ucie_sim_c_B->x_data_b[1].im;
            ucie_sim_c_B->kase += ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->sgnbr,
              ucie_sim_c_B->x_im, ucie_sim_c_B);
            ucie_sim_c_B->kase = 2.0 * ucie_sim_c_B->kase / 3.0 / 2.0;
            if (ucie_sim_c_B->kase > ucie_sim_c_B->s_p) {
              ucie_sim_c_B->s_p = ucie_sim_c_B->kase;
            }

            exitg3 = 1;
          }
        } while (exitg3 == 0);

        if (ucie_sim_c_B->s_p != 0.0) {
          r = 1.0 / ucie_sim_c_B->s_p / ucie_sim_c_B->oneNormA_k;
        }

        if (rtIsNaN(r)) {
          ucie_sim_c_B->c_A = false;
          for (ucie_sim_c_B->iy = 0; ucie_sim_c_B->iy < 4; ucie_sim_c_B->iy++) {
            ucie_sim_c_B->jA_o = ucie_sim_c_B->iy;
            if (ucie_sim_c_B->c_A || (rtIsNaN(ucie_sim_c_B->
                  c_A_data[ucie_sim_c_B->jA_o].re) || rtIsNaN
                 (ucie_sim_c_B->c_A_data[ucie_sim_c_B->jA_o].im))) {
              ucie_sim_c_B->c_A = true;
            }
          }

          if (!ucie_sim_c_B->c_A) {
            r = 0.0;
          }
        }

        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  return r;
}

static boolean_T ucie_sim_c_any(const boolean_T x_data[], const int32_T x_size[2])
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[1])) {
    boolean_T b;
    b = !x_data[ix];
    if (!b) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void ucie_sim_c_calculateCTLECoefficients(real_T dt, real_T coef_inCoeff
  [12], real_T coef_outCoeff[8], real_T coef_inDelay[3], real_T coef_outDelay[2],
  real_T coef_nz[4], real_T coef_np[4], real_T *coef_dt, real_T
  *coef_setSelection, boolean_T *coef_isdefined, B_ucie_sim_c_T *ucie_sim_c_B)
{
  static const real_T tmp[4] = { -8.0E+9, -7.13000750506996E+9,
    -6.35462587779425E+9, -5.6635662750731E+9 };

  static const real_T tmp_0[8] = { -8.0E+9, -8.0E+9, -8.0E+9, -8.0E+9, -3.2E+10,
    -3.2E+10, -3.2E+10, -3.2E+10 };

  static const real_T tmp_1[4] = { 1.0, 0.89125093813374556, 0.79432823472428149,
    0.70794578438413791 };

  emxArray_char_T_ucie_sim_c_T *b_kk;
  emxArray_char_T_ucie_sim_c_T *cTmp_im;
  emxArray_char_T_ucie_sim_c_T *cTmp_im_0;
  emxArray_char_T_ucie_sim_c_T *dt_0;
  emxArray_char_T_ucie_sim_c_T *tmp_2;
  emxArray_char_T_ucie_sim_c_T *tmp_3;
  emxArray_char_T_ucie_sim_c_T *tmp_4;
  emxArray_char_T_ucie_sim_c_T *tmp_5;
  emxArray_char_T_ucie_sim_c_T *z;
  emxArray_char_T_ucie_sim_c_T *z_0;
  emxArray_char_T_ucie_sim_c_T *z_1;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->p_data_l[0].im = 0.0;
  ucie_sim_c_B->p_data_l[1].im = 0.0;
  ucie_sim_c_B->tmp_size_o[0] = 1;
  ucie_sim_c_B->tmp_size_o[1] = 2;
  ucie_sim_c_B->tmp_size_i[0] = 1;
  ucie_sim_c_B->tmp_size_i[1] = 2;
  ucie_sim_c_emxInit_char_T(&z, 2);
  ucie_sim_c_emxInit_char_T(&tmp_2, 2);
  ucie_sim_c_emxInit_char_T(&cTmp_im, 2);
  ucie_sim_c_emxInit_char_T(&tmp_3, 2);
  ucie_sim_c_emxInit_char_T(&cTmp_im_0, 2);
  ucie_sim_c_emxInit_char_T(&tmp_4, 2);
  ucie_sim_c_emxInit_char_T(&tmp_5, 2);
  ucie_sim_c_emxInit_char_T(&z_0, 2);
  ucie_sim_c_emxInit_char_T(&z_1, 2);
  ucie_sim_c_emxInit_char_T(&b_kk, 2);
  ucie_sim_c_emxInit_char_T(&dt_0, 2);
  for (ucie_sim_c_B->b_kk = 0; ucie_sim_c_B->b_kk < 4; ucie_sim_c_B->b_kk++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->z = tmp[ucie_sim_c_B->b_kk];
    ucie_sim_c_B->sel_data_p[0] = (ucie_sim_c_B->z == ucie_sim_c_B->z);
    ucie_sim_c_B->nz_l = ucie_sim_c_B->sel_data_p[0];
    if (ucie_sim_c_B->nz_l == 0) {
      ucie_sim_c_sprintf(ucie_sim_c_B->z, z);
      ucie_sim_c_sprintf(0.0, tmp_2);
    }

    for (ucie_sim_c_B->tmp_size_idx_1_p = 0; ucie_sim_c_B->tmp_size_idx_1_p < 2;
         ucie_sim_c_B->tmp_size_idx_1_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->cTmp_im_c = tmp_0[(ucie_sim_c_B->tmp_size_idx_1_p << 2) +
        ucie_sim_c_B->b_kk];
      ucie_sim_c_B->x_c = (ucie_sim_c_B->cTmp_im_c == -8.0E+9);
      ucie_sim_c_B->sel_data_p[1] = (ucie_sim_c_B->cTmp_im_c == -3.2E+10);
      ucie_sim_c_B->nz_l = ucie_sim_c_B->x_c;
      for (ucie_sim_c_B->k_p = 2; ucie_sim_c_B->k_p < 3; ucie_sim_c_B->k_p++) {
        ucie_sim_c_B->nz_l += ucie_sim_c_B->sel_data_p[1];
      }

      if (ucie_sim_c_B->nz_l == 0) {
        ucie_sim_c_sprintf(ucie_sim_c_B->cTmp_im_c, cTmp_im);
        ucie_sim_c_sprintf(0.0, tmp_3);
      }

      if (ucie_sim_c_B->nz_l > 1) {
        ucie_sim_c_sprintf(ucie_sim_c_B->cTmp_im_c, cTmp_im_0);
        ucie_sim_c_sprintf(0.0, tmp_4);
      }
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->z_data[0] = 1.0 / ucie_sim_c_B->z;
    ucie_sim_c_B->B_jz[0] = 1.0;

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->B_jz[1] = -ucie_sim_c_B->z_data[0];
    ucie_sim_c_B->p_data_l[0].re = ucie_sim_c_B->B_jz[0];
    ucie_sim_c_B->p_data_l[1].re = ucie_sim_c_B->B_jz[1];
    for (ucie_sim_c_B->d_indx_n = 0; ucie_sim_c_B->d_indx_n < 2;
         ucie_sim_c_B->d_indx_n++) {
      ucie_sim_c_B->sel_data_p[0] = true;
      ucie_sim_c_B->sel_data_p[1] = true;

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->sel_data_p[ucie_sim_c_B->d_indx_n] = false;
      ucie_sim_c_B->k_p = 0;
      for (ucie_sim_c_B->nz_l = 0; ucie_sim_c_B->nz_l < 2; ucie_sim_c_B->nz_l++)
      {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        if (ucie_sim_c_B->sel_data_p[ucie_sim_c_B->nz_l]) {
          ucie_sim_c_B->k_p++;
        }
      }

      ucie_sim_c_B->tmp_size_idx_1_p = ucie_sim_c_B->k_p;
      ucie_sim_c_B->k_p = 0;
      for (ucie_sim_c_B->nz_l = 0; ucie_sim_c_B->nz_l < 2; ucie_sim_c_B->nz_l++)
      {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        if (ucie_sim_c_B->sel_data_p[ucie_sim_c_B->nz_l]) {
          ucie_sim_c_B->tmp_data_o[ucie_sim_c_B->k_p] = ucie_sim_c_B->nz_l;
          ucie_sim_c_B->k_p++;
        }
      }

      for (ucie_sim_c_B->i1 = 0; ucie_sim_c_B->i1 <
           ucie_sim_c_B->tmp_size_idx_1_p; ucie_sim_c_B->i1++) {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->z_data[ucie_sim_c_B->i1] = 1.0 / tmp_0
          [(ucie_sim_c_B->tmp_data_o[ucie_sim_c_B->i1] << 2) +
          ucie_sim_c_B->b_kk];
      }

      ucie_sim_c_B->B_jz[0] = 1.0;
      for (ucie_sim_c_B->vlen = 0; ucie_sim_c_B->vlen <
           ucie_sim_c_B->tmp_size_idx_1_p; ucie_sim_c_B->vlen++) {
        ucie_sim_c_B->nz_l = ucie_sim_c_B->vlen;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->B_jz[ucie_sim_c_B->nz_l + 1] = -ucie_sim_c_B->
          z_data[ucie_sim_c_B->nz_l] * ucie_sim_c_B->B_jz[ucie_sim_c_B->nz_l];
        for (ucie_sim_c_B->k_p = ucie_sim_c_B->nz_l + 1; ucie_sim_c_B->k_p >= 2;
             ucie_sim_c_B->k_p--) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->B_jz[1] -= ucie_sim_c_B->z_data[ucie_sim_c_B->nz_l] *
            ucie_sim_c_B->B_jz[0];
        }
      }

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->q_data_l[ucie_sim_c_B->d_indx_n << 1].re =
        ucie_sim_c_B->B_jz[0];
      ucie_sim_c_B->q_data_l[ucie_sim_c_B->d_indx_n << 1].im = 0.0;
      ucie_sim_c_B->q_data_l[1 + (ucie_sim_c_B->d_indx_n << 1)].re =
        ucie_sim_c_B->B_jz[1];
      ucie_sim_c_B->q_data_l[1 + (ucie_sim_c_B->d_indx_n << 1)].im = 0.0;
    }

    ucie_sim_c_B->cTmp_data_h[0] = ucie_sim_c_B->p_data_l[0];
    ucie_sim_c_B->cTmp_data_h[1] = ucie_sim_c_B->p_data_l[1];
    ucie_sim_c_linsolve_m(ucie_sim_c_B->q_data_l, ucie_sim_c_B->cTmp_data_h,
                          ucie_sim_c_B);

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->z = ucie_sim_c_B->cTmp_data_h[0].re;
    ucie_sim_c_B->cTmp_im_c = ucie_sim_c_B->cTmp_data_h[0].im;
    ucie_sim_c_B->tmp_data_ob[0] = (rtIsNaN(ucie_sim_c_B->z) || rtIsNaN
      (ucie_sim_c_B->cTmp_im_c));
    ucie_sim_c_B->z = ucie_sim_c_B->cTmp_data_h[1].re;
    ucie_sim_c_B->cTmp_im_c = ucie_sim_c_B->cTmp_data_h[1].im;
    ucie_sim_c_B->tmp_data_ob[1] = (rtIsNaN(ucie_sim_c_B->z) || rtIsNaN
      (ucie_sim_c_B->cTmp_im_c));
    if (ucie_sim_c_any(ucie_sim_c_B->tmp_data_ob, ucie_sim_c_B->tmp_size_o)) {
      ucie_sim_c_sprintf(2.0, tmp_5);

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->z_data[0] = 8.0E+9;
      ucie_sim_c_B->z_data[1] = 3.2E+10;
      if (ucie_sim_c_B->z_data[0] < ucie_sim_c_B->z_data[1]) {
        ucie_sim_c_B->z = ucie_sim_c_B->z_data[1];
      } else {
        ucie_sim_c_B->z = ucie_sim_c_B->z_data[0];
      }

      ucie_sim_c_sprintf(ucie_sim_c_B->z, z_0);

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->z_data[0] = 8.0E+9;
      ucie_sim_c_B->z_data[1] = 3.2E+10;
      ucie_sim_c_B->z = ucie_sim_c_B->z_data[0];
      ucie_sim_c_B->z *= ucie_sim_c_B->z_data[1];
      ucie_sim_c_sprintf(ucie_sim_c_B->z, z_1);
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->cTmp_im_c = tmp_1[ucie_sim_c_B->b_kk];
    ucie_sim_c_B->coeff_data_b[0].re = ucie_sim_c_B->cTmp_im_c *
      ucie_sim_c_B->cTmp_data_h[0].re;
    ucie_sim_c_B->coeff_data_b[0].im = ucie_sim_c_B->cTmp_im_c *
      ucie_sim_c_B->cTmp_data_h[0].im;
    ucie_sim_c_B->coeff_data_b[1].re = ucie_sim_c_B->cTmp_im_c *
      ucie_sim_c_B->cTmp_data_h[1].re;
    ucie_sim_c_B->coeff_data_b[1].im = ucie_sim_c_B->cTmp_im_c *
      ucie_sim_c_B->cTmp_data_h[1].im;
    ucie_sim_c_B->inCoeff1_data_l[0].re = 0.0;
    ucie_sim_c_B->inCoeff1_data_l[1].re = 0.0;
    ucie_sim_c_B->inCoeff1_data_l[2].re = 0.0;
    memset(&ucie_sim_c_B->denTmp_data_p[0], 0, 5U * sizeof(creal_T));
    ucie_sim_c_B->num0_data_m[0] = -5.0265482457436691E+10 * dt / 2.0;
    ucie_sim_c_B->num0_data_m[1] = -2.0106192982974677E+11 * dt / 2.0;
    ucie_sim_c_B->num0_data_m[0] = exp(ucie_sim_c_B->num0_data_m[0]);
    ucie_sim_c_B->num0_data_m[1] = exp(ucie_sim_c_B->num0_data_m[1]);
    ucie_sim_c_B->num0_data_m[0] = 1.0 - ucie_sim_c_B->num0_data_m[0];

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->den1_data_j[0] = -5.0265482457436691E+10 * dt;
    ucie_sim_c_B->num0_data_m[1] = 1.0 - ucie_sim_c_B->num0_data_m[1];

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->den1_data_j[1] = -2.0106192982974677E+11 * dt;
    ucie_sim_c_B->z = exp(ucie_sim_c_B->den1_data_j[0]);
    ucie_sim_c_B->den1_data_j[0] = ucie_sim_c_B->z;
    ucie_sim_c_B->cTmp_im_c = exp(ucie_sim_c_B->den1_data_j[1]);
    ucie_sim_c_B->den1_data_j[1] = ucie_sim_c_B->cTmp_im_c;
    ucie_sim_c_B->den1_data_j[0] = -ucie_sim_c_B->den1_data_j[0];

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->num1_data_h[0] = 5.0265482457436691E+10 * dt / 2.0;
    ucie_sim_c_B->den1_data_j[1] = -ucie_sim_c_B->den1_data_j[1];

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->num1_data_h[1] = 2.0106192982974677E+11 * dt / 2.0;
    ucie_sim_c_B->num1_data_h[0] = exp(ucie_sim_c_B->num1_data_h[0]);
    ucie_sim_c_B->num1_data_h[1] = exp(ucie_sim_c_B->num1_data_h[1]);
    ucie_sim_c_B->z_data[0] = ucie_sim_c_B->z;
    ucie_sim_c_B->z_data[1] = ucie_sim_c_B->cTmp_im_c;
    ucie_sim_c_B->num1_data_h[0] = (ucie_sim_c_B->num1_data_h[0] - 1.0) *
      ucie_sim_c_B->z_data[0];
    ucie_sim_c_B->num1_data_h[1] = (ucie_sim_c_B->num1_data_h[1] - 1.0) *
      ucie_sim_c_B->z_data[1];

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->z_data[0] = 8.0E+9;
    ucie_sim_c_B->k_p = 1;

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->z_data[1] = 3.2E+10;
    if (!(ucie_sim_c_B->z_data[0] < ucie_sim_c_B->z_data[1])) {
      ucie_sim_c_B->k_p = 0;
    }

    ucie_sim_c_B->tmp_data_l[0] = rtIsNaN(ucie_sim_c_B->num1_data_h[0]);
    ucie_sim_c_B->tmp_data_l[1] = rtIsNaN(ucie_sim_c_B->num1_data_h[1]);
    if (ucie_sim_c_any(ucie_sim_c_B->tmp_data_l, ucie_sim_c_B->tmp_size_i)) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_sprintf(tmp_0[ucie_sim_c_B->b_kk + (ucie_sim_c_B->k_p << 2)],
                         b_kk);
      ucie_sim_c_sprintf(1.0 / dt, dt_0);
    }

    for (ucie_sim_c_B->tmp_size_idx_1_p = 0; ucie_sim_c_B->tmp_size_idx_1_p < 2;
         ucie_sim_c_B->tmp_size_idx_1_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      memset(&ucie_sim_c_B->numTmp_data_n[0], 0, 5U * sizeof(creal_T));
      ucie_sim_c_B->numTmp_data_n[2].re = ucie_sim_c_B->num0_data_m
        [ucie_sim_c_B->tmp_size_idx_1_p];
      ucie_sim_c_B->numTmp_data_n[2].im = 0.0;
      ucie_sim_c_B->numTmp_data_n[3].re = ucie_sim_c_B->num1_data_h
        [ucie_sim_c_B->tmp_size_idx_1_p];
      ucie_sim_c_B->numTmp_data_n[3].im = 0.0;
      for (ucie_sim_c_B->nz_l = 0; ucie_sim_c_B->nz_l < 2; ucie_sim_c_B->nz_l++)
      {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        if (ucie_sim_c_B->nz_l != ucie_sim_c_B->tmp_size_idx_1_p) {
          ucie_sim_c_B->B_jz[0] = 0.0;
          ucie_sim_c_B->B_jz[1] = 1.0;
          ucie_sim_c_B->B_jz[2] = ucie_sim_c_B->den1_data_j[ucie_sim_c_B->nz_l];
          memcpy(&ucie_sim_c_B->A_data_l[0], &ucie_sim_c_B->numTmp_data_n[0], 5U
                 * sizeof(creal_T));
          memset(&ucie_sim_c_B->numTmp_data_n[0], 0, 5U * sizeof(creal_T));
          ucie_sim_c_B->numTmp_data_n[0].re = 0.0 * ucie_sim_c_B->A_data_l[1].re;
          ucie_sim_c_B->numTmp_data_n[0].im += 0.0 * ucie_sim_c_B->A_data_l[1].
            im;
          ucie_sim_c_B->numTmp_data_n[1].re += 0.0 * ucie_sim_c_B->A_data_l[2].
            re;
          ucie_sim_c_B->numTmp_data_n[1].im += 0.0 * ucie_sim_c_B->A_data_l[2].
            im;
          ucie_sim_c_B->numTmp_data_n[2].re += 0.0 * ucie_sim_c_B->A_data_l[3].
            re;
          ucie_sim_c_B->numTmp_data_n[2].im += 0.0 * ucie_sim_c_B->A_data_l[3].
            im;
          ucie_sim_c_B->numTmp_data_n[3].re += 0.0 * ucie_sim_c_B->A_data_l[4].
            re;
          ucie_sim_c_B->numTmp_data_n[3].im += 0.0 * ucie_sim_c_B->A_data_l[4].
            im;
          for (ucie_sim_c_B->k_p = 0; ucie_sim_c_B->k_p < 2; ucie_sim_c_B->k_p++)
          {
            ucie_sim_c_B->d_indx_n = 4 - ucie_sim_c_B->k_p;
            for (ucie_sim_c_B->vlen = 0; ucie_sim_c_B->vlen <=
                 ucie_sim_c_B->d_indx_n; ucie_sim_c_B->vlen++) {
              ucie_sim_c_B->z = ucie_sim_c_B->B_jz[ucie_sim_c_B->k_p + 1];
              ucie_sim_c_B->i1 = ucie_sim_c_B->k_p + ucie_sim_c_B->vlen;
              ucie_sim_c_B->numTmp_data_n[ucie_sim_c_B->i1].re +=
                ucie_sim_c_B->z * ucie_sim_c_B->A_data_l[ucie_sim_c_B->vlen].re;
              ucie_sim_c_B->numTmp_data_n[ucie_sim_c_B->i1].im +=
                ucie_sim_c_B->z * ucie_sim_c_B->A_data_l[ucie_sim_c_B->vlen].im;
            }
          }
        }
      }

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->z = ucie_sim_c_B->coeff_data_b
        [ucie_sim_c_B->tmp_size_idx_1_p].re;
      ucie_sim_c_B->cTmp_im_c = ucie_sim_c_B->coeff_data_b
        [ucie_sim_c_B->tmp_size_idx_1_p].im;
      ucie_sim_c_B->coeff_re = ucie_sim_c_B->z * ucie_sim_c_B->numTmp_data_n[2].
        re - ucie_sim_c_B->cTmp_im_c * ucie_sim_c_B->numTmp_data_n[2].im;
      ucie_sim_c_B->inCoeff1_data_l[0].re += ucie_sim_c_B->coeff_re;

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->coeff_re = ucie_sim_c_B->z * ucie_sim_c_B->numTmp_data_n[3].
        re - ucie_sim_c_B->cTmp_im_c * ucie_sim_c_B->numTmp_data_n[3].im;
      ucie_sim_c_B->inCoeff1_data_l[1].re += ucie_sim_c_B->coeff_re;

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->z = ucie_sim_c_B->z * ucie_sim_c_B->numTmp_data_n[4].re -
        ucie_sim_c_B->cTmp_im_c * ucie_sim_c_B->numTmp_data_n[4].im;
      ucie_sim_c_B->inCoeff1_data_l[2].re += ucie_sim_c_B->z;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->denTmp_data_p[2].re = 1.0;
    ucie_sim_c_B->denTmp_data_p[2].im = 0.0;
    ucie_sim_c_B->B_jz[0] = 0.0;
    ucie_sim_c_B->B_jz[1] = 1.0;
    for (ucie_sim_c_B->tmp_size_idx_1_p = 0; ucie_sim_c_B->tmp_size_idx_1_p < 2;
         ucie_sim_c_B->tmp_size_idx_1_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->B_jz[2] = ucie_sim_c_B->den1_data_j
        [ucie_sim_c_B->tmp_size_idx_1_p];
      memcpy(&ucie_sim_c_B->A_data_l[0], &ucie_sim_c_B->denTmp_data_p[0], 5U *
             sizeof(creal_T));
      memset(&ucie_sim_c_B->denTmp_data_p[0], 0, 5U * sizeof(creal_T));
      ucie_sim_c_B->denTmp_data_p[0].re = 0.0 * ucie_sim_c_B->A_data_l[1].re;
      ucie_sim_c_B->denTmp_data_p[0].im += 0.0 * ucie_sim_c_B->A_data_l[1].im;
      ucie_sim_c_B->denTmp_data_p[1].re += 0.0 * ucie_sim_c_B->A_data_l[2].re;
      ucie_sim_c_B->denTmp_data_p[1].im += 0.0 * ucie_sim_c_B->A_data_l[2].im;
      ucie_sim_c_B->denTmp_data_p[2].re += 0.0 * ucie_sim_c_B->A_data_l[3].re;
      ucie_sim_c_B->denTmp_data_p[2].im += 0.0 * ucie_sim_c_B->A_data_l[3].im;
      ucie_sim_c_B->denTmp_data_p[3].re += 0.0 * ucie_sim_c_B->A_data_l[4].re;
      ucie_sim_c_B->denTmp_data_p[3].im += 0.0 * ucie_sim_c_B->A_data_l[4].im;
      for (ucie_sim_c_B->k_p = 0; ucie_sim_c_B->k_p < 2; ucie_sim_c_B->k_p++) {
        ucie_sim_c_B->d_indx_n = 4 - ucie_sim_c_B->k_p;
        for (ucie_sim_c_B->vlen = 0; ucie_sim_c_B->vlen <=
             ucie_sim_c_B->d_indx_n; ucie_sim_c_B->vlen++) {
          ucie_sim_c_B->z = ucie_sim_c_B->B_jz[ucie_sim_c_B->k_p + 1];
          ucie_sim_c_B->i1 = ucie_sim_c_B->k_p + ucie_sim_c_B->vlen;
          ucie_sim_c_B->denTmp_data_p[ucie_sim_c_B->i1].re += ucie_sim_c_B->z *
            ucie_sim_c_B->A_data_l[ucie_sim_c_B->vlen].re;
          ucie_sim_c_B->denTmp_data_p[ucie_sim_c_B->i1].im += ucie_sim_c_B->z *
            ucie_sim_c_B->A_data_l[ucie_sim_c_B->vlen].im;
        }
      }
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    coef_inCoeff[3 * ucie_sim_c_B->b_kk] = ucie_sim_c_B->inCoeff1_data_l[0].re;
    coef_inCoeff[3 * ucie_sim_c_B->b_kk + 1] = ucie_sim_c_B->inCoeff1_data_l[1].
      re;
    coef_inCoeff[3 * ucie_sim_c_B->b_kk + 2] = ucie_sim_c_B->inCoeff1_data_l[2].
      re;
    ucie_sim_c_B->d_indx_n = ucie_sim_c_B->b_kk << 1;
    coef_outCoeff[ucie_sim_c_B->d_indx_n] = ucie_sim_c_B->denTmp_data_p[3].re;
    coef_outCoeff[ucie_sim_c_B->d_indx_n + 1] = ucie_sim_c_B->denTmp_data_p[4].
      re;
  }

  ucie_sim_c_emxFree_char_T(&dt_0);
  ucie_sim_c_emxFree_char_T(&b_kk);
  ucie_sim_c_emxFree_char_T(&z_1);
  ucie_sim_c_emxFree_char_T(&z_0);
  ucie_sim_c_emxFree_char_T(&tmp_5);
  ucie_sim_c_emxFree_char_T(&tmp_4);
  ucie_sim_c_emxFree_char_T(&cTmp_im_0);
  ucie_sim_c_emxFree_char_T(&tmp_3);
  ucie_sim_c_emxFree_char_T(&cTmp_im);
  ucie_sim_c_emxFree_char_T(&tmp_2);
  ucie_sim_c_emxFree_char_T(&z);
  coef_inDelay[0] = 0.0;
  coef_inDelay[1] = 0.0;
  coef_inDelay[2] = 0.0;
  coef_outDelay[0] = 0.0;
  coef_outDelay[1] = 0.0;
  coef_nz[0] = 1.0;
  coef_np[0] = 2.0;
  coef_nz[1] = 1.0;
  coef_np[1] = 2.0;
  coef_nz[2] = 1.0;
  coef_np[2] = 2.0;
  coef_nz[3] = 1.0;
  coef_np[3] = 2.0;
  *coef_dt = dt;
  *coef_setSelection = 1.0;
  *coef_isdefined = true;
}

static void ucie_sim_c_sort(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2])
{
  real_T x4[4];
  int32_T loop_ub;
  int8_T perm[4];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  b_x_size[0] = 1;
  loop_ub = x_size[1];
  b_x_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    memcpy(&b_x_data[0], &x_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (x_size[1] != 0) {
    int32_T ib;
    x4[0] = 0.0;
    x4[1] = 0.0;
    x4[2] = 0.0;
    x4[3] = 0.0;
    ib = x_size[1] - 1;
    memcpy(&x4[0], &x_data[0], (uint32_T)(ib + 1) * sizeof(real_T));
    ib++;
    perm[1] = 0;
    perm[2] = 0;
    perm[3] = 0;
    if (ib == 1) {
      perm[0] = 1;
    } else if (x4[0] <= x4[1]) {
      perm[0] = 1;
      perm[1] = 2;
    } else {
      perm[0] = 2;
      perm[1] = 1;
    }

    for (loop_ub = 0; loop_ub < ib; loop_ub++) {
      b_x_data[(x_size[1] - ib) + loop_ub] = x4[perm[loop_ub] - 1];
    }
  }
}

static void ucie_sim_c_diff(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2])
{
  int32_T dimSize;
  int32_T ySize_idx_1;
  dimSize = x_size[1];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (x_size[1] == 0) {
    y_size[0] = 1;
    y_size[1] = 0;
  } else if (x_size[1] - 1 < 1) {
    y_size[0] = 1;
    y_size[1] = 0;
  } else {
    ySize_idx_1 = x_size[1] - 1;
    y_size[0] = 1;
    y_size[1] = ySize_idx_1;
    if (y_size[1] != 0) {
      real_T work_data_idx_0;
      work_data_idx_0 = x_data[0];
      for (ySize_idx_1 = 2; ySize_idx_1 <= dimSize; ySize_idx_1++) {
        real_T tmp1;
        real_T tmp2;
        tmp1 = x_data[1];
        tmp2 = work_data_idx_0;
        work_data_idx_0 = tmp1;
        tmp1 -= tmp2;
        y_data[0] = tmp1;
      }
    }
  }

  /* End of Start for MATLABSystem: '<S9>/CTLE' */
}

static void ucie_sim_c_merge(int32_T idx_data[], real_T x_data[], int32_T offset,
  int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[])
{
  int32_T q;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (nq != 0) {
    int32_T iout;
    int32_T n;
    int32_T qend;
    int32_T tmp;
    iout = np + nq;
    n = iout;
    for (q = 0; q < n; q++) {
      qend = q;
      tmp = offset + qend;
      iwork_data[qend] = idx_data[tmp];
      xwork_data[qend] = x_data[tmp];
    }

    n = 0;
    q = np;
    qend = iout;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      int32_T exitg2;
      do {
        exitg2 = 0;
        iout++;
        if (xwork_data[n] <= xwork_data[q]) {
          idx_data[iout] = iwork_data[n];
          x_data[iout] = xwork_data[n];
          n++;
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      idx_data[iout] = iwork_data[q];
      x_data[iout] = xwork_data[q];
      if (q + 1 < qend) {
        q++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    qend = iout - n;
    for (q = n + 1; q <= np; q++) {
      tmp = qend + q;
      idx_data[tmp] = iwork_data[q - 1];
      x_data[tmp] = xwork_data[q - 1];
    }
  }

  /* End of Start for MATLABSystem: '<S9>/CTLE' */
}

static void ucie_sim_c_sort_m(real_T x_data[], const int32_T *x_size, int32_T
  varargin_1)
{
  real_T x4[4];
  real_T vwork_data[2];
  real_T xwork_data[2];
  real_T x4_0;
  real_T x4_1;
  real_T x4_2;
  int32_T idx4[4];
  int32_T perm[4];
  int32_T c_idx_data[2];
  int32_T c_iwork_data[2];
  int32_T b;
  int32_T bLen;
  int32_T b_j;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T ib;
  int32_T n;
  int32_T nTail;
  int32_T perm_0;
  int32_T perm_1;
  int32_T quartetOffset;
  int32_T vstride;
  int32_T wOffset;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (varargin_1 <= 1) {
    b = *x_size;
  } else {
    b = 1;
  }

  vstride = 1;
  nTail = (uint8_T)(varargin_1 - 1);
  for (quartetOffset = 0; quartetOffset < nTail; quartetOffset++) {
    vstride *= *x_size;
  }

  for (b_j = 0; b_j < vstride; b_j++) {
    n = b;
    for (wOffset = 0; wOffset < n; wOffset++) {
      quartetOffset = wOffset;
      vwork_data[quartetOffset] = x_data[quartetOffset * vstride + b_j];
    }

    if (b - 1 >= 0) {
      memset(&c_idx_data[0], 0, (uint32_T)b * sizeof(int32_T));
    }

    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    bLen = 0;
    ib = 0;
    nTail = b;
    for (wOffset = 0; wOffset < nTail; wOffset++) {
      quartetOffset = wOffset;
      if (rtIsNaN(vwork_data[quartetOffset])) {
        i4 = (n - bLen) - 1;
        c_idx_data[i4] = quartetOffset + 1;
        xwork_data[i4] = vwork_data[quartetOffset];
        bLen++;
      } else {
        ib++;
        idx4[ib - 1] = quartetOffset + 1;
        x4[ib - 1] = vwork_data[quartetOffset];
        if (ib == 4) {
          quartetOffset -= bLen;
          if (x4[0] <= x4[1]) {
            ib = 1;
            i2 = 2;
          } else {
            ib = 2;
            i2 = 1;
          }

          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }

          x4_1 = x4[ib - 1];
          x4_2 = x4[i3 - 1];
          if (x4_1 <= x4_2) {
            x4_1 = x4[i2 - 1];
            if (x4_1 <= x4_2) {
              perm_0 = ib;
              perm_1 = i2;
              ib = i3;
              i2 = i4;
            } else if (x4_1 <= x4[i4 - 1]) {
              perm_0 = ib;
              perm_1 = i3;
              ib = i2;
              i2 = i4;
            } else {
              perm_0 = ib;
              perm_1 = i3;
              ib = i4;
            }
          } else {
            x4_2 = x4[i4 - 1];
            if (x4_1 <= x4_2) {
              if (x4[i2 - 1] <= x4_2) {
                perm_0 = i3;
                perm_1 = ib;
                ib = i2;
                i2 = i4;
              } else {
                perm_0 = i3;
                perm_1 = ib;
                ib = i4;
              }
            } else {
              perm_0 = i3;
              perm_1 = i4;
            }
          }

          c_idx_data[quartetOffset - 3] = idx4[perm_0 - 1];
          c_idx_data[quartetOffset - 2] = idx4[perm_1 - 1];
          c_idx_data[quartetOffset - 1] = idx4[ib - 1];
          c_idx_data[quartetOffset] = idx4[i2 - 1];
          vwork_data[quartetOffset - 3] = x4[perm_0 - 1];
          vwork_data[quartetOffset - 2] = x4[perm_1 - 1];
          vwork_data[quartetOffset - 1] = x4[ib - 1];
          vwork_data[quartetOffset] = x4[i2 - 1];
          ib = 0;
        }
      }
    }

    i3 = b - bLen;
    wOffset = i3 - 1;
    if (ib > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        x4_1 = x4[0];
        x4_2 = x4[1];
        if (x4_1 <= x4_2) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else {
        x4_1 = x4[0];
        x4_2 = x4[1];
        if (x4_1 <= x4_2) {
          x4_0 = x4[2];
          if (x4_2 <= x4_0) {
            perm[0] = 1;
            perm[1] = 2;
            perm[2] = 3;
          } else if (x4_1 <= x4_0) {
            perm[0] = 1;
            perm[1] = 3;
            perm[2] = 2;
          } else {
            perm[0] = 3;
            perm[1] = 1;
            perm[2] = 2;
          }
        } else {
          x4_0 = x4[2];
          if (x4_1 <= x4_0) {
            perm[0] = 2;
            perm[1] = 1;
            perm[2] = 3;
          } else if (x4_2 <= x4_0) {
            perm[0] = 2;
            perm[1] = 3;
            perm[2] = 1;
          } else {
            perm[0] = 3;
            perm[1] = 2;
            perm[2] = 1;
          }
        }
      }

      i2 = (uint8_T)ib;
      for (nTail = 0; nTail < i2; nTail++) {
        quartetOffset = nTail;
        perm_0 = perm[quartetOffset];
        i4 = ((wOffset - ib) + quartetOffset) + 1;
        c_idx_data[i4] = idx4[perm_0 - 1];
        vwork_data[i4] = x4[perm_0 - 1];
      }
    }

    ib = bLen >> 1;
    for (nTail = 0; nTail < ib; nTail++) {
      quartetOffset = nTail + 1;
      perm_0 = wOffset + quartetOffset;
      i2 = c_idx_data[perm_0];
      i4 = n - quartetOffset;
      c_idx_data[perm_0] = c_idx_data[i4];
      c_idx_data[i4] = i2;
      vwork_data[perm_0] = xwork_data[i4];
      vwork_data[i4] = xwork_data[perm_0];
    }

    if (((uint32_T)bLen & 1U) != 0U) {
      nTail = (wOffset + ib) + 1;
      vwork_data[nTail] = xwork_data[nTail];
    }

    n = i3;
    if (n > 1) {
      if (b - 1 >= 0) {
        memset(&c_iwork_data[0], 0, (uint32_T)b * sizeof(int32_T));
      }

      quartetOffset = n >> 2;
      bLen = 4;
      while (quartetOffset > 1) {
        if (((uint32_T)quartetOffset & 1U) != 0U) {
          quartetOffset--;
          wOffset = bLen * quartetOffset;
          nTail = n - wOffset;
          if (nTail > bLen) {
            ucie_sim_c_merge(c_idx_data, vwork_data, wOffset, bLen, nTail - bLen,
                             c_iwork_data, xwork_data);
          }
        }

        nTail = bLen << 1;
        quartetOffset >>= 1;
        for (wOffset = 0; wOffset < quartetOffset; wOffset++) {
          ucie_sim_c_merge(c_idx_data, vwork_data, wOffset * nTail, bLen, bLen,
                           c_iwork_data, xwork_data);
        }

        bLen = nTail;
      }

      if (n > bLen) {
        ucie_sim_c_merge(c_idx_data, vwork_data, 0, bLen, n - bLen, c_iwork_data,
                         xwork_data);
      }
    }

    wOffset = b;
    for (nTail = 0; nTail < wOffset; nTail++) {
      quartetOffset = nTail;
      x_data[b_j + quartetOffset * vstride] = vwork_data[quartetOffset];
    }
  }

  /* End of Start for MATLABSystem: '<S9>/CTLE' */
}

static void ucie_sim_c_CTLE_setupImpl(serdes_CTLE_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  static const real_T tmp[4] = { -8.0E+9, -7.13000750506996E+9,
    -6.35462587779425E+9, -5.6635662750731E+9 };

  static const real_T P[8] = { -8.0E+9, -8.0E+9, -8.0E+9, -8.0E+9, -3.2E+10,
    -3.2E+10, -3.2E+10, -3.2E+10 };

  static const int8_T tmp_0[10] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0 };

  static const real_T G[4] = { 1.0, 0.89125093813374556, 0.79432823472428149,
    0.70794578438413791 };

  int32_T exitg2;
  boolean_T exitg1;
  obj->pFilterMethod = true;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  obj->isUpToDate = true;
  ucie_sim_c_B->val = obj->pFilterMethod;
  if (!ucie_sim_c_B->val) {
    ucie_sim_c_B->b_ii = 0;
    do {
      exitg2 = 0;
      if (ucie_sim_c_B->b_ii < 4) {
        ucie_sim_c_B->ntot_d = 0;
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->tmp_data_e[ucie_sim_c_B->ntot_d] = ucie_sim_c_B->yndx_p;
          ucie_sim_c_B->ntot_d++;
        }

        ucie_sim_c_B->p_size_a[0] = 1;
        ucie_sim_c_B->p_size_a[1] = 2;
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->p_data_c[ucie_sim_c_B->yndx_p] = P
            [(ucie_sim_c_B->tmp_data_e[ucie_sim_c_B->yndx_p] << 2) +
            ucie_sim_c_B->b_ii];
        }

        ucie_sim_c_sort(ucie_sim_c_B->p_data_c, ucie_sim_c_B->p_size_a,
                        ucie_sim_c_B->y_data, ucie_sim_c_B->y_size);
        ucie_sim_c_diff(ucie_sim_c_B->y_data, ucie_sim_c_B->y_size,
                        &ucie_sim_c_B->ztmp_data_o, ucie_sim_c_B->z_size_i);
        ucie_sim_c_B->tmp_size_l[0] = 1;
        ucie_sim_c_B->loop_ub_m = ucie_sim_c_B->z_size_i[1];
        ucie_sim_c_B->tmp_size_l[1] = ucie_sim_c_B->loop_ub_m;
        if (ucie_sim_c_B->loop_ub_m - 1 >= 0) {
          ucie_sim_c_B->tmp_data_f = (ucie_sim_c_B->ztmp_data_o == 0.0);
        }

        if (ucie_sim_c_any(&ucie_sim_c_B->tmp_data_f, ucie_sim_c_B->tmp_size_l))
        {
          obj->pFilterMethod = true;
          exitg2 = 1;
        } else {
          ucie_sim_c_B->b_ii++;
        }
      } else {
        ucie_sim_c_B->b_ii = 0;
        exitg2 = 2;
      }
    } while (exitg2 == 0);

    if (exitg2 == 1) {
    } else {
      exitg1 = false;
      while ((!exitg1) && (ucie_sim_c_B->b_ii < 4)) {
        ucie_sim_c_B->ztmp_data_o = tmp[ucie_sim_c_B->b_ii];
        ucie_sim_c_B->ntot_d = 0;
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 1;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->ntot_d++;
        }

        ucie_sim_c_B->z_size_i[0] = 1;
        ucie_sim_c_B->loop_ub_m = ucie_sim_c_B->ntot_d;
        ucie_sim_c_B->z_size_i[1] = ucie_sim_c_B->loop_ub_m;
        ucie_sim_c_sort(&ucie_sim_c_B->ztmp_data_o, ucie_sim_c_B->z_size_i,
                        ucie_sim_c_B->y_data, ucie_sim_c_B->y_size);
        ucie_sim_c_diff(ucie_sim_c_B->y_data, ucie_sim_c_B->y_size,
                        &ucie_sim_c_B->ztmp_data_o, ucie_sim_c_B->z_size_i);
        ucie_sim_c_B->tmp_size_l[0] = 1;
        ucie_sim_c_B->loop_ub_m = ucie_sim_c_B->z_size_i[1];
        ucie_sim_c_B->tmp_size_l[1] = ucie_sim_c_B->loop_ub_m;
        if (ucie_sim_c_B->loop_ub_m - 1 >= 0) {
          ucie_sim_c_B->tmp_data_f = (ucie_sim_c_B->ztmp_data_o == 0.0);
        }

        if (ucie_sim_c_any(&ucie_sim_c_B->tmp_data_f, ucie_sim_c_B->tmp_size_l))
        {
          obj->pFilterMethod = true;
          exitg1 = true;
        } else {
          ucie_sim_c_B->b_ii++;
        }
      }
    }
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->val = obj->pFilterMethod;
  if (!ucie_sim_c_B->val) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_calculateCTLECoefficients(obj->SampleInterval,
      obj->FilterCoefficients.inCoeff, obj->FilterCoefficients.outCoeff,
      obj->FilterCoefficients.inDelay, obj->FilterCoefficients.outDelay,
      obj->FilterCoefficients.nz, obj->FilterCoefficients.np,
      &ucie_sim_c_B->fc_dt_e, &ucie_sim_c_B->np, &ucie_sim_c_B->val,
      ucie_sim_c_B);
    obj->FilterCoefficients.dt = ucie_sim_c_B->fc_dt_e;
    obj->FilterCoefficients.setSelection = ucie_sim_c_B->np;
    obj->FilterCoefficients.isdefined = ucie_sim_c_B->val;
  } else {
    memset(&obj->FilterCoefficients.inCoeff[0], 0, 12U * sizeof(real_T));
    memset(&obj->FilterCoefficients.outCoeff[0], 0, sizeof(real_T) << 3U);
    obj->FilterCoefficients.inDelay[0] = 0.0;
    obj->FilterCoefficients.inDelay[1] = 0.0;
    obj->FilterCoefficients.inDelay[2] = 0.0;
    obj->FilterCoefficients.outDelay[0] = 0.0;
    obj->FilterCoefficients.outDelay[1] = 0.0;

    /* Start for MATLABSystem: '<S9>/CTLE' */
    obj->FilterCoefficients.nz[0] = 1.0;
    obj->FilterCoefficients.np[0] = 2.0;
    obj->FilterCoefficients.nz[1] = 1.0;
    obj->FilterCoefficients.np[1] = 2.0;
    obj->FilterCoefficients.nz[2] = 1.0;
    obj->FilterCoefficients.np[2] = 2.0;
    obj->FilterCoefficients.nz[3] = 1.0;
    obj->FilterCoefficients.np[3] = 2.0;
    ucie_sim_c_B->fc_dt_e = obj->SampleInterval;
    obj->FilterCoefficients.dt = ucie_sim_c_B->fc_dt_e;
    obj->FilterCoefficients.setSelection = 1.0;
    obj->FilterCoefficients.isdefined = false;
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  memset(&obj->FilterStates[0], 0, 40U * sizeof(real_T));
  obj->FilterStatesCount[0] = 0.0;
  obj->FilterStatesCount[1] = 0.0;
  obj->FilterStatesCount[2] = 0.0;
  obj->FilterStatesCount[3] = 0.0;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  memset(&obj->FilterNumerator[0], 0, 20U * sizeof(real_T));
  obj->FilterNumeratorCount[0] = obj->FilterStatesCount[0];
  obj->FilterNumeratorCount[1] = obj->FilterStatesCount[1];
  obj->FilterNumeratorCount[2] = obj->FilterStatesCount[2];
  obj->FilterNumeratorCount[3] = obj->FilterStatesCount[3];
  memset(&obj->FilterDenominator[0], 0, sizeof(real_T) << 4U);
  for (ucie_sim_c_B->b_ii = 0; ucie_sim_c_B->b_ii < 4; ucie_sim_c_B->b_ii++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    obj->FilterDenominatorCount[ucie_sim_c_B->b_ii] = obj->
      FilterStatesCount[ucie_sim_c_B->b_ii];
    obj->FilterGain[ucie_sim_c_B->b_ii] = 0.0;
    ucie_sim_c_B->ntot_d = 0;
    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
         ucie_sim_c_B->yndx_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->tmp_data_a[ucie_sim_c_B->ntot_d] = ucie_sim_c_B->yndx_p;
      ucie_sim_c_B->ntot_d++;
    }

    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
         ucie_sim_c_B->yndx_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->p_data_c[ucie_sim_c_B->yndx_p] = P[(ucie_sim_c_B->
        tmp_data_a[ucie_sim_c_B->yndx_p] << 2) + ucie_sim_c_B->b_ii] * 2.0 *
        3.1415926535897931;
    }

    ucie_sim_c_B->ntot_d = 0;
    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 1;
         ucie_sim_c_B->yndx_p++) {
      ucie_sim_c_B->ntot_d++;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->y_size[1] = ucie_sim_c_B->ntot_d;
    if (ucie_sim_c_B->ntot_d - 1 >= 0) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->y_data[0] = tmp[ucie_sim_c_B->b_ii] * 2.0;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->ntot_d = ucie_sim_c_B->y_size[1];
    if (ucie_sim_c_B->ntot_d - 1 >= 0) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->ztmp_data_o = ucie_sim_c_B->y_data[0] * 3.1415926535897931;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->fc_dt_e = obj->SampleInterval;
    ucie_sim_c_B->psorted_size_o = 2;
    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
         ucie_sim_c_B->yndx_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->psorted_data_m[ucie_sim_c_B->yndx_p] =
        -ucie_sim_c_B->p_data_c[ucie_sim_c_B->yndx_p];
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_sort_m(ucie_sim_c_B->psorted_data_m,
                      &ucie_sim_c_B->psorted_size_o, 1);
    ucie_sim_c_B->np = ucie_sim_c_B->psorted_data_m[0];
    ucie_sim_c_B->a_h = ucie_sim_c_B->psorted_data_m[1];
    ucie_sim_c_B->psect_f.data.f1.data[0] = -ucie_sim_c_B->np;
    ucie_sim_c_B->psect_f.data.f1.data[1] = -ucie_sim_c_B->a_h;

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->psorted_size_o = ucie_sim_c_B->ntot_d;
    if (ucie_sim_c_B->ntot_d - 1 >= 0) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->psorted_data_m[0] = -ucie_sim_c_B->ztmp_data_o;
    }

    if (ucie_sim_c_B->psorted_size_o == 1) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_sort_m(ucie_sim_c_B->psorted_data_m,
                        &ucie_sim_c_B->psorted_size_o, 2);
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    if (ucie_sim_c_B->ntot_d == 1) {
      ucie_sim_c_B->zsect_o.data.f1.size[0] = 1;
      ucie_sim_c_B->zsect_o.data.f1.size[1] = 1;
      ucie_sim_c_B->zsect_o.data.f1.data = -ucie_sim_c_B->psorted_data_m[0];
    } else {
      ucie_sim_c_B->zsect_o.data.f1.size[0] = 0;
      ucie_sim_c_B->zsect_o.data.f1.size[1] = 0;
    }

    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 10;
         ucie_sim_c_B->yndx_p++) {
      ucie_sim_c_B->filtersos_data_m[ucie_sim_c_B->yndx_p] = tmp_0
        [ucie_sim_c_B->yndx_p];
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->ntot_d = ucie_sim_c_B->zsect_o.data.f1.size[0] + 2;
    memset(&ucie_sim_c_B->pz_data_d[0], 0, (uint32_T)ucie_sim_c_B->ntot_d *
           sizeof(creal_T));
    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 2;
         ucie_sim_c_B->yndx_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->pz_data_d[ucie_sim_c_B->yndx_p].re =
        ucie_sim_c_B->psect_f.data.f1.data[ucie_sim_c_B->yndx_p];
      ucie_sim_c_B->pz_data_d[ucie_sim_c_B->yndx_p].im = 0.0;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->yndx_p = ucie_sim_c_B->zsect_o.data.f1.size[0];
    if (ucie_sim_c_B->yndx_p > 0) {
      if (ucie_sim_c_B->ntot_d < 3) {
        ucie_sim_c_B->h = 0;
        ucie_sim_c_B->loop_ub_m = 0;
      } else {
        ucie_sim_c_B->h = 2;
        ucie_sim_c_B->loop_ub_m = 3;
      }

      ucie_sim_c_B->indx_a = ucie_sim_c_B->zsect_o.data.f1.size[1];
      for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < ucie_sim_c_B->indx_a;
           ucie_sim_c_B->yndx_p++) {
        ucie_sim_c_B->zsect_data_n.re = ucie_sim_c_B->zsect_o.data.f1.data;
        ucie_sim_c_B->zsect_data_n.im = 0.0;
      }

      ucie_sim_c_B->unnamed_idx_1_k = (int8_T)(ucie_sim_c_B->loop_ub_m -
        ucie_sim_c_B->h);
      ucie_sim_c_B->loop_ub_m = ucie_sim_c_B->unnamed_idx_1_k;
      for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p <
           ucie_sim_c_B->loop_ub_m; ucie_sim_c_B->yndx_p++) {
        ucie_sim_c_B->pz_data_d[ucie_sim_c_B->h + ucie_sim_c_B->yndx_p] =
          ucie_sim_c_B->zsect_data_n;
      }
    }

    ucie_sim_c_B->indx_a = 1;
    while (ucie_sim_c_B->indx_a <= ucie_sim_c_B->ntot_d) {
      ucie_sim_c_B->yndx_p = ucie_sim_c_B->indx_a;
      if (ucie_sim_c_B->pz_data_d[ucie_sim_c_B->indx_a - 1].im == 0.0) {
        ucie_sim_c_B->a_h = ucie_sim_c_B->pz_data_d[ucie_sim_c_B->indx_a - 1].re;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->np = exp(ucie_sim_c_B->a_h * ucie_sim_c_B->fc_dt_e);
        if (ucie_sim_c_B->a_h == 0.0) {
          ucie_sim_c_B->b_l = 1.0;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->a_h = ucie_sim_c_B->fc_dt_e;
        } else {
          ucie_sim_c_B->b_l = -ucie_sim_c_B->a_h;
          ucie_sim_c_B->a_h = -1.0 / ucie_sim_c_B->a_h * (1.0 - ucie_sim_c_B->np);
        }

        ucie_sim_c_B->sos_d[0] = 0.0;
        ucie_sim_c_B->sos_d[1] = ucie_sim_c_B->b_l * ucie_sim_c_B->a_h;
        ucie_sim_c_B->sos_d[2] = 0.0;
        ucie_sim_c_B->sos_d[3] = 1.0;
        ucie_sim_c_B->sos_d[4] = -ucie_sim_c_B->np;
        ucie_sim_c_B->sos_d[5] = 0.0;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        if ((ucie_sim_c_B->indx_a > 1) && (ucie_sim_c_B->indx_a <= 2)) {
          ucie_sim_c_B->np = ucie_sim_c_B->sos_d[1];
          ucie_sim_c_B->sos_d[0] = ucie_sim_c_B->np;
          ucie_sim_c_B->sos_d[1] = 0.0;
          ucie_sim_c_B->sos_d[2] = 0.0;
        }

        ucie_sim_c_B->indx_a++;
      } else {
        ucie_sim_c_B->a_h = ucie_sim_c_B->pz_data_d[ucie_sim_c_B->indx_a - 1].re;
        ucie_sim_c_B->b_l = ucie_sim_c_B->pz_data_d[ucie_sim_c_B->indx_a - 1].im;
        if (ucie_sim_c_B->a_h >= 0.0) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->np = exp(ucie_sim_c_B->a_h * ucie_sim_c_B->fc_dt_e);
          ucie_sim_c_B->b_l = cos(ucie_sim_c_B->b_l * ucie_sim_c_B->fc_dt_e);
          ucie_sim_c_B->a_h = exp(2.0 * ucie_sim_c_B->a_h *
            ucie_sim_c_B->fc_dt_e);
          ucie_sim_c_B->sos_d[0] = 0.0;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->sos_d[1] = (1.0 - 2.0 * ucie_sim_c_B->np *
            ucie_sim_c_B->b_l) + ucie_sim_c_B->a_h;
          ucie_sim_c_B->sos_d[2] = 0.0;
          ucie_sim_c_B->sos_d[3] = 1.0;
          ucie_sim_c_B->sos_d[4] = -2.0 * ucie_sim_c_B->np * ucie_sim_c_B->b_l;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->sos_d[5] = ucie_sim_c_B->a_h;
        } else {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->az_idx_2_m = ucie_sim_c_B->a_h * ucie_sim_c_B->a_h +
            ucie_sim_c_B->b_l * ucie_sim_c_B->b_l;
          ucie_sim_c_B->np = ucie_sim_c_B->az_idx_2_m / 2.0 / ucie_sim_c_B->b_l;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->az_idx_1_h = exp(ucie_sim_c_B->a_h *
            ucie_sim_c_B->fc_dt_e);
          ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->b_l * ucie_sim_c_B->fc_dt_e;
          ucie_sim_c_B->az_idx_0_m = cos(ucie_sim_c_B->bz_idx_0_h);
          ucie_sim_c_B->bz_idx_0_h = sin(ucie_sim_c_B->bz_idx_0_h);
          ucie_sim_c_B->a_h /= ucie_sim_c_B->az_idx_2_m;
          ucie_sim_c_B->az_idx_2_m = ucie_sim_c_B->b_l /
            ucie_sim_c_B->az_idx_2_m;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->az_idx_0_m *= ucie_sim_c_B->az_idx_1_h;
          ucie_sim_c_B->b_l = ucie_sim_c_B->az_idx_2_m *
            ucie_sim_c_B->az_idx_1_h * ucie_sim_c_B->bz_idx_0_h +
            (ucie_sim_c_B->az_idx_0_m - 1.0) * ucie_sim_c_B->a_h;
          ucie_sim_c_B->a_h = ucie_sim_c_B->a_h * ucie_sim_c_B->az_idx_1_h *
            ucie_sim_c_B->bz_idx_0_h + (1.0 - ucie_sim_c_B->az_idx_0_m) *
            ucie_sim_c_B->az_idx_2_m;
          ucie_sim_c_B->az_idx_2_m = -ucie_sim_c_B->az_idx_1_h *
            ucie_sim_c_B->bz_idx_0_h;
          ucie_sim_c_B->az_idx_1_h *= ucie_sim_c_B->bz_idx_0_h;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->np * ucie_sim_c_B->b_l -
            -ucie_sim_c_B->np * ucie_sim_c_B->a_h;
          ucie_sim_c_B->np = ucie_sim_c_B->np * ucie_sim_c_B->a_h +
            -ucie_sim_c_B->np * ucie_sim_c_B->b_l;
          ucie_sim_c_B->sos_d[0] = 0.0;
          ucie_sim_c_B->sos_d[1] = ucie_sim_c_B->bz_idx_0_h + ucie_sim_c_B->np;
          ucie_sim_c_B->sos_d[2] = (ucie_sim_c_B->az_idx_1_h -
            ucie_sim_c_B->az_idx_0_m) * ucie_sim_c_B->bz_idx_0_h +
            (ucie_sim_c_B->az_idx_2_m - ucie_sim_c_B->az_idx_0_m) *
            ucie_sim_c_B->np;
          ucie_sim_c_B->sos_d[3] = 1.0;
          ucie_sim_c_B->sos_d[4] = -ucie_sim_c_B->az_idx_0_m -
            ucie_sim_c_B->az_idx_0_m;
          ucie_sim_c_B->sos_d[5] = ucie_sim_c_B->az_idx_0_m *
            ucie_sim_c_B->az_idx_0_m - ucie_sim_c_B->az_idx_2_m *
            ucie_sim_c_B->az_idx_1_h;
        }

        ucie_sim_c_B->indx_a += 2;
      }

      if (ucie_sim_c_B->yndx_p <= 2) {
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->C_o[ucie_sim_c_B->yndx_p] = 0.0;
        }

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->np = ucie_sim_c_B->filtersos_data_m[0];
        ucie_sim_c_B->a_h = ucie_sim_c_B->filtersos_data_m[1];
        ucie_sim_c_B->az_idx_1_h = ucie_sim_c_B->filtersos_data_m[2];
        for (ucie_sim_c_B->h = 0; ucie_sim_c_B->h < 3; ucie_sim_c_B->h++) {
          ucie_sim_c_B->k = ucie_sim_c_B->h;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->sos_d[ucie_sim_c_B->k];
          ucie_sim_c_B->C_o[ucie_sim_c_B->k] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->np;
          ucie_sim_c_B->C_o[ucie_sim_c_B->k + 1] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->a_h;
          ucie_sim_c_B->C_o[ucie_sim_c_B->k + 2] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->az_idx_1_h;
        }

        memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p] = ucie_sim_c_B->
            C_o[ucie_sim_c_B->yndx_p];
        }

        memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0], 10U *
               sizeof(real_T));
        ucie_sim_c_B->A_j[0] = ucie_sim_c_B->filtersos_data_m[5];
        ucie_sim_c_B->A_j[1] = ucie_sim_c_B->filtersos_data_m[6];
        ucie_sim_c_B->A_j[2] = ucie_sim_c_B->filtersos_data_m[7];
        memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p + 5] = 0.0;
        }

        memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->h = 0; ucie_sim_c_B->h < 3; ucie_sim_c_B->h++) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->k = ucie_sim_c_B->h + 5;
          for (ucie_sim_c_B->loop_ub_m = 0; ucie_sim_c_B->loop_ub_m < 3;
               ucie_sim_c_B->loop_ub_m++) {
            memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0],
                   10U * sizeof(real_T));

            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_B->yndx_p = ucie_sim_c_B->k + ucie_sim_c_B->loop_ub_m;
            ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p] = ucie_sim_c_B->
              sos_d[ucie_sim_c_B->k - 2] * ucie_sim_c_B->A_j
              [ucie_sim_c_B->loop_ub_m] + ucie_sim_c_B->
              filtersos_data_m[ucie_sim_c_B->yndx_p];
            memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0],
                   10U * sizeof(real_T));
          }
        }
      } else {
        if (ucie_sim_c_B->sos_d[0] == 0.0) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->np = ucie_sim_c_B->sos_d[1];
          ucie_sim_c_B->a_h = ucie_sim_c_B->sos_d[2];
          ucie_sim_c_B->sos_d[0] = ucie_sim_c_B->np;
          ucie_sim_c_B->sos_d[1] = ucie_sim_c_B->a_h;
          ucie_sim_c_B->sos_d[2] = 0.0;
          memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0], 10U *
                 sizeof(real_T));

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->dv1[0] = ucie_sim_c_B->filtersos_data_m[1];
          ucie_sim_c_B->dv1[1] = ucie_sim_c_B->filtersos_data_m[2];
          ucie_sim_c_B->dv1[2] = ucie_sim_c_B->filtersos_data_m[3];
          ucie_sim_c_B->dv1[3] = ucie_sim_c_B->filtersos_data_m[4];
          ucie_sim_c_B->dv1[4] = 0.0;
          memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0], 10U *
                 sizeof(real_T));
        }

        ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->sos_d[0];
        ucie_sim_c_B->B_a[0] = 1.0 / ucie_sim_c_B->bz_idx_0_h;
        ucie_sim_c_B->B_a[1] = ucie_sim_c_B->sos_d[4] / ucie_sim_c_B->bz_idx_0_h;
        ucie_sim_c_B->B_a[2] = ucie_sim_c_B->sos_d[5] / ucie_sim_c_B->bz_idx_0_h;
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->C_o[ucie_sim_c_B->yndx_p] = 0.0;
        }

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->np = ucie_sim_c_B->filtersos_data_m[0];
        ucie_sim_c_B->a_h = ucie_sim_c_B->filtersos_data_m[1];
        ucie_sim_c_B->az_idx_1_h = ucie_sim_c_B->filtersos_data_m[2];
        for (ucie_sim_c_B->h = 0; ucie_sim_c_B->h < 3; ucie_sim_c_B->h++) {
          ucie_sim_c_B->k = ucie_sim_c_B->h;

          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->B_a[ucie_sim_c_B->k];
          ucie_sim_c_B->C_o[ucie_sim_c_B->k] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->np;
          ucie_sim_c_B->C_o[ucie_sim_c_B->k + 1] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->a_h;
          ucie_sim_c_B->C_o[ucie_sim_c_B->k + 2] += ucie_sim_c_B->bz_idx_0_h *
            ucie_sim_c_B->az_idx_1_h;
        }

        memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p] = ucie_sim_c_B->
            C_o[ucie_sim_c_B->yndx_p];
        }

        memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0], 10U *
               sizeof(real_T));
        ucie_sim_c_B->bz_idx_0_h = ucie_sim_c_B->sos_d[0];
        ucie_sim_c_B->A_j[0] = ucie_sim_c_B->filtersos_data_m[5];
        ucie_sim_c_B->B_a[0] = ucie_sim_c_B->sos_d[0] / ucie_sim_c_B->bz_idx_0_h;
        ucie_sim_c_B->A_j[1] = ucie_sim_c_B->filtersos_data_m[6];
        ucie_sim_c_B->B_a[1] = ucie_sim_c_B->sos_d[1] / ucie_sim_c_B->bz_idx_0_h;
        ucie_sim_c_B->A_j[2] = ucie_sim_c_B->filtersos_data_m[7];
        ucie_sim_c_B->B_a[2] = ucie_sim_c_B->sos_d[2] / ucie_sim_c_B->bz_idx_0_h;
        memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
             ucie_sim_c_B->yndx_p++) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p + 5] = 0.0;
        }

        memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0], 10U *
               sizeof(real_T));
        for (ucie_sim_c_B->h = 0; ucie_sim_c_B->h < 3; ucie_sim_c_B->h++) {
          ucie_sim_c_B->k = ucie_sim_c_B->h;
          for (ucie_sim_c_B->loop_ub_m = 0; ucie_sim_c_B->loop_ub_m < 3;
               ucie_sim_c_B->loop_ub_m++) {
            memcpy(&ucie_sim_c_B->dv1[0], &ucie_sim_c_B->filtersos_data_m[0],
                   10U * sizeof(real_T));

            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_B->yndx_p = (ucie_sim_c_B->k + ucie_sim_c_B->loop_ub_m) +
              5;
            ucie_sim_c_B->dv1[ucie_sim_c_B->yndx_p] = ucie_sim_c_B->
              B_a[ucie_sim_c_B->k] * ucie_sim_c_B->A_j[ucie_sim_c_B->loop_ub_m]
              + ucie_sim_c_B->filtersos_data_m[ucie_sim_c_B->yndx_p];
            memcpy(&ucie_sim_c_B->filtersos_data_m[0], &ucie_sim_c_B->dv1[0],
                   10U * sizeof(real_T));
          }
        }

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->filtersos_data_m[5] = 1.0;
      }
    }

    for (ucie_sim_c_B->yndx_p = 0; ucie_sim_c_B->yndx_p < 5;
         ucie_sim_c_B->yndx_p++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      obj->FilterNumerator[ucie_sim_c_B->yndx_p + 5 * ucie_sim_c_B->b_ii] =
        ucie_sim_c_B->filtersos_data_m[ucie_sim_c_B->yndx_p];
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    obj->FilterNumeratorCount[ucie_sim_c_B->b_ii] = 1.0;
    ucie_sim_c_B->yndx_p = ucie_sim_c_B->b_ii << 2;
    obj->FilterDenominator[ucie_sim_c_B->yndx_p] =
      ucie_sim_c_B->filtersos_data_m[6];
    obj->FilterDenominator[ucie_sim_c_B->yndx_p + 1] =
      ucie_sim_c_B->filtersos_data_m[7];
    obj->FilterDenominator[ucie_sim_c_B->yndx_p + 2] =
      ucie_sim_c_B->filtersos_data_m[8];
    obj->FilterDenominator[ucie_sim_c_B->yndx_p + 3] =
      ucie_sim_c_B->filtersos_data_m[9];
    obj->FilterDenominatorCount[ucie_sim_c_B->b_ii] = 1.0;
    obj->FilterGain[ucie_sim_c_B->b_ii] = G[ucie_sim_c_B->b_ii];
    obj->FilterStatesCount[ucie_sim_c_B->b_ii] = 2.0;
  }
}

static void ucie_sim_c_emxInitStruct_serdes_CDR(serdes_CDR_ucie_sim_c_T *pStruct,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  ucie_sim_c_emxInit_real_T(&pStruct->PAMThreshold, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->SymbolSet, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->VoltageLevels, 2, ucie_sim_c_B);
}

static void ucie_sim_c_emxInitStruct_serdes_Stimulus
  (serdes_Stimulus_ucie_sim_c_T *pStruct, B_ucie_sim_c_T *ucie_sim_c_B)
{
  ucie_sim_c_emxInit_real_T(&pStruct->privateOrder, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->privateSeed, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->privateBinaryPowers, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->SymbolFIFO, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&pStruct->PowersOf2, 1, ucie_sim_c_B);
}

static void ucie_sim_c_twister_state_vector_m(uint32_T mt[625])
{
  int32_T b_mti;
  uint32_T r;

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  r = 5489U;
  mt[0] = 5489U;
  for (b_mti = 0; b_mti < 623; b_mti++) {
    int32_T tmp;
    tmp = b_mti + 1;
    r = (r >> 30U ^ r) * 1812433253U + (uint32_T)tmp;
    mt[b_mti + 1] = r;
  }

  mt[624] = 624U;

  /* End of Start for MATLABSystem: '<S18>/StrobeStimulus' */
}

static real_T ucie_sim_c_mod_m(real_T x, real_T y)
{
  real_T r;

  /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   *  MATLABSystem: '<S20>/FFE'
   */
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = y;
    }
  } else if (rtIsNaN(x) || rtIsNaN(y) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0 / y;
  } else if (rtIsInf(y)) {
    if ((y < 0.0) != (x < 0.0)) {
      r = y;
    }
  } else {
    boolean_T rEQ0;
    r = fmod(x, y);
    rEQ0 = (r == 0.0);
    if ((!rEQ0) && (y > floor(y))) {
      real_T q;
      q = fabs(x / y);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = y * 0.0;
    } else if (((r < 0.0) && (!(y < 0.0))) || ((!(r < 0.0)) && (y < 0.0))) {
      r += y;
    }
  }

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
  return r;
}

static void ucie_sim_c_emxFree_real_T(emxArray_real_T_ucie_sim_c_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_ucie_sim_c_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_ucie_sim_c_T *)NULL;
  }
}

static real_T ucie_sim_c_rt_powd_snf(real_T u0, real_T u1, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    ucie_sim_c_B->d = fabs(u0);
    ucie_sim_c_B->d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (ucie_sim_c_B->d == 1.0) {
        y = 1.0;
      } else if (ucie_sim_c_B->d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (ucie_sim_c_B->d1 == 0.0) {
      y = 1.0;
    } else if (ucie_sim_c_B->d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void ucie_sim_c_SystemCore_setup_m(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B, DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  emxArray_char_T_ucie_sim_c_T *str;
  emxArray_real_T_ucie_sim_c_T *y;
  real_T apnd;
  real_T localSymbolTime;
  real_T ndbl;
  int32_T b;
  int32_T k;
  int32_T n;
  int32_T nbytes;
  int32_T nm1d2;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  obj->privateSourceFlag = 7.0;
  obj->pJitterValue = 0.0;
  obj->SamplesPerPeriod = 16.0;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pDj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pRj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pSj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pDCD = localSymbolTime;
  ucie_sim_c_twister_state_vector_m(ucie_sim_c_DW->state);
  ucie_sim_c_DW->method = 5489U;
  ucie_sim_c_DW->method_i = 7U;

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  ucie_sim_c_twister_state_vector_m(ucie_sim_c_DW->state);
  ucie_sim_c_DW->state_f = 0U;

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  obj->pOddEven = false;
  obj->pSymbolCounter = 0.0;
  if (obj->privateSourceFlag == 3.0) {
    obj->SamplesPerPeriod = 1.0;
    obj->privateDelay = 8.0;
    obj->privateLength = 8.0;
  } else {
    localSymbolTime = obj->SamplesPerPeriod * 1.953125E-12;
    if (obj->SamplesPerPeriod != 16.0) {
      nbytes = (int32_T)snprintf(NULL, 0, "%g", localSymbolTime) + 1;
      ucie_sim_c_emxInit_char_T(&str, 2);
      nm1d2 = str->size[0] * str->size[1];
      str->size[0] = 1;
      str->size[1] = nbytes;
      ucie_sim_c_emxEnsureCapacity_char_T(str, nm1d2);
      snprintf(&str->data[0], (size_t)nbytes, "%g", localSymbolTime);
      ucie_sim_c_emxFree_char_T(&str);
    }

    obj->privateDelay = rt_roundd_snf(ucie_sim_c_mod_m(1.5625E-11,
      localSymbolTime) / 1.953125E-12);
    if (obj->privateSourceFlag == 7.0) {
      obj->privateLength = 2.0;
    } else if ((obj->privateSourceFlag == 5.0) || (obj->privateSourceFlag == 6.0))
    {
      obj->pPayloadLength = 1.0;
      obj->pMessageLength = 1.0;
      obj->FIFOPosition = 1.0;
      obj->pBinaryIndex = 1.0;
      obj->pBinaryLength = 31.0;
    } else {
      obj->privateLength = 7.0;
    }
  }

  ucie_sim_c_emxInit_real_T(&y, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  localSymbolTime = obj->pPayloadLength - 1.0;
  if (rtIsNaN(localSymbolTime)) {
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    y->data[0] = (rtNaN);
  } else if (localSymbolTime < 0.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if (floor(localSymbolTime) == localSymbolTime) {
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)-(0.0 - localSymbolTime) + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    n = (int32_T)-(0.0 - localSymbolTime);
    for (nbytes = 0; nbytes <= n; nbytes++) {
      y->data[nbytes] = localSymbolTime - (real_T)nbytes;
    }
  } else {
    ndbl = floor(-(0.0 - localSymbolTime) + 0.5);
    apnd = localSymbolTime - ndbl;
    if (fabs(0.0 - apnd) < 4.4408920985006262E-16 * localSymbolTime) {
      ndbl++;
      apnd = 0.0;
    } else if (0.0 - apnd > 0.0) {
      apnd = localSymbolTime - (ndbl - 1.0);
    } else {
      ndbl++;
    }

    nbytes = (int32_T)ndbl;
    n = nbytes - 1;
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = n + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    if (n + 1 > 0) {
      y->data[0] = localSymbolTime;
      if (n + 1 > 1) {
        y->data[n] = apnd;
        nm1d2 = (int32_T)((uint32_T)n >> 1);
        b = nm1d2 - 2;
        for (nbytes = 0; nbytes <= b; nbytes++) {
          k = nbytes + 1;
          y->data[k] = localSymbolTime - (real_T)k;
          y->data[n - k] = apnd - (-(real_T)k);
        }

        if (nm1d2 << 1 == n) {
          y->data[nm1d2] = (localSymbolTime + apnd) / 2.0;
        } else {
          y->data[nm1d2] = localSymbolTime - (real_T)nm1d2;
          y->data[nm1d2 + 1] = apnd - (-(real_T)nm1d2);
        }
      }
    }
  }

  n = y->size[1];
  nm1d2 = obj->PowersOf2->size[0];
  obj->PowersOf2->size[0] = n;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->PowersOf2, nm1d2, ucie_sim_c_B);
  for (nbytes = 0; nbytes < n; nbytes++) {
    /* Start for MATLABSystem: '<S18>/StrobeStimulus' incorporates:
     *  MATLABSystem: '<S18>/MATLAB System'
     */
    localSymbolTime = y->data[nbytes];
    localSymbolTime = ucie_sim_c_rt_powd_snf(2.0, localSymbolTime, ucie_sim_c_B);
    obj->PowersOf2->data[nbytes] = localSymbolTime;
  }

  ucie_sim_c_emxFree_real_T(&y);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  n = (int32_T)obj->pMessageLength;
  nm1d2 = obj->SymbolFIFO->size[0] * obj->SymbolFIFO->size[1];
  obj->SymbolFIFO->size[0] = 1;
  obj->SymbolFIFO->size[1] = n;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->SymbolFIFO, nm1d2, ucie_sim_c_B);
  for (nbytes = 0; nbytes < n; nbytes++) {
    /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
    obj->SymbolFIFO->data[nbytes] = 0.0;
  }
}

static void ucie_sim_c_twister_state_vector(uint32_T mt[625])
{
  int32_T b_mti;
  uint32_T r;

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  r = 1431655765U;
  mt[0] = 1431655765U;
  for (b_mti = 0; b_mti < 623; b_mti++) {
    int32_T tmp;
    tmp = b_mti + 1;
    r = (r >> 30U ^ r) * 1812433253U + (uint32_T)tmp;
    mt[b_mti + 1] = r;
  }

  mt[624] = 624U;

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
}

static void ucie_sim_c_SystemCore_setup(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B, DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  emxArray_char_T_ucie_sim_c_T *str;
  emxArray_real_T_ucie_sim_c_T *y;
  real_T apnd;
  real_T localSymbolTime;
  real_T ndbl;
  int32_T b;
  int32_T k;
  int32_T n;
  int32_T nbytes;
  int32_T nm1d2;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  obj->privateSourceFlag = 5.0;
  obj->pJitterValue = 0.0;
  obj->SamplesPerPeriod = 16.0;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pDj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pRj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pSj = localSymbolTime;
  localSymbolTime = 0.0 * obj->SamplesPerPeriod;
  obj->pDCD = localSymbolTime;
  ucie_sim_c_twister_state_vector(ucie_sim_c_DW->state_g);
  ucie_sim_c_DW->method_f = 1431655765U;
  ucie_sim_c_DW->method_m = 7U;

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_twister_state_vector(ucie_sim_c_DW->state_g);
  ucie_sim_c_DW->state_dx = 0U;

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  obj->pOddEven = false;
  obj->pSymbolCounter = 0.0;
  if (obj->privateSourceFlag == 3.0) {
    obj->SamplesPerPeriod = 1.0;
    obj->privateDelay = 0.0;
    obj->privateLength = 8.0;
  } else {
    localSymbolTime = obj->SamplesPerPeriod * 1.953125E-12;
    if (obj->SamplesPerPeriod != 16.0) {
      nbytes = (int32_T)snprintf(NULL, 0, "%g", localSymbolTime) + 1;
      ucie_sim_c_emxInit_char_T(&str, 2);
      nm1d2 = str->size[0] * str->size[1];
      str->size[0] = 1;
      str->size[1] = nbytes;
      ucie_sim_c_emxEnsureCapacity_char_T(str, nm1d2);
      snprintf(&str->data[0], (size_t)nbytes, "%g", localSymbolTime);
      ucie_sim_c_emxFree_char_T(&str);
    }

    obj->privateDelay = rt_roundd_snf(ucie_sim_c_mod_m(0.0, localSymbolTime) /
      1.953125E-12);
    if (obj->privateSourceFlag == 7.0) {
      obj->privateLength = 15.0;
    } else if ((obj->privateSourceFlag == 5.0) || (obj->privateSourceFlag == 6.0))
    {
      obj->pPayloadLength = 1.0;
      obj->pMessageLength = 1.0;
      obj->FIFOPosition = 1.0;
      obj->pBinaryIndex = 1.0;
      obj->pBinaryLength = 31.0;
    } else {
      obj->privateLength = 7.0;
    }
  }

  ucie_sim_c_emxInit_real_T(&y, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  localSymbolTime = obj->pPayloadLength - 1.0;
  if (rtIsNaN(localSymbolTime)) {
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    y->data[0] = (rtNaN);
  } else if (localSymbolTime < 0.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if (floor(localSymbolTime) == localSymbolTime) {
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)-(0.0 - localSymbolTime) + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    n = (int32_T)-(0.0 - localSymbolTime);
    for (nbytes = 0; nbytes <= n; nbytes++) {
      y->data[nbytes] = localSymbolTime - (real_T)nbytes;
    }
  } else {
    ndbl = floor(-(0.0 - localSymbolTime) + 0.5);
    apnd = localSymbolTime - ndbl;
    if (fabs(0.0 - apnd) < 4.4408920985006262E-16 * localSymbolTime) {
      ndbl++;
      apnd = 0.0;
    } else if (0.0 - apnd > 0.0) {
      apnd = localSymbolTime - (ndbl - 1.0);
    } else {
      ndbl++;
    }

    nbytes = (int32_T)ndbl;
    n = nbytes - 1;
    nm1d2 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = n + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, nm1d2, ucie_sim_c_B);
    if (n + 1 > 0) {
      y->data[0] = localSymbolTime;
      if (n + 1 > 1) {
        y->data[n] = apnd;
        nm1d2 = (int32_T)((uint32_T)n >> 1);
        b = nm1d2 - 2;
        for (nbytes = 0; nbytes <= b; nbytes++) {
          k = nbytes + 1;
          y->data[k] = localSymbolTime - (real_T)k;
          y->data[n - k] = apnd - (-(real_T)k);
        }

        if (nm1d2 << 1 == n) {
          y->data[nm1d2] = (localSymbolTime + apnd) / 2.0;
        } else {
          y->data[nm1d2] = localSymbolTime - (real_T)nm1d2;
          y->data[nm1d2 + 1] = apnd - (-(real_T)nm1d2);
        }
      }
    }
  }

  n = y->size[1];
  nm1d2 = obj->PowersOf2->size[0];
  obj->PowersOf2->size[0] = n;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->PowersOf2, nm1d2, ucie_sim_c_B);
  for (nbytes = 0; nbytes < n; nbytes++) {
    /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
     *  MATLABSystem: '<S18>/StrobeStimulus'
     */
    localSymbolTime = y->data[nbytes];
    localSymbolTime = ucie_sim_c_rt_powd_snf(2.0, localSymbolTime, ucie_sim_c_B);
    obj->PowersOf2->data[nbytes] = localSymbolTime;
  }

  ucie_sim_c_emxFree_real_T(&y);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  n = (int32_T)obj->pMessageLength;
  nm1d2 = obj->SymbolFIFO->size[0] * obj->SymbolFIFO->size[1];
  obj->SymbolFIFO->size[0] = 1;
  obj->SymbolFIFO->size[1] = n;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->SymbolFIFO, nm1d2, ucie_sim_c_B);
  for (nbytes = 0; nbytes < n; nbytes++) {
    /* Start for MATLABSystem: '<S18>/MATLAB System' */
    obj->SymbolFIFO->data[nbytes] = 0.0;
  }
}

static void ucie_sim_c_emxInitStruct_serdes_FFE1(serdes_FFE_ucie_sim_c_j_T
  *pStruct, B_ucie_sim_c_T *ucie_sim_c_B)
{
  ucie_sim_c_emxInit_real_T(&pStruct->Buff, 1, ucie_sim_c_B);
}

/* Function for MATLAB Function: '<S24>/MATLAB Function' */
static void ucie_sim_c_SystemCore_step_bn(serdes_VGA_ucie_sim_c_k_T *obj,
  emxArray_real_T_ucie_sim_c_T *varargin_1)
{
  int32_T i;
  int32_T k;
  uint32_T inSize[8];
  boolean_T exitg1;
  boolean_T val;
  if (obj->isInitialized != 1) {
    obj->isInitialized = 1;
    obj->inputVarSize.f1[0] = (uint32_T)varargin_1->size[0];
    obj->inputVarSize.f1[1] = (uint32_T)varargin_1->size[1];
    for (k = 0; k < 6; k++) {
      obj->inputVarSize.f1[k + 2] = 1U;
    }
  }

  inSize[0] = (uint32_T)varargin_1->size[0];
  inSize[1] = (uint32_T)varargin_1->size[1];
  for (k = 0; k < 6; k++) {
    inSize[k + 2] = 1U;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize.f1[k] != inSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize.f1[k] = inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  val = (obj->Mode == 1.0);
  if (val) {
    real_T b;
    int32_T loop_ub;
    b = obj->Gain;
    loop_ub = varargin_1->size[1];
    for (k = 0; k < loop_ub; k++) {
      int32_T loop_ub_0;
      loop_ub_0 = varargin_1->size[0];
      for (i = 0; i < loop_ub_0; i++) {
        varargin_1->data[i + varargin_1->size[0] * k] *= b;
      }
    }
  }
}

/* Function for MATLAB Function: '<S24>/MATLAB Function' */
static void ucie_sim_c_FFE_setupWeights_d(serdes_FFE_ucie_sim_c_j_T *obj)
{
  real_T sumabs;
  real_T y_idx_1;
  sumabs = fabs(obj->TapWeights[0]);
  y_idx_1 = fabs(obj->TapWeights[1]);
  sumabs += y_idx_1;
  if (sumabs > 0.0) {
    obj->WeightsInternal[0] = obj->TapWeights[0] / sumabs;
    obj->WeightsInternal[1] = obj->TapWeights[1] / sumabs;
  } else if (sumabs == 0.0) {
    obj->WeightsInternal[0] = 0.0 * obj->TapWeights[0];
    obj->WeightsInternal[1] = 0.0 * obj->TapWeights[1];
    obj->WeightsInternal[0] = 1.0;
  } else {
    obj->WeightsInternal[0] = obj->TapWeights[0];
    obj->WeightsInternal[1] = obj->TapWeights[1];
  }
}

/* Function for MATLAB Function: '<S24>/MATLAB Function' */
static real_T ucie_sim_c_mod_j(real_T x, real_T y)
{
  real_T r;
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = y;
    }
  } else if (rtIsNaN(x) || rtIsNaN(y) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0 / y;
  } else if (rtIsInf(y)) {
    if ((y < 0.0) != (x < 0.0)) {
      r = y;
    }
  } else {
    boolean_T rEQ0;
    r = fmod(x, y);
    rEQ0 = (r == 0.0);
    if ((!rEQ0) && (y > floor(y))) {
      real_T q;
      q = fabs(x / y);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = y * 0.0;
    } else if (((r < 0.0) && (!(y < 0.0))) || ((!(r < 0.0)) && (y < 0.0))) {
      r += y;
    }
  }

  return r;
}

static void ucie_sim_c_binary_expand_op_16(emxArray_real_T_ucie_sim_c_T *in1,
  real_T in2, const emxArray_real_T_ucie_sim_c_T *in3, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ucie_sim_c_emxInit_real_T(&in1_0, 1, ucie_sim_c_B);
  loop_ub = in3->size[0] == 1 ? in1->size[0] : in3->size[0];
  i = in1_0->size[0];
  in1_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, i, ucie_sim_c_B);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_0->data[i] = in3->data[i * stride_1_0] * in2 + in1->data[i * stride_0_0];
  }

  i = in1->size[0];
  in1->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1, i, ucie_sim_c_B);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in1_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  ucie_sim_c_emxFree_real_T(&in1_0);
}

/* Function for MATLAB Function: '<S24>/MATLAB Function' */
static void ucie_sim_c_SystemCore_step_b(serdes_FFE_ucie_sim_c_j_T *obj, const
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T
  *varargout_1, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *a__1;
  emxArray_real_T_ucie_sim_c_T *b_a;
  emxArray_real_T_ucie_sim_c_T *b_y1;
  emxArray_real_T_ucie_sim_c_T *c_b;
  real_T b_y;
  real_T f_b;
  real_T p;
  int32_T c_tmp;
  int32_T dim;
  int32_T e;
  int32_T h;
  int32_T i;
  int32_T l;
  int32_T loop_ub_tmp;
  int32_T ns;
  int32_T obj_idx_0;
  int32_T stride;
  int32_T varargin_1_0;
  uint32_T inSize[8];
  boolean_T exitg1;
  boolean_T val;
  if (obj->isInitialized != 1) {
    obj->isInitialized = 1;
    obj->inputVarSize.f1[0] = (uint32_T)varargin_1->size[0];
    obj->inputVarSize.f1[1] = (uint32_T)varargin_1->size[1];
    for (i = 0; i < 6; i++) {
      obj->inputVarSize.f1[i + 2] = 1U;
    }

    obj->privateSampleWaveType = false;
    ucie_sim_c_FFE_setupWeights_d(obj);
    obj->TapCount = 2.0;
    b_y = obj->SymbolTime / obj->SampleInterval;
    b_y = rt_roundd_snf(b_y);
    obj->SamplesPerSymbol = b_y;
    obj->BuffSize = obj->SamplesPerSymbol * obj->TapCount;
    obj->TunablePropsChanged = false;
    obj_idx_0 = (int32_T)obj->BuffSize;
    i = obj->Buff->size[0];
    obj->Buff->size[0] = obj_idx_0;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->Buff, i, ucie_sim_c_B);
    for (i = 0; i < obj_idx_0; i++) {
      obj->Buff->data[i] = 0.0;
    }

    obj->FIRpointer = 1.0;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    ucie_sim_c_FFE_setupWeights_d(obj);
  }

  inSize[0] = (uint32_T)varargin_1->size[0];
  inSize[1] = (uint32_T)varargin_1->size[1];
  for (i = 0; i < 6; i++) {
    inSize[i + 2] = 1U;
  }

  obj_idx_0 = 0;
  exitg1 = false;
  while ((!exitg1) && (obj_idx_0 < 8)) {
    if (obj->inputVarSize.f1[obj_idx_0] != inSize[obj_idx_0]) {
      for (i = 0; i < 8; i++) {
        obj->inputVarSize.f1[i] = inSize[i];
      }

      exitg1 = true;
    } else {
      obj_idx_0++;
    }
  }

  varargin_1_0 = varargin_1->size[0];
  i = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = varargin_1_0;
  c_tmp = varargin_1->size[1];
  varargout_1->size[1] = c_tmp;
  ucie_sim_c_emxEnsureCapacity_real_T(varargout_1, i, ucie_sim_c_B);
  loop_ub_tmp = varargin_1->size[0] * varargin_1->size[1];
  if (loop_ub_tmp - 1 >= 0) {
    memcpy(&varargout_1->data[0], &varargin_1->data[0], (uint32_T)loop_ub_tmp *
           sizeof(real_T));
  }

  val = (obj->Mode == 1.0);
  if (val) {
    ucie_sim_c_emxInit_real_T(&a__1, 2, ucie_sim_c_B);
    if (obj->privateSampleWaveType) {
      ucie_sim_c_emxInit_real_T(&c_b, 2, ucie_sim_c_B);
      for (obj_idx_0 = 0; obj_idx_0 < loop_ub_tmp; obj_idx_0++) {
        obj->Buff->data[(int32_T)obj->FIRpointer - 1] = varargin_1->
          data[obj_idx_0];
        b_y = obj->TapCount - 1.0;
        if (rtIsNaN(b_y)) {
          i = a__1->size[0] * a__1->size[1];
          a__1->size[0] = 1;
          a__1->size[1] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(a__1, i, ucie_sim_c_B);
          a__1->data[0] = (rtNaN);
        } else if (b_y < 0.0) {
          a__1->size[1] = 0;
        } else {
          i = a__1->size[0] * a__1->size[1];
          a__1->size[0] = 1;
          a__1->size[1] = (int32_T)b_y + 1;
          ucie_sim_c_emxEnsureCapacity_real_T(a__1, i, ucie_sim_c_B);
          varargin_1_0 = (int32_T)b_y;
          for (i = 0; i <= varargin_1_0; i++) {
            a__1->data[i] = i;
          }
        }

        b_y = obj->SamplesPerSymbol;
        c_tmp = a__1->size[1];
        i = a__1->size[0] * a__1->size[1];
        a__1->size[0] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(a__1, i, ucie_sim_c_B);
        varargin_1_0 = c_tmp - 1;
        for (i = 0; i <= varargin_1_0; i++) {
          a__1->data[i] = (obj->FIRpointer - a__1->data[i] * b_y) - 1.0;
        }

        b_y = obj->BuffSize;
        i = c_b->size[0] * c_b->size[1];
        c_b->size[0] = 1;
        c_b->size[1] = c_tmp;
        ucie_sim_c_emxEnsureCapacity_real_T(c_b, i, ucie_sim_c_B);
        for (i = 0; i < c_tmp; i++) {
          p = a__1->data[i];
          p = ucie_sim_c_mod_j(p, b_y);
          c_b->data[i] = obj->Buff->data[(int32_T)(p + 1.0) - 1];
        }

        b_y = obj->WeightsInternal[0] * c_b->data[0];
        b_y += obj->WeightsInternal[1] * c_b->data[1];
        varargout_1->data[obj_idx_0] = b_y;
        b_y = obj->FIRpointer - 1.0;
        p = obj->BuffSize;
        f_b = obj->BuffSize;
        obj->FIRpointer = ucie_sim_c_mod_j(ucie_sim_c_mod_j(b_y, p) + 1.0, f_b)
          + 1.0;
      }

      ucie_sim_c_emxFree_real_T(&c_b);
    } else {
      ucie_sim_c_emxInit_real_T(&b_y1, 1, ucie_sim_c_B);
      ucie_sim_c_emxInit_real_T(&b_a, 1, ucie_sim_c_B);
      for (obj_idx_0 = 0; obj_idx_0 < c_tmp; obj_idx_0++) {
        i = b_y1->size[0];
        b_y1->size[0] = varargin_1_0;
        ucie_sim_c_emxEnsureCapacity_real_T(b_y1, i, ucie_sim_c_B);
        if (varargin_1_0 - 1 >= 0) {
          memset(&b_y1->data[0], 0, (uint32_T)varargin_1_0 * sizeof(real_T));
        }

        b_y = obj->TapCount;
        e = (int32_T)b_y;
        for (loop_ub_tmp = 0; loop_ub_tmp < e; loop_ub_tmp++) {
          b_y = obj->WeightsInternal[loop_ub_tmp];
          i = b_a->size[0];
          b_a->size[0] = varargin_1_0;
          ucie_sim_c_emxEnsureCapacity_real_T(b_a, i, ucie_sim_c_B);
          for (i = 0; i < varargin_1_0; i++) {
            b_a->data[i] = varargin_1->data[varargin_1->size[0] * obj_idx_0 + i];
          }

          p = (((real_T)loop_ub_tmp + 1.0) - 1.0) * obj->SamplesPerSymbol;
          dim = 2;
          if (varargin_1_0 != 1) {
            dim = 1;
          }

          if ((varargin_1_0 != 0) && (varargin_1_0 != 1)) {
            if (p < 0.0) {
              ns = -(int32_T)p;
              val = false;
            } else {
              ns = (int32_T)p;
              val = true;
            }

            if (dim <= 1) {
              h = varargin_1_0;
              if (ns > h) {
                ns -= h * div_s32(ns, h);
              }

              if (ns > (h >> 1)) {
                ns = h - ns;
                val = !val;
              }
            } else {
              ns = 0;
            }

            h = (int32_T)((uint32_T)varargin_1_0 >> 1);
            i = a__1->size[0] * a__1->size[1];
            a__1->size[0] = 1;
            a__1->size[1] = h;
            ucie_sim_c_emxEnsureCapacity_real_T(a__1, i, ucie_sim_c_B);
            memset(&a__1->data[0], 0, (uint32_T)h * sizeof(real_T));
            if (dim <= 1) {
              h = varargin_1_0;
            } else {
              h = 1;
            }

            stride = 1;
            i = dim;
            for (dim = 0; dim <= i - 2; dim++) {
              stride *= varargin_1->size[0];
            }

            i = b_a->size[0];
            b_a->size[0] = varargin_1_0;
            ucie_sim_c_emxEnsureCapacity_real_T(b_a, i, ucie_sim_c_B);
            for (i = 0; i < varargin_1_0; i++) {
              b_a->data[i] = varargin_1->data[varargin_1->size[0] * obj_idx_0 +
                i];
            }

            if ((h > 1) && (ns > 0)) {
              for (i = 0; i < stride; i++) {
                if (val) {
                  for (dim = 0; dim < ns; dim++) {
                    a__1->data[dim] = b_a->data[((dim + h) - ns) * stride + i];
                  }

                  for (dim = h; dim >= ns + 1; dim--) {
                    b_a->data[i + (dim - 1) * stride] = b_a->data[((dim - ns) -
                      1) * stride + i];
                  }

                  for (dim = 0; dim < ns; dim++) {
                    b_a->data[i + dim * stride] = a__1->data[dim];
                  }
                } else {
                  for (dim = 0; dim < ns; dim++) {
                    a__1->data[dim] = b_a->data[dim * stride + i];
                  }

                  l = h - ns;
                  for (dim = 0; dim < l; dim++) {
                    b_a->data[i + dim * stride] = b_a->data[(dim + ns) * stride
                      + i];
                  }

                  for (dim = 0; dim < ns; dim++) {
                    b_a->data[i + ((dim + h) - ns) * stride] = a__1->data[dim];
                  }
                }
              }
            }
          }

          ns = b_y1->size[0];
          if (ns == b_a->size[0]) {
            i = b_y1->size[0];
            b_y1->size[0] = ns;
            ucie_sim_c_emxEnsureCapacity_real_T(b_y1, i, ucie_sim_c_B);
            for (i = 0; i < ns; i++) {
              b_y1->data[i] += b_y * b_a->data[i];
            }
          } else {
            ucie_sim_c_binary_expand_op_16(b_y1, b_y, b_a, ucie_sim_c_B);
          }
        }

        for (i = 0; i < varargin_1_0; i++) {
          varargout_1->data[i + varargout_1->size[0] * obj_idx_0] = b_y1->data[i];
        }
      }

      ucie_sim_c_emxFree_real_T(&b_a);
      ucie_sim_c_emxFree_real_T(&b_y1);
    }

    ucie_sim_c_emxFree_real_T(&a__1);
  }
}

static void ucie_sim_c_emxFreeStruct_serdes_FFE1(serdes_FFE_ucie_sim_c_j_T
  *pStruct)
{
  ucie_sim_c_emxFree_real_T(&pStruct->Buff);
}

static void ucie_sim_c_diff_m(const emxArray_real_T_ucie_sim_c_T *x,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T tmp1;
  real_T tmp2;
  real_T work_data_idx_0;
  int32_T dimSize;
  int32_T ySize_idx_1;
  int32_T y_0;
  dimSize = x->size[1];

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  if (x->size[1] == 0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    ySize_idx_1 = x->size[1] - 1;
    if (ySize_idx_1 <= 1) {
      y_0 = ySize_idx_1;
    } else {
      y_0 = 1;
    }

    if (y_0 < 1) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else {
      y_0 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = ySize_idx_1;
      ucie_sim_c_emxEnsureCapacity_real_T(y, y_0, ucie_sim_c_B);
      if (y->size[1] != 0) {
        work_data_idx_0 = x->data[0];
        for (y_0 = 2; y_0 <= dimSize; y_0++) {
          tmp1 = x->data[y_0 - 1];
          tmp2 = work_data_idx_0;
          work_data_idx_0 = tmp1;
          tmp1 -= tmp2;
          y->data[y_0 - 2] = tmp1;
        }
      }
    }
  }

  /* End of Start for MATLABSystem: '<S10>/CDR System Object' */
}

static void ucie_sim_c_binary_expand_op_6(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, int32_T in3, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *tmp;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  ucie_sim_c_emxInit_real_T(&tmp, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  ucie_sim_c_diff_m(in2, tmp, ucie_sim_c_B);
  i = in1->PAMThreshold->size[0] * in1->PAMThreshold->size[1];

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  in1->PAMThreshold->size[0] = 1;
  ucie_sim_c_emxEnsureCapacity_real_T(in1->PAMThreshold, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  loop_ub = in3 == 1 ? tmp->size[1] : in3;
  i = in1->PAMThreshold->size[0] * in1->PAMThreshold->size[1];
  in1->PAMThreshold->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1->PAMThreshold, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  stride_0_1 = (tmp->size[1] != 1);
  stride_1_1 = (in3 != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    in1->PAMThreshold->data[i] = tmp->data[i * stride_0_1] / 2.0 + in2->data[i *
      stride_1_1];
  }

  ucie_sim_c_emxFree_real_T(&tmp);
}

static void ucie_sim_c_CDR_resetImpl(serdes_CDR_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *localSymbolSet;
  emxArray_real_T_ucie_sim_c_T *tmp;
  real_T delta1;
  int32_T c_k;
  int32_T loop_ub;
  boolean_T val;
  static const char_T tmp_0[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  static const char_T tmp_1[9] = { '2', 'n', 'd', ' ', 'O', 'r', 'd', 'e', 'r' };

  int32_T exitg1;
  int32_T tmp_2;
  obj->ClockTimesInternal = 0.0;
  obj->Phase = obj->SymbolTime / 2.0;
  delta1 = obj->SymbolTime / obj->SampleInterval;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  obj->SamplesPerSymbol = rt_roundd_snf(delta1);
  obj->SamplesElapsed = 0.0;
  obj->EdgeSampleCounter = 0.0;
  obj->EdgeSymbol = 0.0;
  obj->DataSampleCounter = obj->SamplesPerSymbol / 2.0;
  obj->LastSample = 0.0;
  obj->DataSymbol = 0.0;
  obj->EarlyLateCounter = 0.0;
  obj->InternalCountMax = 2.0;
  obj->PriorData = 0.0;
  obj->DataVoltage = 0.0;
  obj->EdgeVoltage = 0.0;
  obj->PriorDataVoltage = 0.0;
  obj->DataSymbolOnRising = 1.0;
  obj->AverageWindow = obj->AverageWindowInSymbols * obj->SamplesPerSymbol;
  obj->AbsAveUpdateMA = 100.0 / obj->AverageWindow / 2.0;
  delta1 = obj->Modulation;
  ucie_sim_c_emxInit_real_T(&localSymbolSet, 2, ucie_sim_c_B);
  if (!(delta1 >= 0.0)) {
    localSymbolSet->size[0] = 1;
    localSymbolSet->size[1] = 0;
  } else {
    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    delta1 = floor(delta1);
    tmp_2 = localSymbolSet->size[0] * localSymbolSet->size[1];
    localSymbolSet->size[0] = 1;

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    loop_ub = (int32_T)delta1;
    localSymbolSet->size[1] = loop_ub;
    ucie_sim_c_emxEnsureCapacity_real_T(localSymbolSet, tmp_2, ucie_sim_c_B);
    if (localSymbolSet->size[1] >= 1) {
      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      localSymbolSet->data[localSymbolSet->size[1] - 1] = 0.5;
      if (localSymbolSet->size[1] >= 2) {
        localSymbolSet->data[0] = -0.5;
        if (localSymbolSet->size[1] >= 3) {
          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          delta1 = 0.5 / ((real_T)localSymbolSet->size[1] - 1.0);
          for (c_k = 2; c_k < loop_ub; c_k++) {
            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            localSymbolSet->data[c_k - 1] = (real_T)(((c_k << 1) -
              localSymbolSet->size[1]) - 1) * delta1;
          }

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          if (((uint32_T)localSymbolSet->size[1] & 1U) == 1U) {
            localSymbolSet->data[localSymbolSet->size[1] >> 1] = 0.0;
          }
        }
      }
    }
  }

  tmp_2 = obj->SymbolSet->size[0] * obj->SymbolSet->size[1];
  obj->SymbolSet->size[0] = 1;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->SymbolSet, tmp_2, ucie_sim_c_B);
  c_k = localSymbolSet->size[1];
  tmp_2 = obj->SymbolSet->size[0] * obj->SymbolSet->size[1];
  obj->SymbolSet->size[1] = c_k;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->SymbolSet, tmp_2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  loop_ub = localSymbolSet->size[1] - 1;
  tmp_2 = obj->VoltageLevels->size[0] * obj->VoltageLevels->size[1];
  obj->VoltageLevels->size[0] = 1;
  obj->VoltageLevels->size[1] = c_k;
  ucie_sim_c_emxEnsureCapacity_real_T(obj->VoltageLevels, tmp_2, ucie_sim_c_B);
  for (c_k = 0; c_k <= loop_ub; c_k++) {
    obj->SymbolSet->data[c_k] = localSymbolSet->data[c_k];
    obj->VoltageLevels->data[c_k] = localSymbolSet->data[c_k];
  }

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  if (localSymbolSet->size[1] - 1 < 1) {
    loop_ub = 0;
  }

  ucie_sim_c_emxInit_real_T(&tmp, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  ucie_sim_c_diff_m(localSymbolSet, tmp, ucie_sim_c_B);
  if (tmp->size[1] == loop_ub) {
    ucie_sim_c_diff_m(localSymbolSet, tmp, ucie_sim_c_B);
    tmp_2 = obj->PAMThreshold->size[0] * obj->PAMThreshold->size[1];
    obj->PAMThreshold->size[0] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->PAMThreshold, tmp_2, ucie_sim_c_B);
    loop_ub = tmp->size[1];
    tmp_2 = obj->PAMThreshold->size[0] * obj->PAMThreshold->size[1];
    obj->PAMThreshold->size[1] = loop_ub;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->PAMThreshold, tmp_2, ucie_sim_c_B);
    for (c_k = 0; c_k < loop_ub; c_k++) {
      obj->PAMThreshold->data[c_k] = tmp->data[c_k] / 2.0 + localSymbolSet->
        data[c_k];
    }
  } else {
    ucie_sim_c_binary_expand_op_6(obj, localSymbolSet, loop_ub, ucie_sim_c_B);
  }

  ucie_sim_c_emxFree_real_T(&tmp);
  ucie_sim_c_emxFree_real_T(&localSymbolSet);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  val = (obj->Modulation == 3.0);
  if (val) {
    obj->EyeHeightAbsAve = 0.25;
    obj->PAMSymbolMiddleVoltage = 0.0;
  } else {
    obj->EyeHeightAbsAve = 0.333;
    obj->PAMSymbolMiddleVoltage = 0.3;
  }

  obj->PAMSymbolOuterVoltage = 0.4;
  obj->privatePD = 1.0;
  val = false;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  c_k = 1;
  do {
    exitg1 = 0;
    if (c_k - 1 < 9) {
      loop_ub = c_k - 1;
      if (tmp_0[(int32_T)((uint8_T)obj->CDRMode[loop_ub] & 127U)] != tmp_0
          [(int32_T)tmp_1[loop_ub]]) {
        exitg1 = 1;
      } else {
        c_k++;
      }
    } else {
      val = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (val) {
    obj->privateCDRMode = 2.0;
  } else {
    obj->privateCDRMode = 1.0;
  }

  obj->FreqEstimate = 0.0;
  obj->FrequencyCounter = 0.0;
  obj->pFrequencyStep = 1.0 / (obj->FrequencyCount * 2.0);
  if (obj->FrequencyStepRamp <= obj->FrequencyCount) {
    obj->pFrequencyStepInterval = 1.0 / obj->FrequencyStep - obj->FrequencyCount
      * 2.0;
  } else {
    obj->pFrequencyStepInterval = (1.0 / obj->FrequencyStep -
      obj->FrequencyCount * 2.0) / (obj->FrequencyStepRamp / obj->FrequencyCount
      - 1.0);
  }

  if (obj->FrequencyCount * 2.0 < 1.0 / obj->FrequencyStep) {
    obj->pFrequencyStep = obj->FrequencyStep;
  }
}

static void ucie_sim_c_plus(emxArray_real_T_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  ucie_sim_c_emxInit_real_T(&in1_0, 1, ucie_sim_c_B);
  ucie_sim_c_B->loop_ub_bd = in2->size[0] == 1 ? in1->size[0] : in2->size[0];
  ucie_sim_c_B->i15 = in1_0->size[0];
  in1_0->size[0] = ucie_sim_c_B->loop_ub_bd;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, ucie_sim_c_B->i15, ucie_sim_c_B);
  ucie_sim_c_B->stride_0_0 = (in1->size[0] != 1);
  ucie_sim_c_B->stride_1_0 = (in2->size[0] != 1);
  for (ucie_sim_c_B->i15 = 0; ucie_sim_c_B->i15 < ucie_sim_c_B->loop_ub_bd;
       ucie_sim_c_B->i15++) {
    in1_0->data[ucie_sim_c_B->i15] = in1->data[ucie_sim_c_B->i15 *
      ucie_sim_c_B->stride_0_0] + in2->data[ucie_sim_c_B->i15 *
      ucie_sim_c_B->stride_1_0];
  }

  ucie_sim_c_B->i15 = in1->size[0];
  in1->size[0] = ucie_sim_c_B->loop_ub_bd;
  ucie_sim_c_emxEnsureCapacity_real_T(in1, ucie_sim_c_B->i15, ucie_sim_c_B);
  if (ucie_sim_c_B->loop_ub_bd - 1 >= 0) {
    memcpy(&in1->data[0], &in1_0->data[0], (uint32_T)ucie_sim_c_B->loop_ub_bd *
           sizeof(real_T));
  }

  ucie_sim_c_emxFree_real_T(&in1_0);
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_impulse2pulse(const emxArray_real_T_ucie_sim_c_T *b_I,
  real_T N, real_T dt, emxArray_real_T_ucie_sim_c_T *P, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *a;
  emxArray_real_T_ucie_sim_c_T *a__1;
  ucie_sim_c_B->loop_ub_ch = b_I->size[0];
  ucie_sim_c_B->nv = P->size[0];
  P->size[0] = ucie_sim_c_B->loop_ub_ch;
  ucie_sim_c_emxEnsureCapacity_real_T(P, ucie_sim_c_B->nv, ucie_sim_c_B);
  if (ucie_sim_c_B->loop_ub_ch - 1 >= 0) {
    memset(&P->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_ch * sizeof(real_T));
  }

  ucie_sim_c_B->b_n = (int32_T)((N - 1.0) + 1.0);
  ucie_sim_c_emxInit_real_T(&a__1, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&a, 1, ucie_sim_c_B);
  for (ucie_sim_c_B->indx_o = 0; ucie_sim_c_B->indx_o < ucie_sim_c_B->b_n;
       ucie_sim_c_B->indx_o++) {
    ucie_sim_c_B->nv = a->size[0];
    a->size[0] = ucie_sim_c_B->loop_ub_ch;
    ucie_sim_c_emxEnsureCapacity_real_T(a, ucie_sim_c_B->nv, ucie_sim_c_B);
    if (ucie_sim_c_B->loop_ub_ch - 1 >= 0) {
      memcpy(&a->data[0], &b_I->data[0], (uint32_T)ucie_sim_c_B->loop_ub_ch *
             sizeof(real_T));
    }

    if ((ucie_sim_c_B->loop_ub_ch != 0) && (ucie_sim_c_B->loop_ub_ch != 1)) {
      ucie_sim_c_B->ns = ucie_sim_c_B->indx_o;
      ucie_sim_c_B->shiftright = true;
      if (ucie_sim_c_B->indx_o > ucie_sim_c_B->loop_ub_ch) {
        ucie_sim_c_B->ns = ucie_sim_c_B->indx_o - ucie_sim_c_B->loop_ub_ch *
          div_s32(ucie_sim_c_B->indx_o, ucie_sim_c_B->loop_ub_ch);
      }

      if (ucie_sim_c_B->ns > (ucie_sim_c_B->loop_ub_ch >> 1)) {
        ucie_sim_c_B->ns = ucie_sim_c_B->loop_ub_ch - ucie_sim_c_B->ns;
        ucie_sim_c_B->shiftright = false;
      }

      ucie_sim_c_B->c_idx_1 = (int32_T)((uint32_T)ucie_sim_c_B->loop_ub_ch >> 1);
      ucie_sim_c_B->nv = a__1->size[0] * a__1->size[1];
      a__1->size[0] = 1;
      a__1->size[1] = ucie_sim_c_B->c_idx_1;
      ucie_sim_c_emxEnsureCapacity_real_T(a__1, ucie_sim_c_B->nv, ucie_sim_c_B);
      memset(&a__1->data[0], 0, (uint32_T)ucie_sim_c_B->c_idx_1 * sizeof(real_T));
      ucie_sim_c_B->nv = ucie_sim_c_B->loop_ub_ch;
      if (ucie_sim_c_B->ns > 0) {
        if (ucie_sim_c_B->shiftright) {
          for (ucie_sim_c_B->c_idx_1 = 0; ucie_sim_c_B->c_idx_1 <
               ucie_sim_c_B->ns; ucie_sim_c_B->c_idx_1++) {
            a__1->data[ucie_sim_c_B->c_idx_1] = b_I->data[(ucie_sim_c_B->c_idx_1
              + ucie_sim_c_B->nv) - ucie_sim_c_B->ns];
          }

          for (ucie_sim_c_B->c_idx_1 = ucie_sim_c_B->nv; ucie_sim_c_B->c_idx_1 >=
               ucie_sim_c_B->ns + 1; ucie_sim_c_B->c_idx_1--) {
            a->data[ucie_sim_c_B->c_idx_1 - 1] = a->data[(ucie_sim_c_B->c_idx_1
              - ucie_sim_c_B->ns) - 1];
          }

          memcpy(&a->data[0], &a__1->data[0], (uint32_T)ucie_sim_c_B->ns *
                 sizeof(real_T));
        } else {
          memcpy(&a__1->data[0], &b_I->data[0], (uint32_T)ucie_sim_c_B->ns *
                 sizeof(real_T));
          ucie_sim_c_B->c_idx_1 = b_I->size[0] - ucie_sim_c_B->ns;
          for (ucie_sim_c_B->e_k = 0; ucie_sim_c_B->e_k < ucie_sim_c_B->c_idx_1;
               ucie_sim_c_B->e_k++) {
            a->data[ucie_sim_c_B->e_k] = a->data[ucie_sim_c_B->e_k +
              ucie_sim_c_B->ns];
          }

          for (ucie_sim_c_B->c_idx_1 = 0; ucie_sim_c_B->c_idx_1 <
               ucie_sim_c_B->ns; ucie_sim_c_B->c_idx_1++) {
            a->data[(ucie_sim_c_B->c_idx_1 + ucie_sim_c_B->nv) -
              ucie_sim_c_B->ns] = a__1->data[ucie_sim_c_B->c_idx_1];
          }
        }
      }
    }

    ucie_sim_c_B->ns = P->size[0];
    if (ucie_sim_c_B->ns == a->size[0]) {
      ucie_sim_c_B->nv = P->size[0];
      P->size[0] = ucie_sim_c_B->ns;
      ucie_sim_c_emxEnsureCapacity_real_T(P, ucie_sim_c_B->nv, ucie_sim_c_B);
      for (ucie_sim_c_B->nv = 0; ucie_sim_c_B->nv < ucie_sim_c_B->ns;
           ucie_sim_c_B->nv++) {
        P->data[ucie_sim_c_B->nv] += a->data[ucie_sim_c_B->nv];
      }
    } else {
      ucie_sim_c_plus(P, a, ucie_sim_c_B);
    }
  }

  ucie_sim_c_emxFree_real_T(&a);
  ucie_sim_c_emxFree_real_T(&a__1);
  ucie_sim_c_B->loop_ub_ch = P->size[0];
  for (ucie_sim_c_B->nv = 0; ucie_sim_c_B->nv < ucie_sim_c_B->loop_ub_ch;
       ucie_sim_c_B->nv++) {
    P->data[ucie_sim_c_B->nv] *= dt;
  }
}

static void ucie_sim_c_emxInit_boolean_T(emxArray_boolean_T_ucie_sim_c_T
  **pEmxArray, int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *emxArray;
  *pEmxArray = (emxArray_boolean_T_ucie_sim_c_T *)malloc(sizeof
    (emxArray_boolean_T_ucie_sim_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ucie_sim_c_B->i_p = 0; ucie_sim_c_B->i_p < numDimensions;
       ucie_sim_c_B->i_p++) {
    emxArray->size[ucie_sim_c_B->i_p] = 0;
  }
}

static void ucie_sim_c_emxEnsureCapacity_boolean_T
  (emxArray_boolean_T_ucie_sim_c_T *emxArray, int32_T oldNumel, B_ucie_sim_c_T
   *ucie_sim_c_B)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ucie_sim_c_B->newNumel = 1;
  for (ucie_sim_c_B->i_m = 0; ucie_sim_c_B->i_m < emxArray->numDimensions;
       ucie_sim_c_B->i_m++) {
    ucie_sim_c_B->newNumel *= emxArray->size[ucie_sim_c_B->i_m];
  }

  if (ucie_sim_c_B->newNumel > emxArray->allocatedSize) {
    ucie_sim_c_B->i_m = emxArray->allocatedSize;
    if (ucie_sim_c_B->i_m < 16) {
      ucie_sim_c_B->i_m = 16;
    }

    while (ucie_sim_c_B->i_m < ucie_sim_c_B->newNumel) {
      if (ucie_sim_c_B->i_m > 1073741823) {
        ucie_sim_c_B->i_m = MAX_int32_T;
      } else {
        ucie_sim_c_B->i_m <<= 1;
      }
    }

    newData = malloc((uint32_T)ucie_sim_c_B->i_m * sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = ucie_sim_c_B->i_m;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_maximum_f(const emxArray_real_T_ucie_sim_c_T *x, real_T
  *ex, int32_T *idx, B_ucie_sim_c_T *ucie_sim_c_B)
{
  boolean_T exitg1;
  ucie_sim_c_B->last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[x->size[0] - 1];
      if ((x->data[0] < *ex) || (rtIsNaN(x->data[0]) && (!rtIsNaN(*ex)))) {
        *idx = ucie_sim_c_B->last;
      } else {
        *ex = x->data[0];
        *idx = 1;
      }
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      ucie_sim_c_B->b_idx = 1;
    } else {
      ucie_sim_c_B->b_idx = 0;
      ucie_sim_c_B->k_d = 2;
      exitg1 = false;
      while ((!exitg1) && (ucie_sim_c_B->k_d <= ucie_sim_c_B->last)) {
        if (!rtIsNaN(x->data[ucie_sim_c_B->k_d - 1])) {
          ucie_sim_c_B->b_idx = ucie_sim_c_B->k_d;
          exitg1 = true;
        } else {
          ucie_sim_c_B->k_d++;
        }
      }
    }

    if (ucie_sim_c_B->b_idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[ucie_sim_c_B->b_idx - 1];
      *idx = ucie_sim_c_B->b_idx;
      for (ucie_sim_c_B->k_d = ucie_sim_c_B->b_idx + 1; ucie_sim_c_B->k_d <=
           ucie_sim_c_B->last; ucie_sim_c_B->k_d++) {
        ucie_sim_c_B->x_o = x->data[ucie_sim_c_B->k_d - 1];
        if (*ex < ucie_sim_c_B->x_o) {
          *ex = ucie_sim_c_B->x_o;
          *idx = ucie_sim_c_B->k_d;
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_maximum_fp(const real_T x[2])
{
  real_T ex;
  if ((x[0] < x[1]) || (rtIsNaN(x[0]) && (!rtIsNaN(x[1])))) {
    ex = x[1];
  } else {
    ex = x[0];
  }

  return ex;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_minimum(const real_T x[2])
{
  real_T ex;
  if ((x[0] > x[1]) || (rtIsNaN(x[0]) && (!rtIsNaN(x[1])))) {
    ex = x[1];
  } else {
    ex = x[0];
  }

  return ex;
}

static void ucie_sim_c_or(emxArray_boolean_T_ucie_sim_c_T *in1, const
  emxArray_boolean_T_ucie_sim_c_T *in2, const emxArray_boolean_T_ucie_sim_c_T
  *in3, B_ucie_sim_c_T *ucie_sim_c_B)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  loop_ub = in3->size[0] == 1 ? in2->size[0] : in3->size[0];
  i = in1->size[0];
  in1->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_boolean_T(in1, i, ucie_sim_c_B);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = (in2->data[i * stride_0_0] || in3->data[i * stride_1_0]);
  }
}

static void ucie_sim_c_emxFree_boolean_T(emxArray_boolean_T_ucie_sim_c_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T_ucie_sim_c_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T_ucie_sim_c_T *)NULL;
  }
}

static void ucie_sim_c_emxInit_int32_T(emxArray_int32_T_ucie_sim_c_T **pEmxArray,
  int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_int32_T_ucie_sim_c_T *emxArray;
  *pEmxArray = (emxArray_int32_T_ucie_sim_c_T *)malloc(sizeof
    (emxArray_int32_T_ucie_sim_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ucie_sim_c_B->i_c5 = 0; ucie_sim_c_B->i_c5 < numDimensions;
       ucie_sim_c_B->i_c5++) {
    emxArray->size[ucie_sim_c_B->i_c5] = 0;
  }
}

static void ucie_sim_c_emxEnsureCapacity_int32_T(emxArray_int32_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ucie_sim_c_B->newNumel_n = 1;
  for (ucie_sim_c_B->i_l = 0; ucie_sim_c_B->i_l < emxArray->numDimensions;
       ucie_sim_c_B->i_l++) {
    ucie_sim_c_B->newNumel_n *= emxArray->size[ucie_sim_c_B->i_l];
  }

  if (ucie_sim_c_B->newNumel_n > emxArray->allocatedSize) {
    ucie_sim_c_B->i_l = emxArray->allocatedSize;
    if (ucie_sim_c_B->i_l < 16) {
      ucie_sim_c_B->i_l = 16;
    }

    while (ucie_sim_c_B->i_l < ucie_sim_c_B->newNumel_n) {
      if (ucie_sim_c_B->i_l > 1073741823) {
        ucie_sim_c_B->i_l = MAX_int32_T;
      } else {
        ucie_sim_c_B->i_l <<= 1;
      }
    }

    newData = malloc((uint32_T)ucie_sim_c_B->i_l * sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = ucie_sim_c_B->i_l;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_CTLE_applyCascaded_h(serdes_CTLE_ucie_sim_c_n_T *obj,
  const emxArray_real_T_ucie_sim_c_T *waveIn, real_T Index,
  emxArray_real_T_ucie_sim_c_T *waveOut, B_ucie_sim_c_T *ucie_sim_c_B)
{
  ucie_sim_c_B->h_p = waveIn->size[0];
  ucie_sim_c_B->i13 = waveOut->size[0];
  waveOut->size[0] = ucie_sim_c_B->h_p;
  ucie_sim_c_emxEnsureCapacity_real_T(waveOut, ucie_sim_c_B->i13, ucie_sim_c_B);
  ucie_sim_c_B->b_tmp_g = (int32_T)Index - 1;
  ucie_sim_c_B->b_j = obj->FilterStatesCount[ucie_sim_c_B->b_tmp_g];
  if (ucie_sim_c_B->b_j < 1.0) {
    ucie_sim_c_B->c_m = -1;
  } else {
    ucie_sim_c_B->c_m = (int32_T)ucie_sim_c_B->b_j - 1;
  }

  ucie_sim_c_B->Index_tmp_c = (int32_T)Index;
  ucie_sim_c_B->localFilterStates_size_idx_0 = ucie_sim_c_B->c_m + 1;
  for (ucie_sim_c_B->i13 = 0; ucie_sim_c_B->i13 < 5; ucie_sim_c_B->i13++) {
    for (ucie_sim_c_B->i11 = 0; ucie_sim_c_B->i11 <= ucie_sim_c_B->c_m;
         ucie_sim_c_B->i11++) {
      ucie_sim_c_B->localFilterStates_data[ucie_sim_c_B->i11 +
        ucie_sim_c_B->localFilterStates_size_idx_0 * ucie_sim_c_B->i13] =
        obj->FilterStates[((ucie_sim_c_B->i13 << 1) + ucie_sim_c_B->i11) +
        (ucie_sim_c_B->Index_tmp_c - 1) * 10];
    }
  }

  ucie_sim_c_B->b_j = obj->FilterNumeratorCount[ucie_sim_c_B->b_tmp_g];
  if (ucie_sim_c_B->b_j < 1.0) {
    ucie_sim_c_B->c_m = -1;
  } else {
    ucie_sim_c_B->c_m = 0;
  }

  ucie_sim_c_B->localNumerator_size_idx_0 = ucie_sim_c_B->c_m + 1;
  if (ucie_sim_c_B->c_m >= 0) {
    for (ucie_sim_c_B->i13 = 0; ucie_sim_c_B->i13 < 5; ucie_sim_c_B->i13++) {
      ucie_sim_c_B->localNumerator_data_b
        [ucie_sim_c_B->localNumerator_size_idx_0 * ucie_sim_c_B->i13] =
        obj->FilterNumerator[(ucie_sim_c_B->Index_tmp_c - 1) * 5 +
        ucie_sim_c_B->i13];
    }
  }

  ucie_sim_c_B->b_j = obj->FilterDenominatorCount[ucie_sim_c_B->b_tmp_g];
  if (ucie_sim_c_B->b_j < 1.0) {
    ucie_sim_c_B->c_m = -1;
  } else {
    ucie_sim_c_B->c_m = 0;
  }

  ucie_sim_c_B->localDenominator_size_idx_0 = ucie_sim_c_B->c_m + 1;
  if (ucie_sim_c_B->c_m >= 0) {
    for (ucie_sim_c_B->i13 = 0; ucie_sim_c_B->i13 < 4; ucie_sim_c_B->i13++) {
      ucie_sim_c_B->localDenominator_data_e
        [ucie_sim_c_B->localDenominator_size_idx_0 * ucie_sim_c_B->i13] =
        obj->FilterDenominator[((ucie_sim_c_B->Index_tmp_c - 1) << 2) +
        ucie_sim_c_B->i13];
    }
  }

  ucie_sim_c_B->b_j = obj->FilterGain[ucie_sim_c_B->b_tmp_g];
  for (ucie_sim_c_B->c_m = 0; ucie_sim_c_B->c_m < ucie_sim_c_B->h_p;
       ucie_sim_c_B->c_m++) {
    ucie_sim_c_B->loop_ub_tmp_c = ucie_sim_c_B->localFilterStates_size_idx_0 * 5;
    if (ucie_sim_c_B->loop_ub_tmp_c - 1 >= 0) {
      memcpy(&ucie_sim_c_B->b_localFilterStates_data_j[0],
             &ucie_sim_c_B->localFilterStates_data[0], (uint32_T)
             ucie_sim_c_B->loop_ub_tmp_c * sizeof(real_T));
    }

    for (ucie_sim_c_B->indx_d = 0; ucie_sim_c_B->indx_d < 4;
         ucie_sim_c_B->indx_d++) {
      ucie_sim_c_B->i13 = 3 - ucie_sim_c_B->indx_d;
      ucie_sim_c_B->i11 = 4 - ucie_sim_c_B->indx_d;
      for (ucie_sim_c_B->i12 = 0; ucie_sim_c_B->i12 <
           ucie_sim_c_B->localFilterStates_size_idx_0; ucie_sim_c_B->i12++) {
        ucie_sim_c_B->b_localFilterStates_data_c[ucie_sim_c_B->i12] =
          ucie_sim_c_B->b_localFilterStates_data_j
          [ucie_sim_c_B->localFilterStates_size_idx_0 * ucie_sim_c_B->i13 +
          ucie_sim_c_B->i12];
        ucie_sim_c_B->b_localFilterStates_data_j[ucie_sim_c_B->i12 +
          ucie_sim_c_B->localFilterStates_size_idx_0 * ucie_sim_c_B->i11] =
          ucie_sim_c_B->b_localFilterStates_data_c[ucie_sim_c_B->i12];
      }
    }

    ucie_sim_c_B->b_localFilterStates_data_j[0] = waveIn->data[ucie_sim_c_B->c_m];
    for (ucie_sim_c_B->indx_d = 0; ucie_sim_c_B->indx_d <=
         ucie_sim_c_B->localFilterStates_size_idx_0 - 2; ucie_sim_c_B->indx_d++)
    {
      ucie_sim_c_B->localNumerator = 0.0;
      for (ucie_sim_c_B->i13 = 0; ucie_sim_c_B->i13 < 5; ucie_sim_c_B->i13++) {
        ucie_sim_c_B->localNumerator += ucie_sim_c_B->
          localNumerator_data_b[ucie_sim_c_B->localNumerator_size_idx_0 *
          ucie_sim_c_B->i13] * ucie_sim_c_B->
          b_localFilterStates_data_j[ucie_sim_c_B->localFilterStates_size_idx_0 *
          ucie_sim_c_B->i13];
      }

      ucie_sim_c_B->localDenominator = ucie_sim_c_B->b_localFilterStates_data_j
        [1 + ucie_sim_c_B->localFilterStates_size_idx_0] *
        ucie_sim_c_B->localDenominator_data_e[0];
      ucie_sim_c_B->localDenominator += ucie_sim_c_B->
        b_localFilterStates_data_j[(ucie_sim_c_B->localFilterStates_size_idx_0 <<
        1) + 1] * ucie_sim_c_B->localDenominator_data_e
        [ucie_sim_c_B->localDenominator_size_idx_0];
      ucie_sim_c_B->localDenominator += ucie_sim_c_B->
        b_localFilterStates_data_j[ucie_sim_c_B->localFilterStates_size_idx_0 *
        3 + 1] * ucie_sim_c_B->localDenominator_data_e
        [ucie_sim_c_B->localDenominator_size_idx_0 << 1];
      ucie_sim_c_B->localDenominator += ucie_sim_c_B->
        b_localFilterStates_data_j[(ucie_sim_c_B->localFilterStates_size_idx_0 <<
        2) + 1] * ucie_sim_c_B->localDenominator_data_e
        [ucie_sim_c_B->localDenominator_size_idx_0 * 3];
      ucie_sim_c_B->b_localFilterStates_data_j[1] = ucie_sim_c_B->localNumerator
        - ucie_sim_c_B->localDenominator;
    }

    waveOut->data[ucie_sim_c_B->c_m] = ucie_sim_c_B->
      b_localFilterStates_data_j[ucie_sim_c_B->localFilterStates_size_idx_0 - 1];
    if (ucie_sim_c_B->loop_ub_tmp_c - 1 >= 0) {
      memcpy(&ucie_sim_c_B->localFilterStates_data[0],
             &ucie_sim_c_B->b_localFilterStates_data_j[0], (uint32_T)
             ucie_sim_c_B->loop_ub_tmp_c * sizeof(real_T));
    }

    waveOut->data[ucie_sim_c_B->c_m] *= ucie_sim_c_B->b_j;
  }

  ucie_sim_c_B->b_j = obj->FilterStatesCount[ucie_sim_c_B->b_tmp_g];
  if (ucie_sim_c_B->b_j < 1.0) {
    ucie_sim_c_B->c_m = 0;
  } else {
    ucie_sim_c_B->c_m = (int32_T)ucie_sim_c_B->b_j;
  }

  for (ucie_sim_c_B->i13 = 0; ucie_sim_c_B->i13 < 5; ucie_sim_c_B->i13++) {
    for (ucie_sim_c_B->i11 = 0; ucie_sim_c_B->i11 < ucie_sim_c_B->c_m;
         ucie_sim_c_B->i11++) {
      obj->FilterStates[(ucie_sim_c_B->i11 + (ucie_sim_c_B->i13 << 1)) + 10 *
        (ucie_sim_c_B->Index_tmp_c - 1)] = ucie_sim_c_B->
        localFilterStates_data[ucie_sim_c_B->localFilterStates_size_idx_0 *
        ucie_sim_c_B->i13 + ucie_sim_c_B->i11];
    }
  }
}

static void ucie_sim_c_emxFree_int32_T(emxArray_int32_T_ucie_sim_c_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T_ucie_sim_c_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T_ucie_sim_c_T *)NULL;
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_circshift_l(emxArray_real_T_ucie_sim_c_T *a,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *a__1;
  int32_T d;
  int32_T dim;
  int32_T e;
  int32_T ns;
  int32_T stride;
  dim = 2;
  if (a->size[0] != 1) {
    dim = 1;
  }

  if ((a->size[0] != 0) && (a->size[0] != 1)) {
    ns = 1;
    if (dim <= 1) {
      d = a->size[0];
    } else {
      d = 1;
    }

    if (d <= 1) {
      ns = 0;
    }

    d = (int32_T)((uint32_T)a->size[0] >> 1);
    ucie_sim_c_emxInit_real_T(&a__1, 2, ucie_sim_c_B);
    e = a__1->size[0] * a__1->size[1];
    a__1->size[0] = 1;
    a__1->size[1] = d;
    ucie_sim_c_emxEnsureCapacity_real_T(a__1, e, ucie_sim_c_B);
    if (d - 1 >= 0) {
      memset(&a__1->data[0], 0, (uint32_T)d * sizeof(real_T));
    }

    if (dim <= 1) {
      d = a->size[0];
    } else {
      d = 1;
    }

    stride = 1;
    e = dim;
    for (dim = 0; dim <= e - 2; dim++) {
      stride *= a->size[0];
    }

    if ((d > 1) && (ns > 0)) {
      for (dim = 0; dim < stride; dim++) {
        a__1->data[0] = a->data[(d - 1) * stride + dim];
        for (e = d; e >= 2; e--) {
          a->data[dim + (e - 1) * stride] = a->data[(e - 2) * stride + dim];
        }

        a->data[dim] = a__1->data[0];
      }
    }

    ucie_sim_c_emxFree_real_T(&a__1);
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_sum_b(const emxArray_real_T_ucie_sim_c_T *x,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T y;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    if (x->size[0] <= 1024) {
      ucie_sim_c_B->firstBlockLength_j = x->size[0];
      ucie_sim_c_B->lastBlockLength_i = 0;
      ucie_sim_c_B->nblocks = 1;
    } else {
      ucie_sim_c_B->firstBlockLength_j = 1024;
      ucie_sim_c_B->nblocks = (int32_T)((uint32_T)x->size[0] >> 10);
      ucie_sim_c_B->lastBlockLength_i = x->size[0] - (ucie_sim_c_B->nblocks <<
        10);
      if (ucie_sim_c_B->lastBlockLength_i > 0) {
        ucie_sim_c_B->nblocks++;
      } else {
        ucie_sim_c_B->lastBlockLength_i = 1024;
      }
    }

    y = x->data[0];
    for (ucie_sim_c_B->xblockoffset = 2; ucie_sim_c_B->xblockoffset <=
         ucie_sim_c_B->firstBlockLength_j; ucie_sim_c_B->xblockoffset++) {
      y += x->data[ucie_sim_c_B->xblockoffset - 1];
    }

    for (ucie_sim_c_B->firstBlockLength_j = 2; ucie_sim_c_B->firstBlockLength_j <=
         ucie_sim_c_B->nblocks; ucie_sim_c_B->firstBlockLength_j++) {
      ucie_sim_c_B->xblockoffset = (ucie_sim_c_B->firstBlockLength_j - 1) << 10;
      ucie_sim_c_B->bsum = x->data[ucie_sim_c_B->xblockoffset];
      if (ucie_sim_c_B->firstBlockLength_j == ucie_sim_c_B->nblocks) {
        ucie_sim_c_B->hi_h = ucie_sim_c_B->lastBlockLength_i;
      } else {
        ucie_sim_c_B->hi_h = 1024;
      }

      for (ucie_sim_c_B->b_k = 2; ucie_sim_c_B->b_k <= ucie_sim_c_B->hi_h;
           ucie_sim_c_B->b_k++) {
        ucie_sim_c_B->bsum += x->data[(ucie_sim_c_B->xblockoffset +
          ucie_sim_c_B->b_k) - 1];
      }

      y += ucie_sim_c_B->bsum;
    }
  }

  return y;
}

static void ucie_sim_c_binary_expand_op_10(emxArray_real_T_ucie_sim_c_T *in1,
  int32_T in2, const emxArray_real_T_ucie_sim_c_T *in3, const
  emxArray_real_T_ucie_sim_c_T *in4, const emxArray_real_T_ucie_sim_c_T *in5,
  const emxArray_real_T_ucie_sim_c_T *in6, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in3_0;
  emxArray_real_T_ucie_sim_c_T *in5_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ucie_sim_c_emxInit_real_T(&in3_0, 1, ucie_sim_c_B);
  loop_ub = in4->size[0] == 1 ? in3->size[0] : in4->size[0];
  i = in3_0->size[0];
  in3_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in3_0, i, ucie_sim_c_B);
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in3_0->data[i] = in3->data[i * stride_0_0] * in4->data[i * stride_1_0];
  }

  ucie_sim_c_emxInit_real_T(&in5_0, 1, ucie_sim_c_B);
  loop_ub = in6->size[0] == 1 ? in5->size[0] : in6->size[0];
  i = in5_0->size[0];
  in5_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in5_0, i, ucie_sim_c_B);
  stride_0_0 = (in5->size[0] != 1);
  stride_1_0 = (in6->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in5_0->data[i] = in5->data[i * stride_0_0] * in6->data[i * stride_1_0];
  }

  in1->data[in2] = ucie_sim_c_sum_b(in3_0, ucie_sim_c_B) - ucie_sim_c_sum_b
    (in5_0, ucie_sim_c_B);
  ucie_sim_c_emxFree_real_T(&in5_0);
  ucie_sim_c_emxFree_real_T(&in3_0);
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_maximum(const emxArray_real_T_ucie_sim_c_T *x,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T ex;
  boolean_T exitg1;
  ucie_sim_c_B->last_i = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      ex = x->data[0];
    } else {
      ex = x->data[x->size[0] - 1];
      if ((x->data[0] < ex) || (rtIsNaN(x->data[0]) && (!rtIsNaN(ex)))) {
      } else {
        ex = x->data[0];
      }
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      ucie_sim_c_B->idx = 1;
    } else {
      ucie_sim_c_B->idx = 0;
      ucie_sim_c_B->k_g = 2;
      exitg1 = false;
      while ((!exitg1) && (ucie_sim_c_B->k_g <= ucie_sim_c_B->last_i)) {
        if (!rtIsNaN(x->data[ucie_sim_c_B->k_g - 1])) {
          ucie_sim_c_B->idx = ucie_sim_c_B->k_g;
          exitg1 = true;
        } else {
          ucie_sim_c_B->k_g++;
        }
      }
    }

    if (ucie_sim_c_B->idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[ucie_sim_c_B->idx - 1];
      for (ucie_sim_c_B->k_g = ucie_sim_c_B->idx + 1; ucie_sim_c_B->k_g <=
           ucie_sim_c_B->last_i; ucie_sim_c_B->k_g++) {
        ucie_sim_c_B->x_b = x->data[ucie_sim_c_B->k_g - 1];
        if (ex < ucie_sim_c_B->x_b) {
          ex = ucie_sim_c_B->x_b;
        }
      }
    }
  }

  return ex;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_mod_g(real_T x, real_T y)
{
  real_T r;
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = y;
    }
  } else if (rtIsNaN(x) || rtIsNaN(y) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0 / y;
  } else if (rtIsInf(y)) {
    if ((y < 0.0) != (x < 0.0)) {
      r = y;
    }
  } else {
    r = fmod(x, y);
    if (r == 0.0) {
      r = y * 0.0;
    } else if (((r < 0.0) && (!(y < 0.0))) || ((!(r < 0.0)) && (y < 0.0))) {
      r += y;
    }
  }

  return r;
}

static void ucie_sim_c_emxInit_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  **pEmxArray, int32_T numDimensions, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_uint32_T_ucie_sim_c_T *emxArray;
  *pEmxArray = (emxArray_uint32_T_ucie_sim_c_T *)malloc(sizeof
    (emxArray_uint32_T_ucie_sim_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (uint32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * (uint32_T)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ucie_sim_c_B->i_pi = 0; ucie_sim_c_B->i_pi < numDimensions;
       ucie_sim_c_B->i_pi++) {
    emxArray->size[ucie_sim_c_B->i_pi] = 0;
  }
}

static void ucie_sim_c_emxEnsureCapacity_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  *emxArray, int32_T oldNumel, B_ucie_sim_c_T *ucie_sim_c_B)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ucie_sim_c_B->newNumel_c = 1;
  for (ucie_sim_c_B->i_nc = 0; ucie_sim_c_B->i_nc < emxArray->numDimensions;
       ucie_sim_c_B->i_nc++) {
    ucie_sim_c_B->newNumel_c *= emxArray->size[ucie_sim_c_B->i_nc];
  }

  if (ucie_sim_c_B->newNumel_c > emxArray->allocatedSize) {
    ucie_sim_c_B->i_nc = emxArray->allocatedSize;
    if (ucie_sim_c_B->i_nc < 16) {
      ucie_sim_c_B->i_nc = 16;
    }

    while (ucie_sim_c_B->i_nc < ucie_sim_c_B->newNumel_c) {
      if (ucie_sim_c_B->i_nc > 1073741823) {
        ucie_sim_c_B->i_nc = MAX_int32_T;
      } else {
        ucie_sim_c_B->i_nc <<= 1;
      }
    }

    newData = malloc((uint32_T)ucie_sim_c_B->i_nc * sizeof(uint32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(uint32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (uint32_T *)newData;
    emxArray->allocatedSize = ucie_sim_c_B->i_nc;
    emxArray->canFreeData = true;
  }
}

static void ucie_sim_c_emxFree_uint32_T(emxArray_uint32_T_ucie_sim_c_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint32_T_ucie_sim_c_T *)NULL) {
    if (((*pEmxArray)->data != (uint32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint32_T_ucie_sim_c_T *)NULL;
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_CTLE_PulseGoodness_n(const emxArray_real_T_ucie_sim_c_T
  *pulse, real_T SamplesPerSymbol, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *cursormask;
  emxArray_int32_T_ucie_sim_c_T *tmp;
  emxArray_int32_T_ucie_sim_c_T *tmp_0;
  emxArray_real_T_ucie_sim_c_T *nn;
  emxArray_real_T_ucie_sim_c_T *varargin_1;
  emxArray_real_T_ucie_sim_c_T *x_tmp;
  emxArray_uint32_T_ucie_sim_c_T *y;
  real_T val;
  ucie_sim_c_emxInit_real_T(&nn, 1, ucie_sim_c_B);
  ucie_sim_c_B->loop_ub_f1 = pulse->size[0];
  ucie_sim_c_B->i_d = nn->size[0];
  nn->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(nn, ucie_sim_c_B->i_d, ucie_sim_c_B);
  ucie_sim_c_B->dcval = (pulse->data[pulse->size[0] - 1] + pulse->data[0]) / 2.0;
  ucie_sim_c_emxInit_real_T(&x_tmp, 1, ucie_sim_c_B);
  ucie_sim_c_B->i_d = x_tmp->size[0];
  x_tmp->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(x_tmp, ucie_sim_c_B->i_d, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&varargin_1, 1, ucie_sim_c_B);
  ucie_sim_c_B->i_d = varargin_1->size[0];
  varargin_1->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_d,
    ucie_sim_c_B);
  for (ucie_sim_c_B->k_l = 0; ucie_sim_c_B->k_l < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->k_l++) {
    ucie_sim_c_B->uidiff = pulse->data[ucie_sim_c_B->k_l];
    nn->data[ucie_sim_c_B->k_l] = ucie_sim_c_B->uidiff;
    x_tmp->data[ucie_sim_c_B->k_l] = ucie_sim_c_B->uidiff - ucie_sim_c_B->dcval;
    varargin_1->data[ucie_sim_c_B->k_l] = fabs(x_tmp->data[ucie_sim_c_B->k_l]);
  }

  if (ucie_sim_c_maximum(x_tmp, ucie_sim_c_B) != ucie_sim_c_maximum(varargin_1,
       ucie_sim_c_B)) {
    ucie_sim_c_B->i_d = nn->size[0];
    nn->size[0] = ucie_sim_c_B->loop_ub_f1;
    ucie_sim_c_emxEnsureCapacity_real_T(nn, ucie_sim_c_B->i_d, ucie_sim_c_B);
    for (ucie_sim_c_B->k_l = 0; ucie_sim_c_B->k_l < ucie_sim_c_B->loop_ub_f1;
         ucie_sim_c_B->k_l++) {
      nn->data[ucie_sim_c_B->k_l] = -pulse->data[ucie_sim_c_B->k_l];
    }
  }

  ucie_sim_c_emxFree_real_T(&varargin_1);
  ucie_sim_c_maximum_f(nn, &ucie_sim_c_B->dcval, &ucie_sim_c_B->k_l,
                       ucie_sim_c_B);
  ucie_sim_c_B->dcval = ucie_sim_c_B->k_l;
  ucie_sim_c_B->uidiff = 1.0E+6;
  while (ucie_sim_c_B->uidiff > 0.0) {
    ucie_sim_c_B->dcval++;
    ucie_sim_c_B->uidiff = nn->data[(int32_T)ucie_sim_c_B->dcval - 1] - nn->
      data[(int32_T)(ucie_sim_c_mod_g((ucie_sim_c_B->dcval - SamplesPerSymbol) -
      1.0, (real_T)pulse->size[0]) + 1.0) - 1];
  }

  ucie_sim_c_B->x_idx_0 = ucie_sim_c_mod_g(((ucie_sim_c_B->dcval - 1.0) -
    SamplesPerSymbol) - 1.0, (real_T)pulse->size[0]);
  ucie_sim_c_B->x_idx_0 = nn->data[(int32_T)(ucie_sim_c_B->dcval - 1.0) - 1] -
    nn->data[(int32_T)(ucie_sim_c_B->x_idx_0 + 1.0) - 1];
  ucie_sim_c_B->b_y_idx_0 = ucie_sim_c_B->dcval - 1.0;
  ucie_sim_c_B->b_y_idx_1 = ucie_sim_c_B->dcval;
  if (ucie_sim_c_B->uidiff < ucie_sim_c_B->x_idx_0) {
    ucie_sim_c_B->dcval = ucie_sim_c_B->x_idx_0;
    ucie_sim_c_B->x_idx_0 = ucie_sim_c_B->uidiff;
    ucie_sim_c_B->uidiff = ucie_sim_c_B->dcval;
    ucie_sim_c_B->dcval = ucie_sim_c_B->b_y_idx_0;
    ucie_sim_c_B->b_y_idx_0 = ucie_sim_c_B->b_y_idx_1;
    ucie_sim_c_B->b_y_idx_1 = ucie_sim_c_B->dcval;
  }

  ucie_sim_c_B->dcval = (rtNaN);
  if ((!(ucie_sim_c_B->uidiff < 0.0)) && (!(ucie_sim_c_B->x_idx_0 > 0.0))) {
    ucie_sim_c_B->dcval = (0.0 - ucie_sim_c_B->x_idx_0) / (ucie_sim_c_B->uidiff
      - ucie_sim_c_B->x_idx_0);
    if (ucie_sim_c_B->dcval == 0.0) {
      ucie_sim_c_B->dcval = ucie_sim_c_B->b_y_idx_0;
    } else if (ucie_sim_c_B->dcval == 1.0) {
      ucie_sim_c_B->dcval = ucie_sim_c_B->b_y_idx_1;
    } else if (ucie_sim_c_B->b_y_idx_0 == ucie_sim_c_B->b_y_idx_1) {
      ucie_sim_c_B->dcval = ucie_sim_c_B->b_y_idx_0;
    } else {
      ucie_sim_c_B->dcval = (1.0 - ucie_sim_c_B->dcval) *
        ucie_sim_c_B->b_y_idx_0 + ucie_sim_c_B->dcval * ucie_sim_c_B->b_y_idx_1;
    }
  }

  ucie_sim_c_B->dcval -= SamplesPerSymbol / 2.0;
  ucie_sim_c_emxInit_uint32_T(&y, 2, ucie_sim_c_B);
  if (pulse->size[0] < 1) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    ucie_sim_c_B->u1 = (uint32_T)pulse->size[0];
    ucie_sim_c_B->i_d = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)ucie_sim_c_B->u1;
    ucie_sim_c_emxEnsureCapacity_uint32_T(y, ucie_sim_c_B->i_d, ucie_sim_c_B);
    ucie_sim_c_B->loop_ub_f1 = (int32_T)ucie_sim_c_B->u1 - 1;
    for (ucie_sim_c_B->k_l = 0; ucie_sim_c_B->k_l <= ucie_sim_c_B->loop_ub_f1;
         ucie_sim_c_B->k_l++) {
      y->data[ucie_sim_c_B->k_l] = (uint32_T)ucie_sim_c_B->k_l + 1U;
    }
  }

  ucie_sim_c_B->loop_ub_f1 = y->size[1];
  ucie_sim_c_B->i_d = nn->size[0];
  nn->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(nn, ucie_sim_c_B->i_d, ucie_sim_c_B);
  ucie_sim_c_B->uidiff = ucie_sim_c_B->dcval - SamplesPerSymbol / 2.0;
  ucie_sim_c_B->dcval += SamplesPerSymbol / 2.0;
  ucie_sim_c_emxInit_boolean_T(&cursormask, 1, ucie_sim_c_B);
  ucie_sim_c_B->i_d = cursormask->size[0];
  cursormask->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_boolean_T(cursormask, ucie_sim_c_B->i_d,
    ucie_sim_c_B);
  ucie_sim_c_B->k_l = 0;
  for (ucie_sim_c_B->i_d = 0; ucie_sim_c_B->i_d < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->i_d++) {
    nn->data[ucie_sim_c_B->i_d] = y->data[ucie_sim_c_B->i_d];
    ucie_sim_c_B->nn = (int32_T)nn->data[ucie_sim_c_B->i_d];
    cursormask->data[ucie_sim_c_B->i_d] = ((ucie_sim_c_B->nn >
      ucie_sim_c_B->uidiff) && (ucie_sim_c_B->nn < ucie_sim_c_B->dcval));
    if (cursormask->data[ucie_sim_c_B->i_d]) {
      ucie_sim_c_B->k_l++;
    }
  }

  ucie_sim_c_emxFree_uint32_T(&y);
  ucie_sim_c_emxInit_int32_T(&tmp, 1, ucie_sim_c_B);
  ucie_sim_c_B->i_d = tmp->size[0];
  tmp->size[0] = ucie_sim_c_B->k_l;
  ucie_sim_c_emxEnsureCapacity_int32_T(tmp, ucie_sim_c_B->i_d, ucie_sim_c_B);
  ucie_sim_c_B->nn = 0;
  ucie_sim_c_B->k_l = 0;
  for (ucie_sim_c_B->i_d = 0; ucie_sim_c_B->i_d < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->i_d++) {
    ucie_sim_c_B->cursormask = cursormask->data[ucie_sim_c_B->i_d];
    if (ucie_sim_c_B->cursormask) {
      tmp->data[ucie_sim_c_B->nn] = ucie_sim_c_B->i_d;
      ucie_sim_c_B->nn++;
    } else {
      ucie_sim_c_B->k_l++;
    }
  }

  ucie_sim_c_emxInit_int32_T(&tmp_0, 1, ucie_sim_c_B);
  ucie_sim_c_B->i_d = tmp_0->size[0];
  tmp_0->size[0] = ucie_sim_c_B->k_l;
  ucie_sim_c_emxEnsureCapacity_int32_T(tmp_0, ucie_sim_c_B->i_d, ucie_sim_c_B);
  ucie_sim_c_B->nn = 0;
  for (ucie_sim_c_B->i_d = 0; ucie_sim_c_B->i_d < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->i_d++) {
    if (!cursormask->data[ucie_sim_c_B->i_d]) {
      tmp_0->data[ucie_sim_c_B->nn] = ucie_sim_c_B->i_d;
      ucie_sim_c_B->nn++;
    }
  }

  ucie_sim_c_emxFree_boolean_T(&cursormask);
  ucie_sim_c_B->loop_ub_f1 = tmp->size[0];
  ucie_sim_c_B->i_d = nn->size[0];
  nn->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(nn, ucie_sim_c_B->i_d, ucie_sim_c_B);
  for (ucie_sim_c_B->k_l = 0; ucie_sim_c_B->k_l < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->k_l++) {
    ucie_sim_c_B->dcval = pulse->data[tmp->data[ucie_sim_c_B->k_l]];
    ucie_sim_c_B->dcval = ucie_sim_c_rt_powd_snf(ucie_sim_c_B->dcval, 2.0,
      ucie_sim_c_B);
    nn->data[ucie_sim_c_B->k_l] = ucie_sim_c_B->dcval;
  }

  ucie_sim_c_emxFree_int32_T(&tmp);
  ucie_sim_c_B->loop_ub_f1 = tmp_0->size[0];
  ucie_sim_c_B->i_d = x_tmp->size[0];
  x_tmp->size[0] = ucie_sim_c_B->loop_ub_f1;
  ucie_sim_c_emxEnsureCapacity_real_T(x_tmp, ucie_sim_c_B->i_d, ucie_sim_c_B);
  for (ucie_sim_c_B->k_l = 0; ucie_sim_c_B->k_l < ucie_sim_c_B->loop_ub_f1;
       ucie_sim_c_B->k_l++) {
    ucie_sim_c_B->dcval = pulse->data[tmp_0->data[ucie_sim_c_B->k_l]];
    ucie_sim_c_B->dcval = ucie_sim_c_rt_powd_snf(ucie_sim_c_B->dcval, 2.0,
      ucie_sim_c_B);
    x_tmp->data[ucie_sim_c_B->k_l] = ucie_sim_c_B->dcval;
  }

  ucie_sim_c_emxFree_int32_T(&tmp_0);
  val = ucie_sim_c_sum_b(nn, ucie_sim_c_B) / ucie_sim_c_sum_b(x_tmp,
    ucie_sim_c_B);
  ucie_sim_c_emxFree_real_T(&x_tmp);
  ucie_sim_c_emxFree_real_T(&nn);
  return val;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_CTLE_stepImpl_g(serdes_CTLE_ucie_sim_c_n_T *obj, const
  emxArray_real_T_ucie_sim_c_T *waveIn, emxArray_real_T_ucie_sim_c_T *waveOut,
  real_T *Config, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *test1;
  emxArray_boolean_T_ucie_sim_c_T *test2;
  emxArray_boolean_T_ucie_sim_c_T *tmp_0;
  emxArray_int32_T_ucie_sim_c_T *tmp;
  emxArray_real_T_ucie_sim_c_T *X;
  emxArray_real_T_ucie_sim_c_T *Xh;
  emxArray_real_T_ucie_sim_c_T *a;
  emxArray_real_T_ucie_sim_c_T *inDelay;
  emxArray_real_T_ucie_sim_c_T *outDelay;
  emxArray_real_T_ucie_sim_c_T *penergy1;
  emxArray_real_T_ucie_sim_c_T *penergy1_0;
  emxArray_real_T_ucie_sim_c_T *psel;
  emxArray_real_T_ucie_sim_c_T *rsel;
  emxArray_real_T_ucie_sim_c_T *w2;
  emxArray_real_T_ucie_sim_c_T *wavetmp;
  emxArray_real_T_ucie_sim_c_T *wavetmp1;
  emxArray_real_T_ucie_sim_c_T *wavetmp1_0;
  boolean_T exitg1;
  ucie_sim_c_B->val_i3 = (obj->Mode == 0.0);
  if (ucie_sim_c_B->val_i3) {
    ucie_sim_c_B->i_g = waveIn->size[0];
    ucie_sim_c_B->i10 = waveOut->size[0] * waveOut->size[1];
    waveOut->size[0] = ucie_sim_c_B->i_g;
    ucie_sim_c_B->i_g = waveIn->size[1];
    waveOut->size[1] = ucie_sim_c_B->i_g;
    ucie_sim_c_emxEnsureCapacity_real_T(waveOut, ucie_sim_c_B->i10, ucie_sim_c_B);
    ucie_sim_c_B->loop_ub_cq = waveIn->size[0] * waveIn->size[1];
    if (ucie_sim_c_B->loop_ub_cq - 1 >= 0) {
      memcpy(&waveOut->data[0], &waveIn->data[0], (uint32_T)
             ucie_sim_c_B->loop_ub_cq * sizeof(real_T));
    }

    *Config = obj->ConfigSelect;
  } else {
    ucie_sim_c_B->SamplesPerSymbol_a = obj->SymbolTime / obj->SampleInterval;
    ucie_sim_c_B->SamplesPerSymbol_a = rt_roundd_snf
      (ucie_sim_c_B->SamplesPerSymbol_a);
    ucie_sim_c_B->val_i3 = (obj->Mode == 2.0);
    ucie_sim_c_emxInit_real_T(&psel, 2, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&rsel, 2, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&inDelay, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&outDelay, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&wavetmp1, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&penergy1, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&wavetmp, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&a, 2, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&Xh, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&X, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&penergy1_0, 1, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&wavetmp1_0, 1, ucie_sim_c_B);
    if (ucie_sim_c_B->val_i3) {
      ucie_sim_c_B->loop_ub_cq = waveIn->size[0];
      ucie_sim_c_B->i10 = wavetmp->size[0];
      wavetmp->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_real_T(wavetmp, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      if (ucie_sim_c_B->loop_ub_cq - 1 >= 0) {
        memcpy(&wavetmp->data[0], &waveIn->data[0], (uint32_T)
               ucie_sim_c_B->loop_ub_cq * sizeof(real_T));
      }

      ucie_sim_c_impulse2pulse(wavetmp, ucie_sim_c_B->SamplesPerSymbol_a,
        obj->SampleInterval, wavetmp1, ucie_sim_c_B);
      ucie_sim_c_B->loop_ub_cq = wavetmp1->size[0];
      ucie_sim_c_B->i10 = penergy1->size[0];
      penergy1->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        ucie_sim_c_B->startndx = wavetmp1->data[ucie_sim_c_B->i_g];
        ucie_sim_c_B->startndx = ucie_sim_c_rt_powd_snf(ucie_sim_c_B->startndx,
          2.0, ucie_sim_c_B);
        penergy1->data[ucie_sim_c_B->i_g] = ucie_sim_c_B->startndx;
      }

      if ((penergy1->size[0] != 1) && (penergy1->size[0] != 0) &&
          (penergy1->size[0] != 1)) {
        ucie_sim_c_B->nx = ucie_sim_c_B->loop_ub_cq;
        for (ucie_sim_c_B->varargin_3 = 0; ucie_sim_c_B->varargin_3 <=
             ucie_sim_c_B->nx - 2; ucie_sim_c_B->varargin_3++) {
          penergy1->data[ucie_sim_c_B->varargin_3 + 1] += penergy1->
            data[ucie_sim_c_B->varargin_3];
        }
      }

      ucie_sim_c_B->penergy1 = penergy1->size[0] - 1;
      ucie_sim_c_B->startndx = penergy1->data[ucie_sim_c_B->penergy1];
      ucie_sim_c_emxInit_boolean_T(&test1, 1, ucie_sim_c_B);
      ucie_sim_c_B->i10 = test1->size[0];
      test1->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_boolean_T(test1, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        penergy1->data[ucie_sim_c_B->i_g] /= ucie_sim_c_B->startndx;
        ucie_sim_c_B->endndx = penergy1->data[ucie_sim_c_B->i_g];
        test1->data[ucie_sim_c_B->i_g] = ((ucie_sim_c_B->endndx > 5.0E-5) &&
          (ucie_sim_c_B->endndx < 0.99995));
      }

      ucie_sim_c_B->nx = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_B->i10 = penergy1->size[0];
      penergy1->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      for (ucie_sim_c_B->varargin_3 = 0; ucie_sim_c_B->varargin_3 <
           ucie_sim_c_B->nx; ucie_sim_c_B->varargin_3++) {
        penergy1->data[ucie_sim_c_B->varargin_3] = fabs(wavetmp1->
          data[ucie_sim_c_B->varargin_3]);
      }

      ucie_sim_c_maximum_f(penergy1, &ucie_sim_c_B->startndx,
                           &ucie_sim_c_B->varargin_3, ucie_sim_c_B);
      ucie_sim_c_B->wavetmp1[0] = 1.0;
      ucie_sim_c_B->wavetmp1[1] = (real_T)ucie_sim_c_B->varargin_3 -
        ucie_sim_c_B->SamplesPerSymbol_a * 3.0;
      ucie_sim_c_B->startndx = ucie_sim_c_maximum_fp(ucie_sim_c_B->wavetmp1);
      ucie_sim_c_B->wavetmp1[0] = wavetmp1->size[0];
      ucie_sim_c_B->wavetmp1[1] = ucie_sim_c_B->SamplesPerSymbol_a * 3.0 +
        (real_T)ucie_sim_c_B->varargin_3;
      ucie_sim_c_B->endndx = ucie_sim_c_minimum(ucie_sim_c_B->wavetmp1);
      ucie_sim_c_emxInit_boolean_T(&test2, 1, ucie_sim_c_B);
      ucie_sim_c_B->i10 = test2->size[0];
      test2->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_boolean_T(test2, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      if (ucie_sim_c_B->loop_ub_cq - 1 >= 0) {
        memset(&test2->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_cq * sizeof
               (boolean_T));
      }

      if (ucie_sim_c_B->startndx > ucie_sim_c_B->endndx) {
        ucie_sim_c_B->varargin_3 = 0;
        ucie_sim_c_B->nx = 0;
      } else {
        ucie_sim_c_B->varargin_3 = (int32_T)ucie_sim_c_B->startndx - 1;
        ucie_sim_c_B->nx = (int32_T)ucie_sim_c_B->endndx;
      }

      ucie_sim_c_B->nx -= ucie_sim_c_B->varargin_3;
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->nx;
           ucie_sim_c_B->i_g++) {
        test2->data[ucie_sim_c_B->varargin_3 + ucie_sim_c_B->i_g] = true;
      }

      ucie_sim_c_emxInit_boolean_T(&tmp_0, 1, ucie_sim_c_B);
      if (test1->size[0] == test2->size[0]) {
        ucie_sim_c_B->i10 = tmp_0->size[0];
        tmp_0->size[0] = ucie_sim_c_B->loop_ub_cq;
        ucie_sim_c_emxEnsureCapacity_boolean_T(tmp_0, ucie_sim_c_B->i10,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
             ucie_sim_c_B->i_g++) {
          tmp_0->data[ucie_sim_c_B->i_g] = (test1->data[ucie_sim_c_B->i_g] ||
            test2->data[ucie_sim_c_B->i_g]);
        }
      } else {
        ucie_sim_c_or(tmp_0, test1, test2, ucie_sim_c_B);
      }

      ucie_sim_c_emxFree_boolean_T(&test2);
      ucie_sim_c_emxFree_boolean_T(&test1);
      ucie_sim_c_B->loop_ub_cq = tmp_0->size[0];
      ucie_sim_c_B->varargin_3 = 0;
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        if (tmp_0->data[ucie_sim_c_B->i_g]) {
          ucie_sim_c_B->varargin_3++;
        }
      }

      ucie_sim_c_emxInit_int32_T(&tmp, 1, ucie_sim_c_B);
      ucie_sim_c_B->i10 = tmp->size[0];
      tmp->size[0] = ucie_sim_c_B->varargin_3;
      ucie_sim_c_emxEnsureCapacity_int32_T(tmp, ucie_sim_c_B->i10, ucie_sim_c_B);
      ucie_sim_c_B->varargin_3 = 0;
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        if (tmp_0->data[ucie_sim_c_B->i_g]) {
          tmp->data[ucie_sim_c_B->varargin_3] = ucie_sim_c_B->i_g;
          ucie_sim_c_B->varargin_3++;
        }
      }

      ucie_sim_c_emxFree_boolean_T(&tmp_0);
      ucie_sim_c_B->loop_ub_cq = tmp->size[0];
      ucie_sim_c_B->i10 = wavetmp->size[0];
      wavetmp->size[0] = ucie_sim_c_B->loop_ub_cq;
      ucie_sim_c_emxEnsureCapacity_real_T(wavetmp, ucie_sim_c_B->i10,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        wavetmp->data[ucie_sim_c_B->i_g] = wavetmp1->data[tmp->data
          [ucie_sim_c_B->i_g]];
      }

      ucie_sim_c_emxFree_int32_T(&tmp);
      for (ucie_sim_c_B->varargin_3 = 0; ucie_sim_c_B->varargin_3 < 4;
           ucie_sim_c_B->varargin_3++) {
        ucie_sim_c_B->val_i3 = obj->pFilterMethod;
        if (ucie_sim_c_B->val_i3) {
          ucie_sim_c_B->i10 = wavetmp1->size[0];
          wavetmp1->size[0] = ucie_sim_c_B->loop_ub_cq +
            ucie_sim_c_B->loop_ub_cq;
          ucie_sim_c_emxEnsureCapacity_real_T(wavetmp1, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_cq; ucie_sim_c_B->i_g++) {
            wavetmp1->data[ucie_sim_c_B->i_g] = wavetmp->data[ucie_sim_c_B->i_g];
            wavetmp1->data[ucie_sim_c_B->i_g + wavetmp->size[0]] = wavetmp->
              data[ucie_sim_c_B->i_g];
          }

          ucie_sim_c_CTLE_applyCascaded_h(obj, wavetmp1, (real_T)
            ucie_sim_c_B->varargin_3 + 1.0, Xh, ucie_sim_c_B);
          if ((uint32_T)ucie_sim_c_B->loop_ub_cq + 1U > (uint32_T)Xh->size[0]) {
            ucie_sim_c_B->nx = 0;
            ucie_sim_c_B->loop_ub_m1 = 0;
          } else {
            ucie_sim_c_B->nx = ucie_sim_c_B->loop_ub_cq;
            ucie_sim_c_B->loop_ub_m1 = Xh->size[0];
          }

          ucie_sim_c_B->loop_ub_m1 -= ucie_sim_c_B->nx;
          ucie_sim_c_B->i10 = penergy1->size[0];
          penergy1->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
            penergy1->data[ucie_sim_c_B->i_g] = Xh->data[ucie_sim_c_B->nx +
              ucie_sim_c_B->i_g];
          }
        } else {
          ucie_sim_c_B->startndx = obj->FilterCoefficients.np
            [ucie_sim_c_B->varargin_3] + 1.0;
          if (rtIsNaN(ucie_sim_c_B->startndx)) {
            ucie_sim_c_B->i10 = psel->size[0] * psel->size[1];
            psel->size[0] = 1;
            psel->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            psel->data[0] = (rtNaN);
          } else if (ucie_sim_c_B->startndx < 1.0) {
            psel->size[0] = 1;
            psel->size[1] = 0;
          } else {
            ucie_sim_c_B->i10 = psel->size[0] * psel->size[1];
            psel->size[0] = 1;
            psel->size[1] = (int32_T)(ucie_sim_c_B->startndx - 1.0) + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            ucie_sim_c_B->loop_ub_m1 = (int32_T)(ucie_sim_c_B->startndx - 1.0);
            for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <=
                 ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
              psel->data[ucie_sim_c_B->i_g] = (real_T)ucie_sim_c_B->i_g + 1.0;
            }
          }

          ucie_sim_c_B->startndx = obj->FilterCoefficients.np
            [ucie_sim_c_B->varargin_3];
          if (rtIsNaN(ucie_sim_c_B->startndx)) {
            ucie_sim_c_B->i10 = rsel->size[0] * rsel->size[1];
            rsel->size[0] = 1;
            rsel->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            rsel->data[0] = (rtNaN);
          } else if (ucie_sim_c_B->startndx < 1.0) {
            rsel->size[0] = 1;
            rsel->size[1] = 0;
          } else {
            ucie_sim_c_B->i10 = rsel->size[0] * rsel->size[1];
            rsel->size[0] = 1;
            rsel->size[1] = (int32_T)(ucie_sim_c_B->startndx - 1.0) + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            ucie_sim_c_B->loop_ub_m1 = (int32_T)(ucie_sim_c_B->startndx - 1.0);
            for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <=
                 ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
              rsel->data[ucie_sim_c_B->i_g] = (real_T)ucie_sim_c_B->i_g + 1.0;
            }
          }

          ucie_sim_c_B->loop_ub_m1 = psel->size[1];
          ucie_sim_c_B->i10 = penergy1->size[0];
          penergy1->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
            penergy1->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.inCoeff
              [(3 * ucie_sim_c_B->varargin_3 + (int32_T)psel->data
                [ucie_sim_c_B->i_g]) - 1];
          }

          ucie_sim_c_B->loop_ub_j = rsel->size[1];
          ucie_sim_c_B->i10 = wavetmp1->size[0];
          wavetmp1->size[0] = ucie_sim_c_B->loop_ub_j;
          ucie_sim_c_emxEnsureCapacity_real_T(wavetmp1, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_j; ucie_sim_c_B->i_g++) {
            wavetmp1->data[ucie_sim_c_B->i_g] = obj->
              FilterCoefficients.outCoeff[((ucie_sim_c_B->varargin_3 << 1) +
              (int32_T)rsel->data[ucie_sim_c_B->i_g]) - 1];
          }

          ucie_sim_c_B->i10 = a->size[0] * a->size[1];
          a->size[0] = 1;
          a->size[1] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(a, ucie_sim_c_B->i10, ucie_sim_c_B);
          ucie_sim_c_B->i10 = inDelay->size[0];
          inDelay->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(inDelay, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
            a->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.inDelay
              [(int32_T)psel->data[ucie_sim_c_B->i_g] - 1];
            inDelay->data[ucie_sim_c_B->i_g] = a->data[ucie_sim_c_B->i_g] * 0.0;
          }

          ucie_sim_c_B->i10 = a->size[0] * a->size[1];
          a->size[0] = 1;
          a->size[1] = ucie_sim_c_B->loop_ub_j;
          ucie_sim_c_emxEnsureCapacity_real_T(a, ucie_sim_c_B->i10, ucie_sim_c_B);
          ucie_sim_c_B->i10 = outDelay->size[0];
          outDelay->size[0] = ucie_sim_c_B->loop_ub_j;
          ucie_sim_c_emxEnsureCapacity_real_T(outDelay, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_j; ucie_sim_c_B->i_g++) {
            a->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.outDelay
              [(int32_T)rsel->data[ucie_sim_c_B->i_g] - 1];
            outDelay->data[ucie_sim_c_B->i_g] = a->data[ucie_sim_c_B->i_g] * 0.0;
          }

          ucie_sim_c_B->loop_ub_m1 = ucie_sim_c_B->loop_ub_cq +
            ucie_sim_c_B->loop_ub_cq;
          ucie_sim_c_B->i10 = X->size[0];
          X->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(X, ucie_sim_c_B->i10, ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_cq; ucie_sim_c_B->i_g++) {
            X->data[ucie_sim_c_B->i_g] = wavetmp->data[ucie_sim_c_B->i_g];
            X->data[ucie_sim_c_B->i_g + wavetmp->size[0]] = wavetmp->
              data[ucie_sim_c_B->i_g];
          }

          ucie_sim_c_B->i10 = Xh->size[0];
          Xh->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(Xh, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          if (ucie_sim_c_B->loop_ub_m1 - 1 >= 0) {
            memset(&Xh->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_m1 * sizeof
                   (real_T));
          }

          for (ucie_sim_c_B->nx = 0; ucie_sim_c_B->nx < ucie_sim_c_B->loop_ub_m1;
               ucie_sim_c_B->nx++) {
            ucie_sim_c_circshift_l(inDelay, ucie_sim_c_B);
            inDelay->data[0] = X->data[ucie_sim_c_B->nx];
            ucie_sim_c_B->penergy1 = penergy1->size[0];
            if ((ucie_sim_c_B->penergy1 == inDelay->size[0]) && (wavetmp1->size
                 [0] == outDelay->size[0])) {
              ucie_sim_c_B->i10 = penergy1_0->size[0];
              penergy1_0->size[0] = ucie_sim_c_B->penergy1;
              ucie_sim_c_emxEnsureCapacity_real_T(penergy1_0, ucie_sim_c_B->i10,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
                   ucie_sim_c_B->penergy1; ucie_sim_c_B->i_g++) {
                penergy1_0->data[ucie_sim_c_B->i_g] = penergy1->
                  data[ucie_sim_c_B->i_g] * inDelay->data[ucie_sim_c_B->i_g];
              }

              ucie_sim_c_B->penergy1 = wavetmp1->size[0];
              ucie_sim_c_B->i10 = wavetmp1_0->size[0];
              wavetmp1_0->size[0] = ucie_sim_c_B->penergy1;
              ucie_sim_c_emxEnsureCapacity_real_T(wavetmp1_0, ucie_sim_c_B->i10,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
                   ucie_sim_c_B->penergy1; ucie_sim_c_B->i_g++) {
                wavetmp1_0->data[ucie_sim_c_B->i_g] = wavetmp1->
                  data[ucie_sim_c_B->i_g] * outDelay->data[ucie_sim_c_B->i_g];
              }

              Xh->data[ucie_sim_c_B->nx] = ucie_sim_c_sum_b(penergy1_0,
                ucie_sim_c_B) - ucie_sim_c_sum_b(wavetmp1_0, ucie_sim_c_B);
            } else {
              ucie_sim_c_binary_expand_op_10(Xh, ucie_sim_c_B->nx, penergy1,
                inDelay, wavetmp1, outDelay, ucie_sim_c_B);
            }

            ucie_sim_c_circshift_l(outDelay, ucie_sim_c_B);
            outDelay->data[0] = Xh->data[ucie_sim_c_B->nx];
          }

          if ((uint32_T)ucie_sim_c_B->loop_ub_cq + 1U > (uint32_T)Xh->size[0]) {
            ucie_sim_c_B->nx = 0;
            ucie_sim_c_B->loop_ub_m1 = 0;
          } else {
            ucie_sim_c_B->nx = ucie_sim_c_B->loop_ub_cq;
            ucie_sim_c_B->loop_ub_m1 = Xh->size[0];
          }

          ucie_sim_c_B->loop_ub_m1 -= ucie_sim_c_B->nx;
          ucie_sim_c_B->i10 = penergy1->size[0];
          penergy1->size[0] = ucie_sim_c_B->loop_ub_m1;
          ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
               ucie_sim_c_B->loop_ub_m1; ucie_sim_c_B->i_g++) {
            penergy1->data[ucie_sim_c_B->i_g] = Xh->data[ucie_sim_c_B->nx +
              ucie_sim_c_B->i_g];
          }
        }

        ucie_sim_c_B->goodness_d[ucie_sim_c_B->varargin_3] =
          ucie_sim_c_CTLE_PulseGoodness_n(penergy1,
          ucie_sim_c_B->SamplesPerSymbol_a, ucie_sim_c_B);
      }

      if (!rtIsNaN(ucie_sim_c_B->goodness_d[0])) {
        ucie_sim_c_B->varargin_3 = 1;
      } else {
        ucie_sim_c_B->varargin_3 = 0;
        ucie_sim_c_B->nx = 2;
        exitg1 = false;
        while ((!exitg1) && (ucie_sim_c_B->nx < 5)) {
          if (!rtIsNaN(ucie_sim_c_B->goodness_d[ucie_sim_c_B->nx - 1])) {
            ucie_sim_c_B->varargin_3 = ucie_sim_c_B->nx;
            exitg1 = true;
          } else {
            ucie_sim_c_B->nx++;
          }
        }
      }

      if (ucie_sim_c_B->varargin_3 == 0) {
        ucie_sim_c_B->loop_ub_m1 = 1;
      } else {
        ucie_sim_c_B->SamplesPerSymbol_a = ucie_sim_c_B->goodness_d
          [ucie_sim_c_B->varargin_3 - 1];
        ucie_sim_c_B->loop_ub_m1 = ucie_sim_c_B->varargin_3;
        for (ucie_sim_c_B->nx = ucie_sim_c_B->varargin_3 + 1; ucie_sim_c_B->nx <
             5; ucie_sim_c_B->nx++) {
          ucie_sim_c_B->startndx = ucie_sim_c_B->goodness_d[ucie_sim_c_B->nx - 1];
          if (ucie_sim_c_B->SamplesPerSymbol_a < ucie_sim_c_B->startndx) {
            ucie_sim_c_B->SamplesPerSymbol_a = ucie_sim_c_B->startndx;
            ucie_sim_c_B->loop_ub_m1 = ucie_sim_c_B->nx;
          }
        }
      }

      *Config = (real_T)ucie_sim_c_B->loop_ub_m1 - 1.0;
    } else {
      *Config = obj->ConfigSelect;
    }

    ucie_sim_c_B->varargin_3 = (int32_T)(*Config + 1.0) - 1;
    ucie_sim_c_B->SamplesPerSymbol_a = obj->FilterCoefficients.np
      [ucie_sim_c_B->varargin_3] + 1.0;
    if (rtIsNaN(ucie_sim_c_B->SamplesPerSymbol_a)) {
      ucie_sim_c_B->i10 = psel->size[0] * psel->size[1];
      psel->size[0] = 1;
      psel->size[1] = 1;
      ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i10, ucie_sim_c_B);
      psel->data[0] = (rtNaN);
    } else if (ucie_sim_c_B->SamplesPerSymbol_a < 1.0) {
      psel->size[0] = 1;
      psel->size[1] = 0;
    } else {
      ucie_sim_c_B->i10 = psel->size[0] * psel->size[1];
      psel->size[0] = 1;
      psel->size[1] = (int32_T)(ucie_sim_c_B->SamplesPerSymbol_a - 1.0) + 1;
      ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i10, ucie_sim_c_B);
      ucie_sim_c_B->loop_ub_cq = (int32_T)(ucie_sim_c_B->SamplesPerSymbol_a -
        1.0);
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <= ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        psel->data[ucie_sim_c_B->i_g] = (real_T)ucie_sim_c_B->i_g + 1.0;
      }
    }

    ucie_sim_c_B->SamplesPerSymbol_a = obj->FilterCoefficients.np
      [ucie_sim_c_B->varargin_3];
    if (rtIsNaN(ucie_sim_c_B->SamplesPerSymbol_a)) {
      ucie_sim_c_B->i10 = rsel->size[0] * rsel->size[1];
      rsel->size[0] = 1;
      rsel->size[1] = 1;
      ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i10, ucie_sim_c_B);
      rsel->data[0] = (rtNaN);
    } else if (ucie_sim_c_B->SamplesPerSymbol_a < 1.0) {
      rsel->size[0] = 1;
      rsel->size[1] = 0;
    } else {
      ucie_sim_c_B->i10 = rsel->size[0] * rsel->size[1];
      rsel->size[0] = 1;
      rsel->size[1] = (int32_T)(ucie_sim_c_B->SamplesPerSymbol_a - 1.0) + 1;
      ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i10, ucie_sim_c_B);
      ucie_sim_c_B->loop_ub_cq = (int32_T)(ucie_sim_c_B->SamplesPerSymbol_a -
        1.0);
      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <= ucie_sim_c_B->loop_ub_cq;
           ucie_sim_c_B->i_g++) {
        rsel->data[ucie_sim_c_B->i_g] = (real_T)ucie_sim_c_B->i_g + 1.0;
      }
    }

    ucie_sim_c_B->varargin_3 = (int32_T)(*Config + 1.0);
    ucie_sim_c_B->loop_ub_cq = psel->size[1];
    ucie_sim_c_B->i10 = penergy1->size[0];
    penergy1->size[0] = ucie_sim_c_B->loop_ub_cq;
    ucie_sim_c_emxEnsureCapacity_real_T(penergy1, ucie_sim_c_B->i10,
      ucie_sim_c_B);
    for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
         ucie_sim_c_B->i_g++) {
      penergy1->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.inCoeff
        [((ucie_sim_c_B->varargin_3 - 1) * 3 + (int32_T)psel->data
          [ucie_sim_c_B->i_g]) - 1];
    }

    ucie_sim_c_B->loop_ub_j = rsel->size[1];
    ucie_sim_c_B->i10 = wavetmp1->size[0];
    wavetmp1->size[0] = ucie_sim_c_B->loop_ub_j;
    ucie_sim_c_emxEnsureCapacity_real_T(wavetmp1, ucie_sim_c_B->i10,
      ucie_sim_c_B);
    for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_j;
         ucie_sim_c_B->i_g++) {
      wavetmp1->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.outCoeff
        [(((ucie_sim_c_B->varargin_3 - 1) << 1) + (int32_T)rsel->
          data[ucie_sim_c_B->i_g]) - 1];
    }

    ucie_sim_c_B->i10 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = ucie_sim_c_B->loop_ub_cq;
    ucie_sim_c_emxEnsureCapacity_real_T(a, ucie_sim_c_B->i10, ucie_sim_c_B);
    ucie_sim_c_B->i10 = inDelay->size[0];
    inDelay->size[0] = ucie_sim_c_B->loop_ub_cq;
    ucie_sim_c_emxEnsureCapacity_real_T(inDelay, ucie_sim_c_B->i10, ucie_sim_c_B);
    for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_cq;
         ucie_sim_c_B->i_g++) {
      a->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.inDelay[(int32_T)
        psel->data[ucie_sim_c_B->i_g] - 1];
      inDelay->data[ucie_sim_c_B->i_g] = a->data[ucie_sim_c_B->i_g] * 0.0;
    }

    ucie_sim_c_emxFree_real_T(&psel);
    ucie_sim_c_B->i10 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = ucie_sim_c_B->loop_ub_j;
    ucie_sim_c_emxEnsureCapacity_real_T(a, ucie_sim_c_B->i10, ucie_sim_c_B);
    ucie_sim_c_B->i10 = outDelay->size[0];
    outDelay->size[0] = ucie_sim_c_B->loop_ub_j;
    ucie_sim_c_emxEnsureCapacity_real_T(outDelay, ucie_sim_c_B->i10,
      ucie_sim_c_B);
    for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->loop_ub_j;
         ucie_sim_c_B->i_g++) {
      a->data[ucie_sim_c_B->i_g] = obj->FilterCoefficients.outDelay[(int32_T)
        rsel->data[ucie_sim_c_B->i_g] - 1];
      outDelay->data[ucie_sim_c_B->i_g] = a->data[ucie_sim_c_B->i_g] * 0.0;
    }

    ucie_sim_c_emxFree_real_T(&a);
    ucie_sim_c_emxFree_real_T(&rsel);
    ucie_sim_c_B->waveIn_k = waveIn->size[0];
    ucie_sim_c_B->i10 = waveOut->size[0] * waveOut->size[1];
    waveOut->size[0] = ucie_sim_c_B->waveIn_k;
    ucie_sim_c_B->nx = waveIn->size[1];
    waveOut->size[1] = ucie_sim_c_B->nx;
    ucie_sim_c_emxEnsureCapacity_real_T(waveOut, ucie_sim_c_B->i10, ucie_sim_c_B);
    ucie_sim_c_emxInit_real_T(&w2, 1, ucie_sim_c_B);
    for (ucie_sim_c_B->varargin_3 = 0; ucie_sim_c_B->varargin_3 <
         ucie_sim_c_B->nx; ucie_sim_c_B->varargin_3++) {
      ucie_sim_c_B->val_i3 = obj->pFilterMethod;
      if (ucie_sim_c_B->val_i3) {
        ucie_sim_c_B->i10 = wavetmp->size[0];
        wavetmp->size[0] = ucie_sim_c_B->waveIn_k + ucie_sim_c_B->waveIn_k;
        ucie_sim_c_emxEnsureCapacity_real_T(wavetmp, ucie_sim_c_B->i10,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->waveIn_k;
             ucie_sim_c_B->i_g++) {
          wavetmp->data[ucie_sim_c_B->i_g] = waveIn->data[waveIn->size[0] *
            ucie_sim_c_B->varargin_3 + ucie_sim_c_B->i_g];
          wavetmp->data[ucie_sim_c_B->i_g + waveIn->size[0]] = waveIn->
            data[waveIn->size[0] * ucie_sim_c_B->varargin_3 + ucie_sim_c_B->i_g];
        }

        ucie_sim_c_CTLE_applyCascaded_h(obj, wavetmp, *Config + 1.0, w2,
          ucie_sim_c_B);
      } else {
        ucie_sim_c_B->loop_ub_cj = ucie_sim_c_B->waveIn_k +
          ucie_sim_c_B->waveIn_k;
        ucie_sim_c_B->i10 = X->size[0];
        X->size[0] = ucie_sim_c_B->loop_ub_cj;
        ucie_sim_c_emxEnsureCapacity_real_T(X, ucie_sim_c_B->i10, ucie_sim_c_B);
        for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->waveIn_k;
             ucie_sim_c_B->i_g++) {
          X->data[ucie_sim_c_B->i_g] = waveIn->data[waveIn->size[0] *
            ucie_sim_c_B->varargin_3 + ucie_sim_c_B->i_g];
          X->data[ucie_sim_c_B->i_g + waveIn->size[0]] = waveIn->data
            [waveIn->size[0] * ucie_sim_c_B->varargin_3 + ucie_sim_c_B->i_g];
        }

        ucie_sim_c_B->i10 = Xh->size[0];
        Xh->size[0] = ucie_sim_c_B->loop_ub_cq;
        ucie_sim_c_emxEnsureCapacity_real_T(Xh, ucie_sim_c_B->i10, ucie_sim_c_B);
        if (ucie_sim_c_B->loop_ub_cq - 1 >= 0) {
          memcpy(&Xh->data[0], &inDelay->data[0], (uint32_T)
                 ucie_sim_c_B->loop_ub_cq * sizeof(real_T));
        }

        ucie_sim_c_B->i10 = wavetmp->size[0];
        wavetmp->size[0] = ucie_sim_c_B->loop_ub_j;
        ucie_sim_c_emxEnsureCapacity_real_T(wavetmp, ucie_sim_c_B->i10,
          ucie_sim_c_B);
        if (ucie_sim_c_B->loop_ub_j - 1 >= 0) {
          memcpy(&wavetmp->data[0], &outDelay->data[0], (uint32_T)
                 ucie_sim_c_B->loop_ub_j * sizeof(real_T));
        }

        ucie_sim_c_B->i10 = w2->size[0];
        w2->size[0] = ucie_sim_c_B->loop_ub_cj;
        ucie_sim_c_emxEnsureCapacity_real_T(w2, ucie_sim_c_B->i10, ucie_sim_c_B);
        if (ucie_sim_c_B->loop_ub_cj - 1 >= 0) {
          memset(&w2->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_cj * sizeof
                 (real_T));
        }

        for (ucie_sim_c_B->loop_ub_m1 = 0; ucie_sim_c_B->loop_ub_m1 <
             ucie_sim_c_B->loop_ub_cj; ucie_sim_c_B->loop_ub_m1++) {
          ucie_sim_c_circshift_l(Xh, ucie_sim_c_B);
          Xh->data[0] = X->data[ucie_sim_c_B->loop_ub_m1];
          ucie_sim_c_B->penergy1 = penergy1->size[0];
          if ((ucie_sim_c_B->penergy1 == Xh->size[0]) && (wavetmp1->size[0] ==
               wavetmp->size[0])) {
            ucie_sim_c_B->i10 = penergy1_0->size[0];
            penergy1_0->size[0] = ucie_sim_c_B->penergy1;
            ucie_sim_c_emxEnsureCapacity_real_T(penergy1_0, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
                 ucie_sim_c_B->penergy1; ucie_sim_c_B->i_g++) {
              penergy1_0->data[ucie_sim_c_B->i_g] = penergy1->data
                [ucie_sim_c_B->i_g] * Xh->data[ucie_sim_c_B->i_g];
            }

            ucie_sim_c_B->penergy1 = wavetmp1->size[0];
            ucie_sim_c_B->i10 = wavetmp1_0->size[0];
            wavetmp1_0->size[0] = ucie_sim_c_B->penergy1;
            ucie_sim_c_emxEnsureCapacity_real_T(wavetmp1_0, ucie_sim_c_B->i10,
              ucie_sim_c_B);
            for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g <
                 ucie_sim_c_B->penergy1; ucie_sim_c_B->i_g++) {
              wavetmp1_0->data[ucie_sim_c_B->i_g] = wavetmp1->data
                [ucie_sim_c_B->i_g] * wavetmp->data[ucie_sim_c_B->i_g];
            }

            w2->data[ucie_sim_c_B->loop_ub_m1] = ucie_sim_c_sum_b(penergy1_0,
              ucie_sim_c_B) - ucie_sim_c_sum_b(wavetmp1_0, ucie_sim_c_B);
          } else {
            ucie_sim_c_binary_expand_op_10(w2, ucie_sim_c_B->loop_ub_m1,
              penergy1, Xh, wavetmp1, wavetmp, ucie_sim_c_B);
          }

          ucie_sim_c_circshift_l(wavetmp, ucie_sim_c_B);
          wavetmp->data[0] = w2->data[ucie_sim_c_B->loop_ub_m1];
        }
      }

      if ((uint32_T)ucie_sim_c_B->waveIn_k + 1U > (uint32_T)w2->size[0]) {
        ucie_sim_c_B->loop_ub_m1 = 0;
      } else {
        ucie_sim_c_B->loop_ub_m1 = ucie_sim_c_B->waveIn_k;
      }

      for (ucie_sim_c_B->i_g = 0; ucie_sim_c_B->i_g < ucie_sim_c_B->waveIn_k;
           ucie_sim_c_B->i_g++) {
        waveOut->data[ucie_sim_c_B->i_g + waveOut->size[0] *
          ucie_sim_c_B->varargin_3] = w2->data[ucie_sim_c_B->loop_ub_m1 +
          ucie_sim_c_B->i_g];
      }
    }

    ucie_sim_c_emxFree_real_T(&wavetmp1_0);
    ucie_sim_c_emxFree_real_T(&penergy1_0);
    ucie_sim_c_emxFree_real_T(&X);
    ucie_sim_c_emxFree_real_T(&Xh);
    ucie_sim_c_emxFree_real_T(&w2);
    ucie_sim_c_emxFree_real_T(&wavetmp);
    ucie_sim_c_emxFree_real_T(&penergy1);
    ucie_sim_c_emxFree_real_T(&wavetmp1);
    ucie_sim_c_emxFree_real_T(&outDelay);
    ucie_sim_c_emxFree_real_T(&inDelay);
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_sprintf_e(real_T varargin_1, emxArray_char_T_ucie_sim_c_T
  *str)
{
  emxArray_char_T_ucie_sim_c_T *b_str;
  int32_T nbytes;
  int32_T tmp;
  nbytes = (int32_T)snprintf(NULL, 0, "%g", varargin_1) + 1;
  ucie_sim_c_emxInit_char_T(&b_str, 2);
  tmp = b_str->size[0] * b_str->size[1];
  b_str->size[0] = 1;
  b_str->size[1] = nbytes;
  ucie_sim_c_emxEnsureCapacity_char_T(b_str, tmp);
  snprintf(&b_str->data[0], (size_t)nbytes, "%g", varargin_1);
  if (nbytes - 1 < 1) {
    nbytes = -1;
  } else {
    nbytes -= 2;
  }

  tmp = str->size[0] * str->size[1];
  str->size[0] = 1;
  str->size[1] = nbytes + 1;
  ucie_sim_c_emxEnsureCapacity_char_T(str, tmp);
  if (nbytes >= 0) {
    memcpy(&str->data[0], &b_str->data[0], (uint32_T)(nbytes + 1) * sizeof
           (char_T));
  }

  ucie_sim_c_emxFree_char_T(&b_str);
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static real_T ucie_sim_c_linsolve_fq(const creal_T A_data[], creal_T B_data[],
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T r;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg1;
  ucie_sim_c_B->oneNormA = 0.0;
  ucie_sim_c_B->yk = 0;
  exitg1 = false;
  while ((!exitg1) && (ucie_sim_c_B->yk < 2)) {
    ucie_sim_c_B->s = ucie_sim_c_rt_hypotd_snf(A_data[ucie_sim_c_B->yk << 1].re,
      A_data[ucie_sim_c_B->yk << 1].im, ucie_sim_c_B);
    ucie_sim_c_B->s += ucie_sim_c_rt_hypotd_snf(A_data[(ucie_sim_c_B->yk << 1) +
      1].re, A_data[(ucie_sim_c_B->yk << 1) + 1].im, ucie_sim_c_B);
    if (rtIsNaN(ucie_sim_c_B->s)) {
      ucie_sim_c_B->oneNormA = (rtNaN);
      exitg1 = true;
    } else {
      if (ucie_sim_c_B->s > ucie_sim_c_B->oneNormA) {
        ucie_sim_c_B->oneNormA = ucie_sim_c_B->s;
      }

      ucie_sim_c_B->yk++;
    }
  }

  memcpy(&ucie_sim_c_B->b_A_data[0], &A_data[0], sizeof(creal_T) << 2U);
  ucie_sim_c_B->ipiv_data[0] = 1;
  ucie_sim_c_B->c_ix = 0;
  ucie_sim_c_B->s = fabs(ucie_sim_c_B->b_A_data[0].re) + fabs
    (ucie_sim_c_B->b_A_data[0].im);
  ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[1].re;
  ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[1].im;
  ucie_sim_c_B->b_s = fabs(ucie_sim_c_B->b_s) + fabs(ucie_sim_c_B->b_A_im);
  if (ucie_sim_c_B->b_s > ucie_sim_c_B->s) {
    ucie_sim_c_B->c_ix = 1;
  }

  ucie_sim_c_B->b_A = ((ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix].re != 0.0) ||
                       (ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix].im != 0.0));
  if (ucie_sim_c_B->b_A) {
    if (ucie_sim_c_B->c_ix != 0) {
      ucie_sim_c_B->ipiv_data[0] = 2;
      ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[0].re;
      ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data[0].im;
      ucie_sim_c_B->b_A_data[0] = ucie_sim_c_B->b_A_data[1];
      ucie_sim_c_B->b_A_data[1].re = ucie_sim_c_B->b_temp_re;
      ucie_sim_c_B->b_A_data[1].im = ucie_sim_c_B->b_temp_im;
      ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[2].re;
      ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data[2].im;
      ucie_sim_c_B->b_A_data[2] = ucie_sim_c_B->b_A_data[3];
      ucie_sim_c_B->b_A_data[3].re = ucie_sim_c_B->b_temp_re;
      ucie_sim_c_B->b_A_data[3].im = ucie_sim_c_B->b_temp_im;
    }

    ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[1].re;
    ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[1].im;
    ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_data[0].re;
    ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[0].im;
    if (ucie_sim_c_B->b_A_im == 0.0) {
      if (ucie_sim_c_B->b_temp_re == 0.0) {
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_temp_re = 0.0;
      } else if (ucie_sim_c_B->b_s == 0.0) {
        ucie_sim_c_B->b_temp_im = 0.0;
        ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_A_re;
      } else {
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_A_re;
      }
    } else if (ucie_sim_c_B->b_A_re == 0.0) {
      if (ucie_sim_c_B->b_s == 0.0) {
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_im;
        ucie_sim_c_B->b_temp_re = 0.0;
      } else if (ucie_sim_c_B->b_temp_re == 0.0) {
        ucie_sim_c_B->b_temp_im = 0.0;
        ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_im);
      } else {
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_im;
        ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_im);
      }
    } else {
      ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->b_A_re);
      ucie_sim_c_B->bim = fabs(ucie_sim_c_B->b_A_im);
      if (ucie_sim_c_B->b_absrexk > ucie_sim_c_B->bim) {
        ucie_sim_c_B->s = ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_absrexk = ucie_sim_c_B->s * ucie_sim_c_B->b_A_im +
          ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_A_im = ucie_sim_c_B->s * ucie_sim_c_B->b_temp_re +
          ucie_sim_c_B->b_s;
        ucie_sim_c_B->b_temp_re -= ucie_sim_c_B->s * ucie_sim_c_B->b_s;
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
        ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
      } else if (ucie_sim_c_B->bim == ucie_sim_c_B->b_absrexk) {
        ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re > 0.0 ? 0.5 : -0.5;
        ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_im > 0.0 ? 0.5 : -0.5;
        ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_s * ucie_sim_c_B->bim +
          ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_temp_re * ucie_sim_c_B->bim -
          ucie_sim_c_B->b_s * ucie_sim_c_B->b_A_re;
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
        ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
      } else {
        ucie_sim_c_B->s = ucie_sim_c_B->b_A_re / ucie_sim_c_B->b_A_im;
        ucie_sim_c_B->b_absrexk = ucie_sim_c_B->s * ucie_sim_c_B->b_A_re +
          ucie_sim_c_B->b_A_im;
        ucie_sim_c_B->b_A_im = ucie_sim_c_B->s * ucie_sim_c_B->b_s +
          ucie_sim_c_B->b_temp_re;
        ucie_sim_c_B->b_temp_re = ucie_sim_c_B->s * ucie_sim_c_B->b_temp_re -
          ucie_sim_c_B->b_s;
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
        ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
      }
    }

    ucie_sim_c_B->b_s = ucie_sim_c_B->b_temp_im;
    ucie_sim_c_B->b_A_data[1].re = ucie_sim_c_B->b_s;
    ucie_sim_c_B->b_A_data[1].im = ucie_sim_c_B->b_temp_re;
  }

  ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[2].re;
  ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[2].im;
  ucie_sim_c_B->b_A = ((ucie_sim_c_B->b_s != 0.0) || (ucie_sim_c_B->b_A_im !=
    0.0));
  if (ucie_sim_c_B->b_A) {
    ucie_sim_c_B->b_temp_re = -ucie_sim_c_B->b_s - ucie_sim_c_B->b_A_im * 0.0;
    ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s * 0.0 - ucie_sim_c_B->b_A_im;
    ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[1].re * ucie_sim_c_B->b_temp_re -
      ucie_sim_c_B->b_A_data[1].im * ucie_sim_c_B->b_temp_im;
    ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[1].re *
      ucie_sim_c_B->b_temp_im + ucie_sim_c_B->b_A_data[1].im *
      ucie_sim_c_B->b_temp_re;
    ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[3].re;
    ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data[3].im;
    for (ucie_sim_c_B->jA = 4; ucie_sim_c_B->jA < 5; ucie_sim_c_B->jA++) {
      ucie_sim_c_B->b_temp_re += ucie_sim_c_B->b_s;
      ucie_sim_c_B->b_temp_im += ucie_sim_c_B->b_A_im;
    }

    ucie_sim_c_B->b_A_data[3].im = ucie_sim_c_B->b_temp_im;
    ucie_sim_c_B->b_A_data[3].re = ucie_sim_c_B->b_temp_re;
  }

  ucie_sim_c_B->kase_e = 1;
  if (ucie_sim_c_B->ipiv_data[0] != 1) {
    ucie_sim_c_B->ipiv = ucie_sim_c_B->ipiv_data[0];
    ucie_sim_c_B->b_temp_re = B_data[0].re;
    ucie_sim_c_B->b_temp_im = B_data[0].im;
    ucie_sim_c_B->yk = ucie_sim_c_B->ipiv - 1;
    B_data[0] = B_data[ucie_sim_c_B->yk];
    B_data[ucie_sim_c_B->yk].re = ucie_sim_c_B->b_temp_re;
    B_data[ucie_sim_c_B->yk].im = ucie_sim_c_B->b_temp_im;
  }

  for (ucie_sim_c_B->yk = 0; ucie_sim_c_B->yk < 2; ucie_sim_c_B->yk++) {
    ucie_sim_c_B->c_ix = ucie_sim_c_B->yk << 1;
    ucie_sim_c_B->b_A = ((B_data[ucie_sim_c_B->yk].re != 0.0) ||
                         (B_data[ucie_sim_c_B->yk].im != 0.0));
    if (ucie_sim_c_B->b_A) {
      for (ucie_sim_c_B->ix = ucie_sim_c_B->yk + 2; ucie_sim_c_B->ix < 3;
           ucie_sim_c_B->ix++) {
        ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix + 1]
          .re;
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix + 1]
          .im;
        ucie_sim_c_B->s = B_data[ucie_sim_c_B->yk].re;
        ucie_sim_c_B->b_absrexk = B_data[ucie_sim_c_B->yk].im;
        ucie_sim_c_B->b_s = ucie_sim_c_B->b_temp_re * ucie_sim_c_B->s -
          ucie_sim_c_B->b_temp_im * ucie_sim_c_B->b_absrexk;
        ucie_sim_c_B->s = ucie_sim_c_B->b_temp_im * ucie_sim_c_B->s +
          ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_absrexk;
        B_data[1].re -= ucie_sim_c_B->b_s;
        B_data[1].im -= ucie_sim_c_B->s;
      }
    }
  }

  for (ucie_sim_c_B->yk = 1; ucie_sim_c_B->yk >= 0; ucie_sim_c_B->yk--) {
    ucie_sim_c_B->c_ix = ucie_sim_c_B->yk << 1;
    ucie_sim_c_B->b_s = B_data[ucie_sim_c_B->yk].re;
    ucie_sim_c_B->b_temp_re = B_data[ucie_sim_c_B->yk].im;
    ucie_sim_c_B->b_A = ((ucie_sim_c_B->b_s != 0.0) || (ucie_sim_c_B->b_temp_re
      != 0.0));
    if (ucie_sim_c_B->b_A) {
      ucie_sim_c_B->jA = ucie_sim_c_B->yk + ucie_sim_c_B->c_ix;
      ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].re;
      ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].im;
      if (ucie_sim_c_B->b_A_im == 0.0) {
        if (ucie_sim_c_B->b_temp_re == 0.0) {
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_temp_re = 0.0;
        } else if (ucie_sim_c_B->b_s == 0.0) {
          ucie_sim_c_B->b_temp_im = 0.0;
          ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_A_re;
        } else {
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_A_re;
        }
      } else if (ucie_sim_c_B->b_A_re == 0.0) {
        if (ucie_sim_c_B->b_s == 0.0) {
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re /
            ucie_sim_c_B->b_A_im;
          ucie_sim_c_B->b_temp_re = 0.0;
        } else if (ucie_sim_c_B->b_temp_re == 0.0) {
          ucie_sim_c_B->b_temp_im = 0.0;
          ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_im);
        } else {
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re /
            ucie_sim_c_B->b_A_im;
          ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_s / ucie_sim_c_B->b_A_im);
        }
      } else {
        ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->b_A_re);
        ucie_sim_c_B->bim = fabs(ucie_sim_c_B->b_A_im);
        if (ucie_sim_c_B->b_absrexk > ucie_sim_c_B->bim) {
          ucie_sim_c_B->s = ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_absrexk = ucie_sim_c_B->s * ucie_sim_c_B->b_A_im +
            ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_A_im = ucie_sim_c_B->s * ucie_sim_c_B->b_temp_re +
            ucie_sim_c_B->b_s;
          ucie_sim_c_B->b_temp_re -= ucie_sim_c_B->s * ucie_sim_c_B->b_s;
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
            ucie_sim_c_B->b_absrexk;
          ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
        } else if (ucie_sim_c_B->bim == ucie_sim_c_B->b_absrexk) {
          ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re > 0.0 ? 0.5 : -0.5;
          ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_im > 0.0 ? 0.5 : -0.5;
          ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_s * ucie_sim_c_B->bim +
            ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_temp_re * ucie_sim_c_B->bim
            - ucie_sim_c_B->b_s * ucie_sim_c_B->b_A_re;
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
            ucie_sim_c_B->b_absrexk;
          ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
        } else {
          ucie_sim_c_B->s = ucie_sim_c_B->b_A_re / ucie_sim_c_B->b_A_im;
          ucie_sim_c_B->b_absrexk = ucie_sim_c_B->s * ucie_sim_c_B->b_A_re +
            ucie_sim_c_B->b_A_im;
          ucie_sim_c_B->b_A_im = ucie_sim_c_B->s * ucie_sim_c_B->b_s +
            ucie_sim_c_B->b_temp_re;
          ucie_sim_c_B->b_temp_re = ucie_sim_c_B->s * ucie_sim_c_B->b_temp_re -
            ucie_sim_c_B->b_s;
          ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
            ucie_sim_c_B->b_absrexk;
          ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
        }
      }

      ucie_sim_c_B->b_s = ucie_sim_c_B->b_temp_im;
      B_data[ucie_sim_c_B->yk].re = ucie_sim_c_B->b_s;
      B_data[ucie_sim_c_B->yk].im = ucie_sim_c_B->b_temp_re;
      for (ucie_sim_c_B->ix = 0; ucie_sim_c_B->ix < ucie_sim_c_B->yk;
           ucie_sim_c_B->ix++) {
        ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix].re;
        ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->c_ix].im;
        ucie_sim_c_B->s = B_data[ucie_sim_c_B->yk].re;
        ucie_sim_c_B->b_absrexk = B_data[ucie_sim_c_B->yk].im;
        ucie_sim_c_B->b_s = ucie_sim_c_B->b_temp_re * ucie_sim_c_B->s -
          ucie_sim_c_B->b_temp_im * ucie_sim_c_B->b_absrexk;
        ucie_sim_c_B->s = ucie_sim_c_B->b_temp_im * ucie_sim_c_B->s +
          ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_absrexk;
        B_data[0].re -= ucie_sim_c_B->b_s;
        B_data[0].im -= ucie_sim_c_B->s;
      }
    }
  }

  r = 0.0;
  if (!(ucie_sim_c_B->oneNormA == 0.0)) {
    ucie_sim_c_B->yk = 1;
    do {
      exitg2 = 0;
      if (ucie_sim_c_B->yk + 1 > 0) {
        ucie_sim_c_B->b_A = ((ucie_sim_c_B->b_A_data[(ucie_sim_c_B->yk << 1) +
                              ucie_sim_c_B->yk].re == 0.0) &&
                             (ucie_sim_c_B->b_A_data[(ucie_sim_c_B->yk << 1) +
                              ucie_sim_c_B->yk].im == 0.0));
        if (ucie_sim_c_B->b_A) {
          exitg2 = 1;
        } else {
          ucie_sim_c_B->yk--;
        }
      } else {
        ucie_sim_c_B->s = 0.0;
        ucie_sim_c_B->c_ix = 2;
        ucie_sim_c_B->ix = 1;
        ucie_sim_c_B->yk = 0;
        ucie_sim_c_B->x_data[0].re = 0.5;
        ucie_sim_c_B->x_data[0].im = 0.0;
        ucie_sim_c_B->x_data[1].re = 0.5;
        ucie_sim_c_B->x_data[1].im = 0.0;
        do {
          exitg3 = 0;
          if (ucie_sim_c_B->kase_e == 1) {
            for (ucie_sim_c_B->b_ix = 0; ucie_sim_c_B->b_ix < 2;
                 ucie_sim_c_B->b_ix++) {
              ucie_sim_c_B->jA = (ucie_sim_c_B->b_ix << 1) + ucie_sim_c_B->b_ix;
              ucie_sim_c_B->c_i = 1 - ucie_sim_c_B->b_ix;
              for (ucie_sim_c_B->d_i = 0; ucie_sim_c_B->d_i < ucie_sim_c_B->c_i;
                   ucie_sim_c_B->d_i++) {
                ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data
                  [ucie_sim_c_B->jA + 1].re;
                ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data
                  [ucie_sim_c_B->jA + 1].im;
                ucie_sim_c_B->b_s = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re;
                ucie_sim_c_B->b_A_im = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].
                  im;
                ucie_sim_c_B->b_absrexk = ucie_sim_c_B->b_temp_re *
                  ucie_sim_c_B->b_s - ucie_sim_c_B->b_temp_im *
                  ucie_sim_c_B->b_A_im;
                ucie_sim_c_B->bim = ucie_sim_c_B->b_temp_im * ucie_sim_c_B->b_s
                  + ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_A_im;
                ucie_sim_c_B->x_data[1].re -= ucie_sim_c_B->b_absrexk;
                ucie_sim_c_B->x_data[1].im -= ucie_sim_c_B->bim;
              }
            }

            for (ucie_sim_c_B->b_ix = 1; ucie_sim_c_B->b_ix >= 0;
                 ucie_sim_c_B->b_ix--) {
              ucie_sim_c_B->jA = (ucie_sim_c_B->b_ix << 1) + ucie_sim_c_B->b_ix;
              ucie_sim_c_B->b_temp_re = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix]
                .re;
              ucie_sim_c_B->b_s = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im;
              ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].re;
              ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].im;
              if (ucie_sim_c_B->b_A_im == 0.0) {
                if (ucie_sim_c_B->b_s == 0.0) {
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re /
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_s /
                    ucie_sim_c_B->b_A_re;
                } else {
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_temp_re /
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_s /
                    ucie_sim_c_B->b_A_re;
                }
              } else if (ucie_sim_c_B->b_A_re == 0.0) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s /
                    ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_s == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_temp_re /
                    ucie_sim_c_B->b_A_im);
                } else {
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_s /
                    ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_temp_re = -(ucie_sim_c_B->b_temp_re /
                    ucie_sim_c_B->b_A_im);
                }
              } else {
                ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->b_A_re);
                ucie_sim_c_B->bim = fabs(ucie_sim_c_B->b_A_im);
                if (ucie_sim_c_B->b_absrexk > ucie_sim_c_B->bim) {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_im /
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_absrexk = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_A_im + ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->bim * ucie_sim_c_B->b_s +
                    ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_s -
                    ucie_sim_c_B->bim * ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
                    ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
                } else if (ucie_sim_c_B->bim == ucie_sim_c_B->b_absrexk) {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_im > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_temp_re *
                    ucie_sim_c_B->bim + ucie_sim_c_B->b_s * ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_s *
                    ucie_sim_c_B->bim - ucie_sim_c_B->b_temp_re *
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
                    ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
                } else {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re /
                    ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_absrexk = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_A_re + ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_temp_re + ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_s - ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_im /
                    ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_absrexk;
                }
              }

              ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                ucie_sim_c_B->b_temp_im;
              ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                ucie_sim_c_B->b_temp_re;
              for (ucie_sim_c_B->c_i = 0; ucie_sim_c_B->c_i < ucie_sim_c_B->b_ix;
                   ucie_sim_c_B->c_i++) {
                ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_data
                  [ucie_sim_c_B->jA - 1].re;
                ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_A_data
                  [ucie_sim_c_B->jA - 1].im;
                ucie_sim_c_B->b_s = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re;
                ucie_sim_c_B->b_A_im = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].
                  im;
                ucie_sim_c_B->b_absrexk = ucie_sim_c_B->b_temp_re *
                  ucie_sim_c_B->b_s - ucie_sim_c_B->b_temp_im *
                  ucie_sim_c_B->b_A_im;
                ucie_sim_c_B->bim = ucie_sim_c_B->b_temp_im * ucie_sim_c_B->b_s
                  + ucie_sim_c_B->b_temp_re * ucie_sim_c_B->b_A_im;
                ucie_sim_c_B->x_data[0].re -= ucie_sim_c_B->b_absrexk;
                ucie_sim_c_B->x_data[0].im -= ucie_sim_c_B->bim;
              }
            }
          } else {
            for (ucie_sim_c_B->b_ix = 0; ucie_sim_c_B->b_ix < 2;
                 ucie_sim_c_B->b_ix++) {
              ucie_sim_c_B->jA = ucie_sim_c_B->b_ix << 1;
              ucie_sim_c_B->b_temp_re = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix]
                .re;
              ucie_sim_c_B->b_temp_im = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix]
                .im;
              for (ucie_sim_c_B->c_i = 0; ucie_sim_c_B->c_i < ucie_sim_c_B->b_ix;
                   ucie_sim_c_B->c_i++) {
                ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].re;
                ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].
                  im;
                ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[0].re;
                ucie_sim_c_B->bim = ucie_sim_c_B->x_data[0].im;
                ucie_sim_c_B->b_temp_re -= ucie_sim_c_B->b_s *
                  ucie_sim_c_B->b_absrexk + ucie_sim_c_B->b_A_im *
                  ucie_sim_c_B->bim;
                ucie_sim_c_B->b_temp_im -= ucie_sim_c_B->b_s * ucie_sim_c_B->bim
                  - ucie_sim_c_B->b_A_im * ucie_sim_c_B->b_absrexk;
              }

              ucie_sim_c_B->jA += ucie_sim_c_B->b_ix;
              ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].re;
              ucie_sim_c_B->b_A_im = -ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].
                im;
              if (ucie_sim_c_B->b_A_im == 0.0) {
                if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im = 0.0;
                } else if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re = 0.0;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    ucie_sim_c_B->b_temp_im / ucie_sim_c_B->b_A_re;
                } else {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    ucie_sim_c_B->b_temp_im / ucie_sim_c_B->b_A_re;
                }
              } else if (ucie_sim_c_B->b_A_re == 0.0) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_temp_im / ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im = 0.0;
                } else if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re = 0.0;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    -(ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_im);
                } else {
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_temp_im / ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    -(ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_A_im);
                }
              } else {
                ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->b_A_re);
                ucie_sim_c_B->bim = fabs(ucie_sim_c_B->b_A_im);
                if (ucie_sim_c_B->b_absrexk > ucie_sim_c_B->bim) {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_im /
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_absrexk = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_A_im + ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_temp_im + ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_temp_im -
                    ucie_sim_c_B->bim * ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_absrexk;
                } else if (ucie_sim_c_B->bim == ucie_sim_c_B->b_absrexk) {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->b_A_re = ucie_sim_c_B->b_A_im > 0.0 ? 0.5 : -0.5;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_temp_re *
                    ucie_sim_c_B->bim + ucie_sim_c_B->b_temp_im *
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_temp_im *
                    ucie_sim_c_B->bim - ucie_sim_c_B->b_temp_re *
                    ucie_sim_c_B->b_A_re;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_absrexk;
                } else {
                  ucie_sim_c_B->bim = ucie_sim_c_B->b_A_re /
                    ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_absrexk = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_A_re + ucie_sim_c_B->b_A_im;
                  ucie_sim_c_B->b_A_im = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_temp_re + ucie_sim_c_B->b_temp_im;
                  ucie_sim_c_B->b_temp_re = ucie_sim_c_B->bim *
                    ucie_sim_c_B->b_temp_im - ucie_sim_c_B->b_temp_re;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                    ucie_sim_c_B->b_A_im / ucie_sim_c_B->b_absrexk;
                  ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                    ucie_sim_c_B->b_temp_re / ucie_sim_c_B->b_absrexk;
                }
              }
            }

            for (ucie_sim_c_B->b_ix = 1; ucie_sim_c_B->b_ix >= 0;
                 ucie_sim_c_B->b_ix--) {
              ucie_sim_c_B->jA = (ucie_sim_c_B->b_ix << 1) + 1;
              ucie_sim_c_B->b_temp_re = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix]
                .re;
              ucie_sim_c_B->b_temp_im = ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix]
                .im;
              for (ucie_sim_c_B->c_i = 2; ucie_sim_c_B->c_i >=
                   ucie_sim_c_B->b_ix + 2; ucie_sim_c_B->c_i--) {
                ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].re;
                ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->jA].
                  im;
                ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[1].re;
                ucie_sim_c_B->bim = ucie_sim_c_B->x_data[1].im;
                ucie_sim_c_B->b_temp_re -= ucie_sim_c_B->b_s *
                  ucie_sim_c_B->b_absrexk + ucie_sim_c_B->b_A_im *
                  ucie_sim_c_B->bim;
                ucie_sim_c_B->b_temp_im -= ucie_sim_c_B->b_s * ucie_sim_c_B->bim
                  - ucie_sim_c_B->b_A_im * ucie_sim_c_B->b_absrexk;
              }

              ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].re =
                ucie_sim_c_B->b_temp_re;
              ucie_sim_c_B->x_data[ucie_sim_c_B->b_ix].im =
                ucie_sim_c_B->b_temp_im;
            }
          }

          if (ucie_sim_c_B->ix == 1) {
            ucie_sim_c_B->b_temp_im = ucie_sim_c_B->x_data[0].re;
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->b_temp_im;
            ucie_sim_c_B->b_temp_re = ucie_sim_c_B->x_data[0].im;
            ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_temp_re;
            ucie_sim_c_B->b_s = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->b_absrexk,
              ucie_sim_c_B->b_A_im, ucie_sim_c_B);
            ucie_sim_c_B->s = ucie_sim_c_B->b_s;
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[1].re;
            ucie_sim_c_B->b_A_im = ucie_sim_c_B->x_data[1].im;
            ucie_sim_c_B->bim = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->b_absrexk,
              ucie_sim_c_B->b_A_im, ucie_sim_c_B);
            ucie_sim_c_B->s += ucie_sim_c_B->bim;
            ucie_sim_c_B->kase_e = 2;
            if ((!rtIsInf(ucie_sim_c_B->s)) && (!rtIsNaN(ucie_sim_c_B->s))) {
              if (ucie_sim_c_B->b_s > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                } else {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                }

                ucie_sim_c_B->x_data[0].re = ucie_sim_c_B->b_temp_im;
                ucie_sim_c_B->x_data[0].im = ucie_sim_c_B->b_temp_re;
              } else {
                ucie_sim_c_B->x_data[0].re = 1.0;
                ucie_sim_c_B->x_data[0].im = 0.0;
              }

              ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_absrexk;
              ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_im;
              ucie_sim_c_B->b_s = ucie_sim_c_B->bim;
              if (ucie_sim_c_B->b_s > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                } else {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                }

                ucie_sim_c_B->x_data[1].re = ucie_sim_c_B->b_temp_im;
                ucie_sim_c_B->x_data[1].im = ucie_sim_c_B->b_temp_re;
              } else {
                ucie_sim_c_B->x_data[1].re = 1.0;
                ucie_sim_c_B->x_data[1].im = 0.0;
              }

              ucie_sim_c_B->ix = 2;
            } else {
              exitg3 = 1;
            }
          } else if (ucie_sim_c_B->ix == 2) {
            ucie_sim_c_B->yk = 0;
            ucie_sim_c_B->b_s = fabs(ucie_sim_c_B->x_data[0].re);
            ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->x_data[1].re);
            if (!(ucie_sim_c_B->b_absrexk <= ucie_sim_c_B->b_s)) {
              ucie_sim_c_B->yk = 1;
            }

            ucie_sim_c_B->c_ix = 2;
            ucie_sim_c_B->x_data[0].re = 0.0;
            ucie_sim_c_B->x_data[0].im = 0.0;
            ucie_sim_c_B->x_data[1].re = 0.0;
            ucie_sim_c_B->x_data[1].im = 0.0;
            ucie_sim_c_B->x_data[ucie_sim_c_B->yk].re = 1.0;
            ucie_sim_c_B->x_data[ucie_sim_c_B->yk].im = 0.0;
            ucie_sim_c_B->kase_e = 1;
            ucie_sim_c_B->ix = 3;
          } else if (ucie_sim_c_B->ix == 3) {
            ucie_sim_c_B->b_temp_im = ucie_sim_c_B->x_data[0].re;
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->b_temp_im;
            ucie_sim_c_B->b_temp_re = ucie_sim_c_B->x_data[0].im;
            ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_temp_re;
            ucie_sim_c_B->b_s = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->b_absrexk,
              ucie_sim_c_B->b_A_im, ucie_sim_c_B);
            ucie_sim_c_B->s = ucie_sim_c_B->b_s;
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[1].re;
            ucie_sim_c_B->b_A_im = ucie_sim_c_B->x_data[1].im;
            ucie_sim_c_B->bim = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->b_absrexk,
              ucie_sim_c_B->b_A_im, ucie_sim_c_B);
            ucie_sim_c_B->s += ucie_sim_c_B->bim;
            if (ucie_sim_c_B->s <= ucie_sim_c_B->x_data[0].re) {
              ucie_sim_c_B->x_data[0].re = 1.0;
              ucie_sim_c_B->x_data[0].im = 0.0;
              ucie_sim_c_B->x_data[1].re = -2.0;
              ucie_sim_c_B->x_data[1].im = 0.0;
              ucie_sim_c_B->kase_e = 1;
              ucie_sim_c_B->ix = 5;
            } else {
              if (ucie_sim_c_B->b_s > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                } else {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                }

                ucie_sim_c_B->x_data[0].re = ucie_sim_c_B->b_temp_im;
                ucie_sim_c_B->x_data[0].im = ucie_sim_c_B->b_temp_re;
              } else {
                ucie_sim_c_B->x_data[0].re = 1.0;
                ucie_sim_c_B->x_data[0].im = 0.0;
              }

              ucie_sim_c_B->b_temp_im = ucie_sim_c_B->b_absrexk;
              ucie_sim_c_B->b_temp_re = ucie_sim_c_B->b_A_im;
              ucie_sim_c_B->b_s = ucie_sim_c_B->bim;
              if (ucie_sim_c_B->b_s > 2.2250738585072014E-308) {
                if (ucie_sim_c_B->b_temp_re == 0.0) {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re = 0.0;
                } else if (ucie_sim_c_B->b_temp_im == 0.0) {
                  ucie_sim_c_B->b_temp_im = 0.0;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                } else {
                  ucie_sim_c_B->b_temp_im /= ucie_sim_c_B->b_s;
                  ucie_sim_c_B->b_temp_re /= ucie_sim_c_B->b_s;
                }

                ucie_sim_c_B->x_data[1].re = ucie_sim_c_B->b_temp_im;
                ucie_sim_c_B->x_data[1].im = ucie_sim_c_B->b_temp_re;
              } else {
                ucie_sim_c_B->x_data[1].re = 1.0;
                ucie_sim_c_B->x_data[1].im = 0.0;
              }

              ucie_sim_c_B->kase_e = 2;
              ucie_sim_c_B->ix = 4;
            }
          } else if (ucie_sim_c_B->ix == 4) {
            ucie_sim_c_B->ix = ucie_sim_c_B->yk;
            ucie_sim_c_B->yk = 0;
            ucie_sim_c_B->b_s = fabs(ucie_sim_c_B->x_data[0].re);
            ucie_sim_c_B->b_absrexk = fabs(ucie_sim_c_B->x_data[1].re);
            if (!(ucie_sim_c_B->b_absrexk <= ucie_sim_c_B->b_s)) {
              ucie_sim_c_B->yk = 1;
            }

            ucie_sim_c_B->kase_e = 1;
            if ((ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->x_data[ucie_sim_c_B->ix]
                  .re, ucie_sim_c_B->x_data[ucie_sim_c_B->ix].im, ucie_sim_c_B)
                 != ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->x_data
                  [ucie_sim_c_B->yk].re, ucie_sim_c_B->x_data[ucie_sim_c_B->yk].
                  im, ucie_sim_c_B)) && (ucie_sim_c_B->c_ix <= 5)) {
              ucie_sim_c_B->c_ix++;
              ucie_sim_c_B->x_data[0].re = 0.0;
              ucie_sim_c_B->x_data[0].im = 0.0;
              ucie_sim_c_B->x_data[1].re = 0.0;
              ucie_sim_c_B->x_data[1].im = 0.0;
              ucie_sim_c_B->x_data[ucie_sim_c_B->yk].re = 1.0;
              ucie_sim_c_B->x_data[ucie_sim_c_B->yk].im = 0.0;
              ucie_sim_c_B->ix = 3;
            } else {
              ucie_sim_c_B->x_data[0].re = 1.0;
              ucie_sim_c_B->x_data[0].im = 0.0;
              ucie_sim_c_B->x_data[1].re = -2.0;
              ucie_sim_c_B->x_data[1].im = 0.0;
              ucie_sim_c_B->ix = 5;
            }
          } else if (ucie_sim_c_B->ix == 5) {
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[0].re;
            ucie_sim_c_B->bim = ucie_sim_c_B->x_data[0].im;
            ucie_sim_c_B->b_s = ucie_sim_c_rt_hypotd_snf(ucie_sim_c_B->b_absrexk,
              ucie_sim_c_B->bim, ucie_sim_c_B);
            ucie_sim_c_B->b_absrexk = ucie_sim_c_B->x_data[1].re;
            ucie_sim_c_B->bim = ucie_sim_c_B->x_data[1].im;
            ucie_sim_c_B->b_s += ucie_sim_c_rt_hypotd_snf
              (ucie_sim_c_B->b_absrexk, ucie_sim_c_B->bim, ucie_sim_c_B);
            ucie_sim_c_B->b_s = 2.0 * ucie_sim_c_B->b_s / 3.0 / 2.0;
            if (ucie_sim_c_B->b_s > ucie_sim_c_B->s) {
              ucie_sim_c_B->s = ucie_sim_c_B->b_s;
            }

            exitg3 = 1;
          }
        } while (exitg3 == 0);

        if (ucie_sim_c_B->s != 0.0) {
          r = 1.0 / ucie_sim_c_B->s / ucie_sim_c_B->oneNormA;
        }

        if (rtIsNaN(r)) {
          ucie_sim_c_B->b_A = false;
          for (ucie_sim_c_B->yk = 0; ucie_sim_c_B->yk < 4; ucie_sim_c_B->yk++) {
            if (ucie_sim_c_B->b_A) {
              ucie_sim_c_B->b_A = true;
            } else {
              ucie_sim_c_B->b_s = ucie_sim_c_B->b_A_data[ucie_sim_c_B->yk].re;
              ucie_sim_c_B->b_A_im = ucie_sim_c_B->b_A_data[ucie_sim_c_B->yk].im;
              if (rtIsNaN(ucie_sim_c_B->b_s) || rtIsNaN(ucie_sim_c_B->b_A_im)) {
                ucie_sim_c_B->b_A = true;
              }
            }
          }

          if (!ucie_sim_c_B->b_A) {
            r = 0.0;
          }
        }

        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  return r;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static boolean_T ucie_sim_c_any_b(const boolean_T x_data[], const int32_T
  x_size[2])
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x_size[1])) {
    boolean_T b;
    b = !x_data[ix - 1];
    if (!b) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_calculateCTLECoefficients_o(real_T dt, real_T
  coef_inCoeff[12], real_T coef_outCoeff[8], real_T coef_inDelay[3], real_T
  coef_outDelay[2], real_T coef_nz[4], real_T coef_np[4], real_T *coef_dt,
  real_T *coef_setSelection, boolean_T *coef_isdefined, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  static const real_T l[4] = { -8.0E+9, -7.13000750506996E+9,
    -6.35462587779425E+9, -5.6635662750731E+9 };

  static const real_T i[4] = { 1.0, 0.89125093813374556, 0.79432823472428149,
    0.70794578438413791 };

  static const real_T h[8] = { -8.0E+9, -8.0E+9, -8.0E+9, -8.0E+9, -3.2E+10,
    -3.2E+10, -3.2E+10, -3.2E+10 };

  emxArray_char_T_ucie_sim_c_T *dt_0;
  emxArray_char_T_ucie_sim_c_T *h_0;
  emxArray_char_T_ucie_sim_c_T *l_0;
  emxArray_char_T_ucie_sim_c_T *l_1;
  emxArray_char_T_ucie_sim_c_T *l_2;
  emxArray_char_T_ucie_sim_c_T *tmp;
  emxArray_char_T_ucie_sim_c_T *tmp_0;
  emxArray_char_T_ucie_sim_c_T *tmp_1;
  emxArray_char_T_ucie_sim_c_T *tmp_2;
  emxArray_char_T_ucie_sim_c_T *tmp_3;
  emxArray_char_T_ucie_sim_c_T *tmp_4;
  emxArray_char_T_ucie_sim_c_T *tmp_5;
  emxArray_char_T_ucie_sim_c_T *tmp_6;
  emxArray_char_T_ucie_sim_c_T *tmp_7;
  emxArray_char_T_ucie_sim_c_T *tmp_8;
  ucie_sim_c_B->p_data[0].im = 0.0;
  ucie_sim_c_B->p_data[1].im = 0.0;
  ucie_sim_c_B->tmp_size_p[0] = 1;
  ucie_sim_c_B->tmp_size_p[1] = 2;
  ucie_sim_c_B->tmp_size_a[0] = 1;
  ucie_sim_c_B->tmp_size_a[1] = 2;
  ucie_sim_c_emxInit_char_T(&l_0, 2);
  ucie_sim_c_emxInit_char_T(&tmp, 2);
  ucie_sim_c_emxInit_char_T(&tmp_0, 2);
  ucie_sim_c_emxInit_char_T(&tmp_1, 2);
  ucie_sim_c_emxInit_char_T(&tmp_2, 2);
  ucie_sim_c_emxInit_char_T(&tmp_3, 2);
  ucie_sim_c_emxInit_char_T(&tmp_4, 2);
  ucie_sim_c_emxInit_char_T(&tmp_5, 2);
  ucie_sim_c_emxInit_char_T(&tmp_6, 2);
  ucie_sim_c_emxInit_char_T(&tmp_7, 2);
  ucie_sim_c_emxInit_char_T(&tmp_8, 2);
  ucie_sim_c_emxInit_char_T(&l_1, 2);
  ucie_sim_c_emxInit_char_T(&l_2, 2);
  ucie_sim_c_emxInit_char_T(&h_0, 2);
  ucie_sim_c_emxInit_char_T(&dt_0, 2);
  for (ucie_sim_c_B->kk = 0; ucie_sim_c_B->kk < 4; ucie_sim_c_B->kk++) {
    ucie_sim_c_B->l = l[ucie_sim_c_B->kk];
    if (!(ucie_sim_c_B->l == ucie_sim_c_B->l)) {
      ucie_sim_c_sprintf_e(ucie_sim_c_B->l, l_0);
      ucie_sim_c_sprintf_e(0.0, tmp);
    }

    ucie_sim_c_B->sel_data[0] = true;
    ucie_sim_c_B->sel_data[1] = false;
    ucie_sim_c_B->nz = ucie_sim_c_B->sel_data[0];
    ucie_sim_c_B->nz_tmp = ucie_sim_c_B->sel_data[1];
    ucie_sim_c_B->nz += ucie_sim_c_B->nz_tmp;
    if (ucie_sim_c_B->nz == 0) {
      ucie_sim_c_sprintf_e(-8.0E+9, tmp_0);
      ucie_sim_c_sprintf_e(0.0, tmp_1);
    }

    if (ucie_sim_c_B->nz > 1) {
      ucie_sim_c_sprintf_e(-8.0E+9, tmp_2);
      ucie_sim_c_sprintf_e(0.0, tmp_3);
    }

    if (ucie_sim_c_B->nz == 0) {
      ucie_sim_c_sprintf_e(-3.2E+10, tmp_4);
      ucie_sim_c_sprintf_e(0.0, tmp_5);
    }

    if (ucie_sim_c_B->nz > 1) {
      ucie_sim_c_sprintf_e(-3.2E+10, tmp_6);
      ucie_sim_c_sprintf_e(0.0, tmp_7);
    }

    ucie_sim_c_B->b_x_data[0] = 1.0 / ucie_sim_c_B->l;
    ucie_sim_c_B->B_j[0] = 1.0;
    ucie_sim_c_B->l = -ucie_sim_c_B->b_x_data[0];
    ucie_sim_c_B->B_j[1] = ucie_sim_c_B->l;
    ucie_sim_c_B->p_data[0].re = ucie_sim_c_B->B_j[0];
    ucie_sim_c_B->p_data[1].re = ucie_sim_c_B->B_j[1];
    for (ucie_sim_c_B->nz_tmp = 0; ucie_sim_c_B->nz_tmp < 2;
         ucie_sim_c_B->nz_tmp++) {
      ucie_sim_c_B->sel_data[0] = true;
      ucie_sim_c_B->sel_data[1] = true;
      ucie_sim_c_B->sel_data[ucie_sim_c_B->nz_tmp] = false;
      ucie_sim_c_B->trueCount = 0;
      for (ucie_sim_c_B->nz = 0; ucie_sim_c_B->nz < 2; ucie_sim_c_B->nz++) {
        if (ucie_sim_c_B->sel_data[ucie_sim_c_B->nz]) {
          ucie_sim_c_B->trueCount++;
        }
      }

      ucie_sim_c_B->tmp_size_idx_1 = ucie_sim_c_B->trueCount;
      ucie_sim_c_B->trueCount = 0;
      for (ucie_sim_c_B->nz = 0; ucie_sim_c_B->nz < 2; ucie_sim_c_B->nz++) {
        if (ucie_sim_c_B->sel_data[ucie_sim_c_B->nz]) {
          ucie_sim_c_B->tmp_data_p[ucie_sim_c_B->trueCount] = ucie_sim_c_B->nz;
          ucie_sim_c_B->trueCount++;
        }
      }

      ucie_sim_c_B->nz = ucie_sim_c_B->tmp_size_idx_1;
      for (ucie_sim_c_B->tmp_size_idx_1 = 0; ucie_sim_c_B->tmp_size_idx_1 <
           ucie_sim_c_B->nz; ucie_sim_c_B->tmp_size_idx_1++) {
        ucie_sim_c_B->b_x_data[ucie_sim_c_B->tmp_size_idx_1] = 1.0 / h
          [(ucie_sim_c_B->tmp_data_p[ucie_sim_c_B->tmp_size_idx_1] << 2) +
          ucie_sim_c_B->kk];
      }

      ucie_sim_c_B->B_j[0] = 1.0;
      for (ucie_sim_c_B->trueCount = 0; ucie_sim_c_B->trueCount <
           ucie_sim_c_B->nz; ucie_sim_c_B->trueCount++) {
        ucie_sim_c_B->B_j[ucie_sim_c_B->trueCount + 1] = -ucie_sim_c_B->
          b_x_data[ucie_sim_c_B->trueCount] * ucie_sim_c_B->B_j
          [ucie_sim_c_B->trueCount];
        for (ucie_sim_c_B->tmp_size_idx_1 = ucie_sim_c_B->trueCount + 1;
             ucie_sim_c_B->tmp_size_idx_1 >= 2; ucie_sim_c_B->tmp_size_idx_1--)
        {
          ucie_sim_c_B->B_j[1] -= ucie_sim_c_B->b_x_data[ucie_sim_c_B->trueCount]
            * ucie_sim_c_B->B_j[0];
        }
      }

      ucie_sim_c_B->q_data[ucie_sim_c_B->nz_tmp << 1].re = ucie_sim_c_B->B_j[0];
      ucie_sim_c_B->q_data[ucie_sim_c_B->nz_tmp << 1].im = 0.0;
      ucie_sim_c_B->q_data[1 + (ucie_sim_c_B->nz_tmp << 1)].re =
        ucie_sim_c_B->B_j[1];
      ucie_sim_c_B->q_data[1 + (ucie_sim_c_B->nz_tmp << 1)].im = 0.0;
      ucie_sim_c_B->cTmp_data[ucie_sim_c_B->nz_tmp] = ucie_sim_c_B->
        p_data[ucie_sim_c_B->nz_tmp];
    }

    ucie_sim_c_linsolve_fq(ucie_sim_c_B->q_data, ucie_sim_c_B->cTmp_data,
      ucie_sim_c_B);
    ucie_sim_c_B->l = ucie_sim_c_B->cTmp_data[0].re;
    ucie_sim_c_B->cTmp_im = ucie_sim_c_B->cTmp_data[0].im;
    ucie_sim_c_B->tmp_data_ow[0] = (rtIsNaN(ucie_sim_c_B->l) || rtIsNaN
      (ucie_sim_c_B->cTmp_im));
    ucie_sim_c_B->l = ucie_sim_c_B->cTmp_data[1].re;
    ucie_sim_c_B->cTmp_im = ucie_sim_c_B->cTmp_data[1].im;
    ucie_sim_c_B->tmp_data_ow[1] = (rtIsNaN(ucie_sim_c_B->l) || rtIsNaN
      (ucie_sim_c_B->cTmp_im));
    if (ucie_sim_c_any_b(ucie_sim_c_B->tmp_data_ow, ucie_sim_c_B->tmp_size_p)) {
      ucie_sim_c_sprintf_e(2.0, tmp_8);
      ucie_sim_c_B->b_x_data[0] = 8.0E+9;
      ucie_sim_c_B->b_x_data[1] = 3.2E+10;
      if (ucie_sim_c_B->b_x_data[0] < ucie_sim_c_B->b_x_data[1]) {
        ucie_sim_c_B->l = ucie_sim_c_B->b_x_data[1];
      } else {
        ucie_sim_c_B->l = ucie_sim_c_B->b_x_data[0];
      }

      ucie_sim_c_sprintf_e(ucie_sim_c_B->l, l_1);
      ucie_sim_c_B->b_x_data[0] = 8.0E+9;
      ucie_sim_c_B->b_x_data[1] = 3.2E+10;
      ucie_sim_c_B->l = ucie_sim_c_B->b_x_data[0];
      ucie_sim_c_B->l *= ucie_sim_c_B->b_x_data[1];
      ucie_sim_c_sprintf_e(ucie_sim_c_B->l, l_2);
    }

    ucie_sim_c_B->l = i[ucie_sim_c_B->kk];
    ucie_sim_c_B->coeff_data[0].re = ucie_sim_c_B->l * ucie_sim_c_B->cTmp_data[0]
      .re;
    ucie_sim_c_B->coeff_data[0].im = ucie_sim_c_B->l * ucie_sim_c_B->cTmp_data[0]
      .im;
    ucie_sim_c_B->coeff_data[1].re = ucie_sim_c_B->l * ucie_sim_c_B->cTmp_data[1]
      .re;
    ucie_sim_c_B->coeff_data[1].im = ucie_sim_c_B->l * ucie_sim_c_B->cTmp_data[1]
      .im;
    ucie_sim_c_B->inCoeff1_data[0].re = 0.0;
    ucie_sim_c_B->inCoeff1_data[1].re = 0.0;
    ucie_sim_c_B->inCoeff1_data[2].re = 0.0;
    memset(&ucie_sim_c_B->denTmp_data[0], 0, 5U * sizeof(creal_T));
    ucie_sim_c_B->l = -5.0265482457436691E+10 * dt / 2.0;
    ucie_sim_c_B->l = exp(ucie_sim_c_B->l);
    ucie_sim_c_B->num0_data[0] = ucie_sim_c_B->l;
    ucie_sim_c_B->l = -2.0106192982974677E+11 * dt / 2.0;
    ucie_sim_c_B->l = exp(ucie_sim_c_B->l);
    ucie_sim_c_B->num0_data[1] = ucie_sim_c_B->l;
    ucie_sim_c_B->num0_data[0] = 1.0 - ucie_sim_c_B->num0_data[0];
    ucie_sim_c_B->cTmp_im = -5.0265482457436691E+10 * dt;
    ucie_sim_c_B->l = exp(ucie_sim_c_B->cTmp_im);
    ucie_sim_c_B->cTmp_im = ucie_sim_c_B->l;
    ucie_sim_c_B->den1_data[0] = ucie_sim_c_B->cTmp_im;
    ucie_sim_c_B->num0_data[1] = 1.0 - ucie_sim_c_B->num0_data[1];
    ucie_sim_c_B->cTmp_im = -2.0106192982974677E+11 * dt;
    ucie_sim_c_B->cTmp_im = exp(ucie_sim_c_B->cTmp_im);
    ucie_sim_c_B->den1_data[1] = ucie_sim_c_B->cTmp_im;
    ucie_sim_c_B->den1_data[0] = -ucie_sim_c_B->den1_data[0];
    ucie_sim_c_B->num1 = 5.0265482457436691E+10 * dt / 2.0;
    ucie_sim_c_B->num1 = exp(ucie_sim_c_B->num1);
    ucie_sim_c_B->num1_data[0] = ucie_sim_c_B->num1;
    ucie_sim_c_B->b_x_data[0] = ucie_sim_c_B->l;
    ucie_sim_c_B->den1_data[1] = -ucie_sim_c_B->den1_data[1];
    ucie_sim_c_B->num1 = 2.0106192982974677E+11 * dt / 2.0;
    ucie_sim_c_B->num1 = exp(ucie_sim_c_B->num1);
    ucie_sim_c_B->num1_data[1] = ucie_sim_c_B->num1;
    ucie_sim_c_B->l = ucie_sim_c_B->cTmp_im;
    ucie_sim_c_B->b_x_data[1] = ucie_sim_c_B->l;
    ucie_sim_c_B->num1_data[0] = (ucie_sim_c_B->num1_data[0] - 1.0) *
      ucie_sim_c_B->b_x_data[0];
    ucie_sim_c_B->num1_data[1] = (ucie_sim_c_B->num1_data[1] - 1.0) *
      ucie_sim_c_B->b_x_data[1];
    ucie_sim_c_B->b_x_data[0] = 8.0E+9;
    ucie_sim_c_B->b_x_data[1] = 3.2E+10;
    ucie_sim_c_B->indx = (ucie_sim_c_B->b_x_data[0] < ucie_sim_c_B->b_x_data[1]);
    ucie_sim_c_B->tmp_data_j[0] = rtIsNaN(ucie_sim_c_B->num1_data[0]);
    ucie_sim_c_B->tmp_data_j[1] = rtIsNaN(ucie_sim_c_B->num1_data[1]);
    if (ucie_sim_c_any_b(ucie_sim_c_B->tmp_data_j, ucie_sim_c_B->tmp_size_a)) {
      ucie_sim_c_sprintf_e(h[ucie_sim_c_B->kk + (ucie_sim_c_B->indx << 2)], h_0);
      ucie_sim_c_sprintf_e(1.0 / dt, dt_0);
    }

    for (ucie_sim_c_B->indx = 0; ucie_sim_c_B->indx < 2; ucie_sim_c_B->indx++) {
      memset(&ucie_sim_c_B->numTmp_data[0], 0, 5U * sizeof(creal_T));
      ucie_sim_c_B->numTmp_data[2].re = ucie_sim_c_B->num0_data
        [ucie_sim_c_B->indx];
      ucie_sim_c_B->numTmp_data[2].im = 0.0;
      ucie_sim_c_B->numTmp_data[3].re = ucie_sim_c_B->num1_data
        [ucie_sim_c_B->indx];
      ucie_sim_c_B->numTmp_data[3].im = 0.0;
      for (ucie_sim_c_B->nz_tmp = 0; ucie_sim_c_B->nz_tmp < 2;
           ucie_sim_c_B->nz_tmp++) {
        if (ucie_sim_c_B->nz_tmp != ucie_sim_c_B->indx) {
          memcpy(&ucie_sim_c_B->A_data[0], &ucie_sim_c_B->numTmp_data[0], 5U *
                 sizeof(creal_T));
          ucie_sim_c_B->B_j[0] = 0.0;
          ucie_sim_c_B->B_j[1] = 1.0;
          ucie_sim_c_B->B_j[2] = ucie_sim_c_B->den1_data[ucie_sim_c_B->nz_tmp];
          memset(&ucie_sim_c_B->numTmp_data[0], 0, 5U * sizeof(creal_T));
          ucie_sim_c_B->numTmp_data[0].re = 0.0 * ucie_sim_c_B->A_data[1].re;
          ucie_sim_c_B->numTmp_data[0].im += 0.0 * ucie_sim_c_B->A_data[1].im;
          ucie_sim_c_B->numTmp_data[1].re += 0.0 * ucie_sim_c_B->A_data[2].re;
          ucie_sim_c_B->numTmp_data[1].im += 0.0 * ucie_sim_c_B->A_data[2].im;
          ucie_sim_c_B->numTmp_data[2].re += 0.0 * ucie_sim_c_B->A_data[3].re;
          ucie_sim_c_B->numTmp_data[2].im += 0.0 * ucie_sim_c_B->A_data[3].im;
          ucie_sim_c_B->numTmp_data[3].re += 0.0 * ucie_sim_c_B->A_data[4].re;
          ucie_sim_c_B->numTmp_data[3].im += 0.0 * ucie_sim_c_B->A_data[4].im;
          for (ucie_sim_c_B->nz = 0; ucie_sim_c_B->nz < 2; ucie_sim_c_B->nz++) {
            ucie_sim_c_B->trueCount = 4 - ucie_sim_c_B->nz;
            for (ucie_sim_c_B->p_k = 0; ucie_sim_c_B->p_k <=
                 ucie_sim_c_B->trueCount; ucie_sim_c_B->p_k++) {
              ucie_sim_c_B->l = ucie_sim_c_B->B_j[ucie_sim_c_B->nz + 1];
              ucie_sim_c_B->tmp_size_idx_1 = ucie_sim_c_B->nz +
                ucie_sim_c_B->p_k;
              ucie_sim_c_B->numTmp_data[ucie_sim_c_B->tmp_size_idx_1].re +=
                ucie_sim_c_B->l * ucie_sim_c_B->A_data[ucie_sim_c_B->p_k].re;
              ucie_sim_c_B->numTmp_data[ucie_sim_c_B->tmp_size_idx_1].im +=
                ucie_sim_c_B->l * ucie_sim_c_B->A_data[ucie_sim_c_B->p_k].im;
            }
          }
        }
      }

      ucie_sim_c_B->l = ucie_sim_c_B->coeff_data[ucie_sim_c_B->indx].re;
      ucie_sim_c_B->cTmp_im = ucie_sim_c_B->coeff_data[ucie_sim_c_B->indx].im;
      ucie_sim_c_B->num1 = ucie_sim_c_B->l * ucie_sim_c_B->numTmp_data[2].re -
        ucie_sim_c_B->cTmp_im * ucie_sim_c_B->numTmp_data[2].im;
      ucie_sim_c_B->inCoeff1_data[0].re += ucie_sim_c_B->num1;
      ucie_sim_c_B->num1 = ucie_sim_c_B->l * ucie_sim_c_B->numTmp_data[3].re -
        ucie_sim_c_B->cTmp_im * ucie_sim_c_B->numTmp_data[3].im;
      ucie_sim_c_B->inCoeff1_data[1].re += ucie_sim_c_B->num1;
      ucie_sim_c_B->l = ucie_sim_c_B->l * ucie_sim_c_B->numTmp_data[4].re -
        ucie_sim_c_B->cTmp_im * ucie_sim_c_B->numTmp_data[4].im;
      ucie_sim_c_B->inCoeff1_data[2].re += ucie_sim_c_B->l;
    }

    ucie_sim_c_B->denTmp_data[2].re = 1.0;
    ucie_sim_c_B->denTmp_data[2].im = 0.0;
    ucie_sim_c_B->B_j[0] = 0.0;
    ucie_sim_c_B->B_j[1] = 1.0;
    for (ucie_sim_c_B->indx = 0; ucie_sim_c_B->indx < 2; ucie_sim_c_B->indx++) {
      memcpy(&ucie_sim_c_B->A_data[0], &ucie_sim_c_B->denTmp_data[0], 5U *
             sizeof(creal_T));
      ucie_sim_c_B->B_j[2] = ucie_sim_c_B->den1_data[ucie_sim_c_B->indx];
      memset(&ucie_sim_c_B->denTmp_data[0], 0, 5U * sizeof(creal_T));
      ucie_sim_c_B->denTmp_data[0].re = 0.0 * ucie_sim_c_B->A_data[1].re;
      ucie_sim_c_B->denTmp_data[0].im += 0.0 * ucie_sim_c_B->A_data[1].im;
      ucie_sim_c_B->denTmp_data[1].re += 0.0 * ucie_sim_c_B->A_data[2].re;
      ucie_sim_c_B->denTmp_data[1].im += 0.0 * ucie_sim_c_B->A_data[2].im;
      ucie_sim_c_B->denTmp_data[2].re += 0.0 * ucie_sim_c_B->A_data[3].re;
      ucie_sim_c_B->denTmp_data[2].im += 0.0 * ucie_sim_c_B->A_data[3].im;
      ucie_sim_c_B->denTmp_data[3].re += 0.0 * ucie_sim_c_B->A_data[4].re;
      ucie_sim_c_B->denTmp_data[3].im += 0.0 * ucie_sim_c_B->A_data[4].im;
      for (ucie_sim_c_B->nz_tmp = 0; ucie_sim_c_B->nz_tmp < 2;
           ucie_sim_c_B->nz_tmp++) {
        ucie_sim_c_B->nz = 4 - ucie_sim_c_B->nz_tmp;
        for (ucie_sim_c_B->trueCount = 0; ucie_sim_c_B->trueCount <=
             ucie_sim_c_B->nz; ucie_sim_c_B->trueCount++) {
          ucie_sim_c_B->l = ucie_sim_c_B->B_j[ucie_sim_c_B->nz_tmp + 1];
          ucie_sim_c_B->tmp_size_idx_1 = ucie_sim_c_B->nz_tmp +
            ucie_sim_c_B->trueCount;
          ucie_sim_c_B->denTmp_data[ucie_sim_c_B->tmp_size_idx_1].re +=
            ucie_sim_c_B->l * ucie_sim_c_B->A_data[ucie_sim_c_B->trueCount].re;
          ucie_sim_c_B->denTmp_data[ucie_sim_c_B->tmp_size_idx_1].im +=
            ucie_sim_c_B->l * ucie_sim_c_B->A_data[ucie_sim_c_B->trueCount].im;
        }
      }
    }

    coef_inCoeff[3 * ucie_sim_c_B->kk] = ucie_sim_c_B->inCoeff1_data[0].re;
    coef_inCoeff[3 * ucie_sim_c_B->kk + 1] = ucie_sim_c_B->inCoeff1_data[1].re;
    coef_inCoeff[3 * ucie_sim_c_B->kk + 2] = ucie_sim_c_B->inCoeff1_data[2].re;
    ucie_sim_c_B->nz_tmp = ucie_sim_c_B->kk << 1;
    coef_outCoeff[ucie_sim_c_B->nz_tmp] = ucie_sim_c_B->denTmp_data[3].re;
    coef_outCoeff[ucie_sim_c_B->nz_tmp + 1] = ucie_sim_c_B->denTmp_data[4].re;
  }

  ucie_sim_c_emxFree_char_T(&dt_0);
  ucie_sim_c_emxFree_char_T(&h_0);
  ucie_sim_c_emxFree_char_T(&l_2);
  ucie_sim_c_emxFree_char_T(&l_1);
  ucie_sim_c_emxFree_char_T(&tmp_8);
  ucie_sim_c_emxFree_char_T(&tmp_7);
  ucie_sim_c_emxFree_char_T(&tmp_6);
  ucie_sim_c_emxFree_char_T(&tmp_5);
  ucie_sim_c_emxFree_char_T(&tmp_4);
  ucie_sim_c_emxFree_char_T(&tmp_3);
  ucie_sim_c_emxFree_char_T(&tmp_2);
  ucie_sim_c_emxFree_char_T(&tmp_1);
  ucie_sim_c_emxFree_char_T(&tmp_0);
  ucie_sim_c_emxFree_char_T(&tmp);
  ucie_sim_c_emxFree_char_T(&l_0);
  coef_inDelay[0] = 0.0;
  coef_inDelay[1] = 0.0;
  coef_inDelay[2] = 0.0;
  coef_outDelay[0] = 0.0;
  coef_outDelay[1] = 0.0;
  coef_nz[0] = 1.0;
  coef_np[0] = 2.0;
  coef_nz[1] = 1.0;
  coef_np[1] = 2.0;
  coef_nz[2] = 1.0;
  coef_np[2] = 2.0;
  coef_nz[3] = 1.0;
  coef_np[3] = 2.0;
  *coef_dt = dt;
  *coef_setSelection = 1.0;
  *coef_isdefined = true;
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_sort_h(real_T x_data[], int32_T x_size[2])
{
  real_T x4[4];
  real_T b_x_data[2];
  real_T xwork_data[2];
  int32_T b;
  int32_T loop_ub;
  int32_T wOffset;
  int8_T perm[4];
  loop_ub = x_size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&b_x_data[0], &x_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  if (x_size[1] != 0) {
    int32_T i1;
    int32_T ib;
    int32_T n;
    int32_T nNaNs;
    if (loop_ub - 1 >= 0) {
      memcpy(&b_x_data[0], &x_data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    n = x_size[1] - 1;
    x4[0] = 0.0;
    x4[1] = 0.0;
    x4[2] = 0.0;
    x4[3] = 0.0;
    nNaNs = 0;
    ib = 0;
    b = loop_ub;
    for (wOffset = 0; wOffset < b; wOffset++) {
      if (rtIsNaN(b_x_data[wOffset])) {
        xwork_data[n - nNaNs] = b_x_data[wOffset];
        nNaNs++;
      } else {
        ib++;
        x4[ib - 1] = b_x_data[wOffset];
        if (ib == 4) {
          real_T tmp;
          real_T tmp_0;
          int32_T i2;
          int32_T i3;
          int32_T i4;
          int32_T perm_0;
          int32_T perm_1;
          ib = wOffset - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }

          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }

          tmp = x4[i1 - 1];
          tmp_0 = x4[i3 - 1];
          if (tmp <= tmp_0) {
            tmp = x4[i2 - 1];
            if (tmp <= tmp_0) {
              perm_0 = i1;
              perm_1 = i2;
              i1 = i3;
              i2 = i4;
            } else if (tmp <= x4[i4 - 1]) {
              perm_0 = i1;
              perm_1 = i3;
              i1 = i2;
              i2 = i4;
            } else {
              perm_0 = i1;
              perm_1 = i3;
              i1 = i4;
            }
          } else {
            tmp_0 = x4[i4 - 1];
            if (tmp <= tmp_0) {
              if (x4[i2 - 1] <= tmp_0) {
                perm_0 = i3;
                perm_1 = i1;
                i1 = i2;
                i2 = i4;
              } else {
                perm_0 = i3;
                perm_1 = i1;
                i1 = i4;
              }
            } else {
              perm_0 = i3;
              perm_1 = i4;
            }
          }

          b_x_data[ib - 3] = x4[perm_0 - 1];
          b_x_data[ib - 2] = x4[perm_1 - 1];
          b_x_data[ib - 1] = x4[i1 - 1];
          b_x_data[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }

    wOffset = x_size[1] - nNaNs;
    if (ib > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }

      i1 = (uint8_T)ib;
      for (b = 0; b < i1; b++) {
        b_x_data[(wOffset - ib) + b] = x4[perm[b] - 1];
      }
    }

    ib = nNaNs >> 1;
    for (b = 0; b < ib; b++) {
      b_x_data[wOffset] = xwork_data[n];
      b_x_data[n] = xwork_data[wOffset];
    }

    if (((uint32_T)nNaNs & 1U) != 0U) {
      b = wOffset + ib;
      b_x_data[b] = xwork_data[b];
    }
  }

  x_size[0] = 1;
  x_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&x_data[0], &b_x_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_diff_o(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2])
{
  int32_T dimSize;
  int32_T m;
  dimSize = x_size[1];
  if (x_size[1] == 0) {
    y_size[0] = 1;
    y_size[1] = 0;
  } else if (x_size[1] - 1 < 1) {
    y_size[0] = 1;
    y_size[1] = 0;
  } else {
    int8_T ySize_idx_1;
    ySize_idx_1 = (int8_T)(x_size[1] - 1);
    y_size[0] = 1;
    y_size[1] = ySize_idx_1;
    if (y_size[1] != 0) {
      real_T work_data_idx_0;
      work_data_idx_0 = x_data[0];
      for (m = 2; m <= dimSize; m++) {
        real_T tmp1;
        real_T tmp2;
        tmp1 = x_data[1];
        tmp2 = work_data_idx_0;
        work_data_idx_0 = tmp1;
        tmp1 -= tmp2;
        y_data[0] = tmp1;
      }
    }
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_merge_o(int32_T idx_data[], real_T x_data[], int32_T
  offset, int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[])
{
  int32_T q;
  if (nq != 0) {
    int32_T iout;
    int32_T n;
    int32_T qend;
    qend = np + nq;
    n = qend;
    for (q = 0; q < n; q++) {
      iout = offset + q;
      iwork_data[q] = idx_data[iout];
      xwork_data[q] = x_data[iout];
    }

    n = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      int32_T exitg2;
      do {
        exitg2 = 0;
        iout++;
        if (xwork_data[n] <= xwork_data[q]) {
          idx_data[iout] = iwork_data[n];
          x_data[iout] = xwork_data[n];
          n++;
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      idx_data[iout] = iwork_data[q];
      x_data[iout] = xwork_data[q];
      if (q + 1 < qend) {
        q++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    qend = iout - n;
    for (q = n + 1; q <= np; q++) {
      iout = qend + q;
      idx_data[iout] = iwork_data[q - 1];
      x_data[iout] = xwork_data[q - 1];
    }
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_sort_hz(real_T x_data[], const int32_T *x_size, int32_T
  varargin_1, B_ucie_sim_c_T *ucie_sim_c_B)
{
  int32_T loop_ub_tmp;
  int32_T perm;
  int32_T perm_0;
  int32_T tailOffset;
  int32_T vwork_size;
  int8_T d_idx_0;
  if (varargin_1 <= 1) {
    ucie_sim_c_B->wOffset = *x_size;
  } else {
    ucie_sim_c_B->wOffset = 1;
  }

  ucie_sim_c_B->b_ph = ucie_sim_c_B->wOffset - 1;
  vwork_size = ucie_sim_c_B->b_ph + 1;
  ucie_sim_c_B->vstride = 1;
  ucie_sim_c_B->c_d = (uint8_T)(varargin_1 - 1);
  for (ucie_sim_c_B->n_o = 0; ucie_sim_c_B->n_o < ucie_sim_c_B->c_d;
       ucie_sim_c_B->n_o++) {
    ucie_sim_c_B->vstride *= *x_size;
  }

  for (ucie_sim_c_B->c_d = 0; ucie_sim_c_B->c_d < ucie_sim_c_B->vstride;
       ucie_sim_c_B->c_d++) {
    for (ucie_sim_c_B->n_o = 0; ucie_sim_c_B->n_o <= ucie_sim_c_B->b_ph;
         ucie_sim_c_B->n_o++) {
      ucie_sim_c_B->vwork_data[ucie_sim_c_B->n_o] = x_data[ucie_sim_c_B->n_o *
        ucie_sim_c_B->vstride + ucie_sim_c_B->c_d];
    }

    d_idx_0 = (int8_T)vwork_size;
    tailOffset = vwork_size;
    loop_ub_tmp = d_idx_0;
    if (loop_ub_tmp - 1 >= 0) {
      memset(&ucie_sim_c_B->idx_data[0], 0, (uint32_T)loop_ub_tmp * sizeof
             (int32_T));
    }

    ucie_sim_c_B->n_o = vwork_size - 1;
    ucie_sim_c_B->x4[0] = 0.0;
    ucie_sim_c_B->idx4[0] = 0;
    ucie_sim_c_B->x4[1] = 0.0;
    ucie_sim_c_B->idx4[1] = 0;
    ucie_sim_c_B->x4[2] = 0.0;
    ucie_sim_c_B->idx4[2] = 0;
    ucie_sim_c_B->x4[3] = 0.0;
    ucie_sim_c_B->idx4[3] = 0;
    ucie_sim_c_B->bLen = 0;
    ucie_sim_c_B->ib = 0;
    for (ucie_sim_c_B->wOffset = 0; ucie_sim_c_B->wOffset < tailOffset;
         ucie_sim_c_B->wOffset++) {
      if (rtIsNaN(ucie_sim_c_B->vwork_data[ucie_sim_c_B->wOffset])) {
        ucie_sim_c_B->i2_c = ucie_sim_c_B->n_o - ucie_sim_c_B->bLen;
        ucie_sim_c_B->idx_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->wOffset + 1;
        ucie_sim_c_B->xwork_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->
          vwork_data[ucie_sim_c_B->wOffset];
        ucie_sim_c_B->bLen++;
      } else {
        ucie_sim_c_B->ib++;
        ucie_sim_c_B->idx4[ucie_sim_c_B->ib - 1] = (int8_T)
          (ucie_sim_c_B->wOffset + 1);
        ucie_sim_c_B->x4[ucie_sim_c_B->ib - 1] = ucie_sim_c_B->
          vwork_data[ucie_sim_c_B->wOffset];
        if (ucie_sim_c_B->ib == 4) {
          ucie_sim_c_B->ib = ucie_sim_c_B->wOffset - ucie_sim_c_B->bLen;
          if (ucie_sim_c_B->x4[0] <= ucie_sim_c_B->x4[1]) {
            ucie_sim_c_B->i1_j = 1;
            ucie_sim_c_B->i2_c = 2;
          } else {
            ucie_sim_c_B->i1_j = 2;
            ucie_sim_c_B->i2_c = 1;
          }

          if (ucie_sim_c_B->x4[2] <= ucie_sim_c_B->x4[3]) {
            ucie_sim_c_B->i3_h = 3;
            ucie_sim_c_B->i4_d = 4;
          } else {
            ucie_sim_c_B->i3_h = 4;
            ucie_sim_c_B->i4_d = 3;
          }

          ucie_sim_c_B->x4_g = ucie_sim_c_B->x4[ucie_sim_c_B->i1_j - 1];
          ucie_sim_c_B->x4_e = ucie_sim_c_B->x4[ucie_sim_c_B->i3_h - 1];
          if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_e) {
            ucie_sim_c_B->x4_g = ucie_sim_c_B->x4[ucie_sim_c_B->i2_c - 1];
            if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_e) {
              perm = ucie_sim_c_B->i1_j;
              perm_0 = ucie_sim_c_B->i2_c;
              ucie_sim_c_B->i1_j = ucie_sim_c_B->i3_h;
              ucie_sim_c_B->i2_c = ucie_sim_c_B->i4_d;
            } else if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4[ucie_sim_c_B->i4_d
                       - 1]) {
              perm = ucie_sim_c_B->i1_j;
              perm_0 = ucie_sim_c_B->i3_h;
              ucie_sim_c_B->i1_j = ucie_sim_c_B->i2_c;
              ucie_sim_c_B->i2_c = ucie_sim_c_B->i4_d;
            } else {
              perm = ucie_sim_c_B->i1_j;
              perm_0 = ucie_sim_c_B->i3_h;
              ucie_sim_c_B->i1_j = ucie_sim_c_B->i4_d;
            }
          } else {
            ucie_sim_c_B->x4_e = ucie_sim_c_B->x4[ucie_sim_c_B->i4_d - 1];
            if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_e) {
              if (ucie_sim_c_B->x4[ucie_sim_c_B->i2_c - 1] <= ucie_sim_c_B->x4_e)
              {
                perm = ucie_sim_c_B->i3_h;
                perm_0 = ucie_sim_c_B->i1_j;
                ucie_sim_c_B->i1_j = ucie_sim_c_B->i2_c;
                ucie_sim_c_B->i2_c = ucie_sim_c_B->i4_d;
              } else {
                perm = ucie_sim_c_B->i3_h;
                perm_0 = ucie_sim_c_B->i1_j;
                ucie_sim_c_B->i1_j = ucie_sim_c_B->i4_d;
              }
            } else {
              perm = ucie_sim_c_B->i3_h;
              perm_0 = ucie_sim_c_B->i4_d;
            }
          }

          ucie_sim_c_B->idx_data[ucie_sim_c_B->ib - 3] = ucie_sim_c_B->idx4[perm
            - 1];
          ucie_sim_c_B->idx_data[ucie_sim_c_B->ib - 2] = ucie_sim_c_B->
            idx4[perm_0 - 1];
          ucie_sim_c_B->idx_data[ucie_sim_c_B->ib - 1] = ucie_sim_c_B->
            idx4[ucie_sim_c_B->i1_j - 1];
          ucie_sim_c_B->idx_data[ucie_sim_c_B->ib] = ucie_sim_c_B->
            idx4[ucie_sim_c_B->i2_c - 1];
          ucie_sim_c_B->vwork_data[ucie_sim_c_B->ib - 3] = ucie_sim_c_B->x4[perm
            - 1];
          ucie_sim_c_B->vwork_data[ucie_sim_c_B->ib - 2] = ucie_sim_c_B->
            x4[perm_0 - 1];
          ucie_sim_c_B->vwork_data[ucie_sim_c_B->ib - 1] = ucie_sim_c_B->
            x4[ucie_sim_c_B->i1_j - 1];
          ucie_sim_c_B->vwork_data[ucie_sim_c_B->ib] = ucie_sim_c_B->
            x4[ucie_sim_c_B->i2_c - 1];
          ucie_sim_c_B->ib = 0;
        }
      }
    }

    ucie_sim_c_B->wOffset = vwork_size - ucie_sim_c_B->bLen;
    if (ucie_sim_c_B->ib > 0) {
      ucie_sim_c_B->perm[1] = 0;
      ucie_sim_c_B->perm[2] = 0;
      ucie_sim_c_B->perm[3] = 0;
      if (ucie_sim_c_B->ib == 1) {
        ucie_sim_c_B->perm[0] = 1;
      } else if (ucie_sim_c_B->ib == 2) {
        ucie_sim_c_B->x4_g = ucie_sim_c_B->x4[0];
        ucie_sim_c_B->x4_e = ucie_sim_c_B->x4[1];
        if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_e) {
          ucie_sim_c_B->perm[0] = 1;
          ucie_sim_c_B->perm[1] = 2;
        } else {
          ucie_sim_c_B->perm[0] = 2;
          ucie_sim_c_B->perm[1] = 1;
        }
      } else {
        ucie_sim_c_B->x4_g = ucie_sim_c_B->x4[0];
        ucie_sim_c_B->x4_e = ucie_sim_c_B->x4[1];
        if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_e) {
          ucie_sim_c_B->x4_a = ucie_sim_c_B->x4[2];
          if (ucie_sim_c_B->x4_e <= ucie_sim_c_B->x4_a) {
            ucie_sim_c_B->perm[0] = 1;
            ucie_sim_c_B->perm[1] = 2;
            ucie_sim_c_B->perm[2] = 3;
          } else if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_a) {
            ucie_sim_c_B->perm[0] = 1;
            ucie_sim_c_B->perm[1] = 3;
            ucie_sim_c_B->perm[2] = 2;
          } else {
            ucie_sim_c_B->perm[0] = 3;
            ucie_sim_c_B->perm[1] = 1;
            ucie_sim_c_B->perm[2] = 2;
          }
        } else {
          ucie_sim_c_B->x4_a = ucie_sim_c_B->x4[2];
          if (ucie_sim_c_B->x4_g <= ucie_sim_c_B->x4_a) {
            ucie_sim_c_B->perm[0] = 2;
            ucie_sim_c_B->perm[1] = 1;
            ucie_sim_c_B->perm[2] = 3;
          } else if (ucie_sim_c_B->x4_e <= ucie_sim_c_B->x4_a) {
            ucie_sim_c_B->perm[0] = 2;
            ucie_sim_c_B->perm[1] = 3;
            ucie_sim_c_B->perm[2] = 1;
          } else {
            ucie_sim_c_B->perm[0] = 3;
            ucie_sim_c_B->perm[1] = 2;
            ucie_sim_c_B->perm[2] = 1;
          }
        }
      }

      ucie_sim_c_B->i1_j = (uint8_T)ucie_sim_c_B->ib;
      for (tailOffset = 0; tailOffset < ucie_sim_c_B->i1_j; tailOffset++) {
        perm = ucie_sim_c_B->perm[tailOffset];
        ucie_sim_c_B->i2_c = (ucie_sim_c_B->wOffset - ucie_sim_c_B->ib) +
          tailOffset;
        ucie_sim_c_B->idx_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->idx4[perm - 1];
        ucie_sim_c_B->vwork_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->x4[perm - 1];
      }
    }

    ucie_sim_c_B->ib = ucie_sim_c_B->bLen >> 1;
    for (tailOffset = 0; tailOffset < ucie_sim_c_B->ib; tailOffset++) {
      perm = ucie_sim_c_B->wOffset + tailOffset;
      ucie_sim_c_B->i1_j = ucie_sim_c_B->idx_data[perm];
      ucie_sim_c_B->i2_c = ucie_sim_c_B->n_o - tailOffset;
      ucie_sim_c_B->idx_data[perm] = ucie_sim_c_B->idx_data[ucie_sim_c_B->i2_c];
      ucie_sim_c_B->idx_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->i1_j;
      ucie_sim_c_B->vwork_data[perm] = ucie_sim_c_B->xwork_data
        [ucie_sim_c_B->i2_c];
      ucie_sim_c_B->vwork_data[ucie_sim_c_B->i2_c] = ucie_sim_c_B->
        xwork_data[perm];
    }

    if (((uint32_T)ucie_sim_c_B->bLen & 1U) != 0U) {
      ucie_sim_c_B->n_o = ucie_sim_c_B->wOffset + ucie_sim_c_B->ib;
      ucie_sim_c_B->vwork_data[ucie_sim_c_B->n_o] = ucie_sim_c_B->
        xwork_data[ucie_sim_c_B->n_o];
    }

    ucie_sim_c_B->n_o = ucie_sim_c_B->wOffset;
    if (ucie_sim_c_B->n_o > 1) {
      if (loop_ub_tmp - 1 >= 0) {
        memset(&ucie_sim_c_B->iwork_data[0], 0, (uint32_T)loop_ub_tmp * sizeof
               (int32_T));
      }

      ucie_sim_c_B->wOffset = ucie_sim_c_B->n_o >> 2;
      ucie_sim_c_B->bLen = 4;
      while (ucie_sim_c_B->wOffset > 1) {
        if (((uint32_T)ucie_sim_c_B->wOffset & 1U) != 0U) {
          ucie_sim_c_B->wOffset--;
          tailOffset = ucie_sim_c_B->bLen * ucie_sim_c_B->wOffset;
          ucie_sim_c_B->ib = ucie_sim_c_B->n_o - tailOffset;
          if (ucie_sim_c_B->ib > ucie_sim_c_B->bLen) {
            ucie_sim_c_merge_o(ucie_sim_c_B->idx_data, ucie_sim_c_B->vwork_data,
                               tailOffset, ucie_sim_c_B->bLen, ucie_sim_c_B->ib
                               - ucie_sim_c_B->bLen, ucie_sim_c_B->iwork_data,
                               ucie_sim_c_B->xwork_data);
          }
        }

        ucie_sim_c_B->ib = ucie_sim_c_B->bLen << 1;
        ucie_sim_c_B->wOffset >>= 1;
        for (tailOffset = 0; tailOffset < ucie_sim_c_B->wOffset; tailOffset++) {
          ucie_sim_c_merge_o(ucie_sim_c_B->idx_data, ucie_sim_c_B->vwork_data,
                             tailOffset * ucie_sim_c_B->ib, ucie_sim_c_B->bLen,
                             ucie_sim_c_B->bLen, ucie_sim_c_B->iwork_data,
                             ucie_sim_c_B->xwork_data);
        }

        ucie_sim_c_B->bLen = ucie_sim_c_B->ib;
      }

      if (ucie_sim_c_B->n_o > ucie_sim_c_B->bLen) {
        ucie_sim_c_merge_o(ucie_sim_c_B->idx_data, ucie_sim_c_B->vwork_data, 0,
                           ucie_sim_c_B->bLen, ucie_sim_c_B->n_o -
                           ucie_sim_c_B->bLen, ucie_sim_c_B->iwork_data,
                           ucie_sim_c_B->xwork_data);
      }
    }

    for (ucie_sim_c_B->n_o = 0; ucie_sim_c_B->n_o <= ucie_sim_c_B->b_ph;
         ucie_sim_c_B->n_o++) {
      x_data[ucie_sim_c_B->c_d + ucie_sim_c_B->n_o * ucie_sim_c_B->vstride] =
        ucie_sim_c_B->vwork_data[ucie_sim_c_B->n_o];
    }
  }
}

/* Function for MATLAB Function: '<S16>/MATLAB Function' */
static void ucie_sim_c_SystemCore_step(serdes_CTLE_ucie_sim_c_n_T *obj, const
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T
  *varargout_1, real_T *varargout_2, B_ucie_sim_c_T *ucie_sim_c_B)
{
  static const real_T e[4] = { -8.0E+9, -7.13000750506996E+9,
    -6.35462587779425E+9, -5.6635662750731E+9 };

  static const real_T P[8] = { -8.0E+9, -8.0E+9, -8.0E+9, -8.0E+9, -3.2E+10,
    -3.2E+10, -3.2E+10, -3.2E+10 };

  static const int8_T f[10] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0 };

  static const real_T G[4] = { 1.0, 0.89125093813374556, 0.79432823472428149,
    0.70794578438413791 };

  int32_T exitg2;
  boolean_T exitg1;
  if (obj->isInitialized != 1) {
    obj->isInitialized = 1;
    obj->inputVarSize.f1[0] = (uint32_T)varargin_1->size[0];
    obj->inputVarSize.f1[1] = (uint32_T)varargin_1->size[1];
    for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 6; ucie_sim_c_B->i_h++) {
      obj->inputVarSize.f1[ucie_sim_c_B->i_h + 2] = 1U;
    }

    obj->pFilterMethod = true;
    obj->isUpToDate = true;
    ucie_sim_c_B->b_val = obj->pFilterMethod;
    if (!ucie_sim_c_B->b_val) {
      ucie_sim_c_B->ii = 0;
      do {
        exitg2 = 0;
        if (ucie_sim_c_B->ii < 4) {
          ucie_sim_c_B->ntot = 0;
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->tmp_data[ucie_sim_c_B->ntot] = ucie_sim_c_B->i_h;
            ucie_sim_c_B->ntot++;
          }

          ucie_sim_c_B->p_size[0] = 1;
          ucie_sim_c_B->p_size[1] = 2;
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->p_data_m[ucie_sim_c_B->i_h] = P
              [(ucie_sim_c_B->tmp_data[ucie_sim_c_B->i_h] << 2) +
              ucie_sim_c_B->ii];
          }

          ucie_sim_c_sort_h(ucie_sim_c_B->p_data_m, ucie_sim_c_B->p_size);
          ucie_sim_c_diff_o(ucie_sim_c_B->p_data_m, ucie_sim_c_B->p_size,
                            &ucie_sim_c_B->ztmp_data, ucie_sim_c_B->z_size);
          ucie_sim_c_B->tmp_size[0] = 1;
          ucie_sim_c_B->yndx = ucie_sim_c_B->z_size[1];
          ucie_sim_c_B->tmp_size[1] = ucie_sim_c_B->yndx;
          if (ucie_sim_c_B->yndx - 1 >= 0) {
            ucie_sim_c_B->tmp_data_jk = (ucie_sim_c_B->ztmp_data == 0.0);
          }

          if (ucie_sim_c_any_b(&ucie_sim_c_B->tmp_data_jk,
                               ucie_sim_c_B->tmp_size)) {
            obj->pFilterMethod = true;
            exitg2 = 1;
          } else {
            ucie_sim_c_B->ii++;
          }
        } else {
          ucie_sim_c_B->ii = 0;
          exitg2 = 2;
        }
      } while (exitg2 == 0);

      if (exitg2 == 1) {
      } else {
        exitg1 = false;
        while ((!exitg1) && (ucie_sim_c_B->ii < 4)) {
          ucie_sim_c_B->ztmp_data = e[ucie_sim_c_B->ii];
          ucie_sim_c_B->ntot = 0;
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 1; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->ntot++;
          }

          ucie_sim_c_B->p_size[0] = 1;
          ucie_sim_c_B->yndx = ucie_sim_c_B->ntot;
          ucie_sim_c_B->p_size[1] = ucie_sim_c_B->yndx;
          if (ucie_sim_c_B->yndx - 1 >= 0) {
            ucie_sim_c_B->p_data_m[0] = ucie_sim_c_B->ztmp_data;
          }

          ucie_sim_c_sort_h(ucie_sim_c_B->p_data_m, ucie_sim_c_B->p_size);
          ucie_sim_c_diff_o(ucie_sim_c_B->p_data_m, ucie_sim_c_B->p_size,
                            &ucie_sim_c_B->ztmp_data, ucie_sim_c_B->z_size);
          ucie_sim_c_B->tmp_size[0] = 1;
          ucie_sim_c_B->yndx = ucie_sim_c_B->z_size[1];
          ucie_sim_c_B->tmp_size[1] = ucie_sim_c_B->yndx;
          if (ucie_sim_c_B->yndx - 1 >= 0) {
            ucie_sim_c_B->tmp_data_jk = (ucie_sim_c_B->ztmp_data == 0.0);
          }

          if (ucie_sim_c_any_b(&ucie_sim_c_B->tmp_data_jk,
                               ucie_sim_c_B->tmp_size)) {
            obj->pFilterMethod = true;
            exitg1 = true;
          } else {
            ucie_sim_c_B->ii++;
          }
        }
      }
    }

    ucie_sim_c_B->b_val = obj->pFilterMethod;
    if (!ucie_sim_c_B->b_val) {
      ucie_sim_c_calculateCTLECoefficients_o(obj->SampleInterval,
        obj->FilterCoefficients.inCoeff, obj->FilterCoefficients.outCoeff,
        obj->FilterCoefficients.inDelay, obj->FilterCoefficients.outDelay,
        obj->FilterCoefficients.nz, obj->FilterCoefficients.np,
        &ucie_sim_c_B->fc_dt, &ucie_sim_c_B->b_a, &ucie_sim_c_B->b_val,
        ucie_sim_c_B);
      obj->FilterCoefficients.dt = ucie_sim_c_B->fc_dt;
      obj->FilterCoefficients.setSelection = ucie_sim_c_B->b_a;
      obj->FilterCoefficients.isdefined = ucie_sim_c_B->b_val;
    } else {
      memset(&obj->FilterCoefficients.inCoeff[0], 0, 12U * sizeof(real_T));
      memset(&obj->FilterCoefficients.outCoeff[0], 0, sizeof(real_T) << 3U);
      obj->FilterCoefficients.inDelay[0] = 0.0;
      obj->FilterCoefficients.inDelay[1] = 0.0;
      obj->FilterCoefficients.inDelay[2] = 0.0;
      obj->FilterCoefficients.outDelay[0] = 0.0;
      obj->FilterCoefficients.outDelay[1] = 0.0;
      obj->FilterCoefficients.nz[0] = 1.0;
      obj->FilterCoefficients.np[0] = 2.0;
      obj->FilterCoefficients.nz[1] = 1.0;
      obj->FilterCoefficients.np[1] = 2.0;
      obj->FilterCoefficients.nz[2] = 1.0;
      obj->FilterCoefficients.np[2] = 2.0;
      obj->FilterCoefficients.nz[3] = 1.0;
      obj->FilterCoefficients.np[3] = 2.0;
      ucie_sim_c_B->fc_dt = obj->SampleInterval;
      obj->FilterCoefficients.dt = ucie_sim_c_B->fc_dt;
      obj->FilterCoefficients.setSelection = 1.0;
      obj->FilterCoefficients.isdefined = false;
    }

    memset(&obj->FilterStates[0], 0, 40U * sizeof(real_T));
    obj->FilterStatesCount[0] = 0.0;
    obj->FilterStatesCount[1] = 0.0;
    obj->FilterStatesCount[2] = 0.0;
    obj->FilterStatesCount[3] = 0.0;
    memset(&obj->FilterNumerator[0], 0, 20U * sizeof(real_T));
    obj->FilterNumeratorCount[0] = obj->FilterStatesCount[0];
    obj->FilterNumeratorCount[1] = obj->FilterStatesCount[1];
    obj->FilterNumeratorCount[2] = obj->FilterStatesCount[2];
    obj->FilterNumeratorCount[3] = obj->FilterStatesCount[3];
    memset(&obj->FilterDenominator[0], 0, sizeof(real_T) << 4U);
    for (ucie_sim_c_B->ii = 0; ucie_sim_c_B->ii < 4; ucie_sim_c_B->ii++) {
      obj->FilterDenominatorCount[ucie_sim_c_B->ii] = obj->
        FilterStatesCount[ucie_sim_c_B->ii];
      obj->FilterGain[ucie_sim_c_B->ii] = 0.0;
      ucie_sim_c_B->ntot = 0;
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->tmp_data_c[ucie_sim_c_B->ntot] = ucie_sim_c_B->i_h;
        ucie_sim_c_B->ntot++;
      }

      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->p_data_m[ucie_sim_c_B->i_h] = P[(ucie_sim_c_B->
          tmp_data_c[ucie_sim_c_B->i_h] << 2) + ucie_sim_c_B->ii] * 2.0 *
          3.1415926535897931;
      }

      ucie_sim_c_B->ntot = 0;
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 1; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->ntot++;
      }

      ucie_sim_c_B->yndx = ucie_sim_c_B->ntot;
      ucie_sim_c_B->ntot = 0;
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 1; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->ntot++;
      }

      ucie_sim_c_B->z_size[1] = ucie_sim_c_B->ntot;
      if (ucie_sim_c_B->ntot - 1 >= 0) {
        ucie_sim_c_B->ztmp_data = e[ucie_sim_c_B->ii] * 2.0 * 3.1415926535897931;
      }

      ucie_sim_c_B->fc_dt = obj->SampleInterval;
      ucie_sim_c_B->psorted_size = 2;
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->psorted_data[ucie_sim_c_B->i_h] = -ucie_sim_c_B->
          p_data_m[ucie_sim_c_B->i_h];
      }

      ucie_sim_c_sort_hz(ucie_sim_c_B->psorted_data, &ucie_sim_c_B->psorted_size,
                         1, ucie_sim_c_B);
      ucie_sim_c_B->b1 = ucie_sim_c_B->psorted_data[0];
      ucie_sim_c_B->b_a = ucie_sim_c_B->psorted_data[1];
      ucie_sim_c_B->psect.data.f1.data[0] = -ucie_sim_c_B->b1;
      ucie_sim_c_B->psect.data.f1.data[1] = -ucie_sim_c_B->b_a;
      ucie_sim_c_B->i_h = ucie_sim_c_B->z_size[1];
      ucie_sim_c_B->psorted_size = ucie_sim_c_B->i_h;
      if (ucie_sim_c_B->i_h - 1 >= 0) {
        ucie_sim_c_B->psorted_data[0] = -ucie_sim_c_B->ztmp_data;
      }

      if (ucie_sim_c_B->psorted_size == 1) {
        ucie_sim_c_sort_hz(ucie_sim_c_B->psorted_data,
                           &ucie_sim_c_B->psorted_size, 2, ucie_sim_c_B);
      }

      if (ucie_sim_c_B->yndx == 1) {
        ucie_sim_c_B->zsect.data.f1.size[0] = 1;
        ucie_sim_c_B->zsect.data.f1.size[1] = 1;
        ucie_sim_c_B->zsect.data.f1.data = -ucie_sim_c_B->psorted_data[0];
      } else {
        ucie_sim_c_B->zsect.data.f1.size[0] = 0;
        ucie_sim_c_B->zsect.data.f1.size[1] = 0;
      }

      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 10; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->filtersos_data[ucie_sim_c_B->i_h] = f[ucie_sim_c_B->i_h];
      }

      ucie_sim_c_B->ntot = ucie_sim_c_B->zsect.data.f1.size[0] + 2;
      memset(&ucie_sim_c_B->pz_data[0], 0, (uint32_T)ucie_sim_c_B->ntot * sizeof
             (creal_T));
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 2; ucie_sim_c_B->i_h++) {
        ucie_sim_c_B->pz_data[ucie_sim_c_B->i_h].re =
          ucie_sim_c_B->psect.data.f1.data[ucie_sim_c_B->i_h];
        ucie_sim_c_B->pz_data[ucie_sim_c_B->i_h].im = 0.0;
      }

      ucie_sim_c_B->i_h = ucie_sim_c_B->zsect.data.f1.size[0];
      if (ucie_sim_c_B->i_h > 0) {
        if (ucie_sim_c_B->ntot < 3) {
          ucie_sim_c_B->d_indx = 0;
          ucie_sim_c_B->yndx = 0;
        } else {
          ucie_sim_c_B->d_indx = 2;
          ucie_sim_c_B->yndx = 3;
        }

        ucie_sim_c_B->zsect_tmp = ucie_sim_c_B->zsect.data.f1.size[1];
        for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < ucie_sim_c_B->zsect_tmp;
             ucie_sim_c_B->i_h++) {
          ucie_sim_c_B->zsect_data.re = ucie_sim_c_B->zsect.data.f1.data;
          ucie_sim_c_B->zsect_data.im = 0.0;
        }

        ucie_sim_c_B->unnamed_idx_1 = (int8_T)(ucie_sim_c_B->yndx -
          ucie_sim_c_B->d_indx);
        ucie_sim_c_B->yndx = ucie_sim_c_B->unnamed_idx_1;
        for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < ucie_sim_c_B->yndx;
             ucie_sim_c_B->i_h++) {
          ucie_sim_c_B->pz_data[ucie_sim_c_B->d_indx + ucie_sim_c_B->i_h] =
            ucie_sim_c_B->zsect_data;
        }
      }

      ucie_sim_c_B->d_indx = 1;
      while (ucie_sim_c_B->d_indx <= ucie_sim_c_B->ntot) {
        ucie_sim_c_B->yndx = ucie_sim_c_B->d_indx;
        if (ucie_sim_c_B->pz_data[ucie_sim_c_B->d_indx - 1].im == 0.0) {
          ucie_sim_c_B->b_a = ucie_sim_c_B->pz_data[ucie_sim_c_B->d_indx - 1].re;
          ucie_sim_c_B->b1 = exp(ucie_sim_c_B->b_a * ucie_sim_c_B->fc_dt);
          if (ucie_sim_c_B->b_a == 0.0) {
            ucie_sim_c_B->b = 1.0;
            ucie_sim_c_B->b_a = ucie_sim_c_B->fc_dt;
          } else {
            ucie_sim_c_B->b = -ucie_sim_c_B->b_a;
            ucie_sim_c_B->b_a = -1.0 / ucie_sim_c_B->b_a * (1.0 -
              ucie_sim_c_B->b1);
          }

          ucie_sim_c_B->sos[0] = 0.0;
          ucie_sim_c_B->sos[1] = ucie_sim_c_B->b * ucie_sim_c_B->b_a;
          ucie_sim_c_B->sos[2] = 0.0;
          ucie_sim_c_B->sos[3] = 1.0;
          ucie_sim_c_B->sos[4] = -ucie_sim_c_B->b1;
          ucie_sim_c_B->sos[5] = 0.0;
          if ((ucie_sim_c_B->d_indx > 1) && (ucie_sim_c_B->d_indx <= 2)) {
            ucie_sim_c_B->b1 = ucie_sim_c_B->sos[1];
            ucie_sim_c_B->sos[0] = ucie_sim_c_B->b1;
            ucie_sim_c_B->sos[1] = 0.0;
            ucie_sim_c_B->sos[2] = 0.0;
          }

          ucie_sim_c_B->d_indx++;
        } else {
          ucie_sim_c_B->b_a = ucie_sim_c_B->pz_data[ucie_sim_c_B->d_indx - 1].re;
          ucie_sim_c_B->b = ucie_sim_c_B->pz_data[ucie_sim_c_B->d_indx - 1].im;
          if (ucie_sim_c_B->b_a >= 0.0) {
            ucie_sim_c_B->b1 = exp(ucie_sim_c_B->b_a * ucie_sim_c_B->fc_dt);
            ucie_sim_c_B->b = cos(ucie_sim_c_B->b * ucie_sim_c_B->fc_dt);
            ucie_sim_c_B->b_a = exp(2.0 * ucie_sim_c_B->b_a *
              ucie_sim_c_B->fc_dt);
            ucie_sim_c_B->sos[0] = 0.0;
            ucie_sim_c_B->sos[1] = (1.0 - 2.0 * ucie_sim_c_B->b1 *
              ucie_sim_c_B->b) + ucie_sim_c_B->b_a;
            ucie_sim_c_B->sos[2] = 0.0;
            ucie_sim_c_B->sos[3] = 1.0;
            ucie_sim_c_B->sos[4] = -2.0 * ucie_sim_c_B->b1 * ucie_sim_c_B->b;
            ucie_sim_c_B->sos[5] = ucie_sim_c_B->b_a;
          } else {
            ucie_sim_c_B->az_idx_2 = ucie_sim_c_B->b_a * ucie_sim_c_B->b_a +
              ucie_sim_c_B->b * ucie_sim_c_B->b;
            ucie_sim_c_B->b1 = ucie_sim_c_B->az_idx_2 / 2.0 / ucie_sim_c_B->b;
            ucie_sim_c_B->az_idx_1 = exp(ucie_sim_c_B->b_a * ucie_sim_c_B->fc_dt);
            ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->b * ucie_sim_c_B->fc_dt;
            ucie_sim_c_B->az_idx_0 = cos(ucie_sim_c_B->bz_idx_0);
            ucie_sim_c_B->bz_idx_0 = sin(ucie_sim_c_B->bz_idx_0);
            ucie_sim_c_B->b_a /= ucie_sim_c_B->az_idx_2;
            ucie_sim_c_B->az_idx_2 = ucie_sim_c_B->b / ucie_sim_c_B->az_idx_2;
            ucie_sim_c_B->az_idx_0 *= ucie_sim_c_B->az_idx_1;
            ucie_sim_c_B->b = ucie_sim_c_B->az_idx_2 * ucie_sim_c_B->az_idx_1 *
              ucie_sim_c_B->bz_idx_0 + (ucie_sim_c_B->az_idx_0 - 1.0) *
              ucie_sim_c_B->b_a;
            ucie_sim_c_B->b_a = ucie_sim_c_B->b_a * ucie_sim_c_B->az_idx_1 *
              ucie_sim_c_B->bz_idx_0 + (1.0 - ucie_sim_c_B->az_idx_0) *
              ucie_sim_c_B->az_idx_2;
            ucie_sim_c_B->az_idx_2 = -ucie_sim_c_B->az_idx_1 *
              ucie_sim_c_B->bz_idx_0;
            ucie_sim_c_B->az_idx_1 *= ucie_sim_c_B->bz_idx_0;
            ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->b1 * ucie_sim_c_B->b -
              -ucie_sim_c_B->b1 * ucie_sim_c_B->b_a;
            ucie_sim_c_B->b1 = ucie_sim_c_B->b1 * ucie_sim_c_B->b_a +
              -ucie_sim_c_B->b1 * ucie_sim_c_B->b;
            ucie_sim_c_B->sos[0] = 0.0;
            ucie_sim_c_B->sos[1] = ucie_sim_c_B->bz_idx_0 + ucie_sim_c_B->b1;
            ucie_sim_c_B->sos[2] = (ucie_sim_c_B->az_idx_1 -
              ucie_sim_c_B->az_idx_0) * ucie_sim_c_B->bz_idx_0 +
              (ucie_sim_c_B->az_idx_2 - ucie_sim_c_B->az_idx_0) *
              ucie_sim_c_B->b1;
            ucie_sim_c_B->sos[3] = 1.0;
            ucie_sim_c_B->sos[4] = -ucie_sim_c_B->az_idx_0 -
              ucie_sim_c_B->az_idx_0;
            ucie_sim_c_B->sos[5] = ucie_sim_c_B->az_idx_0 *
              ucie_sim_c_B->az_idx_0 - ucie_sim_c_B->az_idx_2 *
              ucie_sim_c_B->az_idx_1;
          }

          ucie_sim_c_B->d_indx += 2;
        }

        if (ucie_sim_c_B->yndx <= 2) {
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->C[ucie_sim_c_B->i_h] = 0.0;
          }

          ucie_sim_c_B->b1 = ucie_sim_c_B->filtersos_data[0];
          ucie_sim_c_B->b_a = ucie_sim_c_B->filtersos_data[1];
          ucie_sim_c_B->az_idx_1 = ucie_sim_c_B->filtersos_data[2];
          for (ucie_sim_c_B->yndx = 0; ucie_sim_c_B->yndx < 3;
               ucie_sim_c_B->yndx++) {
            ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->sos[ucie_sim_c_B->yndx];
            ucie_sim_c_B->C[ucie_sim_c_B->yndx] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->b1;
            ucie_sim_c_B->C[ucie_sim_c_B->yndx + 1] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->b_a;
            ucie_sim_c_B->C[ucie_sim_c_B->yndx + 2] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->az_idx_1;
          }

          memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->dv[ucie_sim_c_B->i_h] = ucie_sim_c_B->C
              [ucie_sim_c_B->i_h];
          }

          memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U *
                 sizeof(real_T));
          ucie_sim_c_B->A[0] = ucie_sim_c_B->filtersos_data[5];
          ucie_sim_c_B->A[1] = ucie_sim_c_B->filtersos_data[6];
          ucie_sim_c_B->A[2] = ucie_sim_c_B->filtersos_data[7];
          memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->dv[ucie_sim_c_B->i_h + 5] = 0.0;
          }

          memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->yndx = 0; ucie_sim_c_B->yndx < 3;
               ucie_sim_c_B->yndx++) {
            for (ucie_sim_c_B->zsect_tmp = 0; ucie_sim_c_B->zsect_tmp < 3;
                 ucie_sim_c_B->zsect_tmp++) {
              memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U
                     * sizeof(real_T));
              ucie_sim_c_B->i_h = (ucie_sim_c_B->yndx + ucie_sim_c_B->zsect_tmp)
                + 5;
              ucie_sim_c_B->dv[ucie_sim_c_B->i_h] = ucie_sim_c_B->
                sos[ucie_sim_c_B->yndx + 3] * ucie_sim_c_B->A
                [ucie_sim_c_B->zsect_tmp] + ucie_sim_c_B->
                filtersos_data[ucie_sim_c_B->i_h];
              memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U
                     * sizeof(real_T));
            }
          }
        } else {
          if (ucie_sim_c_B->sos[0] == 0.0) {
            ucie_sim_c_B->b1 = ucie_sim_c_B->sos[1];
            ucie_sim_c_B->b_a = ucie_sim_c_B->sos[2];
            ucie_sim_c_B->sos[0] = ucie_sim_c_B->b1;
            ucie_sim_c_B->sos[1] = ucie_sim_c_B->b_a;
            ucie_sim_c_B->sos[2] = 0.0;
            memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U *
                   sizeof(real_T));
            ucie_sim_c_B->dv[0] = ucie_sim_c_B->filtersos_data[1];
            ucie_sim_c_B->dv[1] = ucie_sim_c_B->filtersos_data[2];
            ucie_sim_c_B->dv[2] = ucie_sim_c_B->filtersos_data[3];
            ucie_sim_c_B->dv[3] = ucie_sim_c_B->filtersos_data[4];
            ucie_sim_c_B->dv[4] = 0.0;
            memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U *
                   sizeof(real_T));
          }

          ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->sos[0];
          ucie_sim_c_B->B[0] = 1.0 / ucie_sim_c_B->bz_idx_0;
          ucie_sim_c_B->B[1] = ucie_sim_c_B->sos[4] / ucie_sim_c_B->bz_idx_0;
          ucie_sim_c_B->B[2] = ucie_sim_c_B->sos[5] / ucie_sim_c_B->bz_idx_0;
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->C[ucie_sim_c_B->i_h] = 0.0;
          }

          ucie_sim_c_B->b1 = ucie_sim_c_B->filtersos_data[0];
          ucie_sim_c_B->b_a = ucie_sim_c_B->filtersos_data[1];
          ucie_sim_c_B->az_idx_1 = ucie_sim_c_B->filtersos_data[2];
          for (ucie_sim_c_B->yndx = 0; ucie_sim_c_B->yndx < 3;
               ucie_sim_c_B->yndx++) {
            ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->B[ucie_sim_c_B->yndx];
            ucie_sim_c_B->C[ucie_sim_c_B->yndx] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->b1;
            ucie_sim_c_B->C[ucie_sim_c_B->yndx + 1] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->b_a;
            ucie_sim_c_B->C[ucie_sim_c_B->yndx + 2] += ucie_sim_c_B->bz_idx_0 *
              ucie_sim_c_B->az_idx_1;
          }

          memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->dv[ucie_sim_c_B->i_h] = ucie_sim_c_B->C
              [ucie_sim_c_B->i_h];
          }

          memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U *
                 sizeof(real_T));
          ucie_sim_c_B->bz_idx_0 = ucie_sim_c_B->sos[0];
          ucie_sim_c_B->A[0] = ucie_sim_c_B->filtersos_data[5];
          ucie_sim_c_B->B[0] = ucie_sim_c_B->sos[0] / ucie_sim_c_B->bz_idx_0;
          ucie_sim_c_B->A[1] = ucie_sim_c_B->filtersos_data[6];
          ucie_sim_c_B->B[1] = ucie_sim_c_B->sos[1] / ucie_sim_c_B->bz_idx_0;
          ucie_sim_c_B->A[2] = ucie_sim_c_B->filtersos_data[7];
          ucie_sim_c_B->B[2] = ucie_sim_c_B->sos[2] / ucie_sim_c_B->bz_idx_0;
          memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++)
          {
            ucie_sim_c_B->dv[ucie_sim_c_B->i_h + 5] = 0.0;
          }

          memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U *
                 sizeof(real_T));
          for (ucie_sim_c_B->yndx = 0; ucie_sim_c_B->yndx < 3;
               ucie_sim_c_B->yndx++) {
            for (ucie_sim_c_B->zsect_tmp = 0; ucie_sim_c_B->zsect_tmp < 3;
                 ucie_sim_c_B->zsect_tmp++) {
              memcpy(&ucie_sim_c_B->dv[0], &ucie_sim_c_B->filtersos_data[0], 10U
                     * sizeof(real_T));
              ucie_sim_c_B->i_h = (ucie_sim_c_B->yndx + ucie_sim_c_B->zsect_tmp)
                + 5;
              ucie_sim_c_B->dv[ucie_sim_c_B->i_h] = ucie_sim_c_B->B
                [ucie_sim_c_B->yndx] * ucie_sim_c_B->A[ucie_sim_c_B->zsect_tmp]
                + ucie_sim_c_B->filtersos_data[ucie_sim_c_B->i_h];
              memcpy(&ucie_sim_c_B->filtersos_data[0], &ucie_sim_c_B->dv[0], 10U
                     * sizeof(real_T));
            }
          }

          ucie_sim_c_B->filtersos_data[5] = 1.0;
        }
      }

      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 5; ucie_sim_c_B->i_h++) {
        obj->FilterNumerator[ucie_sim_c_B->i_h + 5 * ucie_sim_c_B->ii] =
          ucie_sim_c_B->filtersos_data[ucie_sim_c_B->i_h];
      }

      obj->FilterNumeratorCount[ucie_sim_c_B->ii] = 1.0;
      ucie_sim_c_B->i_h = ucie_sim_c_B->ii << 2;
      obj->FilterDenominator[ucie_sim_c_B->i_h] = ucie_sim_c_B->filtersos_data[6];
      obj->FilterDenominator[ucie_sim_c_B->i_h + 1] =
        ucie_sim_c_B->filtersos_data[7];
      obj->FilterDenominator[ucie_sim_c_B->i_h + 2] =
        ucie_sim_c_B->filtersos_data[8];
      obj->FilterDenominator[ucie_sim_c_B->i_h + 3] =
        ucie_sim_c_B->filtersos_data[9];
      obj->FilterDenominatorCount[ucie_sim_c_B->ii] = 1.0;
      obj->FilterGain[ucie_sim_c_B->ii] = G[ucie_sim_c_B->ii];
      obj->FilterStatesCount[ucie_sim_c_B->ii] = 2.0;
    }

    obj->TunablePropsChanged = false;
    ucie_sim_c_B->bz_idx_0 = obj->FilterCoefficients.inDelay[0];
    obj->FilterCoefficients.inDelay[0] = ucie_sim_c_B->bz_idx_0 * 0.0;
    ucie_sim_c_B->bz_idx_0 = obj->FilterCoefficients.inDelay[1];
    obj->FilterCoefficients.inDelay[1] = ucie_sim_c_B->bz_idx_0 * 0.0;
    ucie_sim_c_B->bz_idx_0 = obj->FilterCoefficients.inDelay[2];
    obj->FilterCoefficients.inDelay[2] = ucie_sim_c_B->bz_idx_0 * 0.0;
    ucie_sim_c_B->fc_dt = obj->FilterCoefficients.outDelay[0];
    obj->FilterCoefficients.outDelay[0] = ucie_sim_c_B->fc_dt * 0.0;
    ucie_sim_c_B->fc_dt = obj->FilterCoefficients.outDelay[1];
    obj->FilterCoefficients.outDelay[1] = ucie_sim_c_B->fc_dt * 0.0;
    for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 40; ucie_sim_c_B->i_h++) {
      obj->FilterStates[ucie_sim_c_B->i_h] *= 0.0;
    }
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  ucie_sim_c_B->inSize[0] = (uint32_T)varargin_1->size[0];
  ucie_sim_c_B->inSize[1] = (uint32_T)varargin_1->size[1];
  for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 6; ucie_sim_c_B->i_h++) {
    ucie_sim_c_B->inSize[ucie_sim_c_B->i_h + 2] = 1U;
  }

  ucie_sim_c_B->ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ucie_sim_c_B->ii < 8)) {
    if (obj->inputVarSize.f1[ucie_sim_c_B->ii] != ucie_sim_c_B->
        inSize[ucie_sim_c_B->ii]) {
      for (ucie_sim_c_B->i_h = 0; ucie_sim_c_B->i_h < 8; ucie_sim_c_B->i_h++) {
        obj->inputVarSize.f1[ucie_sim_c_B->i_h] = ucie_sim_c_B->
          inSize[ucie_sim_c_B->i_h];
      }

      exitg1 = true;
    } else {
      ucie_sim_c_B->ii++;
    }
  }

  ucie_sim_c_CTLE_stepImpl_g(obj, varargin_1, varargout_1, varargout_2,
    ucie_sim_c_B);
}

static void ucie_sim_c_sort_mj(const real_T x[2], real_T b_x[2])
{
  /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  b_x[0] = x[0];
  b_x[1] = x[1];
  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
  } else {
    b_x[0] = x[1];
    b_x[1] = x[0];
  }

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
}

static void ucie_sim_c_Stimulus_resetImpl_m(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *y;
  real_T y_0[2];
  real_T d;
  real_T y_1;
  int32_T b_idx;
  int32_T f;
  int32_T k;
  int32_T last;
  int32_T obj_idx_0;
  static const boolean_T tmp[31] = { true, false, true, false, true, false, true,
    false, true, false, true, false, true, false, true, false, true, false, true,
    false, true, false, true, false, true, false, true, false, true, false, true
  };

  static const int8_T tmp_0[7] = { 0, 1, 0, 1, 0, 1, 0 };

  boolean_T exitg1;
  if (obj->privateSourceFlag != 1.0) {
    obj->privateM = 1.0;
  }

  ucie_sim_c_emxInit_real_T(&y, 2, ucie_sim_c_B);
  d = obj->privateM - 1.0;

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  if (rtIsNaN(d)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    y->data[0] = (rtNaN);
  } else if (d < 0.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)d + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    b_idx = (int32_T)d;
    for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
      y->data[obj_idx_0] = obj_idx_0;
    }
  }

  k = obj->privateBinaryPowers->size[0] * obj->privateBinaryPowers->size[1];

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  obj->privateBinaryPowers->size[0] = 1;
  obj->privateBinaryPowers->size[1] = y->size[1];
  ucie_sim_c_emxEnsureCapacity_real_T(obj->privateBinaryPowers, k, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  b_idx = y->size[1] - 1;
  for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
    /* Start for MATLABSystem: '<S18>/StrobeStimulus' incorporates:
     *  MATLABSystem: '<S18>/MATLAB System'
     */
    d = y->data[obj_idx_0];
    d = ucie_sim_c_rt_powd_snf(2.0, d, ucie_sim_c_B);
    obj->privateBinaryPowers->data[obj_idx_0] = d;
  }

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  if ((obj->privateM != 1.0) && (obj->privateSourceFlag != 4.0) &&
      (obj->privateSourceFlag != 7.0)) {
    if (obj->privateM > 1.0) {
      d = obj->privateM - 1.0;
      if (d < 1.0) {
        obj_idx_0 = 0;
      } else {
        obj_idx_0 = (int32_T)d;
      }

      b_idx = obj_idx_0 - 1;
      k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
      obj->privateOrder->size[0] = 1;
      obj->privateOrder->size[1] = b_idx + 2;
      ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
      obj->privateOrder->data[0] = 7.0;
      for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
        obj->privateOrder->data[obj_idx_0 + 1] = (real_T)obj_idx_0 + 8.0;
      }
    } else {
      d = 1.0 - obj->privateM;
      last = !(d < 1.0);
      k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
      obj->privateOrder->size[0] = 1;
      obj->privateOrder->size[1] = last;
      ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
      b_idx = last - 1;
      for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
        obj->privateOrder->data[0] = 7.0;
      }
    }
  } else {
    k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
    obj->privateOrder->size[0] = 1;
    obj->privateOrder->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
    obj->privateOrder->data[0] = 7.0;
  }

  if ((obj->privateSourceFlag != 4.0) && (obj->privateSourceFlag != 7.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    last = obj->privateOrder->size[1];
    y->size[1] = last;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    b_idx = obj->privateOrder->size[1];
    for (obj_idx_0 = 0; obj_idx_0 < b_idx; obj_idx_0++) {
      y->data[obj_idx_0] = obj->privateOrder->data[obj_idx_0];
    }

    if (y->size[1] <= 2) {
      if (y->size[1] == 1) {
        d = y->data[0];
      } else {
        d = y->data[y->size[1] - 1];
        if ((y->data[0] < d) || (rtIsNaN(y->data[0]) && (!rtIsNaN(d)))) {
        } else {
          d = y->data[0];
        }
      }
    } else {
      if (!rtIsNaN(y->data[0])) {
        b_idx = 1;
      } else {
        b_idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!rtIsNaN(y->data[k - 1])) {
            b_idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (b_idx == 0) {
        d = y->data[0];
      } else {
        d = y->data[b_idx - 1];
        for (k = b_idx + 1; k <= last; k++) {
          y_1 = y->data[k - 1];
          if (d < y_1) {
            d = y_1;
          }
        }
      }
    }

    obj_idx_0 = (int32_T)obj->privateM;
    b_idx = (int32_T)d;
    k = obj->privateSeed->size[0] * obj->privateSeed->size[1];
    obj->privateSeed->size[0] = obj_idx_0;
    obj->privateSeed->size[1] = b_idx;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->privateSeed, k, ucie_sim_c_B);
    b_idx *= obj_idx_0;
    for (obj_idx_0 = 0; obj_idx_0 < b_idx; obj_idx_0++) {
      obj->privateSeed->data[obj_idx_0] = 0.0;
    }

    d = obj->privateM;
    b_idx = (int32_T)d;
    for (k = 0; k < b_idx; k++) {
      d = obj->privateSeed->size[1];
      if (d < 1.0) {
        f = 1;
        last = -1;
      } else {
        f = 2;
        last = (int32_T)d - 1;
      }

      last = div_s32(last, f) + 1;
      for (obj_idx_0 = 0; obj_idx_0 < last; obj_idx_0++) {
        obj->privateSeed->data[k + obj->privateSeed->size[0] * (f * obj_idx_0)] =
          1.0;
      }
    }

    if ((!(obj->privateM < 1.0)) && (obj->privateOrder->data[0] == 7.0)) {
      d = obj->privateOrder->data[0];
      if (d < 1.0) {
        k = 0;
      } else {
        k = (int32_T)d;
      }

      for (obj_idx_0 = 0; obj_idx_0 < k; obj_idx_0++) {
        obj->privateSeed->data[obj->privateSeed->size[0] * obj_idx_0] =
          tmp_0[obj_idx_0];
      }
    }
  }

  ucie_sim_c_emxFree_real_T(&y);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  obj->privateMapToVoltage[0] = -0.5;
  obj->privateMapToVoltage[1] = 0.5;
  obj->privateIndex = -obj->privateDelay + 1.0;
  obj->pNextEdgeSampleIndex = 1.0;
  obj->pJitterValue = 0.0;
  obj->pIdealHalfCrossingTime = 0.5;
  obj->pJitteredHalfCrossingTime = 0.5;
  if (obj->privateSourceFlag == 3.0) {
    obj->privateDataIndex = -obj->privateDelay + 1.0;
  } else {
    obj->privateDataIndex = 1.0;
  }

  obj->privatePrevious = 0.0;
  for (obj_idx_0 = 0; obj_idx_0 < 31; obj_idx_0++) {
    obj->pPAMnSeed[obj_idx_0] = tmp[obj_idx_0];
  }

  ucie_sim_c_sort_mj(obj->privateMapToVoltage, y_0);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  obj->pSymbolStep = y_0[1] - y_0[0];
  obj->FIFOPosition = 1.0;
  obj->pBinaryIndex = 1.0;
}

static void ucie_sim_c_Stimulus_resetImpl(serdes_Stimulus_ucie_sim_c_T *obj,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *y;
  real_T y_0[2];
  real_T d;
  real_T y_1;
  int32_T b_idx;
  int32_T f;
  int32_T k;
  int32_T last;
  int32_T obj_idx_0;
  static const int8_T tmp[93] = { 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
    39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
    58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
    77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100 };

  static const boolean_T tmp_0[31] = { true, false, true, false, true, false,
    true, false, true, false, true, false, true, false, true, false, true, false,
    true, false, true, false, true, false, true, false, true, false, true, false,
    true };

  static const int8_T tmp_1[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (obj->privateSourceFlag != 1.0) {
    obj->privateM = 1.0;
  }

  ucie_sim_c_emxInit_real_T(&y, 2, ucie_sim_c_B);
  d = obj->privateM - 1.0;

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  if (rtIsNaN(d)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    y->data[0] = (rtNaN);
  } else if (d < 0.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)d + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    b_idx = (int32_T)d;
    for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
      y->data[obj_idx_0] = obj_idx_0;
    }
  }

  k = obj->privateBinaryPowers->size[0] * obj->privateBinaryPowers->size[1];

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  obj->privateBinaryPowers->size[0] = 1;
  obj->privateBinaryPowers->size[1] = y->size[1];
  ucie_sim_c_emxEnsureCapacity_real_T(obj->privateBinaryPowers, k, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  b_idx = y->size[1] - 1;
  for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
    /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
     *  MATLABSystem: '<S18>/StrobeStimulus'
     */
    d = y->data[obj_idx_0];
    d = ucie_sim_c_rt_powd_snf(2.0, d, ucie_sim_c_B);
    obj->privateBinaryPowers->data[obj_idx_0] = d;
  }

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  if ((obj->privateM != 1.0) && (obj->privateSourceFlag != 4.0) &&
      (obj->privateSourceFlag != 7.0)) {
    if (obj->privateM > 1.0) {
      d = obj->privateM - 1.0;
      if (d < 1.0) {
        obj_idx_0 = 0;
      } else {
        obj_idx_0 = (int32_T)d;
      }

      b_idx = obj_idx_0 - 1;
      k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
      obj->privateOrder->size[0] = 1;
      obj->privateOrder->size[1] = b_idx + 2;
      ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
      obj->privateOrder->data[0] = 11.0;
      for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
        obj->privateOrder->data[obj_idx_0 + 1] = tmp[obj_idx_0];
      }
    } else {
      d = 1.0 - obj->privateM;
      last = !(d < 1.0);
      k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
      obj->privateOrder->size[0] = 1;
      obj->privateOrder->size[1] = last;
      ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
      b_idx = last - 1;
      for (obj_idx_0 = 0; obj_idx_0 <= b_idx; obj_idx_0++) {
        obj->privateOrder->data[0] = 11.0;
      }
    }
  } else {
    k = obj->privateOrder->size[0] * obj->privateOrder->size[1];
    obj->privateOrder->size[0] = 1;
    obj->privateOrder->size[1] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->privateOrder, k, ucie_sim_c_B);
    obj->privateOrder->data[0] = 11.0;
  }

  if ((obj->privateSourceFlag != 4.0) && (obj->privateSourceFlag != 7.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    last = obj->privateOrder->size[1];
    y->size[1] = last;
    ucie_sim_c_emxEnsureCapacity_real_T(y, k, ucie_sim_c_B);
    b_idx = obj->privateOrder->size[1];
    for (obj_idx_0 = 0; obj_idx_0 < b_idx; obj_idx_0++) {
      y->data[obj_idx_0] = obj->privateOrder->data[obj_idx_0];
    }

    if (y->size[1] <= 2) {
      if (y->size[1] == 1) {
        d = y->data[0];
      } else {
        d = y->data[y->size[1] - 1];
        if ((y->data[0] < d) || (rtIsNaN(y->data[0]) && (!rtIsNaN(d)))) {
        } else {
          d = y->data[0];
        }
      }
    } else {
      if (!rtIsNaN(y->data[0])) {
        b_idx = 1;
      } else {
        b_idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!rtIsNaN(y->data[k - 1])) {
            b_idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (b_idx == 0) {
        d = y->data[0];
      } else {
        d = y->data[b_idx - 1];
        for (k = b_idx + 1; k <= last; k++) {
          y_1 = y->data[k - 1];
          if (d < y_1) {
            d = y_1;
          }
        }
      }
    }

    obj_idx_0 = (int32_T)obj->privateM;
    b_idx = (int32_T)d;
    k = obj->privateSeed->size[0] * obj->privateSeed->size[1];
    obj->privateSeed->size[0] = obj_idx_0;
    obj->privateSeed->size[1] = b_idx;
    ucie_sim_c_emxEnsureCapacity_real_T(obj->privateSeed, k, ucie_sim_c_B);
    b_idx *= obj_idx_0;
    for (obj_idx_0 = 0; obj_idx_0 < b_idx; obj_idx_0++) {
      obj->privateSeed->data[obj_idx_0] = 0.0;
    }

    d = obj->privateM;
    b_idx = (int32_T)d;
    for (k = 0; k < b_idx; k++) {
      d = obj->privateSeed->size[1];
      if (d < 1.0) {
        f = 1;
        last = -1;
      } else {
        f = 2;
        last = (int32_T)d - 1;
      }

      last = div_s32(last, f) + 1;
      for (obj_idx_0 = 0; obj_idx_0 < last; obj_idx_0++) {
        obj->privateSeed->data[k + obj->privateSeed->size[0] * (f * obj_idx_0)] =
          1.0;
      }
    }

    if ((!(obj->privateM < 1.0)) && (obj->privateOrder->data[0] == 11.0)) {
      d = obj->privateOrder->data[0];
      if (d < 1.0) {
        k = 0;
      } else {
        k = (int32_T)d;
      }

      for (obj_idx_0 = 0; obj_idx_0 < k; obj_idx_0++) {
        obj->privateSeed->data[obj->privateSeed->size[0] * obj_idx_0] =
          tmp_1[obj_idx_0];
      }
    }
  }

  ucie_sim_c_emxFree_real_T(&y);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  obj->privateMapToVoltage[0] = -0.5;
  obj->privateMapToVoltage[1] = 0.5;
  obj->privateIndex = -obj->privateDelay + 1.0;
  obj->pNextEdgeSampleIndex = 1.0;
  obj->pJitterValue = 0.0;
  obj->pIdealHalfCrossingTime = 0.5;
  obj->pJitteredHalfCrossingTime = 0.5;
  if (obj->privateSourceFlag == 3.0) {
    obj->privateDataIndex = -obj->privateDelay + 1.0;
  } else {
    obj->privateDataIndex = 1.0;
  }

  obj->privatePrevious = 0.0;
  for (obj_idx_0 = 0; obj_idx_0 < 31; obj_idx_0++) {
    obj->pPAMnSeed[obj_idx_0] = tmp_0[obj_idx_0];
  }

  ucie_sim_c_sort_mj(obj->privateMapToVoltage, y_0);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  obj->pSymbolStep = y_0[1] - y_0[0];
  obj->FIFOPosition = 1.0;
  obj->pBinaryIndex = 1.0;
}

static boolean_T ucie_sim_c_isequaln(real_T varargin_1, real_T varargin_2)
{
  boolean_T b_p;
  boolean_T p;
  p = false;

  /* Start for MATLABSystem: '<S22>/VGA' */
  if ((varargin_1 == varargin_2) || (rtIsNaN(varargin_1) && rtIsNaN(varargin_2)))
  {
    b_p = true;
  } else {
    b_p = false;
  }

  /* End of Start for MATLABSystem: '<S22>/VGA' */
  if (b_p) {
    p = true;
  }

  return p;
}

static void ucie_sim_c_stepFilter(real_T x, const real_T num_data[], const
  int32_T num_size[2], const real_T den_data[], const int32_T den_size[2], const
  real_T state_data[], const int32_T state_size[2], real_T *y, real_T
  b_state_data[], int32_T b_state_size[2], B_ucie_sim_c_T *ucie_sim_c_B)
{
  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->b_state = state_size[0];
  b_state_size[0] = ucie_sim_c_B->b_state;
  b_state_size[1] = 5;
  ucie_sim_c_B->loop_ub_tmp_o = state_size[0] * 5;
  if (ucie_sim_c_B->loop_ub_tmp_o - 1 >= 0) {
    memcpy(&b_state_data[0], &state_data[0], (uint32_T)
           ucie_sim_c_B->loop_ub_tmp_o * sizeof(real_T));
  }

  for (ucie_sim_c_B->loop_ub_tmp_o = 0; ucie_sim_c_B->loop_ub_tmp_o < 4;
       ucie_sim_c_B->loop_ub_tmp_o++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->b_indx = 4 - ucie_sim_c_B->loop_ub_tmp_o;
    ucie_sim_c_B->b_indx_n = 5 - ucie_sim_c_B->loop_ub_tmp_o;
    for (ucie_sim_c_B->i9 = 0; ucie_sim_c_B->i9 < ucie_sim_c_B->b_state;
         ucie_sim_c_B->i9++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->b_state_data[ucie_sim_c_B->i9] = b_state_data
        [(ucie_sim_c_B->b_indx - 1) * b_state_size[0] + ucie_sim_c_B->i9];
      b_state_data[ucie_sim_c_B->i9 + b_state_size[0] * (ucie_sim_c_B->b_indx_n
        - 1)] = ucie_sim_c_B->b_state_data[ucie_sim_c_B->i9];
    }
  }

  b_state_data[0] = x;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->loop_ub_tmp_o = state_size[0] - 1;
  for (ucie_sim_c_B->b_state = 0; ucie_sim_c_B->b_state <
       ucie_sim_c_B->loop_ub_tmp_o; ucie_sim_c_B->b_state++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->num = 0.0;
    for (ucie_sim_c_B->i9 = 0; ucie_sim_c_B->i9 < 5; ucie_sim_c_B->i9++) {
      ucie_sim_c_B->num += num_data[num_size[0] * ucie_sim_c_B->i9] *
        b_state_data[b_state_size[0] * ucie_sim_c_B->i9];
    }

    ucie_sim_c_B->den = b_state_data[1 + b_state_size[0]] * den_data[0];
    ucie_sim_c_B->den += b_state_data[(b_state_size[0] << 1) + 1] *
      den_data[den_size[0]];
    ucie_sim_c_B->den += b_state_data[b_state_size[0] * 3 + 1] *
      den_data[den_size[0] << 1];
    ucie_sim_c_B->den += b_state_data[(b_state_size[0] << 2) + 1] *
      den_data[den_size[0] * 3];
    b_state_data[1] = ucie_sim_c_B->num - ucie_sim_c_B->den;
  }

  *y = b_state_data[ucie_sim_c_B->loop_ub_tmp_o];
}

static real_T ucie_sim_c_CTLE_applyCascaded(serdes_CTLE_ucie_sim_c_T *obj,
  real_T waveIn, real_T Index, B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T waveOut;
  ucie_sim_c_B->b_tmp_k = (int32_T)Index - 1;
  ucie_sim_c_B->b_p = obj->FilterStatesCount[ucie_sim_c_B->b_tmp_k];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (ucie_sim_c_B->b_p < 1.0) {
    ucie_sim_c_B->c_p = 0;
  } else {
    ucie_sim_c_B->c_p = (int32_T)ucie_sim_c_B->b_p;
  }

  ucie_sim_c_B->Index_tmp = (int32_T)Index;
  ucie_sim_c_B->a_size[0] = ucie_sim_c_B->c_p;
  ucie_sim_c_B->a_size[1] = 5;
  ucie_sim_c_B->loop_ub_nj = ucie_sim_c_B->c_p;
  ucie_sim_c_B->b_p = obj->FilterNumeratorCount[ucie_sim_c_B->b_tmp_k];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->c_p = !(ucie_sim_c_B->b_p < 1.0);
  ucie_sim_c_B->localNumerator_size[0] = ucie_sim_c_B->c_p;
  ucie_sim_c_B->localNumerator_size[1] = 5;
  for (ucie_sim_c_B->i8 = 0; ucie_sim_c_B->i8 < 5; ucie_sim_c_B->i8++) {
    for (ucie_sim_c_B->i7 = 0; ucie_sim_c_B->i7 < ucie_sim_c_B->loop_ub_nj;
         ucie_sim_c_B->i7++) {
      ucie_sim_c_B->a_data[ucie_sim_c_B->i7 + ucie_sim_c_B->a_size[0] *
        ucie_sim_c_B->i8] = obj->FilterStates[((ucie_sim_c_B->i8 << 1) +
        ucie_sim_c_B->i7) + (ucie_sim_c_B->Index_tmp - 1) * 10];
    }

    if (ucie_sim_c_B->c_p - 1 >= 0) {
      ucie_sim_c_B->localNumerator_data[ucie_sim_c_B->localNumerator_size[0] *
        ucie_sim_c_B->i8] = obj->FilterNumerator[(ucie_sim_c_B->Index_tmp - 1) *
        5 + ucie_sim_c_B->i8];
    }
  }

  ucie_sim_c_B->b_p = obj->FilterDenominatorCount[ucie_sim_c_B->b_tmp_k];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->c_p = !(ucie_sim_c_B->b_p < 1.0);
  ucie_sim_c_B->localDenominator_size[0] = ucie_sim_c_B->c_p;
  ucie_sim_c_B->localDenominator_size[1] = 4;
  if (ucie_sim_c_B->c_p - 1 >= 0) {
    for (ucie_sim_c_B->i8 = 0; ucie_sim_c_B->i8 < 4; ucie_sim_c_B->i8++) {
      ucie_sim_c_B->localDenominator_data[ucie_sim_c_B->localDenominator_size[0]
        * ucie_sim_c_B->i8] = obj->FilterDenominator[((ucie_sim_c_B->Index_tmp -
        1) << 2) + ucie_sim_c_B->i8];
    }
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_stepFilter(waveIn, ucie_sim_c_B->localNumerator_data,
                        ucie_sim_c_B->localNumerator_size,
                        ucie_sim_c_B->localDenominator_data,
                        ucie_sim_c_B->localDenominator_size,
                        ucie_sim_c_B->a_data, ucie_sim_c_B->a_size,
                        &ucie_sim_c_B->b_p,
                        ucie_sim_c_B->b_localFilterStates_data,
                        ucie_sim_c_B->b_localFilterStates_size, ucie_sim_c_B);
  waveOut = obj->FilterGain[ucie_sim_c_B->b_tmp_k] * ucie_sim_c_B->b_p;
  ucie_sim_c_B->b_p = obj->FilterStatesCount[ucie_sim_c_B->b_tmp_k];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (ucie_sim_c_B->b_p < 1.0) {
    ucie_sim_c_B->c_p = 0;
  } else {
    ucie_sim_c_B->c_p = (int32_T)ucie_sim_c_B->b_p;
  }

  for (ucie_sim_c_B->i8 = 0; ucie_sim_c_B->i8 < 5; ucie_sim_c_B->i8++) {
    for (ucie_sim_c_B->i7 = 0; ucie_sim_c_B->i7 < ucie_sim_c_B->c_p;
         ucie_sim_c_B->i7++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      obj->FilterStates[(ucie_sim_c_B->i7 + (ucie_sim_c_B->i8 << 1)) + 10 *
        (ucie_sim_c_B->Index_tmp - 1)] = ucie_sim_c_B->
        b_localFilterStates_data[ucie_sim_c_B->b_localFilterStates_size[0] *
        ucie_sim_c_B->i8 + ucie_sim_c_B->i7];
    }
  }

  return waveOut;
}

static void ucie_sim_c_CTLE_applyCascaded_m(serdes_CTLE_ucie_sim_c_T *obj, const
  real_T waveIn[2], real_T Index, real_T waveOut[2], B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  ucie_sim_c_B->c_tmp = (int32_T)Index - 1;
  ucie_sim_c_B->c_e = obj->FilterStatesCount[ucie_sim_c_B->c_tmp];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (ucie_sim_c_B->c_e < 1.0) {
    ucie_sim_c_B->d_if = 0;
  } else {
    ucie_sim_c_B->d_if = (int32_T)ucie_sim_c_B->c_e;
  }

  ucie_sim_c_B->Index_tmp_g = (int32_T)Index;
  ucie_sim_c_B->localFilterStates_size[0] = ucie_sim_c_B->d_if;
  ucie_sim_c_B->localFilterStates_size[1] = 5;
  ucie_sim_c_B->loop_ub_dx = ucie_sim_c_B->d_if;
  ucie_sim_c_B->c_e = obj->FilterNumeratorCount[ucie_sim_c_B->c_tmp];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->d_if = !(ucie_sim_c_B->c_e < 1.0);
  ucie_sim_c_B->localNumerator_size_g[0] = ucie_sim_c_B->d_if;
  ucie_sim_c_B->localNumerator_size_g[1] = 5;
  for (ucie_sim_c_B->i14 = 0; ucie_sim_c_B->i14 < 5; ucie_sim_c_B->i14++) {
    for (ucie_sim_c_B->b_localFilterStates_tmp = 0;
         ucie_sim_c_B->b_localFilterStates_tmp < ucie_sim_c_B->loop_ub_dx;
         ucie_sim_c_B->b_localFilterStates_tmp++) {
      ucie_sim_c_B->localFilterStates_data_d
        [ucie_sim_c_B->b_localFilterStates_tmp +
        ucie_sim_c_B->localFilterStates_size[0] * ucie_sim_c_B->i14] =
        obj->FilterStates[((ucie_sim_c_B->i14 << 1) +
                           ucie_sim_c_B->b_localFilterStates_tmp) +
        (ucie_sim_c_B->Index_tmp_g - 1) * 10];
    }

    if (ucie_sim_c_B->d_if - 1 >= 0) {
      ucie_sim_c_B->localNumerator_data_n[ucie_sim_c_B->localNumerator_size_g[0]
        * ucie_sim_c_B->i14] = obj->FilterNumerator[(ucie_sim_c_B->Index_tmp_g -
        1) * 5 + ucie_sim_c_B->i14];
    }
  }

  ucie_sim_c_B->c_e = obj->FilterDenominatorCount[ucie_sim_c_B->c_tmp];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->d_if = !(ucie_sim_c_B->c_e < 1.0);
  ucie_sim_c_B->localDenominator_size_c[0] = ucie_sim_c_B->d_if;
  ucie_sim_c_B->localDenominator_size_c[1] = 4;
  if (ucie_sim_c_B->d_if - 1 >= 0) {
    for (ucie_sim_c_B->i14 = 0; ucie_sim_c_B->i14 < 4; ucie_sim_c_B->i14++) {
      ucie_sim_c_B->localDenominator_data_b
        [ucie_sim_c_B->localDenominator_size_c[0] * ucie_sim_c_B->i14] =
        obj->FilterDenominator[((ucie_sim_c_B->Index_tmp_g - 1) << 2) +
        ucie_sim_c_B->i14];
    }
  }

  for (ucie_sim_c_B->d_if = 0; ucie_sim_c_B->d_if < 2; ucie_sim_c_B->d_if++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_stepFilter(waveIn[ucie_sim_c_B->d_if],
                          ucie_sim_c_B->localNumerator_data_n,
                          ucie_sim_c_B->localNumerator_size_g,
                          ucie_sim_c_B->localDenominator_data_b,
                          ucie_sim_c_B->localDenominator_size_c,
                          ucie_sim_c_B->localFilterStates_data_d,
                          ucie_sim_c_B->localFilterStates_size,
                          &ucie_sim_c_B->c_e,
                          ucie_sim_c_B->b_localFilterStates_data_g,
                          ucie_sim_c_B->b_localFilterStates_size_o, ucie_sim_c_B);
    waveOut[ucie_sim_c_B->d_if] = ucie_sim_c_B->c_e;
    ucie_sim_c_B->b_localFilterStates_tmp =
      ucie_sim_c_B->b_localFilterStates_size_o[0];
    ucie_sim_c_B->localFilterStates_size[0] =
      ucie_sim_c_B->b_localFilterStates_tmp;
    ucie_sim_c_B->localFilterStates_size[1] = 5;
    ucie_sim_c_B->loop_ub_dx = ucie_sim_c_B->b_localFilterStates_tmp * 5;
    if (ucie_sim_c_B->loop_ub_dx - 1 >= 0) {
      memcpy(&ucie_sim_c_B->localFilterStates_data_d[0],
             &ucie_sim_c_B->b_localFilterStates_data_g[0], (uint32_T)
             ucie_sim_c_B->loop_ub_dx * sizeof(real_T));
    }
  }

  ucie_sim_c_B->c_e = obj->FilterGain[ucie_sim_c_B->c_tmp];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  waveOut[0] *= ucie_sim_c_B->c_e;
  waveOut[1] *= ucie_sim_c_B->c_e;
  ucie_sim_c_B->c_e = obj->FilterStatesCount[ucie_sim_c_B->c_tmp];

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (ucie_sim_c_B->c_e < 1.0) {
    ucie_sim_c_B->d_if = 0;
  } else {
    ucie_sim_c_B->d_if = (int32_T)ucie_sim_c_B->c_e;
  }

  for (ucie_sim_c_B->i14 = 0; ucie_sim_c_B->i14 < 5; ucie_sim_c_B->i14++) {
    for (ucie_sim_c_B->b_localFilterStates_tmp = 0;
         ucie_sim_c_B->b_localFilterStates_tmp < ucie_sim_c_B->d_if;
         ucie_sim_c_B->b_localFilterStates_tmp++) {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      obj->FilterStates[(ucie_sim_c_B->b_localFilterStates_tmp +
                         (ucie_sim_c_B->i14 << 1)) + 10 *
        (ucie_sim_c_B->Index_tmp_g - 1)] =
        ucie_sim_c_B->localFilterStates_data_d
        [ucie_sim_c_B->localFilterStates_size[0] * ucie_sim_c_B->i14 +
        ucie_sim_c_B->b_localFilterStates_tmp];
    }
  }
}

static void ucie_sim_c_binary_expand_op_3(real_T in1_data[], int32_T *in1_size,
  const real_T in2_data[], const int32_T *in2_size, const real_T in3_data[],
  const int32_T *in3_size)
{
  int32_T i;
  int32_T loop_ub;
  loop_ub = *in3_size == 1 ? *in2_size : *in3_size;
  *in1_size = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    in1_data[0] = in2_data[0] - in3_data[0];
  }
}

static void ucie_sim_c_circshift(emxArray_real_T_ucie_sim_c_T *a, B_ucie_sim_c_T
  *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *a__1;
  int32_T b;
  int32_T b_idx_1;
  int32_T dim;
  int32_T ns;
  int32_T nv;
  int32_T stride;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  dim = 2;
  if (a->size[0] != 1) {
    dim = 1;
  }

  if ((a->size[0] != 0) && (a->size[0] != 1)) {
    ns = 1;
    if (dim <= 1) {
      nv = a->size[0];
    } else {
      nv = 1;
    }

    if (nv <= 1) {
      ns = 0;
    }

    b_idx_1 = (int32_T)((uint32_T)a->size[0] >> 1);
    if (dim <= 1) {
      nv = a->size[0];
    } else {
      nv = 1;
    }

    stride = 1;
    b = dim - 1;
    for (dim = 0; dim < b; dim++) {
      stride *= a->size[0];
    }

    ucie_sim_c_emxInit_real_T(&a__1, 2, ucie_sim_c_B);
    dim = a__1->size[0] * a__1->size[1];
    a__1->size[0] = 1;
    a__1->size[1] = b_idx_1;
    ucie_sim_c_emxEnsureCapacity_real_T(a__1, dim, ucie_sim_c_B);
    if (b_idx_1 - 1 >= 0) {
      memset(&a__1->data[0], 0, (uint32_T)b_idx_1 * sizeof(real_T));
    }

    if ((nv > 1) && (ns > 0)) {
      for (b = 0; b < stride; b++) {
        a__1->data[0] = a->data[(nv - 1) * stride + b];
        for (dim = nv; dim >= 2; dim--) {
          a->data[b + (dim - 1) * stride] = a->data[(dim - 2) * stride + b];
        }

        a->data[b] = a__1->data[0];
      }
    }

    ucie_sim_c_emxFree_real_T(&a__1);
  }

  /* End of Start for MATLABSystem: '<S9>/CTLE' */
}

static real_T ucie_sim_c_sum(const emxArray_real_T_ucie_sim_c_T *x)
{
  real_T y;
  int32_T b_k;
  int32_T firstBlockLength;
  int32_T xblockoffset;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    int32_T lastBlockLength;
    int32_T nblocks;
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = (int32_T)((uint32_T)x->size[0] >> 10);
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }

    y = x->data[0];
    for (xblockoffset = 2; xblockoffset <= firstBlockLength; xblockoffset++) {
      y += x->data[xblockoffset - 1];
    }

    for (firstBlockLength = 2; firstBlockLength <= nblocks; firstBlockLength++)
    {
      real_T bsum;
      int32_T hi;
      xblockoffset = (firstBlockLength - 1) << 10;
      bsum = x->data[xblockoffset];
      if (firstBlockLength == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }

      for (b_k = 2; b_k <= hi; b_k++) {
        bsum += x->data[(xblockoffset + b_k) - 1];
      }

      y += bsum;
    }
  }

  /* End of Start for MATLABSystem: '<S9>/CTLE' */
  return y;
}

static real_T ucie_sim_c_binary_expand_op_2(const emxArray_real_T_ucie_sim_c_T
  *in1, const emxArray_real_T_ucie_sim_c_T *in2, const
  emxArray_real_T_ucie_sim_c_T *in3, const emxArray_real_T_ucie_sim_c_T *in4,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  emxArray_real_T_ucie_sim_c_T *in3_0;
  real_T out1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ucie_sim_c_emxInit_real_T(&in1_0, 1, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  loop_ub = in2->size[0] == 1 ? in1->size[0] : in2->size[0];
  i = in1_0->size[0];
  in1_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    in1_0->data[i] = in1->data[i * stride_0_0] * in2->data[i * stride_1_0];
  }

  ucie_sim_c_emxInit_real_T(&in3_0, 1, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  loop_ub = in4->size[0] == 1 ? in3->size[0] : in4->size[0];
  i = in3_0->size[0];
  in3_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in3_0, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    in3_0->data[i] = in3->data[i * stride_0_0] * in4->data[i * stride_1_0];
  }

  out1 = ucie_sim_c_sum(in1_0) - ucie_sim_c_sum(in3_0);
  ucie_sim_c_emxFree_real_T(&in3_0);
  ucie_sim_c_emxFree_real_T(&in1_0);
  return out1;
}

static void ucie_sim_c_binary_expand_op_4(real_T in1[2], int32_T in2, const
  emxArray_real_T_ucie_sim_c_T *in3, const emxArray_real_T_ucie_sim_c_T *in4,
  const emxArray_real_T_ucie_sim_c_T *in5, const emxArray_real_T_ucie_sim_c_T
  *in6, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in3_0;
  emxArray_real_T_ucie_sim_c_T *in5_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  ucie_sim_c_emxInit_real_T(&in3_0, 1, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  loop_ub = in4->size[0] == 1 ? in3->size[0] : in4->size[0];
  i = in3_0->size[0];
  in3_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in3_0, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    in3_0->data[i] = in3->data[i * stride_0_0] * in4->data[i * stride_1_0];
  }

  ucie_sim_c_emxInit_real_T(&in5_0, 1, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  loop_ub = in6->size[0] == 1 ? in5->size[0] : in6->size[0];
  i = in5_0->size[0];
  in5_0->size[0] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in5_0, i, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S9>/CTLE' */
  stride_0_0 = (in5->size[0] != 1);
  stride_1_0 = (in6->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    in5_0->data[i] = in5->data[i * stride_0_0] * in6->data[i * stride_1_0];
  }

  /* Start for MATLABSystem: '<S9>/CTLE' */
  in1[in2] = ucie_sim_c_sum(in3_0) - ucie_sim_c_sum(in5_0);
  ucie_sim_c_emxFree_real_T(&in5_0);
  ucie_sim_c_emxFree_real_T(&in3_0);
}

static void ucie_sim_c_CTLE_stepImpl(serdes_CTLE_ucie_sim_c_T *obj, real_T
  waveIn, real_T *waveOut, real_T *Config, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_int32_T_ucie_sim_c_T *inDelay_tmp;
  emxArray_int32_T_ucie_sim_c_T *outDelay_tmp;
  emxArray_real_T_ucie_sim_c_T *b_Xh;
  emxArray_real_T_ucie_sim_c_T *b_Yh;
  emxArray_real_T_ucie_sim_c_T *d;
  emxArray_real_T_ucie_sim_c_T *inCoeff;
  emxArray_real_T_ucie_sim_c_T *inCoeff_0;
  emxArray_real_T_ucie_sim_c_T *outCoeff;
  emxArray_real_T_ucie_sim_c_T *outCoeff_0;
  emxArray_real_T_ucie_sim_c_T *psel;
  emxArray_real_T_ucie_sim_c_T *rsel;
  boolean_T exitg1;
  boolean_T guard1;

  /* Start for MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->val_i = (obj->Mode == 1.0);
  ucie_sim_c_emxInit_real_T(&psel, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&rsel, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&inCoeff, 1, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&outCoeff, 1, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&d, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&b_Xh, 1, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&b_Yh, 1, ucie_sim_c_B);
  ucie_sim_c_emxInit_int32_T(&inDelay_tmp, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_int32_T(&outDelay_tmp, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&inCoeff_0, 1, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&outCoeff_0, 1, ucie_sim_c_B);
  guard1 = false;
  if (ucie_sim_c_B->val_i) {
    guard1 = true;
  } else {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->val_i = (obj->Mode == 2.0);
    if (ucie_sim_c_B->val_i) {
      guard1 = true;
    } else {
      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->val_i = (obj->Mode == 0.0);
      if (ucie_sim_c_B->val_i) {
        *waveOut = waveIn;
        *Config = obj->ConfigSelect;
      } else {
        ucie_sim_c_B->SamplesPerSymbol = obj->SymbolTime / obj->SampleInterval;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->SamplesPerSymbol = rt_roundd_snf
          (ucie_sim_c_B->SamplesPerSymbol);
        ucie_sim_c_B->val_i = (obj->Mode == 2.0);
        if (ucie_sim_c_B->val_i) {
          /* Start for MATLABSystem: '<S9>/CTLE' */
          ucie_sim_c_B->N = floor(1.0 / ucie_sim_c_B->SamplesPerSymbol);
          for (ucie_sim_c_B->b_configCanidate = 0;
               ucie_sim_c_B->b_configCanidate < 4;
               ucie_sim_c_B->b_configCanidate++) {
            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_B->val_i = obj->pFilterMethod;
            if (ucie_sim_c_B->val_i) {
              ucie_sim_c_B->waveIn[0] = waveIn;
              ucie_sim_c_B->waveIn[1] = waveIn;

              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_CTLE_applyCascaded_m(obj, ucie_sim_c_B->waveIn, (real_T)
                ucie_sim_c_B->b_configCanidate + 1.0, ucie_sim_c_B->wavetmp3,
                ucie_sim_c_B);
              ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->wavetmp3[1];
            } else {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
                [ucie_sim_c_B->b_configCanidate] + 1.0;
              if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
                ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
                psel->size[0] = 1;
                psel->size[1] = 1;
                ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6,
                  ucie_sim_c_B);
                psel->data[0] = (rtNaN);
              } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
                psel->size[0] = 1;
                psel->size[1] = 0;
              } else {
                ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
                psel->size[0] = 1;
                psel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
                ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6,
                  ucie_sim_c_B);
                ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 -
                  1.0);
                for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <=
                     ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
                  psel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
                }
              }

              ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
                [ucie_sim_c_B->b_configCanidate];
              if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
                ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
                rsel->size[0] = 1;
                rsel->size[1] = 1;
                ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6,
                  ucie_sim_c_B);
                rsel->data[0] = (rtNaN);
              } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
                rsel->size[0] = 1;
                rsel->size[1] = 0;
              } else {
                ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
                rsel->size[0] = 1;
                rsel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
                ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6,
                  ucie_sim_c_B);
                ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 -
                  1.0);
                for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <=
                     ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
                  rsel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
                }
              }

              ucie_sim_c_B->loop_ub_fx = psel->size[1];
              ucie_sim_c_B->i6 = inCoeff->size[0];
              inCoeff->size[0] = ucie_sim_c_B->loop_ub_fx;
              ucie_sim_c_emxEnsureCapacity_real_T(inCoeff, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
                /* Start for MATLABSystem: '<S9>/CTLE' */
                inCoeff->data[ucie_sim_c_B->i6] =
                  obj->FilterCoefficients.inCoeff[(3 *
                  ucie_sim_c_B->b_configCanidate + (int32_T)psel->
                  data[ucie_sim_c_B->i6]) - 1];
              }

              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->loop_ub_pm = rsel->size[1];
              ucie_sim_c_B->i6 = outCoeff->size[0];
              outCoeff->size[0] = ucie_sim_c_B->loop_ub_pm;
              ucie_sim_c_emxEnsureCapacity_real_T(outCoeff, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                /* Start for MATLABSystem: '<S9>/CTLE' */
                outCoeff->data[ucie_sim_c_B->i6] =
                  obj->FilterCoefficients.outCoeff
                  [((ucie_sim_c_B->b_configCanidate << 1) + (int32_T)rsel->
                    data[ucie_sim_c_B->i6]) - 1];
              }

              ucie_sim_c_B->i6 = d->size[0] * d->size[1];
              d->size[0] = 1;
              d->size[1] = ucie_sim_c_B->loop_ub_fx;
              ucie_sim_c_emxEnsureCapacity_real_T(d, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
                d->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.inDelay
                  [(int32_T)psel->data[ucie_sim_c_B->i6] - 1];
              }

              ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
              psel->size[0] = 1;
              psel->size[1] = ucie_sim_c_B->loop_ub_pm;
              ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              ucie_sim_c_B->X[0] = waveIn;
              ucie_sim_c_B->X[1] = waveIn;
              ucie_sim_c_B->i6 = b_Yh->size[0];
              b_Yh->size[0] = ucie_sim_c_B->loop_ub_pm;
              ucie_sim_c_emxEnsureCapacity_real_T(b_Yh, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                psel->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.outDelay
                  [(int32_T)rsel->data[ucie_sim_c_B->i6] - 1];

                /* Start for MATLABSystem: '<S9>/CTLE' */
                b_Yh->data[ucie_sim_c_B->i6] = psel->data[ucie_sim_c_B->i6] *
                  0.0;
              }

              ucie_sim_c_B->i6 = b_Xh->size[0];
              b_Xh->size[0] = ucie_sim_c_B->loop_ub_fx;
              ucie_sim_c_emxEnsureCapacity_real_T(b_Xh, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
                /* Start for MATLABSystem: '<S9>/CTLE' */
                b_Xh->data[ucie_sim_c_B->i6] = d->data[ucie_sim_c_B->i6] * 0.0;
              }

              for (ucie_sim_c_B->loop_ub_fx = 0; ucie_sim_c_B->loop_ub_fx < 2;
                   ucie_sim_c_B->loop_ub_fx++) {
                /* Start for MATLABSystem: '<S9>/CTLE' */
                ucie_sim_c_circshift(b_Xh, ucie_sim_c_B);
                b_Xh->data[0] = ucie_sim_c_B->X[ucie_sim_c_B->loop_ub_fx];
                ucie_sim_c_B->loop_ub_pm = inCoeff->size[0];
                if ((ucie_sim_c_B->loop_ub_pm == b_Xh->size[0]) &&
                    (outCoeff->size[0] == b_Yh->size[0])) {
                  ucie_sim_c_B->i6 = inCoeff_0->size[0];
                  inCoeff_0->size[0] = ucie_sim_c_B->loop_ub_pm;
                  ucie_sim_c_emxEnsureCapacity_real_T(inCoeff_0,
                    ucie_sim_c_B->i6, ucie_sim_c_B);
                  for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                       ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                    inCoeff_0->data[ucie_sim_c_B->i6] = inCoeff->
                      data[ucie_sim_c_B->i6] * b_Xh->data[ucie_sim_c_B->i6];
                  }

                  ucie_sim_c_B->loop_ub_pm = outCoeff->size[0];
                  ucie_sim_c_B->i6 = outCoeff_0->size[0];
                  outCoeff_0->size[0] = ucie_sim_c_B->loop_ub_pm;
                  ucie_sim_c_emxEnsureCapacity_real_T(outCoeff_0,
                    ucie_sim_c_B->i6, ucie_sim_c_B);
                  for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                       ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                    outCoeff_0->data[ucie_sim_c_B->i6] = outCoeff->
                      data[ucie_sim_c_B->i6] * b_Yh->data[ucie_sim_c_B->i6];
                  }

                  ucie_sim_c_B->wavetmp3[ucie_sim_c_B->loop_ub_fx] =
                    ucie_sim_c_sum(inCoeff_0) - ucie_sim_c_sum(outCoeff_0);
                } else {
                  ucie_sim_c_binary_expand_op_4(ucie_sim_c_B->wavetmp3,
                    ucie_sim_c_B->loop_ub_fx, inCoeff, b_Xh, outCoeff, b_Yh,
                    ucie_sim_c_B);
                }

                ucie_sim_c_circshift(b_Yh, ucie_sim_c_B);
                b_Yh->data[0] = ucie_sim_c_B->wavetmp3[ucie_sim_c_B->loop_ub_fx];
              }

              ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->wavetmp3[1];
            }

            /* Start for MATLABSystem: '<S9>/CTLE' */
            if (fabs(ucie_sim_c_B->wavetmp2) < 0.001) {
              ucie_sim_c_B->n = ucie_sim_c_B->N - 2.0;
            } else {
              ucie_sim_c_B->n = 0.0;
            }

            ucie_sim_c_B->loop_ub_fx = !(ucie_sim_c_B->n *
              ucie_sim_c_B->SamplesPerSymbol + 1.0 > ucie_sim_c_B->N *
              ucie_sim_c_B->SamplesPerSymbol);
            if ((int32_T)ucie_sim_c_B->SamplesPerSymbol > 0) {
              ucie_sim_c_B->u = (uint32_T)(int32_T)
                ucie_sim_c_B->SamplesPerSymbol;
              if (ucie_sim_c_B->u == 0U) {
                ucie_sim_c_B->loop_ub_pm = MAX_int32_T;

                /* Divide by zero handler */
              } else {
                ucie_sim_c_B->loop_ub_pm = (int32_T)((uint32_T)
                  ucie_sim_c_B->loop_ub_fx / ucie_sim_c_B->u);
              }
            } else {
              ucie_sim_c_B->loop_ub_pm = 0;
            }

            ucie_sim_c_B->loop_ub_fx = (int32_T)ucie_sim_c_B->SamplesPerSymbol;
            ucie_sim_c_B->loop_ub_pm *= (int32_T)ucie_sim_c_B->SamplesPerSymbol;
            for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                 ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
              ucie_sim_c_B->eye1_upper_data = ucie_sim_c_B->wavetmp2;
              ucie_sim_c_B->tmp_data_l4 = (ucie_sim_c_B->wavetmp2 < -0.001);
            }

            if (ucie_sim_c_B->tmp_data_l4 && (ucie_sim_c_B->loop_ub_pm - 1 >= 0))
            {
              ucie_sim_c_B->eye1_upper_data = (rtNaN);
            }

            ucie_sim_c_B->upperBound_size = ucie_sim_c_B->loop_ub_fx;
            if (ucie_sim_c_B->loop_ub_fx >= 1) {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->upperBound_data = ucie_sim_c_B->eye1_upper_data;
            }

            /* Start for MATLABSystem: '<S9>/CTLE' */
            for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                 ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
              ucie_sim_c_B->eye1_upper_data = ucie_sim_c_B->wavetmp2;
              ucie_sim_c_B->tmp_data_l4 = (ucie_sim_c_B->wavetmp2 > 0.001);
            }

            if (ucie_sim_c_B->tmp_data_l4 && (ucie_sim_c_B->loop_ub_pm - 1 >= 0))
            {
              ucie_sim_c_B->eye1_upper_data = (rtNaN);
            }

            ucie_sim_c_B->lowerBound_size = ucie_sim_c_B->loop_ub_fx;
            if (ucie_sim_c_B->upperBound_size == ucie_sim_c_B->lowerBound_size)
            {
              ucie_sim_c_B->eye_height_size = ucie_sim_c_B->loop_ub_fx;
              if (ucie_sim_c_B->loop_ub_fx - 1 >= 0) {
                ucie_sim_c_B->eye_height_data = ucie_sim_c_B->upperBound_data -
                  ucie_sim_c_B->eye1_upper_data;
              }
            } else {
              ucie_sim_c_binary_expand_op_3(&ucie_sim_c_B->eye_height_data,
                &ucie_sim_c_B->eye_height_size, &ucie_sim_c_B->upperBound_data,
                &ucie_sim_c_B->upperBound_size, &ucie_sim_c_B->eye1_upper_data,
                &ucie_sim_c_B->lowerBound_size);
            }

            if (ucie_sim_c_B->upperBound_size == ucie_sim_c_B->lowerBound_size)
            {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->loop_ub_fx = ucie_sim_c_B->upperBound_size;
              ucie_sim_c_B->varargin_1_size = ucie_sim_c_B->loop_ub_fx;
              if (ucie_sim_c_B->loop_ub_fx - 1 >= 0) {
                /* Start for MATLABSystem: '<S9>/CTLE' */
                ucie_sim_c_B->varargin_1_data[0] = ucie_sim_c_B->upperBound_data
                  - ucie_sim_c_B->eye1_upper_data;
              }
            } else {
              ucie_sim_c_binary_expand_op_3(ucie_sim_c_B->varargin_1_data,
                &ucie_sim_c_B->varargin_1_size, &ucie_sim_c_B->upperBound_data,
                &ucie_sim_c_B->upperBound_size, &ucie_sim_c_B->eye1_upper_data,
                &ucie_sim_c_B->lowerBound_size);
            }

            if (ucie_sim_c_B->eye_height_size == 1) {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->eye_height_data;
            } else {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->eye_height_data;
              if ((ucie_sim_c_B->eye_height_data < ucie_sim_c_B->wavetmp2) ||
                  (rtIsNaN(ucie_sim_c_B->eye_height_data) && (!rtIsNaN
                    (ucie_sim_c_B->wavetmp2)))) {
              } else {
                ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->eye_height_data;
              }
            }

            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_B->goodness[ucie_sim_c_B->b_configCanidate] =
              ucie_sim_c_B->wavetmp2;
          }

          /* Start for MATLABSystem: '<S9>/CTLE' */
          if (!rtIsNaN(ucie_sim_c_B->goodness[0])) {
            ucie_sim_c_B->loop_ub_fx = 1;
          } else {
            ucie_sim_c_B->loop_ub_fx = 0;
            ucie_sim_c_B->b_configCanidate = 2;
            exitg1 = false;
            while ((!exitg1) && (ucie_sim_c_B->b_configCanidate < 5)) {
              if (!rtIsNaN(ucie_sim_c_B->goodness[ucie_sim_c_B->b_configCanidate
                           - 1])) {
                ucie_sim_c_B->loop_ub_fx = ucie_sim_c_B->b_configCanidate;
                exitg1 = true;
              } else {
                ucie_sim_c_B->b_configCanidate++;
              }
            }
          }

          if (ucie_sim_c_B->loop_ub_fx == 0) {
            ucie_sim_c_B->loop_ub_fx = 1;
          } else {
            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_B->SamplesPerSymbol = ucie_sim_c_B->goodness
              [ucie_sim_c_B->loop_ub_fx - 1];
            ucie_sim_c_B->loop_ub_pm = ucie_sim_c_B->loop_ub_fx;
            for (ucie_sim_c_B->b_configCanidate = ucie_sim_c_B->loop_ub_pm + 1;
                 ucie_sim_c_B->b_configCanidate < 5;
                 ucie_sim_c_B->b_configCanidate++) {
              /* Start for MATLABSystem: '<S9>/CTLE' */
              ucie_sim_c_B->wavetmp2 = ucie_sim_c_B->goodness
                [ucie_sim_c_B->b_configCanidate - 1];
              if (ucie_sim_c_B->SamplesPerSymbol < ucie_sim_c_B->wavetmp2) {
                ucie_sim_c_B->SamplesPerSymbol = ucie_sim_c_B->wavetmp2;
                ucie_sim_c_B->loop_ub_fx = ucie_sim_c_B->b_configCanidate;
              }
            }
          }

          /* Start for MATLABSystem: '<S9>/CTLE' */
          *Config = (real_T)ucie_sim_c_B->loop_ub_fx - 1.0;
        } else {
          *Config = obj->ConfigSelect;
        }

        ucie_sim_c_B->b_configCanidate = (int32_T)(*Config + 1.0) - 1;
        ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
          [ucie_sim_c_B->b_configCanidate] + 1.0;

        /* Start for MATLABSystem: '<S9>/CTLE' */
        if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
          ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
          psel->size[0] = 1;
          psel->size[1] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          psel->data[0] = (rtNaN);
        } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
          psel->size[0] = 1;
          psel->size[1] = 0;
        } else {
          ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
          psel->size[0] = 1;
          psel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
          ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0);
          for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <=
               ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
            psel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
          }
        }

        ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
          [ucie_sim_c_B->b_configCanidate];

        /* Start for MATLABSystem: '<S9>/CTLE' */
        if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
          ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
          rsel->size[0] = 1;
          rsel->size[1] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          rsel->data[0] = (rtNaN);
        } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
          rsel->size[0] = 1;
          rsel->size[1] = 0;
        } else {
          ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
          rsel->size[0] = 1;
          rsel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
          ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0);
          for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <=
               ucie_sim_c_B->loop_ub_fx; ucie_sim_c_B->i6++) {
            rsel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
          }
        }

        ucie_sim_c_B->b_configCanidate = (int32_T)(*Config + 1.0);

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->loop_ub_fx = psel->size[1];
        ucie_sim_c_B->i6 = inCoeff->size[0];
        inCoeff->size[0] = ucie_sim_c_B->loop_ub_fx;
        ucie_sim_c_emxEnsureCapacity_real_T(inCoeff, ucie_sim_c_B->i6,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
             ucie_sim_c_B->i6++) {
          inCoeff->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.inCoeff
            [((ucie_sim_c_B->b_configCanidate - 1) * 3 + (int32_T)psel->
              data[ucie_sim_c_B->i6]) - 1];
        }

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->loop_ub_pm = rsel->size[1];
        ucie_sim_c_B->i6 = outCoeff->size[0];
        outCoeff->size[0] = ucie_sim_c_B->loop_ub_pm;
        ucie_sim_c_emxEnsureCapacity_real_T(outCoeff, ucie_sim_c_B->i6,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
             ucie_sim_c_B->i6++) {
          outCoeff->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.outCoeff
            [(((ucie_sim_c_B->b_configCanidate - 1) << 1) + (int32_T)rsel->
              data[ucie_sim_c_B->i6]) - 1];
        }

        ucie_sim_c_B->i6 = d->size[0] * d->size[1];
        d->size[0] = 1;
        d->size[1] = ucie_sim_c_B->loop_ub_fx;
        ucie_sim_c_emxEnsureCapacity_real_T(d, ucie_sim_c_B->i6, ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
             ucie_sim_c_B->i6++) {
          d->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.inDelay[(int32_T)
            psel->data[ucie_sim_c_B->i6] - 1];
        }

        ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
        psel->size[0] = 1;
        psel->size[1] = ucie_sim_c_B->loop_ub_pm;
        ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6, ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
             ucie_sim_c_B->i6++) {
          psel->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.outDelay
            [(int32_T)rsel->data[ucie_sim_c_B->i6] - 1];
        }

        /* Start for MATLABSystem: '<S9>/CTLE' */
        ucie_sim_c_B->val_i = obj->pFilterMethod;
        if (ucie_sim_c_B->val_i) {
          ucie_sim_c_B->waveIn[0] = waveIn;
          ucie_sim_c_B->waveIn[1] = waveIn;
          ucie_sim_c_CTLE_applyCascaded_m(obj, ucie_sim_c_B->waveIn, *Config +
            1.0, ucie_sim_c_B->wavetmp3, ucie_sim_c_B);
        } else {
          ucie_sim_c_B->X[0] = waveIn;
          ucie_sim_c_B->X[1] = waveIn;
          ucie_sim_c_B->i6 = b_Yh->size[0];
          b_Yh->size[0] = ucie_sim_c_B->loop_ub_pm;
          ucie_sim_c_emxEnsureCapacity_real_T(b_Yh, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
               ucie_sim_c_B->i6++) {
            /* Start for MATLABSystem: '<S9>/CTLE' */
            b_Yh->data[ucie_sim_c_B->i6] = psel->data[ucie_sim_c_B->i6] * 0.0;
          }

          ucie_sim_c_B->i6 = b_Xh->size[0];
          b_Xh->size[0] = ucie_sim_c_B->loop_ub_fx;
          ucie_sim_c_emxEnsureCapacity_real_T(b_Xh, ucie_sim_c_B->i6,
            ucie_sim_c_B);
          for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
               ucie_sim_c_B->i6++) {
            /* Start for MATLABSystem: '<S9>/CTLE' */
            b_Xh->data[ucie_sim_c_B->i6] = d->data[ucie_sim_c_B->i6] * 0.0;
          }

          for (ucie_sim_c_B->loop_ub_fx = 0; ucie_sim_c_B->loop_ub_fx < 2;
               ucie_sim_c_B->loop_ub_fx++) {
            /* Start for MATLABSystem: '<S9>/CTLE' */
            ucie_sim_c_circshift(b_Xh, ucie_sim_c_B);
            b_Xh->data[0] = ucie_sim_c_B->X[ucie_sim_c_B->loop_ub_fx];
            ucie_sim_c_B->loop_ub_pm = inCoeff->size[0];
            if ((ucie_sim_c_B->loop_ub_pm == b_Xh->size[0]) && (outCoeff->size[0]
                 == b_Yh->size[0])) {
              ucie_sim_c_B->i6 = inCoeff_0->size[0];
              inCoeff_0->size[0] = ucie_sim_c_B->loop_ub_pm;
              ucie_sim_c_emxEnsureCapacity_real_T(inCoeff_0, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                inCoeff_0->data[ucie_sim_c_B->i6] = inCoeff->data
                  [ucie_sim_c_B->i6] * b_Xh->data[ucie_sim_c_B->i6];
              }

              ucie_sim_c_B->loop_ub_pm = outCoeff->size[0];
              ucie_sim_c_B->i6 = outCoeff_0->size[0];
              outCoeff_0->size[0] = ucie_sim_c_B->loop_ub_pm;
              ucie_sim_c_emxEnsureCapacity_real_T(outCoeff_0, ucie_sim_c_B->i6,
                ucie_sim_c_B);
              for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <
                   ucie_sim_c_B->loop_ub_pm; ucie_sim_c_B->i6++) {
                outCoeff_0->data[ucie_sim_c_B->i6] = outCoeff->data
                  [ucie_sim_c_B->i6] * b_Yh->data[ucie_sim_c_B->i6];
              }

              ucie_sim_c_B->wavetmp3[ucie_sim_c_B->loop_ub_fx] = ucie_sim_c_sum
                (inCoeff_0) - ucie_sim_c_sum(outCoeff_0);
            } else {
              ucie_sim_c_binary_expand_op_4(ucie_sim_c_B->wavetmp3,
                ucie_sim_c_B->loop_ub_fx, inCoeff, b_Xh, outCoeff, b_Yh,
                ucie_sim_c_B);
            }

            ucie_sim_c_circshift(b_Yh, ucie_sim_c_B);
            b_Yh->data[0] = ucie_sim_c_B->wavetmp3[ucie_sim_c_B->loop_ub_fx];
          }
        }

        *waveOut = ucie_sim_c_B->wavetmp3[1];
      }
    }
  }

  if (guard1) {
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->val_i = (obj->Mode == 1.0);
    if (ucie_sim_c_B->val_i) {
      *Config = obj->ConfigSelect;
    } else {
      if (obj->privConfigInitialFlag) {
        obj->privConfigInitial = obj->ConfigSelect;
        obj->privConfigInitialFlag = false;
      } else {
        obj->privConfigInitial = obj->ConfigSelect;
      }

      *Config = obj->privConfigInitial;
    }

    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->val_i = obj->pFilterMethod;
    if (ucie_sim_c_B->val_i) {
      *waveOut = ucie_sim_c_CTLE_applyCascaded(obj, waveIn, *Config + 1.0,
        ucie_sim_c_B);
    } else {
      ucie_sim_c_B->b_configCanidate = (int32_T)(*Config + 1.0) - 1;
      ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
        [ucie_sim_c_B->b_configCanidate] + 1.0;

      /* Start for MATLABSystem: '<S9>/CTLE' */
      if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
        ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
        psel->size[0] = 1;
        psel->size[1] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6, ucie_sim_c_B);
        psel->data[0] = (rtNaN);
      } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
        psel->size[0] = 1;
        psel->size[1] = 0;
      } else {
        ucie_sim_c_B->i6 = psel->size[0] * psel->size[1];
        psel->size[0] = 1;
        psel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
        ucie_sim_c_emxEnsureCapacity_real_T(psel, ucie_sim_c_B->i6, ucie_sim_c_B);
        ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <= ucie_sim_c_B->loop_ub_fx;
             ucie_sim_c_B->i6++) {
          psel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
        }
      }

      ucie_sim_c_B->wavetmp2 = obj->FilterCoefficients.np
        [ucie_sim_c_B->b_configCanidate];

      /* Start for MATLABSystem: '<S9>/CTLE' */
      if (rtIsNaN(ucie_sim_c_B->wavetmp2)) {
        ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
        rsel->size[0] = 1;
        rsel->size[1] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6, ucie_sim_c_B);
        rsel->data[0] = (rtNaN);
      } else if (ucie_sim_c_B->wavetmp2 < 1.0) {
        rsel->size[0] = 1;
        rsel->size[1] = 0;
      } else {
        ucie_sim_c_B->i6 = rsel->size[0] * rsel->size[1];
        rsel->size[0] = 1;
        rsel->size[1] = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0) + 1;
        ucie_sim_c_emxEnsureCapacity_real_T(rsel, ucie_sim_c_B->i6, ucie_sim_c_B);
        ucie_sim_c_B->loop_ub_fx = (int32_T)(ucie_sim_c_B->wavetmp2 - 1.0);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 <= ucie_sim_c_B->loop_ub_fx;
             ucie_sim_c_B->i6++) {
          rsel->data[ucie_sim_c_B->i6] = (real_T)ucie_sim_c_B->i6 + 1.0;
        }
      }

      ucie_sim_c_B->b_configCanidate = (int32_T)(*Config + 1.0);

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->loop_ub_fx = psel->size[1];
      ucie_sim_c_B->i6 = inCoeff->size[0];
      inCoeff->size[0] = ucie_sim_c_B->loop_ub_fx;
      ucie_sim_c_emxEnsureCapacity_real_T(inCoeff, ucie_sim_c_B->i6,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
           ucie_sim_c_B->i6++) {
        inCoeff->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.inCoeff
          [((ucie_sim_c_B->b_configCanidate - 1) * 3 + (int32_T)psel->
            data[ucie_sim_c_B->i6]) - 1];
      }

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->loop_ub_pm = rsel->size[1];
      ucie_sim_c_B->i6 = outCoeff->size[0];
      outCoeff->size[0] = ucie_sim_c_B->loop_ub_pm;
      ucie_sim_c_emxEnsureCapacity_real_T(outCoeff, ucie_sim_c_B->i6,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
           ucie_sim_c_B->i6++) {
        outCoeff->data[ucie_sim_c_B->i6] = obj->FilterCoefficients.outCoeff
          [(((ucie_sim_c_B->b_configCanidate - 1) << 1) + (int32_T)rsel->
            data[ucie_sim_c_B->i6]) - 1];
      }

      /* Start for MATLABSystem: '<S9>/CTLE' */
      ucie_sim_c_B->i6 = inDelay_tmp->size[0] * inDelay_tmp->size[1];
      inDelay_tmp->size[0] = 1;
      inDelay_tmp->size[1] = ucie_sim_c_B->loop_ub_fx;
      ucie_sim_c_emxEnsureCapacity_int32_T(inDelay_tmp, ucie_sim_c_B->i6,
        ucie_sim_c_B);
      ucie_sim_c_B->i6 = b_Yh->size[0];
      b_Yh->size[0] = ucie_sim_c_B->loop_ub_fx;
      ucie_sim_c_emxEnsureCapacity_real_T(b_Yh, ucie_sim_c_B->i6, ucie_sim_c_B);

      /* Start for MATLABSystem: '<S9>/CTLE' */
      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
           ucie_sim_c_B->i6++) {
        inDelay_tmp->data[ucie_sim_c_B->i6] = (int32_T)psel->data
          [ucie_sim_c_B->i6];
        b_Yh->data[ucie_sim_c_B->i6] = obj->
          FilterCoefficients.inDelay[inDelay_tmp->data[ucie_sim_c_B->i6] - 1];
      }

      ucie_sim_c_B->i6 = outDelay_tmp->size[0] * outDelay_tmp->size[1];
      outDelay_tmp->size[0] = 1;
      outDelay_tmp->size[1] = ucie_sim_c_B->loop_ub_pm;
      ucie_sim_c_emxEnsureCapacity_int32_T(outDelay_tmp, ucie_sim_c_B->i6,
        ucie_sim_c_B);
      ucie_sim_c_B->i6 = b_Xh->size[0];
      b_Xh->size[0] = ucie_sim_c_B->loop_ub_pm;
      ucie_sim_c_emxEnsureCapacity_real_T(b_Xh, ucie_sim_c_B->i6, ucie_sim_c_B);

      /* Start for MATLABSystem: '<S9>/CTLE' */
      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
           ucie_sim_c_B->i6++) {
        outDelay_tmp->data[ucie_sim_c_B->i6] = (int32_T)rsel->data
          [ucie_sim_c_B->i6];
        b_Xh->data[ucie_sim_c_B->i6] = obj->
          FilterCoefficients.outDelay[outDelay_tmp->data[ucie_sim_c_B->i6] - 1];
      }

      ucie_sim_c_circshift(b_Yh, ucie_sim_c_B);
      b_Yh->data[0] = waveIn;
      if ((inCoeff->size[0] == b_Yh->size[0]) && (outCoeff->size[0] ==
           b_Xh->size[0])) {
        ucie_sim_c_B->i6 = inCoeff_0->size[0];
        inCoeff_0->size[0] = ucie_sim_c_B->loop_ub_fx;
        ucie_sim_c_emxEnsureCapacity_real_T(inCoeff_0, ucie_sim_c_B->i6,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
             ucie_sim_c_B->i6++) {
          inCoeff_0->data[ucie_sim_c_B->i6] = inCoeff->data[ucie_sim_c_B->i6] *
            b_Yh->data[ucie_sim_c_B->i6];
        }

        ucie_sim_c_B->i6 = outCoeff_0->size[0];
        outCoeff_0->size[0] = ucie_sim_c_B->loop_ub_pm;
        ucie_sim_c_emxEnsureCapacity_real_T(outCoeff_0, ucie_sim_c_B->i6,
          ucie_sim_c_B);
        for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
             ucie_sim_c_B->i6++) {
          outCoeff_0->data[ucie_sim_c_B->i6] = outCoeff->data[ucie_sim_c_B->i6] *
            b_Xh->data[ucie_sim_c_B->i6];
        }

        *waveOut = ucie_sim_c_sum(inCoeff_0) - ucie_sim_c_sum(outCoeff_0);
      } else {
        *waveOut = ucie_sim_c_binary_expand_op_2(inCoeff, b_Yh, outCoeff, b_Xh,
          ucie_sim_c_B);
      }

      ucie_sim_c_circshift(b_Xh, ucie_sim_c_B);
      b_Xh->data[0] = *waveOut;
      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_fx;
           ucie_sim_c_B->i6++) {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        obj->FilterCoefficients.inDelay[inDelay_tmp->data[ucie_sim_c_B->i6] - 1]
          = b_Yh->data[ucie_sim_c_B->i6];
      }

      for (ucie_sim_c_B->i6 = 0; ucie_sim_c_B->i6 < ucie_sim_c_B->loop_ub_pm;
           ucie_sim_c_B->i6++) {
        /* Start for MATLABSystem: '<S9>/CTLE' */
        obj->FilterCoefficients.outDelay[outDelay_tmp->data[ucie_sim_c_B->i6] -
          1] = b_Xh->data[ucie_sim_c_B->i6];
      }
    }
  }

  ucie_sim_c_emxFree_real_T(&outCoeff_0);
  ucie_sim_c_emxFree_real_T(&inCoeff_0);
  ucie_sim_c_emxFree_int32_T(&outDelay_tmp);
  ucie_sim_c_emxFree_int32_T(&inDelay_tmp);
  ucie_sim_c_emxFree_real_T(&b_Yh);
  ucie_sim_c_emxFree_real_T(&b_Xh);
  ucie_sim_c_emxFree_real_T(&d);
  ucie_sim_c_emxFree_real_T(&outCoeff);
  ucie_sim_c_emxFree_real_T(&inCoeff);
  ucie_sim_c_emxFree_real_T(&rsel);
  ucie_sim_c_emxFree_real_T(&psel);
}

static boolean_T ucie_sim_c_isequal(const real_T varargin_1[4], const real_T
  varargin_2[4])
{
  int32_T b_k;
  boolean_T exitg1;
  boolean_T p;
  boolean_T p_0;
  p = false;

  /* Start for MATLABSystem: '<S10>/DFE System Object' */
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 4)) {
    if (!(varargin_1[b_k] == varargin_2[b_k])) {
      p_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p_0) {
    p = true;
  }

  return p;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

static real_T ucie_sim_c_mod(real_T x)
{
  real_T r;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = fmod(x, 2.0);
    if (r == 0.0) {
      r = 0.0;
    } else if (r < 0.0) {
      r += 2.0;
    }
  }

  /* End of Start for MATLABSystem: '<S10>/CDR System Object' */
  return r;
}

static void ucie_sim_c_binary_expand_op_9(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, const emxArray_real_T_ucie_sim_c_T *in3,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  i = in1->PAMThreshold->size[0] * in1->PAMThreshold->size[1];
  in1->PAMThreshold->size[0] = 1;
  ucie_sim_c_emxEnsureCapacity_real_T(in1->PAMThreshold, i, ucie_sim_c_B);
  loop_ub = in3->size[1] == 1 ? in2->size[1] : in3->size[1];
  i = in1->PAMThreshold->size[0] * in1->PAMThreshold->size[1];
  in1->PAMThreshold->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1->PAMThreshold, i, ucie_sim_c_B);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_1 = (in3->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->PAMThreshold->data[i] = in2->data[i * stride_0_1] + in3->data[i *
      stride_1_1];
  }
}

static void ucie_sim_c_eml_float_colon(real_T a, real_T b,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T apnd;
  real_T cdiff;
  real_T ndbl;
  int32_T b_k;
  int32_T c;
  int32_T k;
  int32_T n;
  int32_T nm1d2;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  ndbl = floor((b - a) + 0.5);
  apnd = a + ndbl;
  cdiff = apnd - b;
  if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(a), fabs(b))) {
    ndbl++;
    apnd = b;
  } else if (cdiff > 0.0) {
    apnd = (ndbl - 1.0) + a;
  } else {
    ndbl++;
  }

  if (ndbl >= 0.0) {
    n = (int32_T)ndbl;
  } else {
    n = 0;
  }

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  n--;
  b_k = y->size[0] * y->size[1];
  y->size[0] = 1;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  y->size[1] = n + 1;
  ucie_sim_c_emxEnsureCapacity_real_T(y, b_k, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  if (n + 1 > 0) {
    y->data[0] = a;
    if (n + 1 > 1) {
      y->data[n] = apnd;
      nm1d2 = (int32_T)((uint32_T)n >> 1);
      c = nm1d2 - 2;
      for (b_k = 0; b_k <= c; b_k++) {
        k = b_k + 1;
        y->data[k] = a + (real_T)k;
        y->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        y->data[nm1d2] = (a + apnd) / 2.0;
      } else {
        y->data[nm1d2] = a + (real_T)nm1d2;
        y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }
}

static void ucie_sim_c_eml_float_colon_m(real_T a, real_T b,
  emxArray_real_T_ucie_sim_c_T *y, B_ucie_sim_c_T *ucie_sim_c_B)
{
  real_T apnd;
  real_T cdiff;
  real_T ndbl;
  int32_T b_k;
  int32_T c;
  int32_T k;
  int32_T n;
  int32_T nm1d2;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  ndbl = floor((b - a) / 2.0 + 0.5);
  apnd = ndbl * 2.0 + a;
  cdiff = apnd - b;
  if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(a), fabs(b))) {
    ndbl++;
    apnd = b;
  } else if (cdiff > 0.0) {
    apnd = (ndbl - 1.0) * 2.0 + a;
  } else {
    ndbl++;
  }

  if (ndbl >= 0.0) {
    n = (int32_T)ndbl;
  } else {
    n = 0;
  }

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  n--;
  b_k = y->size[0] * y->size[1];
  y->size[0] = 1;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  y->size[1] = n + 1;
  ucie_sim_c_emxEnsureCapacity_real_T(y, b_k, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  if (n + 1 > 0) {
    y->data[0] = a;
    if (n + 1 > 1) {
      y->data[n] = apnd;
      nm1d2 = (int32_T)((uint32_T)n >> 1);
      c = nm1d2 - 2;
      for (b_k = 0; b_k <= c; b_k++) {
        k = b_k + 1;
        ndbl = (real_T)k * 2.0;
        y->data[k] = a + ndbl;
        y->data[n - k] = apnd - ndbl;
      }

      if (nm1d2 << 1 == n) {
        y->data[nm1d2] = (a + apnd) / 2.0;
      } else {
        ndbl = (real_T)nm1d2 * 2.0;
        y->data[nm1d2] = a + ndbl;
        y->data[nm1d2 + 1] = apnd - ndbl;
      }
    }
  }
}

static void ucie_sim_c_binary_expand_op_8(emxArray_real_T_ucie_sim_c_T *in1,
  const serdes_CDR_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  ucie_sim_c_emxInit_real_T(&in1_0, 2, ucie_sim_c_B);
  i = in1_0->size[0] * in1_0->size[1];
  in1_0->size[0] = 1;
  loop_ub = in2->PAMThreshold->size[1] == 1 ? in1->size[1] : in2->
    PAMThreshold->size[1];
  in1_0->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, i, ucie_sim_c_B);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->PAMThreshold->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_0->data[i] = (in1->data[i * stride_0_1] - in2->PAMThreshold->data[i *
                      stride_1_1]) / in2->AverageWindow / 2.0;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1, i, ucie_sim_c_B);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in1_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  ucie_sim_c_emxFree_real_T(&in1_0);
}

static void ucie_sim_c_binary_expand_op_7(serdes_CDR_ucie_sim_c_T *in1, const
  emxArray_real_T_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  ucie_sim_c_emxInit_real_T(&in1_0, 2, ucie_sim_c_B);
  i = in1_0->size[0] * in1_0->size[1];
  in1_0->size[0] = 1;
  loop_ub = in2->size[1] == 1 ? in1->PAMThreshold->size[1] : in2->size[1];
  in1_0->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, i, ucie_sim_c_B);
  stride_0_1 = (in1->PAMThreshold->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_0->data[i] = in1->PAMThreshold->data[i * stride_0_1] + in2->data[i *
      stride_1_1];
  }

  i = in1->PAMThreshold->size[0] * in1->PAMThreshold->size[1];
  in1->PAMThreshold->size[0] = 1;
  in1->PAMThreshold->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1->PAMThreshold, i, ucie_sim_c_B);
  for (i = 0; i < loop_ub; i++) {
    in1->PAMThreshold->data[i] = in1_0->data[i];
  }

  ucie_sim_c_emxFree_real_T(&in1_0);
}

static void ucie_sim_c_CDR_stepImpl(serdes_CDR_ucie_sim_c_T *obj, real_T waveIn,
  real_T *phase, real_T *ClockAMI_clockTime, real_T *ClockAMI_clockValidOnRising,
  cdrOptional *optional, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *x;
  emxArray_real_T_ucie_sim_c_T *ThresholdEstimateA;
  emxArray_real_T_ucie_sim_c_T *f;
  real_T PAM4Threshold;
  real_T PhaseError;
  real_T SimTime;
  real_T varargin_10;
  real_T varargin_13;
  real_T varargin_5;
  real_T varargin_6;
  real_T varargin_7;
  real_T varargin_8;
  real_T varargin_9;
  real_T y_tmp;
  int32_T d;
  int32_T loop_ub;
  int32_T nz;
  int32_T vlen;
  boolean_T EarlyTest;
  boolean_T LateTest;
  boolean_T val;
  PhaseError = 0.0;
  SimTime = obj->SamplesElapsed * obj->SampleInterval;
  if (obj->EdgeSampleCounter < 0.0) {
    obj->EdgeVoltage = ((obj->EdgeSampleCounter + 1.0) * waveIn -
                        obj->EdgeSampleCounter * obj->LastSample) +
      obj->EdgeSymbol * obj->Sensitivity;
    if (obj->EdgeVoltage > 0.0) {
      obj->EdgeSymbol = 0.5;
    } else {
      obj->EdgeSymbol = -0.5;
    }

    obj->PriorData = obj->DataSymbol;
    obj->EdgeSampleCounter = ((obj->ReferenceOffset / 1.0E+6 + 1.0) *
      obj->SamplesPerSymbol + obj->EdgeSampleCounter) - 1.0;
    obj->DataSymbolOnRising = 0.0;
  } else {
    obj->EdgeSampleCounter--;
  }

  if (obj->DataSampleCounter < 0.0) {
    obj->DataVoltage = ((obj->DataSampleCounter + 1.0) * waveIn -
                        obj->DataSampleCounter * obj->LastSample) +
      obj->DataSymbol * obj->Sensitivity;
    PAM4Threshold = obj->DataSampleCounter * obj->SampleInterval + SimTime;
    PhaseError = obj->SymbolTime;

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    obj->Phase = rt_remd_snf(PAM4Threshold, PhaseError);
    PhaseError = (obj->DataSampleCounter * obj->SampleInterval + SimTime) -
      obj->SymbolTime / 2.0;
    if (PhaseError < 0.0) {
      PhaseError = 0.0;
    }

    obj->ClockTimesInternal = PhaseError;

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    val = (obj->Modulation == 2.0);
    if (!val) {
      PAM4Threshold = obj->DataVoltage;

      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      PhaseError = (fabs(PAM4Threshold) - obj->EyeHeightAbsAve) /
        obj->AverageWindow / 2.0;
      obj->EyeHeightAbsAve += PhaseError;
      ucie_sim_c_emxInit_real_T(&ThresholdEstimateA, 2, ucie_sim_c_B);
      if (!(obj->AbsAveUpdateMAIsConverged != 0.0)) {
        obj->AbsAveUpdateMA += (PhaseError - obj->AbsAveUpdateMA) /
          obj->AverageWindow / 2.0;
        PAM4Threshold = obj->AbsAveUpdateMA;

        /* Start for MATLABSystem: '<S10>/CDR System Object' */
        if (rtIsNaN(PAM4Threshold)) {
          PhaseError = (rtNaN);
        } else if (PAM4Threshold < 0.0) {
          PhaseError = -1.0;
        } else {
          PhaseError = (PAM4Threshold > 0.0);
        }

        if (PhaseError != obj->AbsAveUpdateMASign) {
          obj->AbsAveUpdateMASignChangeCount++;
        }

        PAM4Threshold = obj->AbsAveUpdateMA;

        /* Start for MATLABSystem: '<S10>/CDR System Object' */
        if (rtIsNaN(PAM4Threshold)) {
          PhaseError = (rtNaN);
        } else if (PAM4Threshold < 0.0) {
          PhaseError = -1.0;
        } else {
          PhaseError = (PAM4Threshold > 0.0);
        }

        obj->AbsAveUpdateMASign = PhaseError;
        if (obj->AbsAveUpdateMASignChangeCount > 20.0) {
          obj->AbsAveUpdateMAIsConverged = 1.0;
          SimTime = obj->PAMThreshold->data[1] - obj->PAMThreshold->data[0];
          if (ucie_sim_c_mod(obj->Modulation) == 1.0) {
            PAM4Threshold = obj->Modulation / 2.0;

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            y_tmp = floor(PAM4Threshold);
            PhaseError = -y_tmp;
            PAM4Threshold = obj->Modulation / 2.0;

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            PAM4Threshold = floor(PAM4Threshold);
            if (rtIsNaN(PhaseError) || rtIsNaN(PAM4Threshold)) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              ThresholdEstimateA->data[0] = (rtNaN);
            } else if (PAM4Threshold < -y_tmp) {
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 0;
            } else if ((rtIsInf(PhaseError) || rtIsInf(PAM4Threshold)) &&
                       (-y_tmp == PAM4Threshold)) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              ThresholdEstimateA->data[0] = (rtNaN);
            } else if (PhaseError == -y_tmp) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              loop_ub = (int32_T)(PAM4Threshold - PhaseError);
              ThresholdEstimateA->size[1] = loop_ub + 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              for (nz = 0; nz <= loop_ub; nz++) {
                ThresholdEstimateA->data[nz] = PhaseError + (real_T)nz;
              }
            } else {
              ucie_sim_c_eml_float_colon(-y_tmp, PAM4Threshold,
                ThresholdEstimateA, ucie_sim_c_B);
            }

            nz = obj->VoltageLevels->size[0] * obj->VoltageLevels->size[1];

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            obj->VoltageLevels->size[0] = 1;
            obj->VoltageLevels->size[1] = ThresholdEstimateA->size[1];
            ucie_sim_c_emxEnsureCapacity_real_T(obj->VoltageLevels, nz,
              ucie_sim_c_B);

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            loop_ub = ThresholdEstimateA->size[1] - 1;
            for (nz = 0; nz <= loop_ub; nz++) {
              /* Start for MATLABSystem: '<S10>/CDR System Object' */
              obj->VoltageLevels->data[nz] = SimTime * ThresholdEstimateA->
                data[nz];
            }
          } else {
            PhaseError = -obj->Modulation + 1.0;
            PAM4Threshold = obj->Modulation - 1.0;

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            if (rtIsNaN(PhaseError) || rtIsNaN(PAM4Threshold)) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              ThresholdEstimateA->data[0] = (rtNaN);
            } else if (PAM4Threshold < PhaseError) {
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 0;
            } else if ((rtIsInf(PhaseError) || rtIsInf(PAM4Threshold)) &&
                       (PhaseError == PAM4Threshold)) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              ThresholdEstimateA->size[1] = 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              ThresholdEstimateA->data[0] = (rtNaN);
            } else if (floor(PhaseError) == PhaseError) {
              nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
              ThresholdEstimateA->size[0] = 1;
              loop_ub = (int32_T)((PAM4Threshold - PhaseError) / 2.0);
              ThresholdEstimateA->size[1] = loop_ub + 1;
              ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
                ucie_sim_c_B);
              for (nz = 0; nz <= loop_ub; nz++) {
                ThresholdEstimateA->data[nz] = 2.0 * (real_T)nz + PhaseError;
              }
            } else {
              ucie_sim_c_eml_float_colon_m(PhaseError, PAM4Threshold,
                ThresholdEstimateA, ucie_sim_c_B);
            }

            PhaseError = SimTime / 2.0;
            nz = obj->VoltageLevels->size[0] * obj->VoltageLevels->size[1];

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            obj->VoltageLevels->size[0] = 1;
            obj->VoltageLevels->size[1] = ThresholdEstimateA->size[1];
            ucie_sim_c_emxEnsureCapacity_real_T(obj->VoltageLevels, nz,
              ucie_sim_c_B);

            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            loop_ub = ThresholdEstimateA->size[1] - 1;
            for (nz = 0; nz <= loop_ub; nz++) {
              /* Start for MATLABSystem: '<S10>/CDR System Object' */
              obj->VoltageLevels->data[nz] = PhaseError *
                ThresholdEstimateA->data[nz];
            }
          }
        }

        SimTime = obj->EyeHeightAbsAve * 2.0 / obj->Modulation;
        if (ucie_sim_c_mod(obj->Modulation) == 1.0) {
          PhaseError = -obj->Modulation + 2.0;
          PAM4Threshold = obj->Modulation - 2.0;

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          if (rtIsNaN(PhaseError) || rtIsNaN(PAM4Threshold)) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            ThresholdEstimateA->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            ThresholdEstimateA->data[0] = (rtNaN);
          } else if (PAM4Threshold < PhaseError) {
            ThresholdEstimateA->size[1] = 0;
          } else if ((rtIsInf(PhaseError) || rtIsInf(PAM4Threshold)) &&
                     (PhaseError == PAM4Threshold)) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            ThresholdEstimateA->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            ThresholdEstimateA->data[0] = (rtNaN);
          } else if (floor(PhaseError) == PhaseError) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            loop_ub = (int32_T)((PAM4Threshold - PhaseError) / 2.0);
            ThresholdEstimateA->size[1] = loop_ub + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            for (nz = 0; nz <= loop_ub; nz++) {
              ThresholdEstimateA->data[nz] = 2.0 * (real_T)nz + PhaseError;
            }
          } else {
            ucie_sim_c_eml_float_colon_m(PhaseError, PAM4Threshold,
              ThresholdEstimateA, ucie_sim_c_B);
          }

          vlen = ThresholdEstimateA->size[1];
          nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          ThresholdEstimateA->size[0] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
            ucie_sim_c_B);

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          loop_ub = vlen - 1;
          for (nz = 0; nz <= loop_ub; nz++) {
            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            ThresholdEstimateA->data[nz] *= SimTime;
          }
        } else {
          PhaseError = -(obj->Modulation / 2.0 - 1.0);
          PAM4Threshold = obj->Modulation / 2.0 - 1.0;

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          if (rtIsNaN(PhaseError) || rtIsNaN(PAM4Threshold)) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            ThresholdEstimateA->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            ThresholdEstimateA->data[0] = (rtNaN);
          } else if (PAM4Threshold < PhaseError) {
            ThresholdEstimateA->size[1] = 0;
          } else if ((rtIsInf(PhaseError) || rtIsInf(PAM4Threshold)) &&
                     (PhaseError == PAM4Threshold)) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            ThresholdEstimateA->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            ThresholdEstimateA->data[0] = (rtNaN);
          } else if (floor(PhaseError) == PhaseError) {
            nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
            ThresholdEstimateA->size[0] = 1;
            loop_ub = (int32_T)(PAM4Threshold - PhaseError);
            ThresholdEstimateA->size[1] = loop_ub + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
              ucie_sim_c_B);
            for (nz = 0; nz <= loop_ub; nz++) {
              ThresholdEstimateA->data[nz] = PhaseError + (real_T)nz;
            }
          } else {
            ucie_sim_c_eml_float_colon(PhaseError, PAM4Threshold,
              ThresholdEstimateA, ucie_sim_c_B);
          }

          PhaseError = 2.0 * SimTime;

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          vlen = ThresholdEstimateA->size[1];
          nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          ThresholdEstimateA->size[0] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
            ucie_sim_c_B);

          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          loop_ub = vlen - 1;
          for (nz = 0; nz <= loop_ub; nz++) {
            /* Start for MATLABSystem: '<S10>/CDR System Object' */
            ThresholdEstimateA->data[nz] *= PhaseError;
          }
        }

        if (ThresholdEstimateA->size[1] == obj->PAMThreshold->size[1]) {
          loop_ub = ThresholdEstimateA->size[1] - 1;
          nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];
          ThresholdEstimateA->size[0] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz,
            ucie_sim_c_B);
          for (nz = 0; nz <= loop_ub; nz++) {
            ThresholdEstimateA->data[nz] = (ThresholdEstimateA->data[nz] -
              obj->PAMThreshold->data[nz]) / obj->AverageWindow / 2.0;
          }
        } else {
          ucie_sim_c_binary_expand_op_8(ThresholdEstimateA, obj, ucie_sim_c_B);
        }

        if (obj->PAMThreshold->size[1] == ThresholdEstimateA->size[1]) {
          loop_ub = obj->PAMThreshold->size[1] - 1;
          nz = obj->PAMThreshold->size[0] * obj->PAMThreshold->size[1];
          obj->PAMThreshold->size[0] = 1;
          ucie_sim_c_emxEnsureCapacity_real_T(obj->PAMThreshold, nz,
            ucie_sim_c_B);
          for (nz = 0; nz <= loop_ub; nz++) {
            obj->PAMThreshold->data[nz] += ThresholdEstimateA->data[nz];
          }
        } else {
          ucie_sim_c_binary_expand_op_7(obj, ThresholdEstimateA, ucie_sim_c_B);
        }
      } else {
        PhaseError = (real_T)obj->VoltageLevels->size[1] - 1.0;

        /* Start for MATLABSystem: '<S10>/CDR System Object' */
        if (PhaseError < 1.0) {
          d = 0;
        } else {
          d = (int32_T)PhaseError;
        }

        ucie_sim_c_diff_m(obj->VoltageLevels, ThresholdEstimateA, ucie_sim_c_B);
        vlen = ThresholdEstimateA->size[1];
        nz = ThresholdEstimateA->size[0] * ThresholdEstimateA->size[1];

        /* Start for MATLABSystem: '<S10>/CDR System Object' */
        ThresholdEstimateA->size[0] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(ThresholdEstimateA, nz, ucie_sim_c_B);

        /* Start for MATLABSystem: '<S10>/CDR System Object' */
        loop_ub = vlen - 1;
        for (nz = 0; nz <= loop_ub; nz++) {
          /* Start for MATLABSystem: '<S10>/CDR System Object' */
          ThresholdEstimateA->data[nz] /= 2.0;
        }

        ucie_sim_c_emxInit_real_T(&f, 2, ucie_sim_c_B);
        nz = f->size[0] * f->size[1];
        f->size[0] = 1;
        f->size[1] = d;
        ucie_sim_c_emxEnsureCapacity_real_T(f, nz, ucie_sim_c_B);
        for (nz = 0; nz < d; nz++) {
          f->data[nz] = obj->VoltageLevels->data[nz];
        }

        if (ThresholdEstimateA->size[1] == f->size[1]) {
          nz = obj->PAMThreshold->size[0] * obj->PAMThreshold->size[1];
          obj->PAMThreshold->size[0] = 1;
          obj->PAMThreshold->size[1] = vlen;
          ucie_sim_c_emxEnsureCapacity_real_T(obj->PAMThreshold, nz,
            ucie_sim_c_B);
          for (nz = 0; nz < vlen; nz++) {
            obj->PAMThreshold->data[nz] = ThresholdEstimateA->data[nz] + f->
              data[nz];
          }
        } else {
          ucie_sim_c_binary_expand_op_9(obj, ThresholdEstimateA, f, ucie_sim_c_B);
        }

        ucie_sim_c_emxFree_real_T(&f);
      }

      ucie_sim_c_emxFree_real_T(&ThresholdEstimateA);
    }

    ucie_sim_c_emxInit_boolean_T(&x, 2, ucie_sim_c_B);
    nz = x->size[0] * x->size[1];
    x->size[0] = 1;
    vlen = obj->PAMThreshold->size[1];
    x->size[1] = vlen;
    ucie_sim_c_emxEnsureCapacity_boolean_T(x, nz, ucie_sim_c_B);
    loop_ub = obj->PAMThreshold->size[1];
    for (nz = 0; nz < loop_ub; nz++) {
      x->data[nz] = (obj->DataVoltage > obj->PAMThreshold->data[nz]);
    }

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    if (x->size[1] == 0) {
      nz = 0;
    } else {
      nz = x->data[0];
      for (d = 2; d <= vlen; d++) {
        nz += x->data[d - 1];
      }
    }

    ucie_sim_c_emxFree_boolean_T(&x);

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    obj->DataSymbol = obj->SymbolSet->data[nz];
    obj->VoltageLevels->data[nz] += (obj->DataVoltage - obj->VoltageLevels->
      data[nz]) / obj->AverageWindow / 2.0;
    if (obj->privatePD == 2.0) {
      PhaseError = obj->PriorDataVoltage * obj->DataSymbol - obj->DataVoltage *
        obj->PriorData;
      EarlyTest = (PhaseError < 0.0);
      LateTest = (PhaseError > 0.0);
    } else {
      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      EarlyTest = ((obj->EdgeVoltage * obj->PriorData > 0.0) &&
                   (obj->EdgeVoltage * obj->DataSymbol < 0.0));
      LateTest = ((obj->EdgeVoltage * obj->PriorData < 0.0) && (obj->EdgeVoltage
        * obj->DataSymbol > 0.0));
    }

    PhaseError = -(real_T)LateTest + (real_T)EarlyTest;

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    val = (obj->privateCDRMode == 2.0);
    if (val) {
      obj->FreqEstimate += obj->pFrequencyStep * PhaseError;
      PAM4Threshold = obj->FrequencyCounter;

      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      if (fabs(PAM4Threshold) >= obj->FrequencyCount) {
        obj->EdgeSampleCounter += obj->FreqEstimate;
        obj->FrequencyCounter = 1.0;
        if (obj->pFrequencyStep != obj->FrequencyStep) {
          obj->pFrequencyStep = 1.0 / (1.0 / obj->pFrequencyStep +
            obj->pFrequencyStepInterval);
          if (obj->pFrequencyStep < obj->FrequencyStep) {
            obj->pFrequencyStep = obj->FrequencyStep;
          }
        }
      } else {
        obj->FrequencyCounter++;
      }
    }

    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    if (EarlyTest || LateTest) {
      obj->EarlyLateCounter += PhaseError;
      val = (obj->privateCDRMode >= 1.0);
      if (val) {
        PAM4Threshold = obj->EarlyLateCounter;
        if (fabs(PAM4Threshold) >= obj->InternalCountMax) {
          obj->EdgeSampleCounter += (obj->ReferenceOffset / 1.0E+6 + 1.0) *
            PhaseError * obj->Step * obj->SamplesPerSymbol;
          obj->EarlyLateCounter = 0.0;
          if (obj->InternalCountMax >= obj->Count) {
            obj->InternalCountMax = obj->Count;
          } else {
            obj->InternalCountMax++;
          }
        }
      }
    }

    obj->DataSampleCounter = (obj->SamplesPerSymbol / 2.0 +
      obj->EdgeSampleCounter) + obj->PhaseOffset * obj->SamplesPerSymbol;
    obj->DataSymbolOnRising = 1.0;
    obj->PriorDataVoltage = obj->DataVoltage;
  } else {
    obj->DataSampleCounter--;
  }

  obj->SamplesElapsed++;
  obj->LastSample = waveIn;
  *phase = obj->Phase / obj->SymbolTime;
  *ClockAMI_clockTime = obj->ClockTimesInternal;
  *ClockAMI_clockValidOnRising = obj->DataSymbolOnRising;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  val = (obj->Modulation == 4.0);
  if (val) {
    val = (obj->VoltageLevels->size[1] == 0);
    if (!val) {
      PAM4Threshold = obj->PAMThreshold->data[obj->PAMThreshold->size[1] - 1];
      y_tmp = obj->VoltageLevels->data[1];
      SimTime = obj->VoltageLevels->data[2];

      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      y_tmp = fabs(y_tmp);
      SimTime = fabs(SimTime);
      obj->PAMSymbolMiddleVoltage = (y_tmp + SimTime) / 2.0;
      y_tmp = obj->VoltageLevels->data[0];
      SimTime = obj->VoltageLevels->data[3];

      /* Start for MATLABSystem: '<S10>/CDR System Object' */
      y_tmp = fabs(y_tmp);
      SimTime = fabs(SimTime);
      obj->PAMSymbolOuterVoltage = (y_tmp + SimTime) / 2.0;
    } else {
      PAM4Threshold = 0.0;
    }
  } else {
    PAM4Threshold = 0.0;
  }

  memset(&optional->PAMThreshold[0], 0, 31U * sizeof(real_T));
  loop_ub = obj->PAMThreshold->size[1];
  for (nz = 0; nz < loop_ub; nz++) {
    optional->PAMThreshold[nz] = obj->PAMThreshold->data[nz];
  }

  SimTime = obj->DataSymbol;
  y_tmp = obj->DataVoltage;
  varargin_5 = obj->EdgeVoltage;
  varargin_6 = obj->DataSampleCounter;
  varargin_7 = obj->EarlyLateCounter;
  varargin_8 = obj->PAMSymbolMiddleVoltage;
  varargin_9 = obj->PAMSymbolOuterVoltage;
  varargin_10 = obj->EyeHeightAbsAve;
  varargin_13 = obj->FreqEstimate;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  optional->clockPhase = *phase;
  optional->symbolRecovered = SimTime;
  optional->voltageSample = y_tmp;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  optional->PAM4Threshold = PAM4Threshold;
  optional->CDRedgeVoltage = varargin_5;
  optional->CDRcounter = varargin_6;
  optional->CDRearlyLateCount = varargin_7;
  optional->PAMSymbolMiddleVoltage = varargin_8;
  optional->PAMSymbolOuterVoltage = varargin_9;
  optional->EyeHeightAbsAve = varargin_10;

  /* Start for MATLABSystem: '<S10>/CDR System Object' */
  optional->PhaseError = PhaseError;
  optional->FreqEstimate = varargin_13;
}

static void ucie_sim_c_binary_expand_op(emxArray_real_T_ucie_sim_c_T *in1, const
  serdes_Stimulus_ucie_sim_c_T *in2, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_real_T_ucie_sim_c_T *in1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  ucie_sim_c_emxInit_real_T(&in1_0, 2, ucie_sim_c_B);

  /* MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  i = in1_0->size[0] * in1_0->size[1];
  in1_0->size[0] = 1;
  loop_ub = in2->privateBinaryPowers->size[1] == 1 ? in1->size[1] :
    in2->privateBinaryPowers->size[1];
  in1_0->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1_0, i, ucie_sim_c_B);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->privateBinaryPowers->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_0->data[i] = in1->data[i * stride_0_1] * in2->privateBinaryPowers->
      data[i * stride_1_1];
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_real_T(in1, i, ucie_sim_c_B);
  if (loop_ub - 1 >= 0) {
    memcpy(&in1->data[0], &in1_0->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  /* End of MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_emxFree_real_T(&in1_0);
}

static void ucie_sim_c_genrand_uint32_vector(uint32_T mt[625], uint32_T u[2])
{
  int32_T b_j;
  int32_T b_kk;

  /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  for (b_j = 0; b_j < 2; b_j++) {
    uint32_T mti;
    uint32_T y;
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (b_kk = 0; b_kk < 227; b_kk++) {
        y = (mt[b_kk + 1] & 2147483647U) | (mt[b_kk] & 2147483648U);
        if ((y & 1U) == 0U) {
          mti = y >> 1U;
        } else {
          mti = y >> 1U ^ 2567483615U;
        }

        mt[b_kk] = mt[b_kk + 397] ^ mti;
      }

      for (b_kk = 0; b_kk < 396; b_kk++) {
        y = (mt[b_kk + 227] & 2147483648U) | (mt[b_kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          mti = y >> 1U;
        } else {
          mti = y >> 1U ^ 2567483615U;
        }

        mt[b_kk + 227] = mt[b_kk] ^ mti;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        mti = y >> 1U;
      } else {
        mti = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ mti;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    u[b_j] = y;
  }

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
}

static boolean_T ucie_sim_c_is_valid_state(const uint32_T mt[625])
{
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    int32_T k;
    boolean_T exitg1;
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  } else {
    isvalid = false;
  }

  return isvalid;
}

static real_T ucie_sim_c_rand_m(DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  real_T r;
  int32_T b_mti;
  int32_T exitg1;
  int32_T tmp;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(ucie_sim_c_DW->state, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!ucie_sim_c_is_valid_state(ucie_sim_c_DW->state)) {
        u_idx_0 = 5489U;
        ucie_sim_c_DW->state[0] = 5489U;
        for (b_mti = 0; b_mti < 623; b_mti++) {
          tmp = b_mti + 1;
          u_idx_0 = (u_idx_0 >> 30U ^ u_idx_0) * 1812433253U + (uint32_T)tmp;
          ucie_sim_c_DW->state[b_mti + 1] = u_idx_0;
        }

        ucie_sim_c_DW->state[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  r = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
    1.1102230246251565E-16;
  return r;
}

static void ucie_sim_c_binary_expand_op_13(emxArray_boolean_T_ucie_sim_c_T *in1,
  const emxArray_real_T_ucie_sim_c_T *in2, const real_T in3_data[], const
  int32_T in3_size[2], B_ucie_sim_c_T *ucie_sim_c_B)
{
  /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  ucie_sim_c_B->loop_ub_h = in2->size[0];
  ucie_sim_c_B->i4 = in1->size[0] * in1->size[1];
  in1->size[0] = ucie_sim_c_B->loop_ub_h;
  ucie_sim_c_emxEnsureCapacity_boolean_T(in1, ucie_sim_c_B->i4, ucie_sim_c_B);
  ucie_sim_c_B->loop_ub_f = in3_size[1] == 1 ? in2->size[1] : in3_size[1];
  ucie_sim_c_B->i4 = in1->size[0] * in1->size[1];
  in1->size[1] = ucie_sim_c_B->loop_ub_f;
  ucie_sim_c_emxEnsureCapacity_boolean_T(in1, ucie_sim_c_B->i4, ucie_sim_c_B);
  ucie_sim_c_B->stride_0_1 = (in2->size[1] != 1);
  ucie_sim_c_B->stride_1_1 = (in3_size[1] != 1);
  ucie_sim_c_B->aux_0_1 = 0;
  ucie_sim_c_B->aux_1_1 = 0;
  for (ucie_sim_c_B->i4 = 0; ucie_sim_c_B->i4 < ucie_sim_c_B->loop_ub_f;
       ucie_sim_c_B->i4++) {
    for (ucie_sim_c_B->i3 = 0; ucie_sim_c_B->i3 < ucie_sim_c_B->loop_ub_h;
         ucie_sim_c_B->i3++) {
      in1->data[ucie_sim_c_B->i3 + in1->size[0] * ucie_sim_c_B->i4] =
        ((in2->data[in2->size[0] * ucie_sim_c_B->aux_0_1 + ucie_sim_c_B->i3] !=
          0.0) != (in3_data[ucie_sim_c_B->aux_1_1] != 0.0));
    }

    ucie_sim_c_B->aux_1_1 += ucie_sim_c_B->stride_1_1;
    ucie_sim_c_B->aux_0_1 += ucie_sim_c_B->stride_0_1;
  }

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
}

static void ucie_sim_c_prbs_mjc(const emxArray_real_T_ucie_sim_c_T *O, real_T N,
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T *P,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *xor_result;
  emxArray_real_T_ucie_sim_c_T *varargin_1_0;
  static const int8_T tmp[5] = { 8, 4, 3, 2, 0 };

  static const int8_T tmp_0[5] = { 12, 6, 4, 1, 0 };

  static const int8_T tmp_1[5] = { 13, 4, 3, 1, 0 };

  static const int8_T tmp_2[5] = { 14, 5, 3, 1, 0 };

  static const int8_T tmp_3[5] = { 16, 5, 3, 2, 0 };

  static const int8_T tmp_4[5] = { 18, 5, 2, 1, 0 };

  static const int8_T tmp_5[5] = { 19, 5, 2, 1, 0 };

  static const int8_T tmp_6[5] = { 24, 4, 3, 1, 0 };

  static const int8_T tmp_7[5] = { 26, 6, 2, 1, 0 };

  static const int8_T tmp_8[7] = { 32, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_9[5] = { 27, 5, 2, 1, 0 };

  static const int8_T tmp_a[5] = { 30, 6, 4, 1, 0 };

  static const int8_T tmp_b[5] = { 33, 6, 4, 1, 0 };

  static const int8_T tmp_c[7] = { 34, 7, 6, 5, 2, 1, 0 };

  static const int8_T tmp_d[7] = { 36, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_e[7] = { 37, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_f[5] = { 38, 6, 5, 1, 0 };

  static const int8_T tmp_g[5] = { 40, 5, 4, 3, 0 };

  static const int8_T tmp_h[7] = { 42, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_i[5] = { 43, 6, 4, 3, 0 };

  static const int8_T tmp_j[5] = { 44, 6, 5, 2, 0 };

  static const int8_T tmp_k[5] = { 45, 4, 3, 1, 0 };

  static const int8_T tmp_l[7] = { 46, 8, 5, 3, 2, 1, 0 };

  static const int8_T tmp_m[7] = { 48, 7, 5, 4, 2, 1, 0 };

  static const int8_T tmp_n[5] = { 49, 6, 5, 4, 0 };

  static const int8_T tmp_o[5] = { 50, 4, 3, 2, 0 };

  static const int8_T tmp_p[5] = { 51, 6, 3, 1, 0 };

  static const int8_T tmp_q[5] = { 53, 6, 2, 1, 0 };

  static const int8_T tmp_r[7] = { 54, 6, 5, 4, 3, 2, 0 };

  static const int8_T tmp_s[5] = { 55, 6, 2, 1, 0 };

  static const int8_T tmp_t[5] = { 56, 7, 4, 2, 0 };

  static const int8_T tmp_u[5] = { 57, 5, 3, 2, 0 };

  static const int8_T tmp_v[5] = { 58, 6, 5, 1, 0 };

  static const int8_T tmp_w[7] = { 59, 6, 5, 4, 3, 1, 0 };

  static const int8_T tmp_x[5] = { 61, 5, 2, 1, 0 };

  static const int8_T tmp_y[5] = { 62, 6, 5, 3, 0 };

  static const int8_T tmp_z[5] = { 64, 4, 3, 1, 0 };

  static const int8_T tmp_10[5] = { 65, 4, 3, 1, 0 };

  static const int8_T tmp_11[7] = { 66, 8, 6, 5, 3, 2, 0 };

  static const int8_T tmp_12[5] = { 67, 5, 2, 1, 0 };

  static const int8_T tmp_13[5] = { 68, 7, 5, 1, 0 };

  static const int8_T tmp_14[5] = { 69, 6, 5, 2, 0 };

  static const int8_T tmp_15[5] = { 70, 5, 3, 1, 0 };

  static const int8_T tmp_16[7] = { 72, 6, 4, 3, 2, 1, 0 };

  static const int8_T tmp_17[5] = { 71, 5, 3, 1, 0 };

  static const int8_T tmp_18[5] = { 73, 4, 3, 2, 0 };

  static const int8_T tmp_19[5] = { 74, 7, 4, 3, 0 };

  static const int8_T tmp_1a[5] = { 75, 6, 3, 1, 0 };

  static const int8_T tmp_1b[5] = { 76, 5, 4, 2, 0 };

  static const int8_T tmp_1c[5] = { 77, 6, 5, 2, 0 };

  static const int8_T tmp_1d[5] = { 78, 7, 2, 1, 0 };

  static const int8_T tmp_1e[5] = { 79, 4, 3, 2, 0 };

  static const int8_T tmp_1f[7] = { 80, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_1g[7] = { 82, 8, 7, 6, 4, 1, 0 };

  static const int8_T tmp_1h[5] = { 83, 7, 4, 2, 0 };

  static const int8_T tmp_1i[7] = { 84, 8, 7, 5, 3, 1, 0 };

  static const int8_T tmp_1j[5] = { 85, 8, 2, 1, 0 };

  static const int8_T tmp_1k[5] = { 86, 6, 5, 2, 0 };

  static const int8_T tmp_1l[5] = { 87, 7, 5, 1, 0 };

  static const int8_T tmp_1m[7] = { 88, 8, 5, 4, 3, 1, 0 };

  static const int8_T tmp_1n[5] = { 89, 6, 5, 3, 0 };

  static const int8_T tmp_1o[5] = { 90, 5, 3, 2, 0 };

  static const int8_T tmp_1p[7] = { 91, 7, 6, 5, 3, 2, 0 };

  static const int8_T tmp_1q[5] = { 92, 6, 5, 2, 0 };

  static const int8_T tmp_1r[5] = { 94, 6, 5, 1, 0 };

  static const int8_T tmp_1s[7] = { 95, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_1t[7] = { 96, 7, 6, 4, 3, 2, 0 };

  static const int8_T tmp_1u[7] = { 98, 7, 4, 3, 2, 1, 0 };

  static const int8_T tmp_1v[5] = { 99, 7, 5, 4, 0 };

  static const int8_T tmp_1w[5] = { 100, 8, 7, 2, 0 };

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  ucie_sim_c_B->primlist_k[0].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[0].f1.size[1] = 2;
  ucie_sim_c_B->primlist_k[0].f1.data[0] = 1.0;
  ucie_sim_c_B->primlist_k[0].f1.data[1] = 0.0;
  ucie_sim_c_B->primlist_k[1].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[1].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[2].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[2].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[3].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[3].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[4].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[4].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[5].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[5].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[6].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[6].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[1].f1.data[0] = 2.0;
  ucie_sim_c_B->primlist_k[2].f1.data[0] = 3.0;
  ucie_sim_c_B->primlist_k[3].f1.data[0] = 4.0;
  ucie_sim_c_B->primlist_k[4].f1.data[0] = 5.0;
  ucie_sim_c_B->primlist_k[5].f1.data[0] = 6.0;
  ucie_sim_c_B->primlist_k[6].f1.data[0] = 7.0;
  ucie_sim_c_B->primlist_k[1].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[2].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[3].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[4].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[5].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[6].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[1].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[2].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[3].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[4].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[5].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[6].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[7].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[7].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[8].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[8].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[9].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[9].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[10].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[10].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[8].f1.data[0] = 9.0;
  ucie_sim_c_B->primlist_k[9].f1.data[0] = 10.0;
  ucie_sim_c_B->primlist_k[10].f1.data[0] = 11.0;
  ucie_sim_c_B->primlist_k[8].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_k[9].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[10].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[8].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[9].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[10].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[11].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[11].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[12].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[12].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[13].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[13].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[14].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[14].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[14].f1.data[0] = 15.0;
  ucie_sim_c_B->primlist_k[14].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[14].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[15].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[15].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[16].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[16].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[16].f1.data[0] = 17.0;
  ucie_sim_c_B->primlist_k[16].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[16].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[17].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[17].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[18].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[18].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[19].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[19].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[20].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[20].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[21].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[21].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[22].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[22].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[19].f1.data[0] = 20.0;
  ucie_sim_c_B->primlist_k[20].f1.data[0] = 21.0;
  ucie_sim_c_B->primlist_k[21].f1.data[0] = 22.0;
  ucie_sim_c_B->primlist_k[22].f1.data[0] = 23.0;
  ucie_sim_c_B->primlist_k[19].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[20].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[21].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[22].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_k[19].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[20].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[21].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[22].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[23].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[23].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[24].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[24].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[24].f1.data[0] = 25.0;
  ucie_sim_c_B->primlist_k[24].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[24].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[25].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[25].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[26].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[26].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[27].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[27].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[28].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[28].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[27].f1.data[0] = 28.0;
  ucie_sim_c_B->primlist_k[28].f1.data[0] = 29.0;
  ucie_sim_c_B->primlist_k[27].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[28].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[27].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[28].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[29].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[29].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[7].f1.data[ucie_sim_c_B->r_k] = tmp
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[11].f1.data[ucie_sim_c_B->r_k] = tmp_0
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[12].f1.data[ucie_sim_c_B->r_k] = tmp_1
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[13].f1.data[ucie_sim_c_B->r_k] = tmp_2
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[15].f1.data[ucie_sim_c_B->r_k] = tmp_3
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[17].f1.data[ucie_sim_c_B->r_k] = tmp_4
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[18].f1.data[ucie_sim_c_B->r_k] = tmp_5
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[23].f1.data[ucie_sim_c_B->r_k] = tmp_6
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[25].f1.data[ucie_sim_c_B->r_k] = tmp_7
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[26].f1.data[ucie_sim_c_B->r_k] = tmp_9
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[29].f1.data[ucie_sim_c_B->r_k] = tmp_a
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[30].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[30].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[30].f1.data[0] = 31.0;
  ucie_sim_c_B->primlist_k[30].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[30].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[31].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[31].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[31].f1.data[ucie_sim_c_B->r_k] = tmp_8
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[32].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[32].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[32].f1.data[ucie_sim_c_B->r_k] = tmp_b
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[33].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[33].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[34].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[34].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[34].f1.data[0] = 35.0;
  ucie_sim_c_B->primlist_k[34].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[34].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[35].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[35].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[36].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[36].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[33].f1.data[ucie_sim_c_B->r_k] = tmp_c
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[35].f1.data[ucie_sim_c_B->r_k] = tmp_d
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[36].f1.data[ucie_sim_c_B->r_k] = tmp_e
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[37].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[37].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[38].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[38].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[38].f1.data[0] = 39.0;
  ucie_sim_c_B->primlist_k[38].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_k[38].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[39].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[39].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[37].f1.data[ucie_sim_c_B->r_k] = tmp_f
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[39].f1.data[ucie_sim_c_B->r_k] = tmp_g
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[40].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[40].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[40].f1.data[0] = 41.0;
  ucie_sim_c_B->primlist_k[40].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[40].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[41].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[41].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[41].f1.data[ucie_sim_c_B->r_k] = tmp_h
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[42].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[42].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[43].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[43].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[44].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[44].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[42].f1.data[ucie_sim_c_B->r_k] = tmp_i
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[43].f1.data[ucie_sim_c_B->r_k] = tmp_j
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[44].f1.data[ucie_sim_c_B->r_k] = tmp_k
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[45].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[45].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[46].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[46].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[46].f1.data[0] = 47.0;
  ucie_sim_c_B->primlist_k[46].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_k[46].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[47].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[47].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[45].f1.data[ucie_sim_c_B->r_k] = tmp_l
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[47].f1.data[ucie_sim_c_B->r_k] = tmp_m
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[48].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[48].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[49].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[49].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[50].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[50].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[51].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[51].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[51].f1.data[0] = 52.0;
  ucie_sim_c_B->primlist_k[51].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_k[51].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[52].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[52].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[48].f1.data[ucie_sim_c_B->r_k] = tmp_n
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[49].f1.data[ucie_sim_c_B->r_k] = tmp_o
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[50].f1.data[ucie_sim_c_B->r_k] = tmp_p
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[52].f1.data[ucie_sim_c_B->r_k] = tmp_q
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[53].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[53].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[53].f1.data[ucie_sim_c_B->r_k] = tmp_r
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[54].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[54].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[55].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[55].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[56].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[56].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[57].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[57].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[54].f1.data[ucie_sim_c_B->r_k] = tmp_s
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[55].f1.data[ucie_sim_c_B->r_k] = tmp_t
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[56].f1.data[ucie_sim_c_B->r_k] = tmp_u
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[57].f1.data[ucie_sim_c_B->r_k] = tmp_v
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[58].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[58].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[58].f1.data[ucie_sim_c_B->r_k] = tmp_w
      [ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[59].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[59].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[59].f1.data[0] = 60.0;
  ucie_sim_c_B->primlist_k[59].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[59].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[60].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[60].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[61].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[61].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[62].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[62].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[62].f1.data[0] = 63.0;
  ucie_sim_c_B->primlist_k[62].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_k[62].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[63].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[63].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[64].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[64].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[60].f1.data[ucie_sim_c_B->r_k] = tmp_x
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[61].f1.data[ucie_sim_c_B->r_k] = tmp_y
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[63].f1.data[ucie_sim_c_B->r_k] = tmp_z
      [ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[64].f1.data[ucie_sim_c_B->r_k] =
      tmp_10[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[65].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[65].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[65].f1.data[ucie_sim_c_B->r_k] =
      tmp_11[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[66].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[66].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[67].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[67].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[68].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[68].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[69].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[69].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[70].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[70].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[66].f1.data[ucie_sim_c_B->r_k] =
      tmp_12[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[67].f1.data[ucie_sim_c_B->r_k] =
      tmp_13[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[68].f1.data[ucie_sim_c_B->r_k] =
      tmp_14[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[69].f1.data[ucie_sim_c_B->r_k] =
      tmp_15[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[70].f1.data[ucie_sim_c_B->r_k] =
      tmp_17[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[71].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[71].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[71].f1.data[ucie_sim_c_B->r_k] =
      tmp_16[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[72].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[72].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[73].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[73].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[74].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[74].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[75].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[75].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[76].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[76].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[77].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[77].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[78].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[78].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[72].f1.data[ucie_sim_c_B->r_k] =
      tmp_18[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[73].f1.data[ucie_sim_c_B->r_k] =
      tmp_19[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[74].f1.data[ucie_sim_c_B->r_k] =
      tmp_1a[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[75].f1.data[ucie_sim_c_B->r_k] =
      tmp_1b[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[76].f1.data[ucie_sim_c_B->r_k] =
      tmp_1c[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[77].f1.data[ucie_sim_c_B->r_k] =
      tmp_1d[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[78].f1.data[ucie_sim_c_B->r_k] =
      tmp_1e[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[79].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[79].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[80].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[80].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[80].f1.data[0] = 81.0;
  ucie_sim_c_B->primlist_k[80].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_k[80].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[81].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[81].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[79].f1.data[ucie_sim_c_B->r_k] =
      tmp_1f[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[81].f1.data[ucie_sim_c_B->r_k] =
      tmp_1g[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[82].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[82].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[82].f1.data[ucie_sim_c_B->r_k] =
      tmp_1h[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[83].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[83].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[83].f1.data[ucie_sim_c_B->r_k] =
      tmp_1i[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[84].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[84].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[85].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[85].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[86].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[86].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[84].f1.data[ucie_sim_c_B->r_k] =
      tmp_1j[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[85].f1.data[ucie_sim_c_B->r_k] =
      tmp_1k[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[86].f1.data[ucie_sim_c_B->r_k] =
      tmp_1l[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[87].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[87].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[87].f1.data[ucie_sim_c_B->r_k] =
      tmp_1m[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[88].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[88].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[89].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[89].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[88].f1.data[ucie_sim_c_B->r_k] =
      tmp_1n[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[89].f1.data[ucie_sim_c_B->r_k] =
      tmp_1o[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[90].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[90].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[90].f1.data[ucie_sim_c_B->r_k] =
      tmp_1p[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[91].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[91].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[92].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[92].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[92].f1.data[0] = 93.0;
  ucie_sim_c_B->primlist_k[92].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_k[92].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[93].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[93].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[91].f1.data[ucie_sim_c_B->r_k] =
      tmp_1q[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[93].f1.data[ucie_sim_c_B->r_k] =
      tmp_1r[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[94].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[94].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[95].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[95].f1.size[1] = 7;
  ucie_sim_c_B->primlist_k[96].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[96].f1.size[1] = 3;
  ucie_sim_c_B->primlist_k[96].f1.data[0] = 97.0;
  ucie_sim_c_B->primlist_k[96].f1.data[1] = 6.0;
  ucie_sim_c_B->primlist_k[96].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_k[97].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[97].f1.size[1] = 7;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 7; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[94].f1.data[ucie_sim_c_B->r_k] =
      tmp_1s[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[95].f1.data[ucie_sim_c_B->r_k] =
      tmp_1t[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[97].f1.data[ucie_sim_c_B->r_k] =
      tmp_1u[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->primlist_k[98].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[98].f1.size[1] = 5;
  ucie_sim_c_B->primlist_k[99].f1.size[0] = 1;
  ucie_sim_c_B->primlist_k[99].f1.size[1] = 5;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < 5; ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->primlist_k[98].f1.data[ucie_sim_c_B->r_k] =
      tmp_1v[ucie_sim_c_B->r_k];
    ucie_sim_c_B->primlist_k[99].f1.data[ucie_sim_c_B->r_k] =
      tmp_1w[ucie_sim_c_B->r_k];
  }

  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    ucie_sim_c_B->unnamed_idx_1_tmp_c = (int32_T)ucie_sim_c_B->primlist_k
      [(int32_T)O->data[0] - 1].f1.data[0];
    ucie_sim_c_B->i5 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->unnamed_idx_1_tmp_c;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i5,
      ucie_sim_c_B);
    for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k <
         ucie_sim_c_B->unnamed_idx_1_tmp_c; ucie_sim_c_B->r_k++) {
      varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_k] = 0.0;
    }

    varargin_1->data[ucie_sim_c_B->unnamed_idx_1_tmp_c - 1] = 1.0;
  }

  ucie_sim_c_B->r_k = (int32_T)O->data[0] - 1;
  ucie_sim_c_B->loop_ub_p = (int32_T)ucie_sim_c_B->primlist_k[ucie_sim_c_B->r_k]
    .f1.data[0];
  ucie_sim_c_B->maskp_size_f[1] = ucie_sim_c_B->loop_ub_p;
  if (ucie_sim_c_B->loop_ub_p - 1 >= 0) {
    memset(&ucie_sim_c_B->maskp_data_c[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_p *
           sizeof(real_T));
  }

  ucie_sim_c_B->e_tmp_n = ucie_sim_c_B->primlist_k[ucie_sim_c_B->r_k].f1.size[1]
    - 1;
  if (ucie_sim_c_B->e_tmp_n < 2) {
    ucie_sim_c_B->unnamed_idx_1_tmp_c = 0;
    ucie_sim_c_B->e_tmp_n = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_c = 1;
  }

  ucie_sim_c_B->loop_ub_b = ucie_sim_c_B->e_tmp_n -
    ucie_sim_c_B->unnamed_idx_1_tmp_c;
  for (ucie_sim_c_B->i_a = 0; ucie_sim_c_B->i_a < ucie_sim_c_B->loop_ub_b;
       ucie_sim_c_B->i_a++) {
    ucie_sim_c_B->g_data_o[ucie_sim_c_B->i_a] = (int32_T)
      ucie_sim_c_B->primlist_k[ucie_sim_c_B->r_k].f1.data
      [ucie_sim_c_B->unnamed_idx_1_tmp_c + ucie_sim_c_B->i_a];
    ucie_sim_c_B->maskp_data_c[ucie_sim_c_B->g_data_o[ucie_sim_c_B->i_a] - 1] =
      1.0;
  }

  if (ucie_sim_c_B->maskp_size_f[1] < 1) {
    ucie_sim_c_B->unnamed_idx_1_tmp_c = 1;
    ucie_sim_c_B->e_tmp_n = 1;
    ucie_sim_c_B->i_a = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_c = ucie_sim_c_B->loop_ub_p;
    ucie_sim_c_B->e_tmp_n = -1;
    ucie_sim_c_B->i_a = 1;
  }

  ucie_sim_c_B->loop_ub_p = div_s32(ucie_sim_c_B->i_a -
    ucie_sim_c_B->unnamed_idx_1_tmp_c, ucie_sim_c_B->e_tmp_n);
  ucie_sim_c_B->loop_ub_b = ucie_sim_c_B->loop_ub_p + 1;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k <= ucie_sim_c_B->loop_ub_p;
       ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->maskp_data_f[ucie_sim_c_B->r_k] = (int8_T)
      ucie_sim_c_B->maskp_data_c[(ucie_sim_c_B->e_tmp_n * ucie_sim_c_B->r_k +
      ucie_sim_c_B->unnamed_idx_1_tmp_c) - 1];
  }

  ucie_sim_c_B->maskp_size_f[0] = 1;
  ucie_sim_c_B->maskp_size_f[1] = ucie_sim_c_B->loop_ub_b;
  for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < ucie_sim_c_B->loop_ub_b;
       ucie_sim_c_B->r_k++) {
    ucie_sim_c_B->maskp_data_c[ucie_sim_c_B->r_k] = ucie_sim_c_B->
      maskp_data_f[ucie_sim_c_B->r_k];
  }

  ucie_sim_c_B->e_tmp_n = (int32_T)N;
  ucie_sim_c_B->i5 = P->size[0] * P->size[1];
  P->size[0] = 1;
  P->size[1] = ucie_sim_c_B->e_tmp_n;
  ucie_sim_c_emxEnsureCapacity_real_T(P, ucie_sim_c_B->i5, ucie_sim_c_B);
  ucie_sim_c_emxInit_boolean_T(&xor_result, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&varargin_1_0, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  for (ucie_sim_c_B->unnamed_idx_1_tmp_c = 0; ucie_sim_c_B->unnamed_idx_1_tmp_c <
       ucie_sim_c_B->e_tmp_n; ucie_sim_c_B->unnamed_idx_1_tmp_c++) {
    ucie_sim_c_B->loop_ub_p = varargin_1->size[0] * varargin_1->size[1];
    if (varargin_1->data[0] == 1.0) {
      if (varargin_1->size[1] == ucie_sim_c_B->maskp_size_f[1]) {
        ucie_sim_c_B->loop_ub_b = varargin_1->size[0];
        ucie_sim_c_B->i5 = xor_result->size[0] * xor_result->size[1];
        xor_result->size[0] = ucie_sim_c_B->loop_ub_b;
        ucie_sim_c_B->loop_ub_p = varargin_1->size[1];
        xor_result->size[1] = ucie_sim_c_B->loop_ub_p;
        ucie_sim_c_emxEnsureCapacity_boolean_T(xor_result, ucie_sim_c_B->i5,
          ucie_sim_c_B);
        for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < ucie_sim_c_B->loop_ub_p;
             ucie_sim_c_B->r_k++) {
          for (ucie_sim_c_B->i_a = 0; ucie_sim_c_B->i_a <
               ucie_sim_c_B->loop_ub_b; ucie_sim_c_B->i_a++) {
            xor_result->data[ucie_sim_c_B->i_a + xor_result->size[0] *
              ucie_sim_c_B->r_k] = ((varargin_1->data[varargin_1->size[0] *
              ucie_sim_c_B->r_k + ucie_sim_c_B->i_a] != 0.0) !=
              (ucie_sim_c_B->maskp_data_c[ucie_sim_c_B->r_k] != 0.0));
          }
        }
      } else {
        ucie_sim_c_binary_expand_op_13(xor_result, varargin_1,
          ucie_sim_c_B->maskp_data_c, ucie_sim_c_B->maskp_size_f, ucie_sim_c_B);
      }

      ucie_sim_c_B->loop_ub_p = xor_result->size[0] * xor_result->size[1];
      if (ucie_sim_c_B->loop_ub_p < 2) {
        ucie_sim_c_B->i_a = 0;
        ucie_sim_c_B->r_k = 0;
      } else {
        ucie_sim_c_B->i_a = 1;
        ucie_sim_c_B->r_k = ucie_sim_c_B->loop_ub_p;
      }

      ucie_sim_c_B->i5 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i5,
        ucie_sim_c_B);
      ucie_sim_c_B->loop_ub_p = ucie_sim_c_B->r_k - ucie_sim_c_B->i_a;
      ucie_sim_c_B->i5 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[1] = ucie_sim_c_B->loop_ub_p + 1;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i5,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < ucie_sim_c_B->loop_ub_p;
           ucie_sim_c_B->r_k++) {
        varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_k] =
          xor_result->data[ucie_sim_c_B->i_a + ucie_sim_c_B->r_k];
      }

      varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->loop_ub_p] = 1.0;
    } else {
      if (ucie_sim_c_B->loop_ub_p < 2) {
        ucie_sim_c_B->i_a = 0;
        ucie_sim_c_B->r_k = 0;
      } else {
        ucie_sim_c_B->i_a = 1;
        ucie_sim_c_B->r_k = ucie_sim_c_B->loop_ub_p;
      }

      ucie_sim_c_B->i5 = varargin_1_0->size[0] * varargin_1_0->size[1];
      varargin_1_0->size[0] = 1;
      ucie_sim_c_B->loop_ub_p = ucie_sim_c_B->r_k - ucie_sim_c_B->i_a;
      ucie_sim_c_B->loop_ub_b = ucie_sim_c_B->loop_ub_p + 1;
      varargin_1_0->size[1] = ucie_sim_c_B->loop_ub_b;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1_0, ucie_sim_c_B->i5,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < ucie_sim_c_B->loop_ub_p;
           ucie_sim_c_B->r_k++) {
        varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->r_k] =
          varargin_1->data[ucie_sim_c_B->i_a + ucie_sim_c_B->r_k];
      }

      varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->loop_ub_p] = 0.0;
      ucie_sim_c_B->i5 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = ucie_sim_c_B->loop_ub_b;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i5,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_k = 0; ucie_sim_c_B->r_k < ucie_sim_c_B->loop_ub_b;
           ucie_sim_c_B->r_k++) {
        varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_k] =
          varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->r_k];
      }
    }

    P->data[ucie_sim_c_B->unnamed_idx_1_tmp_c] = varargin_1->data[0];
  }

  ucie_sim_c_emxFree_real_T(&varargin_1_0);
  ucie_sim_c_emxFree_boolean_T(&xor_result);
}

static real_T ucie_sim_c_genrandu_m(uint32_T mt[625])
{
  real_T r;
  int32_T b_mti;
  int32_T exitg1;
  int32_T tmp;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(mt, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!ucie_sim_c_is_valid_state(mt)) {
        u_idx_0 = 5489U;
        mt[0] = 5489U;
        for (b_mti = 0; b_mti < 623; b_mti++) {
          tmp = b_mti + 1;
          u_idx_0 = (u_idx_0 >> 30U ^ u_idx_0) * 1812433253U + (uint32_T)tmp;
          mt[b_mti + 1] = u_idx_0;
        }

        mt[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  r = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
    1.1102230246251565E-16;
  return r;
}

static real_T ucie_sim_c_randn_m(DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  real_T d_u;
  real_T r;
  real_T x;
  int32_T i;
  uint32_T u32[2];
  static const real_T tmp[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static const real_T tmp_0[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  int32_T exitg1;
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(ucie_sim_c_DW->state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)(u32[1] & 16777215U)) *
         2.2204460492503131E-16 - 1.0) * tmp[i];
    if (fabs(r) <= tmp[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      x = ucie_sim_c_genrandu_m(ucie_sim_c_DW->state);
      if ((tmp_0[i - 1] - tmp_0[i]) * x + tmp_0[i] < exp(-0.5 * r * r)) {
        exitg1 = 1;
      }
    } else {
      do {
        x = ucie_sim_c_genrandu_m(ucie_sim_c_DW->state);
        x = log(x) * 0.273661237329758;
        d_u = ucie_sim_c_genrandu_m(ucie_sim_c_DW->state);
      } while (!(-2.0 * log(d_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void ucie_sim_c_binary_expand_op_12(emxArray_boolean_T_ucie_sim_c_T *in1,
  const emxArray_real_T_ucie_sim_c_T *in2, const real_T in3_data[], const
  int32_T in3_size[2], B_ucie_sim_c_T *ucie_sim_c_B)
{
  int32_T i;
  int32_T loop_ub;

  /* Start for MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  ucie_sim_c_emxEnsureCapacity_boolean_T(in1, i, ucie_sim_c_B);
  loop_ub = in3_size[1] == 1 ? in2->size[1] : in3_size[1];
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  ucie_sim_c_emxEnsureCapacity_boolean_T(in1, i, ucie_sim_c_B);
  ucie_sim_c_B->stride_0_1_f = (in2->size[1] != 1);
  ucie_sim_c_B->stride_1_1_a = (in3_size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = ((in2->data[i * ucie_sim_c_B->stride_0_1_f] != 0.0) !=
                    (in3_data[i * ucie_sim_c_B->stride_1_1_a] != 0.0));
  }

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
}

static real_T ucie_sim_c_prbs_mj(real_T O, emxArray_real_T_ucie_sim_c_T
  *varargin_1, B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *xor_result;
  real_T P;
  static const int8_T tmp[5] = { 8, 4, 3, 2, 0 };

  static const int8_T tmp_0[5] = { 12, 6, 4, 1, 0 };

  static const int8_T tmp_1[5] = { 13, 4, 3, 1, 0 };

  static const int8_T tmp_2[5] = { 14, 5, 3, 1, 0 };

  static const int8_T tmp_3[5] = { 16, 5, 3, 2, 0 };

  static const int8_T tmp_4[5] = { 18, 5, 2, 1, 0 };

  static const int8_T tmp_5[5] = { 19, 5, 2, 1, 0 };

  static const int8_T tmp_6[5] = { 24, 4, 3, 1, 0 };

  static const int8_T tmp_7[5] = { 26, 6, 2, 1, 0 };

  static const int8_T tmp_8[7] = { 32, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_9[5] = { 27, 5, 2, 1, 0 };

  static const int8_T tmp_a[5] = { 30, 6, 4, 1, 0 };

  static const int8_T tmp_b[5] = { 33, 6, 4, 1, 0 };

  static const int8_T tmp_c[7] = { 34, 7, 6, 5, 2, 1, 0 };

  static const int8_T tmp_d[7] = { 36, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_e[7] = { 37, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_f[5] = { 38, 6, 5, 1, 0 };

  static const int8_T tmp_g[5] = { 40, 5, 4, 3, 0 };

  static const int8_T tmp_h[7] = { 42, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_i[5] = { 43, 6, 4, 3, 0 };

  static const int8_T tmp_j[5] = { 44, 6, 5, 2, 0 };

  static const int8_T tmp_k[5] = { 45, 4, 3, 1, 0 };

  static const int8_T tmp_l[7] = { 46, 8, 5, 3, 2, 1, 0 };

  static const int8_T tmp_m[7] = { 48, 7, 5, 4, 2, 1, 0 };

  static const int8_T tmp_n[5] = { 49, 6, 5, 4, 0 };

  static const int8_T tmp_o[5] = { 50, 4, 3, 2, 0 };

  static const int8_T tmp_p[5] = { 51, 6, 3, 1, 0 };

  static const int8_T tmp_q[5] = { 53, 6, 2, 1, 0 };

  static const int8_T tmp_r[7] = { 54, 6, 5, 4, 3, 2, 0 };

  static const int8_T tmp_s[5] = { 55, 6, 2, 1, 0 };

  static const int8_T tmp_t[5] = { 56, 7, 4, 2, 0 };

  static const int8_T tmp_u[5] = { 57, 5, 3, 2, 0 };

  static const int8_T tmp_v[5] = { 58, 6, 5, 1, 0 };

  static const int8_T tmp_w[7] = { 59, 6, 5, 4, 3, 1, 0 };

  static const int8_T tmp_x[5] = { 61, 5, 2, 1, 0 };

  static const int8_T tmp_y[5] = { 62, 6, 5, 3, 0 };

  static const int8_T tmp_z[5] = { 64, 4, 3, 1, 0 };

  static const int8_T tmp_10[5] = { 65, 4, 3, 1, 0 };

  static const int8_T tmp_11[7] = { 66, 8, 6, 5, 3, 2, 0 };

  static const int8_T tmp_12[5] = { 67, 5, 2, 1, 0 };

  static const int8_T tmp_13[5] = { 68, 7, 5, 1, 0 };

  static const int8_T tmp_14[5] = { 69, 6, 5, 2, 0 };

  static const int8_T tmp_15[5] = { 70, 5, 3, 1, 0 };

  static const int8_T tmp_16[7] = { 72, 6, 4, 3, 2, 1, 0 };

  static const int8_T tmp_17[5] = { 71, 5, 3, 1, 0 };

  static const int8_T tmp_18[5] = { 73, 4, 3, 2, 0 };

  static const int8_T tmp_19[5] = { 74, 7, 4, 3, 0 };

  static const int8_T tmp_1a[5] = { 75, 6, 3, 1, 0 };

  static const int8_T tmp_1b[5] = { 76, 5, 4, 2, 0 };

  static const int8_T tmp_1c[5] = { 77, 6, 5, 2, 0 };

  static const int8_T tmp_1d[5] = { 78, 7, 2, 1, 0 };

  static const int8_T tmp_1e[5] = { 79, 4, 3, 2, 0 };

  static const int8_T tmp_1f[7] = { 80, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_1g[7] = { 82, 8, 7, 6, 4, 1, 0 };

  static const int8_T tmp_1h[5] = { 83, 7, 4, 2, 0 };

  static const int8_T tmp_1i[7] = { 84, 8, 7, 5, 3, 1, 0 };

  static const int8_T tmp_1j[5] = { 85, 8, 2, 1, 0 };

  static const int8_T tmp_1k[5] = { 86, 6, 5, 2, 0 };

  static const int8_T tmp_1l[5] = { 87, 7, 5, 1, 0 };

  static const int8_T tmp_1m[7] = { 88, 8, 5, 4, 3, 1, 0 };

  static const int8_T tmp_1n[5] = { 89, 6, 5, 3, 0 };

  static const int8_T tmp_1o[5] = { 90, 5, 3, 2, 0 };

  static const int8_T tmp_1p[7] = { 91, 7, 6, 5, 3, 2, 0 };

  static const int8_T tmp_1q[5] = { 92, 6, 5, 2, 0 };

  static const int8_T tmp_1r[5] = { 94, 6, 5, 1, 0 };

  static const int8_T tmp_1s[7] = { 95, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_1t[7] = { 96, 7, 6, 4, 3, 2, 0 };

  static const int8_T tmp_1u[7] = { 98, 7, 4, 3, 2, 1, 0 };

  static const int8_T tmp_1v[5] = { 99, 7, 5, 4, 0 };

  static const int8_T tmp_1w[5] = { 100, 8, 7, 2, 0 };

  /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
  ucie_sim_c_B->primlist_c[0].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[0].f1.size[1] = 2;
  ucie_sim_c_B->primlist_c[0].f1.data[0] = 1.0;
  ucie_sim_c_B->primlist_c[0].f1.data[1] = 0.0;
  ucie_sim_c_B->primlist_c[1].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[1].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[2].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[2].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[3].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[3].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[4].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[4].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[5].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[5].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[6].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[6].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[1].f1.data[0] = 2.0;
  ucie_sim_c_B->primlist_c[2].f1.data[0] = 3.0;
  ucie_sim_c_B->primlist_c[3].f1.data[0] = 4.0;
  ucie_sim_c_B->primlist_c[4].f1.data[0] = 5.0;
  ucie_sim_c_B->primlist_c[5].f1.data[0] = 6.0;
  ucie_sim_c_B->primlist_c[6].f1.data[0] = 7.0;
  ucie_sim_c_B->primlist_c[1].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[2].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[3].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[4].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[5].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[6].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[1].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[2].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[3].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[4].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[5].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[6].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[7].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[7].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[8].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[8].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[9].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[9].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[10].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[10].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[8].f1.data[0] = 9.0;
  ucie_sim_c_B->primlist_c[9].f1.data[0] = 10.0;
  ucie_sim_c_B->primlist_c[10].f1.data[0] = 11.0;
  ucie_sim_c_B->primlist_c[8].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_c[9].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[10].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[8].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[9].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[10].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[11].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[11].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[12].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[12].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[13].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[13].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[14].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[14].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[14].f1.data[0] = 15.0;
  ucie_sim_c_B->primlist_c[14].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[14].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[15].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[15].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[16].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[16].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[16].f1.data[0] = 17.0;
  ucie_sim_c_B->primlist_c[16].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[16].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[17].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[17].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[18].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[18].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[19].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[19].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[20].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[20].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[21].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[21].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[22].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[22].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[19].f1.data[0] = 20.0;
  ucie_sim_c_B->primlist_c[20].f1.data[0] = 21.0;
  ucie_sim_c_B->primlist_c[21].f1.data[0] = 22.0;
  ucie_sim_c_B->primlist_c[22].f1.data[0] = 23.0;
  ucie_sim_c_B->primlist_c[19].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[20].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[21].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[22].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_c[19].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[20].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[21].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[22].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[23].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[23].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[24].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[24].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[24].f1.data[0] = 25.0;
  ucie_sim_c_B->primlist_c[24].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[24].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[25].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[25].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[26].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[26].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[27].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[27].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[28].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[28].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[27].f1.data[0] = 28.0;
  ucie_sim_c_B->primlist_c[28].f1.data[0] = 29.0;
  ucie_sim_c_B->primlist_c[27].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[28].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[27].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[28].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[29].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[29].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[7].f1.data[ucie_sim_c_B->i_n] = tmp
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[11].f1.data[ucie_sim_c_B->i_n] = tmp_0
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[12].f1.data[ucie_sim_c_B->i_n] = tmp_1
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[13].f1.data[ucie_sim_c_B->i_n] = tmp_2
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[15].f1.data[ucie_sim_c_B->i_n] = tmp_3
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[17].f1.data[ucie_sim_c_B->i_n] = tmp_4
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[18].f1.data[ucie_sim_c_B->i_n] = tmp_5
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[23].f1.data[ucie_sim_c_B->i_n] = tmp_6
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[25].f1.data[ucie_sim_c_B->i_n] = tmp_7
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[26].f1.data[ucie_sim_c_B->i_n] = tmp_9
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[29].f1.data[ucie_sim_c_B->i_n] = tmp_a
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[30].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[30].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[30].f1.data[0] = 31.0;
  ucie_sim_c_B->primlist_c[30].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[30].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[31].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[31].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[31].f1.data[ucie_sim_c_B->i_n] = tmp_8
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[32].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[32].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[32].f1.data[ucie_sim_c_B->i_n] = tmp_b
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[33].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[33].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[34].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[34].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[34].f1.data[0] = 35.0;
  ucie_sim_c_B->primlist_c[34].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[34].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[35].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[35].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[36].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[36].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[33].f1.data[ucie_sim_c_B->i_n] = tmp_c
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[35].f1.data[ucie_sim_c_B->i_n] = tmp_d
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[36].f1.data[ucie_sim_c_B->i_n] = tmp_e
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[37].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[37].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[38].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[38].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[38].f1.data[0] = 39.0;
  ucie_sim_c_B->primlist_c[38].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_c[38].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[39].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[39].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[37].f1.data[ucie_sim_c_B->i_n] = tmp_f
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[39].f1.data[ucie_sim_c_B->i_n] = tmp_g
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[40].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[40].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[40].f1.data[0] = 41.0;
  ucie_sim_c_B->primlist_c[40].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[40].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[41].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[41].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[41].f1.data[ucie_sim_c_B->i_n] = tmp_h
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[42].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[42].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[43].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[43].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[44].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[44].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[42].f1.data[ucie_sim_c_B->i_n] = tmp_i
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[43].f1.data[ucie_sim_c_B->i_n] = tmp_j
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[44].f1.data[ucie_sim_c_B->i_n] = tmp_k
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[45].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[45].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[46].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[46].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[46].f1.data[0] = 47.0;
  ucie_sim_c_B->primlist_c[46].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_c[46].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[47].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[47].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[45].f1.data[ucie_sim_c_B->i_n] = tmp_l
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[47].f1.data[ucie_sim_c_B->i_n] = tmp_m
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[48].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[48].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[49].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[49].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[50].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[50].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[51].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[51].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[51].f1.data[0] = 52.0;
  ucie_sim_c_B->primlist_c[51].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_c[51].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[52].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[52].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[48].f1.data[ucie_sim_c_B->i_n] = tmp_n
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[49].f1.data[ucie_sim_c_B->i_n] = tmp_o
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[50].f1.data[ucie_sim_c_B->i_n] = tmp_p
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[52].f1.data[ucie_sim_c_B->i_n] = tmp_q
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[53].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[53].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[53].f1.data[ucie_sim_c_B->i_n] = tmp_r
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[54].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[54].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[55].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[55].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[56].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[56].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[57].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[57].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[54].f1.data[ucie_sim_c_B->i_n] = tmp_s
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[55].f1.data[ucie_sim_c_B->i_n] = tmp_t
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[56].f1.data[ucie_sim_c_B->i_n] = tmp_u
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[57].f1.data[ucie_sim_c_B->i_n] = tmp_v
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[58].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[58].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[58].f1.data[ucie_sim_c_B->i_n] = tmp_w
      [ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[59].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[59].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[59].f1.data[0] = 60.0;
  ucie_sim_c_B->primlist_c[59].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[59].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[60].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[60].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[61].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[61].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[62].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[62].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[62].f1.data[0] = 63.0;
  ucie_sim_c_B->primlist_c[62].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_c[62].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[63].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[63].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[64].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[64].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[60].f1.data[ucie_sim_c_B->i_n] = tmp_x
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[61].f1.data[ucie_sim_c_B->i_n] = tmp_y
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[63].f1.data[ucie_sim_c_B->i_n] = tmp_z
      [ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[64].f1.data[ucie_sim_c_B->i_n] =
      tmp_10[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[65].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[65].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[65].f1.data[ucie_sim_c_B->i_n] =
      tmp_11[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[66].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[66].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[67].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[67].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[68].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[68].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[69].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[69].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[70].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[70].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[66].f1.data[ucie_sim_c_B->i_n] =
      tmp_12[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[67].f1.data[ucie_sim_c_B->i_n] =
      tmp_13[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[68].f1.data[ucie_sim_c_B->i_n] =
      tmp_14[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[69].f1.data[ucie_sim_c_B->i_n] =
      tmp_15[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[70].f1.data[ucie_sim_c_B->i_n] =
      tmp_17[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[71].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[71].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[71].f1.data[ucie_sim_c_B->i_n] =
      tmp_16[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[72].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[72].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[73].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[73].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[74].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[74].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[75].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[75].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[76].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[76].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[77].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[77].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[78].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[78].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[72].f1.data[ucie_sim_c_B->i_n] =
      tmp_18[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[73].f1.data[ucie_sim_c_B->i_n] =
      tmp_19[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[74].f1.data[ucie_sim_c_B->i_n] =
      tmp_1a[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[75].f1.data[ucie_sim_c_B->i_n] =
      tmp_1b[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[76].f1.data[ucie_sim_c_B->i_n] =
      tmp_1c[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[77].f1.data[ucie_sim_c_B->i_n] =
      tmp_1d[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[78].f1.data[ucie_sim_c_B->i_n] =
      tmp_1e[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[79].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[79].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[80].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[80].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[80].f1.data[0] = 81.0;
  ucie_sim_c_B->primlist_c[80].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_c[80].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[81].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[81].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[79].f1.data[ucie_sim_c_B->i_n] =
      tmp_1f[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[81].f1.data[ucie_sim_c_B->i_n] =
      tmp_1g[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[82].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[82].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[82].f1.data[ucie_sim_c_B->i_n] =
      tmp_1h[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[83].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[83].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[83].f1.data[ucie_sim_c_B->i_n] =
      tmp_1i[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[84].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[84].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[85].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[85].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[86].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[86].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[84].f1.data[ucie_sim_c_B->i_n] =
      tmp_1j[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[85].f1.data[ucie_sim_c_B->i_n] =
      tmp_1k[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[86].f1.data[ucie_sim_c_B->i_n] =
      tmp_1l[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[87].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[87].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[87].f1.data[ucie_sim_c_B->i_n] =
      tmp_1m[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[88].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[88].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[89].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[89].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[88].f1.data[ucie_sim_c_B->i_n] =
      tmp_1n[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[89].f1.data[ucie_sim_c_B->i_n] =
      tmp_1o[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[90].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[90].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[90].f1.data[ucie_sim_c_B->i_n] =
      tmp_1p[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[91].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[91].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[92].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[92].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[92].f1.data[0] = 93.0;
  ucie_sim_c_B->primlist_c[92].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_c[92].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[93].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[93].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[91].f1.data[ucie_sim_c_B->i_n] =
      tmp_1q[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[93].f1.data[ucie_sim_c_B->i_n] =
      tmp_1r[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[94].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[94].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[95].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[95].f1.size[1] = 7;
  ucie_sim_c_B->primlist_c[96].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[96].f1.size[1] = 3;
  ucie_sim_c_B->primlist_c[96].f1.data[0] = 97.0;
  ucie_sim_c_B->primlist_c[96].f1.data[1] = 6.0;
  ucie_sim_c_B->primlist_c[96].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_c[97].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[97].f1.size[1] = 7;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 7; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[94].f1.data[ucie_sim_c_B->i_n] =
      tmp_1s[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[95].f1.data[ucie_sim_c_B->i_n] =
      tmp_1t[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[97].f1.data[ucie_sim_c_B->i_n] =
      tmp_1u[ucie_sim_c_B->i_n];
  }

  ucie_sim_c_B->primlist_c[98].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[98].f1.size[1] = 5;
  ucie_sim_c_B->primlist_c[99].f1.size[0] = 1;
  ucie_sim_c_B->primlist_c[99].f1.size[1] = 5;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < 5; ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->primlist_c[98].f1.data[ucie_sim_c_B->i_n] =
      tmp_1v[ucie_sim_c_B->i_n];
    ucie_sim_c_B->primlist_c[99].f1.data[ucie_sim_c_B->i_n] =
      tmp_1w[ucie_sim_c_B->i_n];
  }

  if (varargin_1->size[1] == 0) {
    ucie_sim_c_B->unnamed_idx_1_tmp_cg = (int32_T)ucie_sim_c_B->primlist_c
      [(int32_T)O - 1].f1.data[0];
    ucie_sim_c_B->i_n = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->unnamed_idx_1_tmp_cg;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_n,
      ucie_sim_c_B);
    if (ucie_sim_c_B->unnamed_idx_1_tmp_cg - 1 >= 0) {
      memset(&varargin_1->data[0], 0, (uint32_T)
             ucie_sim_c_B->unnamed_idx_1_tmp_cg * sizeof(real_T));
    }

    varargin_1->data[ucie_sim_c_B->unnamed_idx_1_tmp_cg - 1] = 1.0;
  }

  ucie_sim_c_B->i_n = (int32_T)O - 1;
  ucie_sim_c_B->loop_ub_d = (int32_T)ucie_sim_c_B->primlist_c[ucie_sim_c_B->i_n]
    .f1.data[0];
  ucie_sim_c_B->maskp_size_ff[1] = ucie_sim_c_B->loop_ub_d;
  if (ucie_sim_c_B->loop_ub_d - 1 >= 0) {
    memset(&ucie_sim_c_B->maskp_data_p[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_d *
           sizeof(real_T));
  }

  ucie_sim_c_B->e_g = ucie_sim_c_B->primlist_c[ucie_sim_c_B->i_n].f1.size[1] - 1;
  if (ucie_sim_c_B->e_g < 2) {
    ucie_sim_c_B->unnamed_idx_1_tmp_cg = 0;
    ucie_sim_c_B->e_g = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_cg = 1;
  }

  ucie_sim_c_B->loop_ub_n = ucie_sim_c_B->e_g -
    ucie_sim_c_B->unnamed_idx_1_tmp_cg;
  for (ucie_sim_c_B->e_g = 0; ucie_sim_c_B->e_g < ucie_sim_c_B->loop_ub_n;
       ucie_sim_c_B->e_g++) {
    ucie_sim_c_B->g_data_i[ucie_sim_c_B->e_g] = (int32_T)
      ucie_sim_c_B->primlist_c[ucie_sim_c_B->i_n].f1.data
      [ucie_sim_c_B->unnamed_idx_1_tmp_cg + ucie_sim_c_B->e_g];
    ucie_sim_c_B->maskp_data_p[ucie_sim_c_B->g_data_i[ucie_sim_c_B->e_g] - 1] =
      1.0;
  }

  if (ucie_sim_c_B->maskp_size_ff[1] < 1) {
    ucie_sim_c_B->unnamed_idx_1_tmp_cg = 1;
    ucie_sim_c_B->e_g = 1;
    ucie_sim_c_B->i_n = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_cg = ucie_sim_c_B->loop_ub_d;
    ucie_sim_c_B->e_g = -1;
    ucie_sim_c_B->i_n = 1;
  }

  ucie_sim_c_B->loop_ub_d = div_s32(ucie_sim_c_B->i_n -
    ucie_sim_c_B->unnamed_idx_1_tmp_cg, ucie_sim_c_B->e_g);
  ucie_sim_c_B->loop_ub_n = ucie_sim_c_B->loop_ub_d + 1;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n <= ucie_sim_c_B->loop_ub_d;
       ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->maskp_data_g1[ucie_sim_c_B->i_n] = (int8_T)
      ucie_sim_c_B->maskp_data_p[(ucie_sim_c_B->e_g * ucie_sim_c_B->i_n +
      ucie_sim_c_B->unnamed_idx_1_tmp_cg) - 1];
  }

  ucie_sim_c_B->maskp_size_ff[0] = 1;
  ucie_sim_c_B->maskp_size_ff[1] = ucie_sim_c_B->loop_ub_n;
  for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < ucie_sim_c_B->loop_ub_n;
       ucie_sim_c_B->i_n++) {
    ucie_sim_c_B->maskp_data_p[ucie_sim_c_B->i_n] = ucie_sim_c_B->
      maskp_data_g1[ucie_sim_c_B->i_n];
  }

  if (varargin_1->data[0] == 1.0) {
    ucie_sim_c_emxInit_boolean_T(&xor_result, 2, ucie_sim_c_B);
    if (varargin_1->size[1] == ucie_sim_c_B->maskp_size_ff[1]) {
      ucie_sim_c_B->i_n = xor_result->size[0] * xor_result->size[1];
      xor_result->size[0] = 1;
      ucie_sim_c_B->loop_ub_d = varargin_1->size[1];
      xor_result->size[1] = ucie_sim_c_B->loop_ub_d;
      ucie_sim_c_emxEnsureCapacity_boolean_T(xor_result, ucie_sim_c_B->i_n,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < ucie_sim_c_B->loop_ub_d;
           ucie_sim_c_B->i_n++) {
        xor_result->data[ucie_sim_c_B->i_n] = ((varargin_1->data
          [ucie_sim_c_B->i_n] != 0.0) != (ucie_sim_c_B->
          maskp_data_p[ucie_sim_c_B->i_n] != 0.0));
      }
    } else {
      ucie_sim_c_binary_expand_op_12(xor_result, varargin_1,
        ucie_sim_c_B->maskp_data_p, ucie_sim_c_B->maskp_size_ff, ucie_sim_c_B);
    }

    if (xor_result->size[1] < 2) {
      ucie_sim_c_B->unnamed_idx_1_tmp_cg = 0;
      ucie_sim_c_B->e_g = 0;
    } else {
      ucie_sim_c_B->unnamed_idx_1_tmp_cg = 1;
      ucie_sim_c_B->e_g = xor_result->size[1];
    }

    ucie_sim_c_B->i_n = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_n,
      ucie_sim_c_B);
    ucie_sim_c_B->loop_ub_d = ucie_sim_c_B->e_g -
      ucie_sim_c_B->unnamed_idx_1_tmp_cg;
    ucie_sim_c_B->i_n = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[1] = ucie_sim_c_B->loop_ub_d + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_n,
      ucie_sim_c_B);
    for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < ucie_sim_c_B->loop_ub_d;
         ucie_sim_c_B->i_n++) {
      varargin_1->data[ucie_sim_c_B->i_n] = xor_result->data
        [ucie_sim_c_B->unnamed_idx_1_tmp_cg + ucie_sim_c_B->i_n];
    }

    ucie_sim_c_emxFree_boolean_T(&xor_result);
    varargin_1->data[ucie_sim_c_B->loop_ub_d] = 1.0;
  } else {
    if (varargin_1->size[1] < 2) {
      ucie_sim_c_B->unnamed_idx_1_tmp_cg = 0;
      ucie_sim_c_B->e_g = 0;
    } else {
      ucie_sim_c_B->unnamed_idx_1_tmp_cg = 1;
      ucie_sim_c_B->e_g = varargin_1->size[1];
    }

    ucie_sim_c_B->loop_ub_d = ucie_sim_c_B->e_g -
      ucie_sim_c_B->unnamed_idx_1_tmp_cg;
    for (ucie_sim_c_B->i_n = 0; ucie_sim_c_B->i_n < ucie_sim_c_B->loop_ub_d;
         ucie_sim_c_B->i_n++) {
      varargin_1->data[ucie_sim_c_B->i_n] = varargin_1->data
        [ucie_sim_c_B->unnamed_idx_1_tmp_cg + ucie_sim_c_B->i_n];
    }

    ucie_sim_c_B->i_n = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->loop_ub_d + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_n,
      ucie_sim_c_B);
    varargin_1->data[ucie_sim_c_B->loop_ub_d] = 0.0;
  }

  P = varargin_1->data[0];

  /* End of Start for MATLABSystem: '<S18>/StrobeStimulus' */
  return P;
}

static real_T ucie_sim_c_rand(DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  real_T r;
  int32_T b_mti;
  int32_T exitg1;
  int32_T tmp;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(ucie_sim_c_DW->state_g, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!ucie_sim_c_is_valid_state(ucie_sim_c_DW->state_g)) {
        u_idx_0 = 1431655765U;
        ucie_sim_c_DW->state_g[0] = 1431655765U;
        for (b_mti = 0; b_mti < 623; b_mti++) {
          tmp = b_mti + 1;
          u_idx_0 = (u_idx_0 >> 30U ^ u_idx_0) * 1812433253U + (uint32_T)tmp;
          ucie_sim_c_DW->state_g[b_mti + 1] = u_idx_0;
        }

        ucie_sim_c_DW->state_g[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  r = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
    1.1102230246251565E-16;
  return r;
}

static void ucie_sim_c_prbs_m(const emxArray_real_T_ucie_sim_c_T *O, real_T N,
  emxArray_real_T_ucie_sim_c_T *varargin_1, emxArray_real_T_ucie_sim_c_T *P,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *xor_result;
  emxArray_real_T_ucie_sim_c_T *varargin_1_0;
  static const int8_T tmp[5] = { 8, 4, 3, 2, 0 };

  static const int8_T tmp_0[5] = { 12, 6, 4, 1, 0 };

  static const int8_T tmp_1[5] = { 13, 4, 3, 1, 0 };

  static const int8_T tmp_2[5] = { 14, 5, 3, 1, 0 };

  static const int8_T tmp_3[5] = { 16, 5, 3, 2, 0 };

  static const int8_T tmp_4[5] = { 18, 5, 2, 1, 0 };

  static const int8_T tmp_5[5] = { 19, 5, 2, 1, 0 };

  static const int8_T tmp_6[5] = { 24, 4, 3, 1, 0 };

  static const int8_T tmp_7[5] = { 26, 6, 2, 1, 0 };

  static const int8_T tmp_8[7] = { 32, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_9[5] = { 27, 5, 2, 1, 0 };

  static const int8_T tmp_a[5] = { 30, 6, 4, 1, 0 };

  static const int8_T tmp_b[5] = { 33, 6, 4, 1, 0 };

  static const int8_T tmp_c[7] = { 34, 7, 6, 5, 2, 1, 0 };

  static const int8_T tmp_d[7] = { 36, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_e[7] = { 37, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_f[5] = { 38, 6, 5, 1, 0 };

  static const int8_T tmp_g[5] = { 40, 5, 4, 3, 0 };

  static const int8_T tmp_h[7] = { 42, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_i[5] = { 43, 6, 4, 3, 0 };

  static const int8_T tmp_j[5] = { 44, 6, 5, 2, 0 };

  static const int8_T tmp_k[5] = { 45, 4, 3, 1, 0 };

  static const int8_T tmp_l[7] = { 46, 8, 5, 3, 2, 1, 0 };

  static const int8_T tmp_m[7] = { 48, 7, 5, 4, 2, 1, 0 };

  static const int8_T tmp_n[5] = { 49, 6, 5, 4, 0 };

  static const int8_T tmp_o[5] = { 50, 4, 3, 2, 0 };

  static const int8_T tmp_p[5] = { 51, 6, 3, 1, 0 };

  static const int8_T tmp_q[5] = { 53, 6, 2, 1, 0 };

  static const int8_T tmp_r[7] = { 54, 6, 5, 4, 3, 2, 0 };

  static const int8_T tmp_s[5] = { 55, 6, 2, 1, 0 };

  static const int8_T tmp_t[5] = { 56, 7, 4, 2, 0 };

  static const int8_T tmp_u[5] = { 57, 5, 3, 2, 0 };

  static const int8_T tmp_v[5] = { 58, 6, 5, 1, 0 };

  static const int8_T tmp_w[7] = { 59, 6, 5, 4, 3, 1, 0 };

  static const int8_T tmp_x[5] = { 61, 5, 2, 1, 0 };

  static const int8_T tmp_y[5] = { 62, 6, 5, 3, 0 };

  static const int8_T tmp_z[5] = { 64, 4, 3, 1, 0 };

  static const int8_T tmp_10[5] = { 65, 4, 3, 1, 0 };

  static const int8_T tmp_11[7] = { 66, 8, 6, 5, 3, 2, 0 };

  static const int8_T tmp_12[5] = { 67, 5, 2, 1, 0 };

  static const int8_T tmp_13[5] = { 68, 7, 5, 1, 0 };

  static const int8_T tmp_14[5] = { 69, 6, 5, 2, 0 };

  static const int8_T tmp_15[5] = { 70, 5, 3, 1, 0 };

  static const int8_T tmp_16[7] = { 72, 6, 4, 3, 2, 1, 0 };

  static const int8_T tmp_17[5] = { 71, 5, 3, 1, 0 };

  static const int8_T tmp_18[5] = { 73, 4, 3, 2, 0 };

  static const int8_T tmp_19[5] = { 74, 7, 4, 3, 0 };

  static const int8_T tmp_1a[5] = { 75, 6, 3, 1, 0 };

  static const int8_T tmp_1b[5] = { 76, 5, 4, 2, 0 };

  static const int8_T tmp_1c[5] = { 77, 6, 5, 2, 0 };

  static const int8_T tmp_1d[5] = { 78, 7, 2, 1, 0 };

  static const int8_T tmp_1e[5] = { 79, 4, 3, 2, 0 };

  static const int8_T tmp_1f[7] = { 80, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_1g[7] = { 82, 8, 7, 6, 4, 1, 0 };

  static const int8_T tmp_1h[5] = { 83, 7, 4, 2, 0 };

  static const int8_T tmp_1i[7] = { 84, 8, 7, 5, 3, 1, 0 };

  static const int8_T tmp_1j[5] = { 85, 8, 2, 1, 0 };

  static const int8_T tmp_1k[5] = { 86, 6, 5, 2, 0 };

  static const int8_T tmp_1l[5] = { 87, 7, 5, 1, 0 };

  static const int8_T tmp_1m[7] = { 88, 8, 5, 4, 3, 1, 0 };

  static const int8_T tmp_1n[5] = { 89, 6, 5, 3, 0 };

  static const int8_T tmp_1o[5] = { 90, 5, 3, 2, 0 };

  static const int8_T tmp_1p[7] = { 91, 7, 6, 5, 3, 2, 0 };

  static const int8_T tmp_1q[5] = { 92, 6, 5, 2, 0 };

  static const int8_T tmp_1r[5] = { 94, 6, 5, 1, 0 };

  static const int8_T tmp_1s[7] = { 95, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_1t[7] = { 96, 7, 6, 4, 3, 2, 0 };

  static const int8_T tmp_1u[7] = { 98, 7, 4, 3, 2, 1, 0 };

  static const int8_T tmp_1v[5] = { 99, 7, 5, 4, 0 };

  static const int8_T tmp_1w[5] = { 100, 8, 7, 2, 0 };

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_B->primlist_m[0].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[0].f1.size[1] = 2;
  ucie_sim_c_B->primlist_m[0].f1.data[0] = 1.0;
  ucie_sim_c_B->primlist_m[0].f1.data[1] = 0.0;
  ucie_sim_c_B->primlist_m[1].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[1].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[2].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[2].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[3].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[3].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[4].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[4].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[5].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[5].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[6].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[6].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[1].f1.data[0] = 2.0;
  ucie_sim_c_B->primlist_m[2].f1.data[0] = 3.0;
  ucie_sim_c_B->primlist_m[3].f1.data[0] = 4.0;
  ucie_sim_c_B->primlist_m[4].f1.data[0] = 5.0;
  ucie_sim_c_B->primlist_m[5].f1.data[0] = 6.0;
  ucie_sim_c_B->primlist_m[6].f1.data[0] = 7.0;
  ucie_sim_c_B->primlist_m[1].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[2].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[3].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[4].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[5].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[6].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[1].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[2].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[3].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[4].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[5].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[6].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[7].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[7].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[8].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[8].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[9].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[9].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[10].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[10].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[8].f1.data[0] = 9.0;
  ucie_sim_c_B->primlist_m[9].f1.data[0] = 10.0;
  ucie_sim_c_B->primlist_m[10].f1.data[0] = 11.0;
  ucie_sim_c_B->primlist_m[8].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_m[9].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[10].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[8].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[9].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[10].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[11].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[11].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[12].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[12].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[13].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[13].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[14].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[14].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[14].f1.data[0] = 15.0;
  ucie_sim_c_B->primlist_m[14].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[14].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[15].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[15].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[16].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[16].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[16].f1.data[0] = 17.0;
  ucie_sim_c_B->primlist_m[16].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[16].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[17].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[17].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[18].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[18].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[19].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[19].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[20].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[20].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[21].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[21].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[22].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[22].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[19].f1.data[0] = 20.0;
  ucie_sim_c_B->primlist_m[20].f1.data[0] = 21.0;
  ucie_sim_c_B->primlist_m[21].f1.data[0] = 22.0;
  ucie_sim_c_B->primlist_m[22].f1.data[0] = 23.0;
  ucie_sim_c_B->primlist_m[19].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[20].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[21].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[22].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_m[19].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[20].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[21].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[22].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[23].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[23].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[24].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[24].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[24].f1.data[0] = 25.0;
  ucie_sim_c_B->primlist_m[24].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[24].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[25].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[25].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[26].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[26].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[27].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[27].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[28].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[28].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[27].f1.data[0] = 28.0;
  ucie_sim_c_B->primlist_m[28].f1.data[0] = 29.0;
  ucie_sim_c_B->primlist_m[27].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[28].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[27].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[28].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[29].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[29].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[7].f1.data[ucie_sim_c_B->r_o] = tmp
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[11].f1.data[ucie_sim_c_B->r_o] = tmp_0
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[12].f1.data[ucie_sim_c_B->r_o] = tmp_1
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[13].f1.data[ucie_sim_c_B->r_o] = tmp_2
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[15].f1.data[ucie_sim_c_B->r_o] = tmp_3
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[17].f1.data[ucie_sim_c_B->r_o] = tmp_4
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[18].f1.data[ucie_sim_c_B->r_o] = tmp_5
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[23].f1.data[ucie_sim_c_B->r_o] = tmp_6
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[25].f1.data[ucie_sim_c_B->r_o] = tmp_7
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[26].f1.data[ucie_sim_c_B->r_o] = tmp_9
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[29].f1.data[ucie_sim_c_B->r_o] = tmp_a
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[30].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[30].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[30].f1.data[0] = 31.0;
  ucie_sim_c_B->primlist_m[30].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[30].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[31].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[31].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[31].f1.data[ucie_sim_c_B->r_o] = tmp_8
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[32].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[32].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[32].f1.data[ucie_sim_c_B->r_o] = tmp_b
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[33].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[33].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[34].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[34].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[34].f1.data[0] = 35.0;
  ucie_sim_c_B->primlist_m[34].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[34].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[35].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[35].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[36].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[36].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[33].f1.data[ucie_sim_c_B->r_o] = tmp_c
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[35].f1.data[ucie_sim_c_B->r_o] = tmp_d
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[36].f1.data[ucie_sim_c_B->r_o] = tmp_e
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[37].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[37].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[38].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[38].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[38].f1.data[0] = 39.0;
  ucie_sim_c_B->primlist_m[38].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_m[38].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[39].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[39].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[37].f1.data[ucie_sim_c_B->r_o] = tmp_f
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[39].f1.data[ucie_sim_c_B->r_o] = tmp_g
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[40].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[40].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[40].f1.data[0] = 41.0;
  ucie_sim_c_B->primlist_m[40].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[40].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[41].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[41].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[41].f1.data[ucie_sim_c_B->r_o] = tmp_h
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[42].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[42].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[43].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[43].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[44].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[44].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[42].f1.data[ucie_sim_c_B->r_o] = tmp_i
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[43].f1.data[ucie_sim_c_B->r_o] = tmp_j
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[44].f1.data[ucie_sim_c_B->r_o] = tmp_k
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[45].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[45].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[46].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[46].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[46].f1.data[0] = 47.0;
  ucie_sim_c_B->primlist_m[46].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist_m[46].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[47].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[47].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[45].f1.data[ucie_sim_c_B->r_o] = tmp_l
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[47].f1.data[ucie_sim_c_B->r_o] = tmp_m
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[48].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[48].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[49].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[49].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[50].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[50].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[51].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[51].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[51].f1.data[0] = 52.0;
  ucie_sim_c_B->primlist_m[51].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist_m[51].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[52].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[52].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[48].f1.data[ucie_sim_c_B->r_o] = tmp_n
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[49].f1.data[ucie_sim_c_B->r_o] = tmp_o
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[50].f1.data[ucie_sim_c_B->r_o] = tmp_p
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[52].f1.data[ucie_sim_c_B->r_o] = tmp_q
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[53].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[53].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[53].f1.data[ucie_sim_c_B->r_o] = tmp_r
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[54].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[54].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[55].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[55].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[56].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[56].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[57].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[57].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[54].f1.data[ucie_sim_c_B->r_o] = tmp_s
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[55].f1.data[ucie_sim_c_B->r_o] = tmp_t
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[56].f1.data[ucie_sim_c_B->r_o] = tmp_u
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[57].f1.data[ucie_sim_c_B->r_o] = tmp_v
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[58].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[58].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[58].f1.data[ucie_sim_c_B->r_o] = tmp_w
      [ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[59].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[59].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[59].f1.data[0] = 60.0;
  ucie_sim_c_B->primlist_m[59].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[59].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[60].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[60].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[61].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[61].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[62].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[62].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[62].f1.data[0] = 63.0;
  ucie_sim_c_B->primlist_m[62].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist_m[62].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[63].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[63].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[64].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[64].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[60].f1.data[ucie_sim_c_B->r_o] = tmp_x
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[61].f1.data[ucie_sim_c_B->r_o] = tmp_y
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[63].f1.data[ucie_sim_c_B->r_o] = tmp_z
      [ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[64].f1.data[ucie_sim_c_B->r_o] =
      tmp_10[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[65].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[65].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[65].f1.data[ucie_sim_c_B->r_o] =
      tmp_11[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[66].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[66].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[67].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[67].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[68].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[68].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[69].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[69].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[70].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[70].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[66].f1.data[ucie_sim_c_B->r_o] =
      tmp_12[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[67].f1.data[ucie_sim_c_B->r_o] =
      tmp_13[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[68].f1.data[ucie_sim_c_B->r_o] =
      tmp_14[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[69].f1.data[ucie_sim_c_B->r_o] =
      tmp_15[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[70].f1.data[ucie_sim_c_B->r_o] =
      tmp_17[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[71].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[71].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[71].f1.data[ucie_sim_c_B->r_o] =
      tmp_16[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[72].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[72].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[73].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[73].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[74].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[74].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[75].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[75].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[76].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[76].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[77].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[77].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[78].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[78].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[72].f1.data[ucie_sim_c_B->r_o] =
      tmp_18[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[73].f1.data[ucie_sim_c_B->r_o] =
      tmp_19[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[74].f1.data[ucie_sim_c_B->r_o] =
      tmp_1a[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[75].f1.data[ucie_sim_c_B->r_o] =
      tmp_1b[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[76].f1.data[ucie_sim_c_B->r_o] =
      tmp_1c[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[77].f1.data[ucie_sim_c_B->r_o] =
      tmp_1d[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[78].f1.data[ucie_sim_c_B->r_o] =
      tmp_1e[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[79].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[79].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[80].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[80].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[80].f1.data[0] = 81.0;
  ucie_sim_c_B->primlist_m[80].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist_m[80].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[81].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[81].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[79].f1.data[ucie_sim_c_B->r_o] =
      tmp_1f[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[81].f1.data[ucie_sim_c_B->r_o] =
      tmp_1g[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[82].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[82].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[82].f1.data[ucie_sim_c_B->r_o] =
      tmp_1h[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[83].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[83].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[83].f1.data[ucie_sim_c_B->r_o] =
      tmp_1i[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[84].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[84].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[85].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[85].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[86].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[86].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[84].f1.data[ucie_sim_c_B->r_o] =
      tmp_1j[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[85].f1.data[ucie_sim_c_B->r_o] =
      tmp_1k[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[86].f1.data[ucie_sim_c_B->r_o] =
      tmp_1l[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[87].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[87].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[87].f1.data[ucie_sim_c_B->r_o] =
      tmp_1m[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[88].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[88].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[89].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[89].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[88].f1.data[ucie_sim_c_B->r_o] =
      tmp_1n[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[89].f1.data[ucie_sim_c_B->r_o] =
      tmp_1o[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[90].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[90].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[90].f1.data[ucie_sim_c_B->r_o] =
      tmp_1p[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[91].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[91].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[92].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[92].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[92].f1.data[0] = 93.0;
  ucie_sim_c_B->primlist_m[92].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist_m[92].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[93].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[93].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[91].f1.data[ucie_sim_c_B->r_o] =
      tmp_1q[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[93].f1.data[ucie_sim_c_B->r_o] =
      tmp_1r[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[94].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[94].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[95].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[95].f1.size[1] = 7;
  ucie_sim_c_B->primlist_m[96].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[96].f1.size[1] = 3;
  ucie_sim_c_B->primlist_m[96].f1.data[0] = 97.0;
  ucie_sim_c_B->primlist_m[96].f1.data[1] = 6.0;
  ucie_sim_c_B->primlist_m[96].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist_m[97].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[97].f1.size[1] = 7;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 7; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[94].f1.data[ucie_sim_c_B->r_o] =
      tmp_1s[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[95].f1.data[ucie_sim_c_B->r_o] =
      tmp_1t[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[97].f1.data[ucie_sim_c_B->r_o] =
      tmp_1u[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->primlist_m[98].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[98].f1.size[1] = 5;
  ucie_sim_c_B->primlist_m[99].f1.size[0] = 1;
  ucie_sim_c_B->primlist_m[99].f1.size[1] = 5;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < 5; ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->primlist_m[98].f1.data[ucie_sim_c_B->r_o] =
      tmp_1v[ucie_sim_c_B->r_o];
    ucie_sim_c_B->primlist_m[99].f1.data[ucie_sim_c_B->r_o] =
      tmp_1w[ucie_sim_c_B->r_o];
  }

  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    ucie_sim_c_B->unnamed_idx_1_tmp = (int32_T)ucie_sim_c_B->primlist_m[(int32_T)
      O->data[0] - 1].f1.data[0];
    ucie_sim_c_B->i2 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->unnamed_idx_1_tmp;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i2,
      ucie_sim_c_B);
    for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o <
         ucie_sim_c_B->unnamed_idx_1_tmp; ucie_sim_c_B->r_o++) {
      varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_o] = 0.0;
    }

    varargin_1->data[ucie_sim_c_B->unnamed_idx_1_tmp - 1] = 1.0;
  }

  ucie_sim_c_B->r_o = (int32_T)O->data[0] - 1;
  ucie_sim_c_B->loop_ub_m4 = (int32_T)ucie_sim_c_B->primlist_m[ucie_sim_c_B->r_o]
    .f1.data[0];
  ucie_sim_c_B->maskp_size[1] = ucie_sim_c_B->loop_ub_m4;
  if (ucie_sim_c_B->loop_ub_m4 - 1 >= 0) {
    memset(&ucie_sim_c_B->maskp_data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_m4 *
           sizeof(real_T));
  }

  ucie_sim_c_B->e_tmp = ucie_sim_c_B->primlist_m[ucie_sim_c_B->r_o].f1.size[1] -
    1;
  if (ucie_sim_c_B->e_tmp < 2) {
    ucie_sim_c_B->unnamed_idx_1_tmp = 0;
    ucie_sim_c_B->e_tmp = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp = 1;
  }

  ucie_sim_c_B->loop_ub_c = ucie_sim_c_B->e_tmp -
    ucie_sim_c_B->unnamed_idx_1_tmp;
  for (ucie_sim_c_B->i_i = 0; ucie_sim_c_B->i_i < ucie_sim_c_B->loop_ub_c;
       ucie_sim_c_B->i_i++) {
    ucie_sim_c_B->g_data[ucie_sim_c_B->i_i] = (int32_T)ucie_sim_c_B->
      primlist_m[ucie_sim_c_B->r_o].f1.data[ucie_sim_c_B->unnamed_idx_1_tmp +
      ucie_sim_c_B->i_i];
    ucie_sim_c_B->maskp_data[ucie_sim_c_B->g_data[ucie_sim_c_B->i_i] - 1] = 1.0;
  }

  if (ucie_sim_c_B->maskp_size[1] < 1) {
    ucie_sim_c_B->unnamed_idx_1_tmp = 1;
    ucie_sim_c_B->e_tmp = 1;
    ucie_sim_c_B->i_i = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp = ucie_sim_c_B->loop_ub_m4;
    ucie_sim_c_B->e_tmp = -1;
    ucie_sim_c_B->i_i = 1;
  }

  ucie_sim_c_B->loop_ub_m4 = div_s32(ucie_sim_c_B->i_i -
    ucie_sim_c_B->unnamed_idx_1_tmp, ucie_sim_c_B->e_tmp);
  ucie_sim_c_B->loop_ub_c = ucie_sim_c_B->loop_ub_m4 + 1;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o <= ucie_sim_c_B->loop_ub_m4;
       ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->maskp_data_cv[ucie_sim_c_B->r_o] = (int8_T)
      ucie_sim_c_B->maskp_data[(ucie_sim_c_B->e_tmp * ucie_sim_c_B->r_o +
      ucie_sim_c_B->unnamed_idx_1_tmp) - 1];
  }

  ucie_sim_c_B->maskp_size[0] = 1;
  ucie_sim_c_B->maskp_size[1] = ucie_sim_c_B->loop_ub_c;
  for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < ucie_sim_c_B->loop_ub_c;
       ucie_sim_c_B->r_o++) {
    ucie_sim_c_B->maskp_data[ucie_sim_c_B->r_o] = ucie_sim_c_B->
      maskp_data_cv[ucie_sim_c_B->r_o];
  }

  ucie_sim_c_B->e_tmp = (int32_T)N;
  ucie_sim_c_B->i2 = P->size[0] * P->size[1];
  P->size[0] = 1;
  P->size[1] = ucie_sim_c_B->e_tmp;
  ucie_sim_c_emxEnsureCapacity_real_T(P, ucie_sim_c_B->i2, ucie_sim_c_B);
  ucie_sim_c_emxInit_boolean_T(&xor_result, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&varargin_1_0, 2, ucie_sim_c_B);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  for (ucie_sim_c_B->unnamed_idx_1_tmp = 0; ucie_sim_c_B->unnamed_idx_1_tmp <
       ucie_sim_c_B->e_tmp; ucie_sim_c_B->unnamed_idx_1_tmp++) {
    ucie_sim_c_B->loop_ub_m4 = varargin_1->size[0] * varargin_1->size[1];
    if (varargin_1->data[0] == 1.0) {
      if (varargin_1->size[1] == ucie_sim_c_B->maskp_size[1]) {
        ucie_sim_c_B->loop_ub_c = varargin_1->size[0];
        ucie_sim_c_B->i2 = xor_result->size[0] * xor_result->size[1];
        xor_result->size[0] = ucie_sim_c_B->loop_ub_c;
        ucie_sim_c_B->loop_ub_m4 = varargin_1->size[1];
        xor_result->size[1] = ucie_sim_c_B->loop_ub_m4;
        ucie_sim_c_emxEnsureCapacity_boolean_T(xor_result, ucie_sim_c_B->i2,
          ucie_sim_c_B);
        for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < ucie_sim_c_B->loop_ub_m4;
             ucie_sim_c_B->r_o++) {
          for (ucie_sim_c_B->i_i = 0; ucie_sim_c_B->i_i <
               ucie_sim_c_B->loop_ub_c; ucie_sim_c_B->i_i++) {
            xor_result->data[ucie_sim_c_B->i_i + xor_result->size[0] *
              ucie_sim_c_B->r_o] = ((varargin_1->data[varargin_1->size[0] *
              ucie_sim_c_B->r_o + ucie_sim_c_B->i_i] != 0.0) !=
              (ucie_sim_c_B->maskp_data[ucie_sim_c_B->r_o] != 0.0));
          }
        }
      } else {
        ucie_sim_c_binary_expand_op_13(xor_result, varargin_1,
          ucie_sim_c_B->maskp_data, ucie_sim_c_B->maskp_size, ucie_sim_c_B);
      }

      ucie_sim_c_B->loop_ub_m4 = xor_result->size[0] * xor_result->size[1];
      if (ucie_sim_c_B->loop_ub_m4 < 2) {
        ucie_sim_c_B->i_i = 0;
        ucie_sim_c_B->r_o = 0;
      } else {
        ucie_sim_c_B->i_i = 1;
        ucie_sim_c_B->r_o = ucie_sim_c_B->loop_ub_m4;
      }

      ucie_sim_c_B->i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i2,
        ucie_sim_c_B);
      ucie_sim_c_B->loop_ub_m4 = ucie_sim_c_B->r_o - ucie_sim_c_B->i_i;
      ucie_sim_c_B->i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[1] = ucie_sim_c_B->loop_ub_m4 + 1;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i2,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < ucie_sim_c_B->loop_ub_m4;
           ucie_sim_c_B->r_o++) {
        varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_o] =
          xor_result->data[ucie_sim_c_B->i_i + ucie_sim_c_B->r_o];
      }

      varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->loop_ub_m4] = 1.0;
    } else {
      if (ucie_sim_c_B->loop_ub_m4 < 2) {
        ucie_sim_c_B->i_i = 0;
        ucie_sim_c_B->r_o = 0;
      } else {
        ucie_sim_c_B->i_i = 1;
        ucie_sim_c_B->r_o = ucie_sim_c_B->loop_ub_m4;
      }

      ucie_sim_c_B->i2 = varargin_1_0->size[0] * varargin_1_0->size[1];
      varargin_1_0->size[0] = 1;
      ucie_sim_c_B->loop_ub_m4 = ucie_sim_c_B->r_o - ucie_sim_c_B->i_i;
      ucie_sim_c_B->loop_ub_c = ucie_sim_c_B->loop_ub_m4 + 1;
      varargin_1_0->size[1] = ucie_sim_c_B->loop_ub_c;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1_0, ucie_sim_c_B->i2,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < ucie_sim_c_B->loop_ub_m4;
           ucie_sim_c_B->r_o++) {
        varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->r_o] =
          varargin_1->data[ucie_sim_c_B->i_i + ucie_sim_c_B->r_o];
      }

      varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->loop_ub_m4] = 0.0;
      ucie_sim_c_B->i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = ucie_sim_c_B->loop_ub_c;
      ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i2,
        ucie_sim_c_B);
      for (ucie_sim_c_B->r_o = 0; ucie_sim_c_B->r_o < ucie_sim_c_B->loop_ub_c;
           ucie_sim_c_B->r_o++) {
        varargin_1->data[varargin_1->size[0] * ucie_sim_c_B->r_o] =
          varargin_1_0->data[varargin_1_0->size[0] * ucie_sim_c_B->r_o];
      }
    }

    P->data[ucie_sim_c_B->unnamed_idx_1_tmp] = varargin_1->data[0];
  }

  ucie_sim_c_emxFree_real_T(&varargin_1_0);
  ucie_sim_c_emxFree_boolean_T(&xor_result);
}

static real_T ucie_sim_c_genrandu(uint32_T mt[625])
{
  real_T r;
  int32_T b_mti;
  int32_T exitg1;
  int32_T tmp;
  uint32_T b_u[2];
  uint32_T u_idx_0;
  uint32_T u_idx_1;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(mt, b_u);
    u_idx_0 = b_u[0] >> 5U;
    u_idx_1 = b_u[1] >> 6U;
    if ((u_idx_0 == 0U) && (u_idx_1 == 0U)) {
      if (!ucie_sim_c_is_valid_state(mt)) {
        u_idx_0 = 1431655765U;
        mt[0] = 1431655765U;
        for (b_mti = 0; b_mti < 623; b_mti++) {
          tmp = b_mti + 1;
          u_idx_0 = (u_idx_0 >> 30U ^ u_idx_0) * 1812433253U + (uint32_T)tmp;
          mt[b_mti + 1] = u_idx_0;
        }

        mt[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  r = ((real_T)u_idx_0 * 6.7108864E+7 + (real_T)u_idx_1) *
    1.1102230246251565E-16;
  return r;
}

static real_T ucie_sim_c_randn(DW_ucie_sim_c_T *ucie_sim_c_DW)
{
  real_T d_u;
  real_T r;
  real_T x;
  int32_T i;
  uint32_T u32[2];
  static const real_T tmp[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static const real_T tmp_0[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  int32_T exitg1;
  do {
    exitg1 = 0;
    ucie_sim_c_genrand_uint32_vector(ucie_sim_c_DW->state_g, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)(u32[1] & 16777215U)) *
         2.2204460492503131E-16 - 1.0) * tmp[i];
    if (fabs(r) <= tmp[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      x = ucie_sim_c_genrandu(ucie_sim_c_DW->state_g);
      if ((tmp_0[i - 1] - tmp_0[i]) * x + tmp_0[i] < exp(-0.5 * r * r)) {
        exitg1 = 1;
      }
    } else {
      do {
        x = ucie_sim_c_genrandu(ucie_sim_c_DW->state_g);
        x = log(x) * 0.273661237329758;
        d_u = ucie_sim_c_genrandu(ucie_sim_c_DW->state_g);
      } while (!(-2.0 * log(d_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T ucie_sim_c_prbs(real_T O, emxArray_real_T_ucie_sim_c_T *varargin_1,
  B_ucie_sim_c_T *ucie_sim_c_B)
{
  emxArray_boolean_T_ucie_sim_c_T *xor_result;
  real_T P;
  static const int8_T tmp[5] = { 8, 4, 3, 2, 0 };

  static const int8_T tmp_0[5] = { 12, 6, 4, 1, 0 };

  static const int8_T tmp_1[5] = { 13, 4, 3, 1, 0 };

  static const int8_T tmp_2[5] = { 14, 5, 3, 1, 0 };

  static const int8_T tmp_3[5] = { 16, 5, 3, 2, 0 };

  static const int8_T tmp_4[5] = { 18, 5, 2, 1, 0 };

  static const int8_T tmp_5[5] = { 19, 5, 2, 1, 0 };

  static const int8_T tmp_6[5] = { 24, 4, 3, 1, 0 };

  static const int8_T tmp_7[5] = { 26, 6, 2, 1, 0 };

  static const int8_T tmp_8[7] = { 32, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_9[5] = { 27, 5, 2, 1, 0 };

  static const int8_T tmp_a[5] = { 30, 6, 4, 1, 0 };

  static const int8_T tmp_b[5] = { 33, 6, 4, 1, 0 };

  static const int8_T tmp_c[7] = { 34, 7, 6, 5, 2, 1, 0 };

  static const int8_T tmp_d[7] = { 36, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_e[7] = { 37, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_f[5] = { 38, 6, 5, 1, 0 };

  static const int8_T tmp_g[5] = { 40, 5, 4, 3, 0 };

  static const int8_T tmp_h[7] = { 42, 5, 4, 3, 2, 1, 0 };

  static const int8_T tmp_i[5] = { 43, 6, 4, 3, 0 };

  static const int8_T tmp_j[5] = { 44, 6, 5, 2, 0 };

  static const int8_T tmp_k[5] = { 45, 4, 3, 1, 0 };

  static const int8_T tmp_l[7] = { 46, 8, 5, 3, 2, 1, 0 };

  static const int8_T tmp_m[7] = { 48, 7, 5, 4, 2, 1, 0 };

  static const int8_T tmp_n[5] = { 49, 6, 5, 4, 0 };

  static const int8_T tmp_o[5] = { 50, 4, 3, 2, 0 };

  static const int8_T tmp_p[5] = { 51, 6, 3, 1, 0 };

  static const int8_T tmp_q[5] = { 53, 6, 2, 1, 0 };

  static const int8_T tmp_r[7] = { 54, 6, 5, 4, 3, 2, 0 };

  static const int8_T tmp_s[5] = { 55, 6, 2, 1, 0 };

  static const int8_T tmp_t[5] = { 56, 7, 4, 2, 0 };

  static const int8_T tmp_u[5] = { 57, 5, 3, 2, 0 };

  static const int8_T tmp_v[5] = { 58, 6, 5, 1, 0 };

  static const int8_T tmp_w[7] = { 59, 6, 5, 4, 3, 1, 0 };

  static const int8_T tmp_x[5] = { 61, 5, 2, 1, 0 };

  static const int8_T tmp_y[5] = { 62, 6, 5, 3, 0 };

  static const int8_T tmp_z[5] = { 64, 4, 3, 1, 0 };

  static const int8_T tmp_10[5] = { 65, 4, 3, 1, 0 };

  static const int8_T tmp_11[7] = { 66, 8, 6, 5, 3, 2, 0 };

  static const int8_T tmp_12[5] = { 67, 5, 2, 1, 0 };

  static const int8_T tmp_13[5] = { 68, 7, 5, 1, 0 };

  static const int8_T tmp_14[5] = { 69, 6, 5, 2, 0 };

  static const int8_T tmp_15[5] = { 70, 5, 3, 1, 0 };

  static const int8_T tmp_16[7] = { 72, 6, 4, 3, 2, 1, 0 };

  static const int8_T tmp_17[5] = { 71, 5, 3, 1, 0 };

  static const int8_T tmp_18[5] = { 73, 4, 3, 2, 0 };

  static const int8_T tmp_19[5] = { 74, 7, 4, 3, 0 };

  static const int8_T tmp_1a[5] = { 75, 6, 3, 1, 0 };

  static const int8_T tmp_1b[5] = { 76, 5, 4, 2, 0 };

  static const int8_T tmp_1c[5] = { 77, 6, 5, 2, 0 };

  static const int8_T tmp_1d[5] = { 78, 7, 2, 1, 0 };

  static const int8_T tmp_1e[5] = { 79, 4, 3, 2, 0 };

  static const int8_T tmp_1f[7] = { 80, 7, 5, 3, 2, 1, 0 };

  static const int8_T tmp_1g[7] = { 82, 8, 7, 6, 4, 1, 0 };

  static const int8_T tmp_1h[5] = { 83, 7, 4, 2, 0 };

  static const int8_T tmp_1i[7] = { 84, 8, 7, 5, 3, 1, 0 };

  static const int8_T tmp_1j[5] = { 85, 8, 2, 1, 0 };

  static const int8_T tmp_1k[5] = { 86, 6, 5, 2, 0 };

  static const int8_T tmp_1l[5] = { 87, 7, 5, 1, 0 };

  static const int8_T tmp_1m[7] = { 88, 8, 5, 4, 3, 1, 0 };

  static const int8_T tmp_1n[5] = { 89, 6, 5, 3, 0 };

  static const int8_T tmp_1o[5] = { 90, 5, 3, 2, 0 };

  static const int8_T tmp_1p[7] = { 91, 7, 6, 5, 3, 2, 0 };

  static const int8_T tmp_1q[5] = { 92, 6, 5, 2, 0 };

  static const int8_T tmp_1r[5] = { 94, 6, 5, 1, 0 };

  static const int8_T tmp_1s[7] = { 95, 6, 5, 4, 2, 1, 0 };

  static const int8_T tmp_1t[7] = { 96, 7, 6, 4, 3, 2, 0 };

  static const int8_T tmp_1u[7] = { 98, 7, 4, 3, 2, 1, 0 };

  static const int8_T tmp_1v[5] = { 99, 7, 5, 4, 0 };

  static const int8_T tmp_1w[5] = { 100, 8, 7, 2, 0 };

  /* Start for MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_B->primlist[0].f1.size[0] = 1;
  ucie_sim_c_B->primlist[0].f1.size[1] = 2;
  ucie_sim_c_B->primlist[0].f1.data[0] = 1.0;
  ucie_sim_c_B->primlist[0].f1.data[1] = 0.0;
  ucie_sim_c_B->primlist[1].f1.size[0] = 1;
  ucie_sim_c_B->primlist[1].f1.size[1] = 3;
  ucie_sim_c_B->primlist[2].f1.size[0] = 1;
  ucie_sim_c_B->primlist[2].f1.size[1] = 3;
  ucie_sim_c_B->primlist[3].f1.size[0] = 1;
  ucie_sim_c_B->primlist[3].f1.size[1] = 3;
  ucie_sim_c_B->primlist[4].f1.size[0] = 1;
  ucie_sim_c_B->primlist[4].f1.size[1] = 3;
  ucie_sim_c_B->primlist[5].f1.size[0] = 1;
  ucie_sim_c_B->primlist[5].f1.size[1] = 3;
  ucie_sim_c_B->primlist[6].f1.size[0] = 1;
  ucie_sim_c_B->primlist[6].f1.size[1] = 3;
  ucie_sim_c_B->primlist[1].f1.data[0] = 2.0;
  ucie_sim_c_B->primlist[2].f1.data[0] = 3.0;
  ucie_sim_c_B->primlist[3].f1.data[0] = 4.0;
  ucie_sim_c_B->primlist[4].f1.data[0] = 5.0;
  ucie_sim_c_B->primlist[5].f1.data[0] = 6.0;
  ucie_sim_c_B->primlist[6].f1.data[0] = 7.0;
  ucie_sim_c_B->primlist[1].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[2].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[3].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[4].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[5].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[6].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[1].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[2].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[3].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[4].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[5].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[6].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[7].f1.size[0] = 1;
  ucie_sim_c_B->primlist[7].f1.size[1] = 5;
  ucie_sim_c_B->primlist[8].f1.size[0] = 1;
  ucie_sim_c_B->primlist[8].f1.size[1] = 3;
  ucie_sim_c_B->primlist[9].f1.size[0] = 1;
  ucie_sim_c_B->primlist[9].f1.size[1] = 3;
  ucie_sim_c_B->primlist[10].f1.size[0] = 1;
  ucie_sim_c_B->primlist[10].f1.size[1] = 3;
  ucie_sim_c_B->primlist[8].f1.data[0] = 9.0;
  ucie_sim_c_B->primlist[9].f1.data[0] = 10.0;
  ucie_sim_c_B->primlist[10].f1.data[0] = 11.0;
  ucie_sim_c_B->primlist[8].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist[9].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[10].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[8].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[9].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[10].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[11].f1.size[0] = 1;
  ucie_sim_c_B->primlist[11].f1.size[1] = 5;
  ucie_sim_c_B->primlist[12].f1.size[0] = 1;
  ucie_sim_c_B->primlist[12].f1.size[1] = 5;
  ucie_sim_c_B->primlist[13].f1.size[0] = 1;
  ucie_sim_c_B->primlist[13].f1.size[1] = 5;
  ucie_sim_c_B->primlist[14].f1.size[0] = 1;
  ucie_sim_c_B->primlist[14].f1.size[1] = 3;
  ucie_sim_c_B->primlist[14].f1.data[0] = 15.0;
  ucie_sim_c_B->primlist[14].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[14].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[15].f1.size[0] = 1;
  ucie_sim_c_B->primlist[15].f1.size[1] = 5;
  ucie_sim_c_B->primlist[16].f1.size[0] = 1;
  ucie_sim_c_B->primlist[16].f1.size[1] = 3;
  ucie_sim_c_B->primlist[16].f1.data[0] = 17.0;
  ucie_sim_c_B->primlist[16].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[16].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[17].f1.size[0] = 1;
  ucie_sim_c_B->primlist[17].f1.size[1] = 5;
  ucie_sim_c_B->primlist[18].f1.size[0] = 1;
  ucie_sim_c_B->primlist[18].f1.size[1] = 5;
  ucie_sim_c_B->primlist[19].f1.size[0] = 1;
  ucie_sim_c_B->primlist[19].f1.size[1] = 3;
  ucie_sim_c_B->primlist[20].f1.size[0] = 1;
  ucie_sim_c_B->primlist[20].f1.size[1] = 3;
  ucie_sim_c_B->primlist[21].f1.size[0] = 1;
  ucie_sim_c_B->primlist[21].f1.size[1] = 3;
  ucie_sim_c_B->primlist[22].f1.size[0] = 1;
  ucie_sim_c_B->primlist[22].f1.size[1] = 3;
  ucie_sim_c_B->primlist[19].f1.data[0] = 20.0;
  ucie_sim_c_B->primlist[20].f1.data[0] = 21.0;
  ucie_sim_c_B->primlist[21].f1.data[0] = 22.0;
  ucie_sim_c_B->primlist[22].f1.data[0] = 23.0;
  ucie_sim_c_B->primlist[19].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[20].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[21].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[22].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist[19].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[20].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[21].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[22].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[23].f1.size[0] = 1;
  ucie_sim_c_B->primlist[23].f1.size[1] = 5;
  ucie_sim_c_B->primlist[24].f1.size[0] = 1;
  ucie_sim_c_B->primlist[24].f1.size[1] = 3;
  ucie_sim_c_B->primlist[24].f1.data[0] = 25.0;
  ucie_sim_c_B->primlist[24].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[24].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[25].f1.size[0] = 1;
  ucie_sim_c_B->primlist[25].f1.size[1] = 5;
  ucie_sim_c_B->primlist[26].f1.size[0] = 1;
  ucie_sim_c_B->primlist[26].f1.size[1] = 5;
  ucie_sim_c_B->primlist[27].f1.size[0] = 1;
  ucie_sim_c_B->primlist[27].f1.size[1] = 3;
  ucie_sim_c_B->primlist[28].f1.size[0] = 1;
  ucie_sim_c_B->primlist[28].f1.size[1] = 3;
  ucie_sim_c_B->primlist[27].f1.data[0] = 28.0;
  ucie_sim_c_B->primlist[28].f1.data[0] = 29.0;
  ucie_sim_c_B->primlist[27].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[28].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[27].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[28].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[29].f1.size[0] = 1;
  ucie_sim_c_B->primlist[29].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[7].f1.data[ucie_sim_c_B->i_e] = tmp[ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[11].f1.data[ucie_sim_c_B->i_e] = tmp_0
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[12].f1.data[ucie_sim_c_B->i_e] = tmp_1
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[13].f1.data[ucie_sim_c_B->i_e] = tmp_2
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[15].f1.data[ucie_sim_c_B->i_e] = tmp_3
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[17].f1.data[ucie_sim_c_B->i_e] = tmp_4
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[18].f1.data[ucie_sim_c_B->i_e] = tmp_5
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[23].f1.data[ucie_sim_c_B->i_e] = tmp_6
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[25].f1.data[ucie_sim_c_B->i_e] = tmp_7
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[26].f1.data[ucie_sim_c_B->i_e] = tmp_9
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[29].f1.data[ucie_sim_c_B->i_e] = tmp_a
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[30].f1.size[0] = 1;
  ucie_sim_c_B->primlist[30].f1.size[1] = 3;
  ucie_sim_c_B->primlist[30].f1.data[0] = 31.0;
  ucie_sim_c_B->primlist[30].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[30].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[31].f1.size[0] = 1;
  ucie_sim_c_B->primlist[31].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[31].f1.data[ucie_sim_c_B->i_e] = tmp_8
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[32].f1.size[0] = 1;
  ucie_sim_c_B->primlist[32].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[32].f1.data[ucie_sim_c_B->i_e] = tmp_b
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[33].f1.size[0] = 1;
  ucie_sim_c_B->primlist[33].f1.size[1] = 7;
  ucie_sim_c_B->primlist[34].f1.size[0] = 1;
  ucie_sim_c_B->primlist[34].f1.size[1] = 3;
  ucie_sim_c_B->primlist[34].f1.data[0] = 35.0;
  ucie_sim_c_B->primlist[34].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[34].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[35].f1.size[0] = 1;
  ucie_sim_c_B->primlist[35].f1.size[1] = 7;
  ucie_sim_c_B->primlist[36].f1.size[0] = 1;
  ucie_sim_c_B->primlist[36].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[33].f1.data[ucie_sim_c_B->i_e] = tmp_c
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[35].f1.data[ucie_sim_c_B->i_e] = tmp_d
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[36].f1.data[ucie_sim_c_B->i_e] = tmp_e
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[37].f1.size[0] = 1;
  ucie_sim_c_B->primlist[37].f1.size[1] = 5;
  ucie_sim_c_B->primlist[38].f1.size[0] = 1;
  ucie_sim_c_B->primlist[38].f1.size[1] = 3;
  ucie_sim_c_B->primlist[38].f1.data[0] = 39.0;
  ucie_sim_c_B->primlist[38].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist[38].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[39].f1.size[0] = 1;
  ucie_sim_c_B->primlist[39].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[37].f1.data[ucie_sim_c_B->i_e] = tmp_f
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[39].f1.data[ucie_sim_c_B->i_e] = tmp_g
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[40].f1.size[0] = 1;
  ucie_sim_c_B->primlist[40].f1.size[1] = 3;
  ucie_sim_c_B->primlist[40].f1.data[0] = 41.0;
  ucie_sim_c_B->primlist[40].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[40].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[41].f1.size[0] = 1;
  ucie_sim_c_B->primlist[41].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[41].f1.data[ucie_sim_c_B->i_e] = tmp_h
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[42].f1.size[0] = 1;
  ucie_sim_c_B->primlist[42].f1.size[1] = 5;
  ucie_sim_c_B->primlist[43].f1.size[0] = 1;
  ucie_sim_c_B->primlist[43].f1.size[1] = 5;
  ucie_sim_c_B->primlist[44].f1.size[0] = 1;
  ucie_sim_c_B->primlist[44].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[42].f1.data[ucie_sim_c_B->i_e] = tmp_i
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[43].f1.data[ucie_sim_c_B->i_e] = tmp_j
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[44].f1.data[ucie_sim_c_B->i_e] = tmp_k
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[45].f1.size[0] = 1;
  ucie_sim_c_B->primlist[45].f1.size[1] = 7;
  ucie_sim_c_B->primlist[46].f1.size[0] = 1;
  ucie_sim_c_B->primlist[46].f1.size[1] = 3;
  ucie_sim_c_B->primlist[46].f1.data[0] = 47.0;
  ucie_sim_c_B->primlist[46].f1.data[1] = 5.0;
  ucie_sim_c_B->primlist[46].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[47].f1.size[0] = 1;
  ucie_sim_c_B->primlist[47].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[45].f1.data[ucie_sim_c_B->i_e] = tmp_l
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[47].f1.data[ucie_sim_c_B->i_e] = tmp_m
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[48].f1.size[0] = 1;
  ucie_sim_c_B->primlist[48].f1.size[1] = 5;
  ucie_sim_c_B->primlist[49].f1.size[0] = 1;
  ucie_sim_c_B->primlist[49].f1.size[1] = 5;
  ucie_sim_c_B->primlist[50].f1.size[0] = 1;
  ucie_sim_c_B->primlist[50].f1.size[1] = 5;
  ucie_sim_c_B->primlist[51].f1.size[0] = 1;
  ucie_sim_c_B->primlist[51].f1.size[1] = 3;
  ucie_sim_c_B->primlist[51].f1.data[0] = 52.0;
  ucie_sim_c_B->primlist[51].f1.data[1] = 3.0;
  ucie_sim_c_B->primlist[51].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[52].f1.size[0] = 1;
  ucie_sim_c_B->primlist[52].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[48].f1.data[ucie_sim_c_B->i_e] = tmp_n
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[49].f1.data[ucie_sim_c_B->i_e] = tmp_o
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[50].f1.data[ucie_sim_c_B->i_e] = tmp_p
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[52].f1.data[ucie_sim_c_B->i_e] = tmp_q
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[53].f1.size[0] = 1;
  ucie_sim_c_B->primlist[53].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[53].f1.data[ucie_sim_c_B->i_e] = tmp_r
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[54].f1.size[0] = 1;
  ucie_sim_c_B->primlist[54].f1.size[1] = 5;
  ucie_sim_c_B->primlist[55].f1.size[0] = 1;
  ucie_sim_c_B->primlist[55].f1.size[1] = 5;
  ucie_sim_c_B->primlist[56].f1.size[0] = 1;
  ucie_sim_c_B->primlist[56].f1.size[1] = 5;
  ucie_sim_c_B->primlist[57].f1.size[0] = 1;
  ucie_sim_c_B->primlist[57].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[54].f1.data[ucie_sim_c_B->i_e] = tmp_s
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[55].f1.data[ucie_sim_c_B->i_e] = tmp_t
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[56].f1.data[ucie_sim_c_B->i_e] = tmp_u
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[57].f1.data[ucie_sim_c_B->i_e] = tmp_v
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[58].f1.size[0] = 1;
  ucie_sim_c_B->primlist[58].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[58].f1.data[ucie_sim_c_B->i_e] = tmp_w
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[59].f1.size[0] = 1;
  ucie_sim_c_B->primlist[59].f1.size[1] = 3;
  ucie_sim_c_B->primlist[59].f1.data[0] = 60.0;
  ucie_sim_c_B->primlist[59].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[59].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[60].f1.size[0] = 1;
  ucie_sim_c_B->primlist[60].f1.size[1] = 5;
  ucie_sim_c_B->primlist[61].f1.size[0] = 1;
  ucie_sim_c_B->primlist[61].f1.size[1] = 5;
  ucie_sim_c_B->primlist[62].f1.size[0] = 1;
  ucie_sim_c_B->primlist[62].f1.size[1] = 3;
  ucie_sim_c_B->primlist[62].f1.data[0] = 63.0;
  ucie_sim_c_B->primlist[62].f1.data[1] = 1.0;
  ucie_sim_c_B->primlist[62].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[63].f1.size[0] = 1;
  ucie_sim_c_B->primlist[63].f1.size[1] = 5;
  ucie_sim_c_B->primlist[64].f1.size[0] = 1;
  ucie_sim_c_B->primlist[64].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[60].f1.data[ucie_sim_c_B->i_e] = tmp_x
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[61].f1.data[ucie_sim_c_B->i_e] = tmp_y
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[63].f1.data[ucie_sim_c_B->i_e] = tmp_z
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[64].f1.data[ucie_sim_c_B->i_e] = tmp_10
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[65].f1.size[0] = 1;
  ucie_sim_c_B->primlist[65].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[65].f1.data[ucie_sim_c_B->i_e] = tmp_11
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[66].f1.size[0] = 1;
  ucie_sim_c_B->primlist[66].f1.size[1] = 5;
  ucie_sim_c_B->primlist[67].f1.size[0] = 1;
  ucie_sim_c_B->primlist[67].f1.size[1] = 5;
  ucie_sim_c_B->primlist[68].f1.size[0] = 1;
  ucie_sim_c_B->primlist[68].f1.size[1] = 5;
  ucie_sim_c_B->primlist[69].f1.size[0] = 1;
  ucie_sim_c_B->primlist[69].f1.size[1] = 5;
  ucie_sim_c_B->primlist[70].f1.size[0] = 1;
  ucie_sim_c_B->primlist[70].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[66].f1.data[ucie_sim_c_B->i_e] = tmp_12
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[67].f1.data[ucie_sim_c_B->i_e] = tmp_13
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[68].f1.data[ucie_sim_c_B->i_e] = tmp_14
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[69].f1.data[ucie_sim_c_B->i_e] = tmp_15
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[70].f1.data[ucie_sim_c_B->i_e] = tmp_17
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[71].f1.size[0] = 1;
  ucie_sim_c_B->primlist[71].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[71].f1.data[ucie_sim_c_B->i_e] = tmp_16
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[72].f1.size[0] = 1;
  ucie_sim_c_B->primlist[72].f1.size[1] = 5;
  ucie_sim_c_B->primlist[73].f1.size[0] = 1;
  ucie_sim_c_B->primlist[73].f1.size[1] = 5;
  ucie_sim_c_B->primlist[74].f1.size[0] = 1;
  ucie_sim_c_B->primlist[74].f1.size[1] = 5;
  ucie_sim_c_B->primlist[75].f1.size[0] = 1;
  ucie_sim_c_B->primlist[75].f1.size[1] = 5;
  ucie_sim_c_B->primlist[76].f1.size[0] = 1;
  ucie_sim_c_B->primlist[76].f1.size[1] = 5;
  ucie_sim_c_B->primlist[77].f1.size[0] = 1;
  ucie_sim_c_B->primlist[77].f1.size[1] = 5;
  ucie_sim_c_B->primlist[78].f1.size[0] = 1;
  ucie_sim_c_B->primlist[78].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[72].f1.data[ucie_sim_c_B->i_e] = tmp_18
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[73].f1.data[ucie_sim_c_B->i_e] = tmp_19
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[74].f1.data[ucie_sim_c_B->i_e] = tmp_1a
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[75].f1.data[ucie_sim_c_B->i_e] = tmp_1b
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[76].f1.data[ucie_sim_c_B->i_e] = tmp_1c
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[77].f1.data[ucie_sim_c_B->i_e] = tmp_1d
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[78].f1.data[ucie_sim_c_B->i_e] = tmp_1e
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[79].f1.size[0] = 1;
  ucie_sim_c_B->primlist[79].f1.size[1] = 7;
  ucie_sim_c_B->primlist[80].f1.size[0] = 1;
  ucie_sim_c_B->primlist[80].f1.size[1] = 3;
  ucie_sim_c_B->primlist[80].f1.data[0] = 81.0;
  ucie_sim_c_B->primlist[80].f1.data[1] = 4.0;
  ucie_sim_c_B->primlist[80].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[81].f1.size[0] = 1;
  ucie_sim_c_B->primlist[81].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[79].f1.data[ucie_sim_c_B->i_e] = tmp_1f
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[81].f1.data[ucie_sim_c_B->i_e] = tmp_1g
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[82].f1.size[0] = 1;
  ucie_sim_c_B->primlist[82].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[82].f1.data[ucie_sim_c_B->i_e] = tmp_1h
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[83].f1.size[0] = 1;
  ucie_sim_c_B->primlist[83].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[83].f1.data[ucie_sim_c_B->i_e] = tmp_1i
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[84].f1.size[0] = 1;
  ucie_sim_c_B->primlist[84].f1.size[1] = 5;
  ucie_sim_c_B->primlist[85].f1.size[0] = 1;
  ucie_sim_c_B->primlist[85].f1.size[1] = 5;
  ucie_sim_c_B->primlist[86].f1.size[0] = 1;
  ucie_sim_c_B->primlist[86].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[84].f1.data[ucie_sim_c_B->i_e] = tmp_1j
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[85].f1.data[ucie_sim_c_B->i_e] = tmp_1k
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[86].f1.data[ucie_sim_c_B->i_e] = tmp_1l
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[87].f1.size[0] = 1;
  ucie_sim_c_B->primlist[87].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[87].f1.data[ucie_sim_c_B->i_e] = tmp_1m
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[88].f1.size[0] = 1;
  ucie_sim_c_B->primlist[88].f1.size[1] = 5;
  ucie_sim_c_B->primlist[89].f1.size[0] = 1;
  ucie_sim_c_B->primlist[89].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[88].f1.data[ucie_sim_c_B->i_e] = tmp_1n
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[89].f1.data[ucie_sim_c_B->i_e] = tmp_1o
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[90].f1.size[0] = 1;
  ucie_sim_c_B->primlist[90].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[90].f1.data[ucie_sim_c_B->i_e] = tmp_1p
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[91].f1.size[0] = 1;
  ucie_sim_c_B->primlist[91].f1.size[1] = 5;
  ucie_sim_c_B->primlist[92].f1.size[0] = 1;
  ucie_sim_c_B->primlist[92].f1.size[1] = 3;
  ucie_sim_c_B->primlist[92].f1.data[0] = 93.0;
  ucie_sim_c_B->primlist[92].f1.data[1] = 2.0;
  ucie_sim_c_B->primlist[92].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[93].f1.size[0] = 1;
  ucie_sim_c_B->primlist[93].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[91].f1.data[ucie_sim_c_B->i_e] = tmp_1q
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[93].f1.data[ucie_sim_c_B->i_e] = tmp_1r
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[94].f1.size[0] = 1;
  ucie_sim_c_B->primlist[94].f1.size[1] = 7;
  ucie_sim_c_B->primlist[95].f1.size[0] = 1;
  ucie_sim_c_B->primlist[95].f1.size[1] = 7;
  ucie_sim_c_B->primlist[96].f1.size[0] = 1;
  ucie_sim_c_B->primlist[96].f1.size[1] = 3;
  ucie_sim_c_B->primlist[96].f1.data[0] = 97.0;
  ucie_sim_c_B->primlist[96].f1.data[1] = 6.0;
  ucie_sim_c_B->primlist[96].f1.data[2] = 0.0;
  ucie_sim_c_B->primlist[97].f1.size[0] = 1;
  ucie_sim_c_B->primlist[97].f1.size[1] = 7;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 7; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[94].f1.data[ucie_sim_c_B->i_e] = tmp_1s
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[95].f1.data[ucie_sim_c_B->i_e] = tmp_1t
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[97].f1.data[ucie_sim_c_B->i_e] = tmp_1u
      [ucie_sim_c_B->i_e];
  }

  ucie_sim_c_B->primlist[98].f1.size[0] = 1;
  ucie_sim_c_B->primlist[98].f1.size[1] = 5;
  ucie_sim_c_B->primlist[99].f1.size[0] = 1;
  ucie_sim_c_B->primlist[99].f1.size[1] = 5;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < 5; ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->primlist[98].f1.data[ucie_sim_c_B->i_e] = tmp_1v
      [ucie_sim_c_B->i_e];
    ucie_sim_c_B->primlist[99].f1.data[ucie_sim_c_B->i_e] = tmp_1w
      [ucie_sim_c_B->i_e];
  }

  if (varargin_1->size[1] == 0) {
    ucie_sim_c_B->unnamed_idx_1_tmp_j = (int32_T)ucie_sim_c_B->primlist[(int32_T)
      O - 1].f1.data[0];
    ucie_sim_c_B->i_e = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->unnamed_idx_1_tmp_j;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_e,
      ucie_sim_c_B);
    if (ucie_sim_c_B->unnamed_idx_1_tmp_j - 1 >= 0) {
      memset(&varargin_1->data[0], 0, (uint32_T)
             ucie_sim_c_B->unnamed_idx_1_tmp_j * sizeof(real_T));
    }

    varargin_1->data[ucie_sim_c_B->unnamed_idx_1_tmp_j - 1] = 1.0;
  }

  ucie_sim_c_B->i_e = (int32_T)O - 1;
  ucie_sim_c_B->loop_ub_mv = (int32_T)ucie_sim_c_B->primlist[ucie_sim_c_B->i_e].
    f1.data[0];
  ucie_sim_c_B->maskp_size_i[1] = ucie_sim_c_B->loop_ub_mv;
  if (ucie_sim_c_B->loop_ub_mv - 1 >= 0) {
    memset(&ucie_sim_c_B->maskp_data_b[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_mv
           * sizeof(real_T));
  }

  ucie_sim_c_B->e_j = ucie_sim_c_B->primlist[ucie_sim_c_B->i_e].f1.size[1] - 1;
  if (ucie_sim_c_B->e_j < 2) {
    ucie_sim_c_B->unnamed_idx_1_tmp_j = 0;
    ucie_sim_c_B->e_j = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_j = 1;
  }

  ucie_sim_c_B->loop_ub_m0 = ucie_sim_c_B->e_j -
    ucie_sim_c_B->unnamed_idx_1_tmp_j;
  for (ucie_sim_c_B->e_j = 0; ucie_sim_c_B->e_j < ucie_sim_c_B->loop_ub_m0;
       ucie_sim_c_B->e_j++) {
    ucie_sim_c_B->g_data_n[ucie_sim_c_B->e_j] = (int32_T)ucie_sim_c_B->
      primlist[ucie_sim_c_B->i_e].f1.data[ucie_sim_c_B->unnamed_idx_1_tmp_j +
      ucie_sim_c_B->e_j];
    ucie_sim_c_B->maskp_data_b[ucie_sim_c_B->g_data_n[ucie_sim_c_B->e_j] - 1] =
      1.0;
  }

  if (ucie_sim_c_B->maskp_size_i[1] < 1) {
    ucie_sim_c_B->unnamed_idx_1_tmp_j = 1;
    ucie_sim_c_B->e_j = 1;
    ucie_sim_c_B->i_e = 0;
  } else {
    ucie_sim_c_B->unnamed_idx_1_tmp_j = ucie_sim_c_B->loop_ub_mv;
    ucie_sim_c_B->e_j = -1;
    ucie_sim_c_B->i_e = 1;
  }

  ucie_sim_c_B->loop_ub_mv = div_s32(ucie_sim_c_B->i_e -
    ucie_sim_c_B->unnamed_idx_1_tmp_j, ucie_sim_c_B->e_j);
  ucie_sim_c_B->loop_ub_m0 = ucie_sim_c_B->loop_ub_mv + 1;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e <= ucie_sim_c_B->loop_ub_mv;
       ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->maskp_data_g[ucie_sim_c_B->i_e] = (int8_T)
      ucie_sim_c_B->maskp_data_b[(ucie_sim_c_B->e_j * ucie_sim_c_B->i_e +
      ucie_sim_c_B->unnamed_idx_1_tmp_j) - 1];
  }

  ucie_sim_c_B->maskp_size_i[0] = 1;
  ucie_sim_c_B->maskp_size_i[1] = ucie_sim_c_B->loop_ub_m0;
  for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < ucie_sim_c_B->loop_ub_m0;
       ucie_sim_c_B->i_e++) {
    ucie_sim_c_B->maskp_data_b[ucie_sim_c_B->i_e] = ucie_sim_c_B->
      maskp_data_g[ucie_sim_c_B->i_e];
  }

  if (varargin_1->data[0] == 1.0) {
    ucie_sim_c_emxInit_boolean_T(&xor_result, 2, ucie_sim_c_B);
    if (varargin_1->size[1] == ucie_sim_c_B->maskp_size_i[1]) {
      ucie_sim_c_B->i_e = xor_result->size[0] * xor_result->size[1];
      xor_result->size[0] = 1;
      ucie_sim_c_B->loop_ub_mv = varargin_1->size[1];
      xor_result->size[1] = ucie_sim_c_B->loop_ub_mv;
      ucie_sim_c_emxEnsureCapacity_boolean_T(xor_result, ucie_sim_c_B->i_e,
        ucie_sim_c_B);
      for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < ucie_sim_c_B->loop_ub_mv;
           ucie_sim_c_B->i_e++) {
        xor_result->data[ucie_sim_c_B->i_e] = ((varargin_1->data
          [ucie_sim_c_B->i_e] != 0.0) != (ucie_sim_c_B->
          maskp_data_b[ucie_sim_c_B->i_e] != 0.0));
      }
    } else {
      ucie_sim_c_binary_expand_op_12(xor_result, varargin_1,
        ucie_sim_c_B->maskp_data_b, ucie_sim_c_B->maskp_size_i, ucie_sim_c_B);
    }

    if (xor_result->size[1] < 2) {
      ucie_sim_c_B->unnamed_idx_1_tmp_j = 0;
      ucie_sim_c_B->e_j = 0;
    } else {
      ucie_sim_c_B->unnamed_idx_1_tmp_j = 1;
      ucie_sim_c_B->e_j = xor_result->size[1];
    }

    ucie_sim_c_B->i_e = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_e,
      ucie_sim_c_B);
    ucie_sim_c_B->loop_ub_mv = ucie_sim_c_B->e_j -
      ucie_sim_c_B->unnamed_idx_1_tmp_j;
    ucie_sim_c_B->i_e = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[1] = ucie_sim_c_B->loop_ub_mv + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_e,
      ucie_sim_c_B);
    for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < ucie_sim_c_B->loop_ub_mv;
         ucie_sim_c_B->i_e++) {
      varargin_1->data[ucie_sim_c_B->i_e] = xor_result->data
        [ucie_sim_c_B->unnamed_idx_1_tmp_j + ucie_sim_c_B->i_e];
    }

    ucie_sim_c_emxFree_boolean_T(&xor_result);
    varargin_1->data[ucie_sim_c_B->loop_ub_mv] = 1.0;
  } else {
    if (varargin_1->size[1] < 2) {
      ucie_sim_c_B->unnamed_idx_1_tmp_j = 0;
      ucie_sim_c_B->e_j = 0;
    } else {
      ucie_sim_c_B->unnamed_idx_1_tmp_j = 1;
      ucie_sim_c_B->e_j = varargin_1->size[1];
    }

    ucie_sim_c_B->loop_ub_mv = ucie_sim_c_B->e_j -
      ucie_sim_c_B->unnamed_idx_1_tmp_j;
    for (ucie_sim_c_B->i_e = 0; ucie_sim_c_B->i_e < ucie_sim_c_B->loop_ub_mv;
         ucie_sim_c_B->i_e++) {
      varargin_1->data[ucie_sim_c_B->i_e] = varargin_1->data
        [ucie_sim_c_B->unnamed_idx_1_tmp_j + ucie_sim_c_B->i_e];
    }

    ucie_sim_c_B->i_e = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = ucie_sim_c_B->loop_ub_mv + 1;
    ucie_sim_c_emxEnsureCapacity_real_T(varargin_1, ucie_sim_c_B->i_e,
      ucie_sim_c_B);
    varargin_1->data[ucie_sim_c_B->loop_ub_mv] = 0.0;
  }

  P = varargin_1->data[0];

  /* End of Start for MATLABSystem: '<S18>/MATLAB System' */
  return P;
}

static void ucie_sim_c_emxFreeStruct_serdes_FFE(serdes_FFE_ucie_sim_c_T *pStruct)
{
  ucie_sim_c_emxFree_real_T(&pStruct->Buff);
}

static void ucie_sim_c_emxFreeStruct_serdes_CDR(serdes_CDR_ucie_sim_c_T *pStruct)
{
  ucie_sim_c_emxFree_real_T(&pStruct->PAMThreshold);
  ucie_sim_c_emxFree_real_T(&pStruct->SymbolSet);
  ucie_sim_c_emxFree_real_T(&pStruct->VoltageLevels);
}

static void ucie_sim_c_emxFreeStruct_serdes_Stimulus
  (serdes_Stimulus_ucie_sim_c_T *pStruct)
{
  ucie_sim_c_emxFree_real_T(&pStruct->privateOrder);
  ucie_sim_c_emxFree_real_T(&pStruct->privateSeed);
  ucie_sim_c_emxFree_real_T(&pStruct->privateBinaryPowers);
  ucie_sim_c_emxFree_real_T(&pStruct->SymbolFIFO);
  ucie_sim_c_emxFree_real_T(&pStruct->PowersOf2);
}

/* Model output function */
void ucie_sim_c_output(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M)
{
  B_ucie_sim_c_T *ucie_sim_c_B = ucie_sim_c_M->blockIO;
  DW_ucie_sim_c_T *ucie_sim_c_DW = ucie_sim_c_M->dwork;
  InstP_ucie_sim_c_T *ucie_sim_c_InstP = ucie_sim_c_M->ucie_sim_c_InstP_ref;
  PrevZCX_ucie_sim_c_T *ucie_sim_c_PrevZCX = ucie_sim_c_M->prevZCSigState;
  ExtU_ucie_sim_c_T *ucie_sim_c_U = (ExtU_ucie_sim_c_T *) ucie_sim_c_M->inputs;
  ExtY_ucie_sim_c_T *ucie_sim_c_Y = (ExtY_ucie_sim_c_T *) ucie_sim_c_M->outputs;
  emxArray_real_T_ucie_sim_c_T *PayloadBinary;
  emxArray_real_T_ucie_sim_c_T *b;
  emxArray_real_T_ucie_sim_c_T *binaryValues;
  emxArray_real_T_ucie_sim_c_T *seedIn;
  serdes_Stimulus_ucie_sim_c_T *obj;
  static const real_T tmp[8] = { 0.5, 0.5, 0.5, 0.5, -0.5, -0.5, -0.5, -0.5 };

  static const real_T tmp_0[7] = { -0.5, 0.5, -0.5, 0.5, 0.5, 0.5, -0.5 };

  static const int8_T tmp_1[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 };

  static const uint16_T tmp_2[16] = { 1U, 2U, 4U, 8U, 16U, 32U, 64U, 128U, 256U,
    512U, 1024U, 2048U, 4096U, 8192U, 16384U, 32768U };

  static const int8_T tmp_3[31] = { 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1,
    1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0 };

  static const int8_T tmp_4[15] = { 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0
  };

  boolean_T exitg1;

  /* Gain: '<Root>/Gain1' */
  ucie_sim_c_B->Gain1 = ucie_sim_c_U->Inport;

  /* Outputs for Atomic SubSystem: '<Root>/Tx' */
  /* MATLABSystem: '<S22>/VGA' incorporates:
   *  Constant: '<S22>/VGAGain'
   *  Constant: '<S22>/VGAMode'
   */
  if (!ucie_sim_c_isequaln(ucie_sim_c_DW->obj_fp.Mode,
       ucie_sim_c_InstP->VGAParameter.Mode)) {
    ucie_sim_c_DW->obj_fp.Mode = ucie_sim_c_InstP->VGAParameter.Mode;
  }

  if (!ucie_sim_c_isequaln(ucie_sim_c_DW->obj_fp.Gain,
       ucie_sim_c_InstP->VGAParameter.Gain)) {
    ucie_sim_c_DW->obj_fp.Gain = ucie_sim_c_InstP->VGAParameter.Gain;
  }

  if (ucie_sim_c_DW->obj_fp.Mode == 1.0) {
    ucie_sim_c_B->ndbl = ucie_sim_c_B->Gain1 * ucie_sim_c_DW->obj_fp.Gain;
  } else {
    ucie_sim_c_B->ndbl = ucie_sim_c_B->Gain1;
  }

  /* MATLABSystem: '<S22>/VGA' */
  ucie_sim_c_B->VGA = ucie_sim_c_B->ndbl;

  /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
   *  Constant: '<S20>/ConfigSelect'
   *  Constant: '<S20>/FFETapWeights'
   */
  switch ((int32_T)ucie_sim_c_InstP->FFEParameter.ConfigSelect) {
   case -1:
    ucie_sim_c_B->TapWeightsOut[0] = ucie_sim_c_InstP->FFEParameter.TapWeights[0];
    ucie_sim_c_B->TapWeightsOut[1] = ucie_sim_c_InstP->FFEParameter.TapWeights[1];
    break;

   case 0:
    ucie_sim_c_B->TapWeightsOut[0] = 0.774;
    ucie_sim_c_B->TapWeightsOut[1] = -0.226;
    break;

   case 1:
    ucie_sim_c_B->TapWeightsOut[0] = 1.0;
    ucie_sim_c_B->TapWeightsOut[1] = 0.0;
    break;

   default:
    ucie_sim_c_B->TapWeightsOut[0] = ucie_sim_c_InstP->FFEParameter.TapWeights[0];
    ucie_sim_c_B->TapWeightsOut[1] = ucie_sim_c_InstP->FFEParameter.TapWeights[1];
    break;
  }

  /* End of MATLAB Function: '<S20>/MATLAB Function' */

  /* MATLABSystem: '<S20>/FFE' incorporates:
   *  Constant: '<S20>/FFEMode'
   */
  if (ucie_sim_c_DW->obj_ku.SymbolTime != ucie_sim_c_InstP->SymbolTime) {
    if (ucie_sim_c_DW->obj_ku.isInitialized == 1) {
      ucie_sim_c_DW->obj_ku.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_ku.SymbolTime = ucie_sim_c_InstP->SymbolTime;
  }

  if (ucie_sim_c_DW->obj_ku.SampleInterval != ucie_sim_c_InstP->SampleInterval)
  {
    if (ucie_sim_c_DW->obj_ku.isInitialized == 1) {
      ucie_sim_c_DW->obj_ku.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_ku.SampleInterval = ucie_sim_c_InstP->SampleInterval;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj_ku.Mode == ucie_sim_c_InstP->FFEParameter.Mode) ||
      (rtIsNaN(ucie_sim_c_DW->obj_ku.Mode) && rtIsNaN
       (ucie_sim_c_InstP->FFEParameter.Mode))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj_ku.isInitialized == 1) {
      ucie_sim_c_DW->obj_ku.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_ku.Mode = ucie_sim_c_InstP->FFEParameter.Mode;
  }

  ucie_sim_c_B->rEQ0 = false;
  ucie_sim_c_B->b_p_f = true;
  ucie_sim_c_B->firstBlockLength = 0;
  exitg1 = false;
  while ((!exitg1) && (ucie_sim_c_B->firstBlockLength < 2)) {
    if ((ucie_sim_c_DW->obj_ku.TapWeights[ucie_sim_c_B->firstBlockLength] ==
         ucie_sim_c_B->TapWeightsOut[ucie_sim_c_B->firstBlockLength]) ||
        (rtIsNaN(ucie_sim_c_DW->obj_ku.TapWeights[ucie_sim_c_B->firstBlockLength])
         && rtIsNaN(ucie_sim_c_B->TapWeightsOut[ucie_sim_c_B->firstBlockLength])))
    {
      ucie_sim_c_B->firstBlockLength++;
    } else {
      ucie_sim_c_B->b_p_f = false;
      exitg1 = true;
    }
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj_ku.isInitialized == 1) {
      ucie_sim_c_DW->obj_ku.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_ku.TapWeights[0] = ucie_sim_c_B->TapWeightsOut[0];
    ucie_sim_c_DW->obj_ku.TapWeights[1] = ucie_sim_c_B->TapWeightsOut[1];
  }

  if (ucie_sim_c_DW->obj_ku.TunablePropsChanged) {
    ucie_sim_c_DW->obj_ku.TunablePropsChanged = false;
    ucie_sim_c_FFE_setupWeights(&ucie_sim_c_DW->obj_ku);
  }

  ucie_sim_c_B->b_y1 = ucie_sim_c_B->VGA;

  /* End of Outputs for SubSystem: '<Root>/Tx' */
  ucie_sim_c_emxInit_real_T(&binaryValues, 2, ucie_sim_c_B);

  /* Outputs for Atomic SubSystem: '<Root>/Tx' */
  /* MATLABSystem: '<S20>/FFE' */
  if (ucie_sim_c_DW->obj_ku.Mode == 1.0) {
    if (ucie_sim_c_DW->obj_ku.privateSampleWaveType) {
      ucie_sim_c_DW->obj_ku.Buff->data[(int32_T)ucie_sim_c_DW->obj_ku.FIRpointer
        - 1] = ucie_sim_c_B->VGA;
      if (rtIsNaN(ucie_sim_c_DW->obj_ku.TapCount - 1.0)) {
        ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
        binaryValues->size[0] = 1;
        binaryValues->size[1] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        binaryValues->data[0] = (rtNaN);
      } else if (ucie_sim_c_DW->obj_ku.TapCount - 1.0 < 0.0) {
        binaryValues->size[1] = 0;
      } else {
        ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
        binaryValues->size[0] = 1;
        binaryValues->size[1] = (int32_T)(ucie_sim_c_DW->obj_ku.TapCount - 1.0)
          + 1;
        ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        ucie_sim_c_B->dim = (int32_T)(ucie_sim_c_DW->obj_ku.TapCount - 1.0);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          binaryValues->data[ucie_sim_c_B->hi] = ucie_sim_c_B->hi;
        }
      }

      ucie_sim_c_B->coeffSize = binaryValues->size[1];
      ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
      binaryValues->size[0] = 1;
      ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
        ucie_sim_c_B);
      ucie_sim_c_B->dim = ucie_sim_c_B->coeffSize - 1;
      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
           ucie_sim_c_B->hi++) {
        binaryValues->data[ucie_sim_c_B->hi] = (ucie_sim_c_DW->obj_ku.FIRpointer
          - binaryValues->data[ucie_sim_c_B->hi] *
          ucie_sim_c_DW->obj_ku.SamplesPerSymbol) - 1.0;
      }

      ucie_sim_c_B->q = binaryValues->data[0];
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_ku.BuffSize;
      ucie_sim_c_B->ndbl = ucie_sim_c_B->q;
      if (ucie_sim_c_B->ScaledPayload == 0.0) {
        if (ucie_sim_c_B->q == 0.0) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload;
        }
      } else if (rtIsNaN(ucie_sim_c_B->q) || rtIsNaN(ucie_sim_c_B->ScaledPayload)
                 || rtIsInf(ucie_sim_c_B->q)) {
        ucie_sim_c_B->ndbl = (rtNaN);
      } else if (ucie_sim_c_B->q == 0.0) {
        ucie_sim_c_B->ndbl = 0.0 / ucie_sim_c_B->ScaledPayload;
      } else if (rtIsInf(ucie_sim_c_B->ScaledPayload)) {
        if ((ucie_sim_c_B->ScaledPayload < 0.0) != (ucie_sim_c_B->q < 0.0)) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload;
        }
      } else {
        ucie_sim_c_B->ndbl = fmod(ucie_sim_c_B->q, ucie_sim_c_B->ScaledPayload);
        ucie_sim_c_B->rEQ0 = (ucie_sim_c_B->ndbl == 0.0);
        if ((!ucie_sim_c_B->rEQ0) && (ucie_sim_c_B->ScaledPayload > floor
             (ucie_sim_c_B->ScaledPayload))) {
          ucie_sim_c_B->q = fabs(ucie_sim_c_B->q / ucie_sim_c_B->ScaledPayload);
          ucie_sim_c_B->rEQ0 = !(fabs(ucie_sim_c_B->q - floor(ucie_sim_c_B->q +
            0.5)) > 2.2204460492503131E-16 * ucie_sim_c_B->q);
        }

        if (ucie_sim_c_B->rEQ0) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload * 0.0;
        } else if (((ucie_sim_c_B->ndbl < 0.0) && (!(ucie_sim_c_B->ScaledPayload
          < 0.0))) || ((!(ucie_sim_c_B->ndbl < 0.0)) &&
                       (ucie_sim_c_B->ScaledPayload < 0.0))) {
          ucie_sim_c_B->ndbl += ucie_sim_c_B->ScaledPayload;
        }
      }

      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_ku.Buff->data[(int32_T)
        (ucie_sim_c_B->ndbl + 1.0) - 1] * ucie_sim_c_DW->obj_ku.WeightsInternal
        [0];
      ucie_sim_c_B->q = binaryValues->data[1];
      ucie_sim_c_B->ndbl = ucie_sim_c_B->q;
      if (ucie_sim_c_B->ScaledPayload == 0.0) {
        if (ucie_sim_c_B->q == 0.0) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload;
        }
      } else if (rtIsNaN(ucie_sim_c_B->q) || rtIsNaN(ucie_sim_c_B->ScaledPayload)
                 || rtIsInf(ucie_sim_c_B->q)) {
        ucie_sim_c_B->ndbl = (rtNaN);
      } else if (ucie_sim_c_B->q == 0.0) {
        ucie_sim_c_B->ndbl = 0.0 / ucie_sim_c_B->ScaledPayload;
      } else if (rtIsInf(ucie_sim_c_B->ScaledPayload)) {
        if ((ucie_sim_c_B->ScaledPayload < 0.0) != (ucie_sim_c_B->q < 0.0)) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload;
        }
      } else {
        ucie_sim_c_B->ndbl = fmod(ucie_sim_c_B->q, ucie_sim_c_B->ScaledPayload);
        ucie_sim_c_B->rEQ0 = (ucie_sim_c_B->ndbl == 0.0);
        if ((!ucie_sim_c_B->rEQ0) && (ucie_sim_c_B->ScaledPayload > floor
             (ucie_sim_c_B->ScaledPayload))) {
          ucie_sim_c_B->q = fabs(ucie_sim_c_B->q / ucie_sim_c_B->ScaledPayload);
          ucie_sim_c_B->rEQ0 = !(fabs(ucie_sim_c_B->q - floor(ucie_sim_c_B->q +
            0.5)) > 2.2204460492503131E-16 * ucie_sim_c_B->q);
        }

        if (ucie_sim_c_B->rEQ0) {
          ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload * 0.0;
        } else if (((ucie_sim_c_B->ndbl < 0.0) && (!(ucie_sim_c_B->ScaledPayload
          < 0.0))) || ((!(ucie_sim_c_B->ndbl < 0.0)) &&
                       (ucie_sim_c_B->ScaledPayload < 0.0))) {
          ucie_sim_c_B->ndbl += ucie_sim_c_B->ScaledPayload;
        }
      }

      ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_ku.Buff->data[(int32_T)
        (ucie_sim_c_B->ndbl + 1.0) - 1] * ucie_sim_c_DW->obj_ku.WeightsInternal
        [1];
      ucie_sim_c_DW->obj_ku.FIRpointer = ucie_sim_c_mod_m(ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_ku.FIRpointer - 1.0, ucie_sim_c_DW->obj_ku.BuffSize)
        + 1.0, ucie_sim_c_DW->obj_ku.BuffSize) + 1.0;
    } else {
      ucie_sim_c_B->b_y1 = 0.0;
      ucie_sim_c_B->firstBlockLength = (int32_T)ucie_sim_c_DW->obj_ku.TapCount;
      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 <
           ucie_sim_c_B->firstBlockLength; ucie_sim_c_B->nm1d2++) {
        ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_ku.WeightsInternal
          [ucie_sim_c_B->nm1d2] * ucie_sim_c_B->VGA;
      }
    }
  }

  /* MATLABSystem: '<S20>/FFE' */
  ucie_sim_c_B->FFE = ucie_sim_c_B->b_y1;

  /* End of Outputs for SubSystem: '<Root>/Tx' */

  /* Buffer: '<S6>/Buffer' incorporates:
   *  Buffer: '<S18>/Buffer'
   *  Buffer: '<S18>/Buffer1'
   */
  ucie_sim_c_B->stride = 1;
  ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_DW->Buffer_inBufPtrIdx;
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Buffer_inBufPtrIdx;
  if (ucie_sim_c_DW->Buffer_inBufPtrIdx > 255) {
    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
      ucie_sim_c_DW->Buffer_CircBuf[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize] = ucie_sim_c_B->FFE;
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->lastBlockLength = 0;
    ucie_sim_c_B->stride = 1 - ucie_sim_c_B->nm1d2;
  }

  ucie_sim_c_B->coeffSize = 0;
  while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
    ucie_sim_c_DW->Buffer_CircBuf[ucie_sim_c_B->lastBlockLength +
      ucie_sim_c_B->coeffSize] = ucie_sim_c_B->FFE;
    ucie_sim_c_B->coeffSize++;
  }

  ucie_sim_c_DW->Buffer_inBufPtrIdx++;
  if (ucie_sim_c_DW->Buffer_inBufPtrIdx >= 256) {
    ucie_sim_c_DW->Buffer_inBufPtrIdx -= 256;
  }

  ucie_sim_c_DW->Buffer_bufferLength++;
  if (ucie_sim_c_DW->Buffer_bufferLength > 256) {
    ucie_sim_c_DW->Buffer_outBufPtrIdx = (ucie_sim_c_DW->Buffer_outBufPtrIdx +
      ucie_sim_c_DW->Buffer_bufferLength) - 256;
    if (ucie_sim_c_DW->Buffer_outBufPtrIdx > 256) {
      ucie_sim_c_DW->Buffer_outBufPtrIdx -= 256;
    }

    ucie_sim_c_DW->Buffer_bufferLength = 256;
  }

  ucie_sim_c_B->b_nl = (ucie_sim_c_M->Timing.TaskCounters.TID[1] == 0);
  if (ucie_sim_c_B->b_nl) {
    ucie_sim_c_DW->Buffer_bufferLength -= 128;
    if (ucie_sim_c_DW->Buffer_bufferLength < 0) {
      ucie_sim_c_DW->Buffer_outBufPtrIdx += ucie_sim_c_DW->Buffer_bufferLength;
      if (ucie_sim_c_DW->Buffer_outBufPtrIdx < 0) {
        ucie_sim_c_DW->Buffer_outBufPtrIdx += 256;
      }

      ucie_sim_c_DW->Buffer_bufferLength = 0;
    }

    ucie_sim_c_B->hi = 0;
    ucie_sim_c_B->dim = ucie_sim_c_DW->Buffer_outBufPtrIdx;
    ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_B->dim;
    ucie_sim_c_B->stride = 128;
    if (ucie_sim_c_B->dim > 128) {
      ucie_sim_c_B->lastBlockLength = ucie_sim_c_B->dim;
      ucie_sim_c_B->coeffSize = 0;
      while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
        ucie_sim_c_B->Buffer[ucie_sim_c_B->coeffSize] =
          ucie_sim_c_DW->Buffer_CircBuf[ucie_sim_c_B->lastBlockLength +
          ucie_sim_c_B->coeffSize];
        ucie_sim_c_B->coeffSize++;
      }

      ucie_sim_c_B->hi = ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->stride = 128 - ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->dim = 0;
    }

    ucie_sim_c_B->lastBlockLength = ucie_sim_c_B->dim;
    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
      ucie_sim_c_B->Buffer[ucie_sim_c_B->hi + ucie_sim_c_B->coeffSize] =
        ucie_sim_c_DW->Buffer_CircBuf[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize];
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->dim += ucie_sim_c_B->stride;
    if (ucie_sim_c_B->dim == 256) {
      ucie_sim_c_B->dim = 0;
    }

    ucie_sim_c_DW->Buffer_outBufPtrIdx = ucie_sim_c_B->dim;

    /* DiscreteFir: '<S6>/Discrete FIR Filter' incorporates:
     *  Buffer: '<S6>/Buffer'
     */
    /* Reverse the coefficients */
    ucie_sim_c_B->b_y1 = ucie_sim_c_InstP->SampleInterval;
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 6651; ucie_sim_c_B->hi++) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_ConstP.pooled1[ucie_sim_c_B->hi];
      ucie_sim_c_B->ScaledPayload *= ucie_sim_c_B->b_y1;
      ucie_sim_c_B->a[ucie_sim_c_B->hi] = ucie_sim_c_B->ScaledPayload;
      ucie_sim_c_DW->DiscreteFIRFilter_simRevCoeff[6650 - ucie_sim_c_B->hi] =
        ucie_sim_c_B->a[ucie_sim_c_B->hi];
    }

    /* Reverse copy the states from States_Dwork to ContextBuff_Dwork */
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 6650; ucie_sim_c_B->hi++) {
      ucie_sim_c_DW->DiscreteFIRFilter_simContextBuf[6649 - ucie_sim_c_B->hi] =
        ucie_sim_c_DW->DiscreteFIRFilter_states[ucie_sim_c_B->hi];
    }

    /* Copy the initial part of input to ContextBuff_Dwork */
    memcpy(&ucie_sim_c_DW->DiscreteFIRFilter_simContextBuf[6650],
           &ucie_sim_c_B->Buffer[0], sizeof(real_T) << 7U);
    for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 128; ucie_sim_c_B->dim++) {
      ucie_sim_c_B->b_y1 = 0.0;
      for (ucie_sim_c_B->coeffSize = 0; ucie_sim_c_B->coeffSize < 6651;
           ucie_sim_c_B->coeffSize++) {
        ucie_sim_c_B->b_y1 += ucie_sim_c_DW->
          DiscreteFIRFilter_simContextBuf[ucie_sim_c_B->dim +
          ucie_sim_c_B->coeffSize] *
          ucie_sim_c_DW->DiscreteFIRFilter_simRevCoeff[ucie_sim_c_B->coeffSize];
      }

      /* store output sample */
      ucie_sim_c_B->DiscreteFIRFilter[ucie_sim_c_B->dim] = ucie_sim_c_B->b_y1;
    }

    /* Shift state buffer when input buffer is shorter than state buffer */
    ucie_sim_c_B->coeffSize = 6521;
    while (ucie_sim_c_B->coeffSize >= 0) {
      ucie_sim_c_DW->DiscreteFIRFilter_states[ucie_sim_c_B->coeffSize + 128] =
        ucie_sim_c_DW->DiscreteFIRFilter_states[ucie_sim_c_B->coeffSize];
      ucie_sim_c_B->coeffSize--;
    }

    /* Unbuffer: '<S6>/Unbuffer' incorporates:
     *  DiscreteFir: '<S6>/Discrete FIR Filter'
     */
    /* Reverse copy the states from input to States_Dwork */
    memcpy(&ucie_sim_c_DW->Unbuffer_CircBuff[0],
           &ucie_sim_c_B->DiscreteFIRFilter[0], sizeof(real_T) << 7U);
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 128; ucie_sim_c_B->hi++) {
      /* DiscreteFir: '<S6>/Discrete FIR Filter' incorporates:
       *  Buffer: '<S6>/Buffer'
       */
      ucie_sim_c_DW->DiscreteFIRFilter_states[127 - ucie_sim_c_B->hi] =
        ucie_sim_c_B->Buffer[ucie_sim_c_B->hi];
    }

    /* Unbuffer: '<S6>/Unbuffer' */
    ucie_sim_c_DW->Unbuffer_memIdx = 0;
  }

  /* End of Buffer: '<S6>/Buffer' */

  /* Unbuffer: '<S6>/Unbuffer' */
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Unbuffer_memIdx;

  /* Unbuffer: '<S6>/Unbuffer' */
  ucie_sim_c_B->Unbuffer = ucie_sim_c_DW->Unbuffer_CircBuff
    [ucie_sim_c_B->lastBlockLength];

  /* Unbuffer: '<S6>/Unbuffer' */
  if (ucie_sim_c_DW->Unbuffer_memIdx < 127) {
    ucie_sim_c_DW->Unbuffer_memIdx++;
  }

  /* Outputs for Atomic SubSystem: '<Root>/Rx' */
  /* DataStoreRead: '<S9>/CTLEConfigSelect' */
  ucie_sim_c_B->CTLEConfigSelect = ucie_sim_c_DW->CTLESignal.ConfigSelect;

  /* MATLABSystem: '<S9>/CTLE' incorporates:
   *  Constant: '<S9>/CTLEMode'
   *  Constant: '<S9>/CTLESliceSelect'
   */
  if (ucie_sim_c_DW->obj.SymbolTime != ucie_sim_c_InstP->SymbolTime) {
    if (ucie_sim_c_DW->obj.isInitialized == 1) {
      ucie_sim_c_DW->obj.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_DW->obj.isUpToDate = false;
  }

  if (ucie_sim_c_DW->obj.SampleInterval != ucie_sim_c_InstP->SampleInterval) {
    if (ucie_sim_c_DW->obj.isInitialized == 1) {
      ucie_sim_c_DW->obj.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->obj.isUpToDate = false;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj.Mode == ucie_sim_c_InstP->CTLEParameter.Mode) ||
      (rtIsNaN(ucie_sim_c_DW->obj.Mode) && rtIsNaN
       (ucie_sim_c_InstP->CTLEParameter.Mode))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj.isInitialized == 1) {
      ucie_sim_c_DW->obj.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj.Mode = ucie_sim_c_InstP->CTLEParameter.Mode;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj.ConfigSelect == ucie_sim_c_B->CTLEConfigSelect) ||
      (rtIsNaN(ucie_sim_c_DW->obj.ConfigSelect) && rtIsNaN
       (ucie_sim_c_B->CTLEConfigSelect))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj.isInitialized == 1) {
      ucie_sim_c_DW->obj.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj.ConfigSelect = ucie_sim_c_B->CTLEConfigSelect;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj.SliceSelect ==
       ucie_sim_c_InstP->CTLEParameter.SliceSelect) || (rtIsNaN
       (ucie_sim_c_DW->obj.SliceSelect) && rtIsNaN
       (ucie_sim_c_InstP->CTLEParameter.SliceSelect))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj.isInitialized == 1) {
      ucie_sim_c_DW->obj.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj.SliceSelect = ucie_sim_c_InstP->CTLEParameter.SliceSelect;
    ucie_sim_c_DW->obj.isUpToDate = false;
  }

  if (ucie_sim_c_DW->obj.TunablePropsChanged) {
    ucie_sim_c_DW->obj.TunablePropsChanged = false;
  }

  ucie_sim_c_CTLE_stepImpl(&ucie_sim_c_DW->obj, ucie_sim_c_B->Unbuffer,
    &ucie_sim_c_B->b_y1, &ucie_sim_c_B->ScaledPayload, ucie_sim_c_B);

  /* MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->CTLE_o1 = ucie_sim_c_B->b_y1;

  /* MATLABSystem: '<S9>/CTLE' */
  ucie_sim_c_B->CTLE_o2 = ucie_sim_c_B->ScaledPayload;

  /* DataStoreWrite: '<S9>/CTLEConfigSelect1' */
  ucie_sim_c_DW->CTLESignal.ConfigSelect = ucie_sim_c_B->CTLE_o2;

  /* Outputs for Atomic SubSystem: '<S3>/DFEClkFwd' */
  /* Delay: '<S10>/Delay2' */
  ucie_sim_c_B->Delay2 = ucie_sim_c_DW->Delay2_DSTATE;

  /* Delay: '<S10>/Delay' */
  ucie_sim_c_B->Delay = ucie_sim_c_DW->Delay_DSTATE;

  /* DataStoreRead: '<S10>/TapWeights read' */
  ucie_sim_c_B->TapWeightsread[0] = ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[0];
  ucie_sim_c_B->TapWeightsread[1] = ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[1];
  ucie_sim_c_B->TapWeightsread[2] = ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[2];
  ucie_sim_c_B->TapWeightsread[3] = ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[3];

  /* MATLABSystem: '<S10>/DFE System Object' incorporates:
   *  Constant: '<S10>/Mode'
   *  DataStoreRead: '<S10>/TapWeights read'
   */
  if (!ucie_sim_c_isequal(ucie_sim_c_DW->obj_k.MinimumTap,
                          ucie_sim_c_ConstP.DFESystemObject_MinimumTap)) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.MinimumTap[0] = -0.2;
    ucie_sim_c_DW->obj_k.MinimumTap[1] = -0.075;
    ucie_sim_c_DW->obj_k.MinimumTap[2] = -0.06;
    ucie_sim_c_DW->obj_k.MinimumTap[3] = -0.045;
  }

  if (!ucie_sim_c_isequal(ucie_sim_c_DW->obj_k.MaximumTap,
                          ucie_sim_c_ConstP.DFESystemObject_MaximumTap)) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.MaximumTap[0] = 0.05;
    ucie_sim_c_DW->obj_k.MaximumTap[1] = 0.075;
    ucie_sim_c_DW->obj_k.MaximumTap[2] = 0.06;
    ucie_sim_c_DW->obj_k.MaximumTap[3] = 0.045;
  }

  if (ucie_sim_c_DW->obj_k.EqualizationGain != 3.0E-6) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.EqualizationGain = 3.0E-6;
  }

  if (ucie_sim_c_DW->obj_k.EqualizationStep != 1.0E-6) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.EqualizationStep = 1.0E-6;
  }

  if (ucie_sim_c_DW->obj_k.SymbolTime != ucie_sim_c_InstP->SymbolTime) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.SymbolTime = ucie_sim_c_InstP->SymbolTime;
  }

  if (ucie_sim_c_DW->obj_k.SampleInterval != ucie_sim_c_InstP->SampleInterval) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.SampleInterval = ucie_sim_c_InstP->SampleInterval;
  }

  if (ucie_sim_c_DW->obj_k.Modulation != ucie_sim_c_InstP->Modulation) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.Modulation = ucie_sim_c_InstP->Modulation;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj_k.Mode == ucie_sim_c_InstP->DFEClkFwdParameter.Mode) ||
      (rtIsNaN(ucie_sim_c_DW->obj_k.Mode) && rtIsNaN
       (ucie_sim_c_InstP->DFEClkFwdParameter.Mode))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.Mode = ucie_sim_c_InstP->DFEClkFwdParameter.Mode;
  }

  ucie_sim_c_B->rEQ0 = false;
  ucie_sim_c_B->b_p_f = true;
  ucie_sim_c_B->firstBlockLength = 0;
  exitg1 = false;
  while ((!exitg1) && (ucie_sim_c_B->firstBlockLength < 4)) {
    if ((ucie_sim_c_DW->obj_k.TapWeights[ucie_sim_c_B->firstBlockLength] ==
         ucie_sim_c_B->TapWeightsread[ucie_sim_c_B->firstBlockLength]) ||
        (rtIsNaN(ucie_sim_c_DW->obj_k.TapWeights[ucie_sim_c_B->firstBlockLength])
         && rtIsNaN(ucie_sim_c_B->TapWeightsread[ucie_sim_c_B->firstBlockLength])))
    {
      ucie_sim_c_B->firstBlockLength++;
    } else {
      ucie_sim_c_B->b_p_f = false;
      exitg1 = true;
    }
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    if (ucie_sim_c_DW->obj_k.isInitialized == 1) {
      ucie_sim_c_DW->obj_k.TunablePropsChanged = true;
    }

    ucie_sim_c_DW->obj_k.TapWeights[0] = ucie_sim_c_B->TapWeightsread[0];
    ucie_sim_c_DW->obj_k.TapWeights[1] = ucie_sim_c_B->TapWeightsread[1];
    ucie_sim_c_DW->obj_k.TapWeights[2] = ucie_sim_c_B->TapWeightsread[2];
    ucie_sim_c_DW->obj_k.TapWeights[3] = ucie_sim_c_B->TapWeightsread[3];
  }

  if (ucie_sim_c_DW->obj_k.TunablePropsChanged) {
    ucie_sim_c_DW->obj_k.TunablePropsChanged = false;
    if (ucie_sim_c_DW->obj_k.FirstDFESetting) {
      ucie_sim_c_DW->obj_k.FirstDFESetting = false;
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[0] = 0.0;
      ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_DW->obj_k.TapWeights[0]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[0] = ucie_sim_c_DW->obj_k.TapWeights[0]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MaximumTap[0];
      ucie_sim_c_DW->obj_k.pMaximumTap[0] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MinimumTap[0];
      ucie_sim_c_DW->obj_k.pMinimumTap[0] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.EqualizationStep;
      ucie_sim_c_DW->obj_k.pEqualizationStep[0] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[1] = 0.0;
      ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_DW->obj_k.TapWeights[1]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[1] = ucie_sim_c_DW->obj_k.TapWeights[1]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MaximumTap[1];
      ucie_sim_c_DW->obj_k.pMaximumTap[1] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MinimumTap[1];
      ucie_sim_c_DW->obj_k.pMinimumTap[1] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.EqualizationStep;
      ucie_sim_c_DW->obj_k.pEqualizationStep[1] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[2] = 0.0;
      ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_DW->obj_k.TapWeights[2]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[2] = ucie_sim_c_DW->obj_k.TapWeights[2]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MaximumTap[2];
      ucie_sim_c_DW->obj_k.pMaximumTap[2] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MinimumTap[2];
      ucie_sim_c_DW->obj_k.pMinimumTap[2] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.EqualizationStep;
      ucie_sim_c_DW->obj_k.pEqualizationStep[2] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[3] = 0.0;
      ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_DW->obj_k.TapWeights[3]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[3] = ucie_sim_c_DW->obj_k.TapWeights[3]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MaximumTap[3];
      ucie_sim_c_DW->obj_k.pMaximumTap[3] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.MinimumTap[3];
      ucie_sim_c_DW->obj_k.pMinimumTap[3] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.EqualizationStep;
      ucie_sim_c_DW->obj_k.pEqualizationStep[3] = ucie_sim_c_B->q *
        ucie_sim_c_DW->obj_k.TapMultiplier;
    } else {
      ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_DW->obj_k.TapWeights[0]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[0] = ucie_sim_c_DW->obj_k.TapWeights[0]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_DW->obj_k.TapWeights[1]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[1] = ucie_sim_c_DW->obj_k.TapWeights[1]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_DW->obj_k.TapWeights[2]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[2] = ucie_sim_c_DW->obj_k.TapWeights[2]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_DW->obj_k.TapWeights[3]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
      ucie_sim_c_DW->obj_k.DFEtapRounded[3] = ucie_sim_c_DW->obj_k.TapWeights[3]
        * ucie_sim_c_DW->obj_k.TapMultiplier;
    }
  }

  ucie_sim_c_B->b_y1 = ucie_sim_c_B->CTLE_o1;
  if (ucie_sim_c_DW->obj_k.PriorClock > ucie_sim_c_B->Delay2) {
    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_k.SymbolShiftRegister[0];
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.SymbolShiftRegister[1];
    ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.SymbolShiftRegister[2];
    ucie_sim_c_B->cdiff = ucie_sim_c_B->q;
    ucie_sim_c_B->q = ucie_sim_c_B->ndbl;
    ucie_sim_c_B->ndbl = ucie_sim_c_B->ScaledPayload;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[1] = ucie_sim_c_B->ndbl;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[2] = ucie_sim_c_B->q;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[3] = ucie_sim_c_B->cdiff;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[0] = ucie_sim_c_B->Delay;
  }

  if (!(ucie_sim_c_DW->obj_k.Mode == 0.0)) {
    ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_k.DFEtapRounded[0] *
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[0];
    ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_k.DFEtapRounded[1] *
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[1];
    ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_k.DFEtapRounded[2] *
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[2];
    ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_k.DFEtapRounded[3] *
      ucie_sim_c_DW->obj_k.SymbolShiftRegister[3];
  }

  if ((ucie_sim_c_DW->obj_k.Mode == 2.0) && ucie_sim_c_DW->obj_k.AdaptNextStep)
  {
    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_k.DFEtapInternal[0];
    ucie_sim_c_B->ScaledPayload -= ucie_sim_c_DW->obj_k.EqualizationGain *
      ucie_sim_c_B->b_y1 * ucie_sim_c_DW->obj_k.SymbolShiftRegister[0];
    ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_B->ScaledPayload;
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMaximumTap[0];
    if (ucie_sim_c_B->ScaledPayload > ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
      ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_B->ScaledPayload;
    } else {
      ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMinimumTap[0];
      if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->ndbl) {
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
        ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_B->ScaledPayload;
      }
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pEqualizationStep[0];
    if (ucie_sim_c_B->ndbl != 0.0) {
      ucie_sim_c_DW->obj_k.DFEtapRounded[0] = rt_roundd_snf
        (ucie_sim_c_B->ScaledPayload / ucie_sim_c_B->ndbl) * ucie_sim_c_B->ndbl;
    } else {
      ucie_sim_c_DW->obj_k.DFEtapRounded[0] = ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_k.DFEtapInternal[1];
    ucie_sim_c_B->ScaledPayload -= ucie_sim_c_DW->obj_k.EqualizationGain *
      ucie_sim_c_B->b_y1 * ucie_sim_c_DW->obj_k.SymbolShiftRegister[1];
    ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_B->ScaledPayload;
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMaximumTap[1];
    if (ucie_sim_c_B->ScaledPayload > ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
      ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_B->ScaledPayload;
    } else {
      ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMinimumTap[1];
      if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->ndbl) {
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
        ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_B->ScaledPayload;
      }
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pEqualizationStep[1];
    if (ucie_sim_c_B->ndbl != 0.0) {
      ucie_sim_c_DW->obj_k.DFEtapRounded[1] = rt_roundd_snf
        (ucie_sim_c_B->ScaledPayload / ucie_sim_c_B->ndbl) * ucie_sim_c_B->ndbl;
    } else {
      ucie_sim_c_DW->obj_k.DFEtapRounded[1] = ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_k.DFEtapInternal[2];
    ucie_sim_c_B->ScaledPayload -= ucie_sim_c_DW->obj_k.EqualizationGain *
      ucie_sim_c_B->b_y1 * ucie_sim_c_DW->obj_k.SymbolShiftRegister[2];
    ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_B->ScaledPayload;
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMaximumTap[2];
    if (ucie_sim_c_B->ScaledPayload > ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
      ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_B->ScaledPayload;
    } else {
      ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMinimumTap[2];
      if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->ndbl) {
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
        ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_B->ScaledPayload;
      }
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pEqualizationStep[2];
    if (ucie_sim_c_B->ndbl != 0.0) {
      ucie_sim_c_DW->obj_k.DFEtapRounded[2] = rt_roundd_snf
        (ucie_sim_c_B->ScaledPayload / ucie_sim_c_B->ndbl) * ucie_sim_c_B->ndbl;
    } else {
      ucie_sim_c_DW->obj_k.DFEtapRounded[2] = ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_k.DFEtapInternal[3];
    ucie_sim_c_B->ScaledPayload -= ucie_sim_c_DW->obj_k.EqualizationGain *
      ucie_sim_c_B->b_y1 * ucie_sim_c_DW->obj_k.SymbolShiftRegister[3];
    ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_B->ScaledPayload;
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMaximumTap[3];
    if (ucie_sim_c_B->ScaledPayload > ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
      ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_B->ScaledPayload;
    } else {
      ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pMinimumTap[3];
      if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->ndbl) {
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->ndbl;
        ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_B->ScaledPayload;
      }
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_k.pEqualizationStep[3];
    if (ucie_sim_c_B->ndbl != 0.0) {
      ucie_sim_c_DW->obj_k.DFEtapRounded[3] = rt_roundd_snf
        (ucie_sim_c_B->ScaledPayload / ucie_sim_c_B->ndbl) * ucie_sim_c_B->ndbl;
    } else {
      ucie_sim_c_DW->obj_k.DFEtapRounded[3] = ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_DW->obj_k.AdaptNextStep = false;
  }

  if (ucie_sim_c_DW->obj_k.PriorClock < ucie_sim_c_B->Delay2) {
    ucie_sim_c_DW->obj_k.AdaptNextStep = true;
  }

  ucie_sim_c_DW->obj_k.PriorClock = ucie_sim_c_B->Delay2;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->DFESystemObject_o1 = ucie_sim_c_B->b_y1;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.DFEtapRounded[0] /
    ucie_sim_c_DW->obj_k.TapMultiplier;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->DFESystemObject_o2[0] = ucie_sim_c_B->q;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.DFEtapRounded[1] /
    ucie_sim_c_DW->obj_k.TapMultiplier;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->DFESystemObject_o2[1] = ucie_sim_c_B->q;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.DFEtapRounded[2] /
    ucie_sim_c_DW->obj_k.TapMultiplier;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->DFESystemObject_o2[2] = ucie_sim_c_B->q;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->q = ucie_sim_c_DW->obj_k.DFEtapRounded[3] /
    ucie_sim_c_DW->obj_k.TapMultiplier;

  /* MATLABSystem: '<S10>/DFE System Object' */
  ucie_sim_c_B->DFESystemObject_o2[3] = ucie_sim_c_B->q;

  /* MATLABSystem: '<S10>/CDR System Object' incorporates:
   *  Constant: '<S10>/DFEClkFwdPhaseOffset'
   *  Constant: '<S10>/DFEClkFwdReferenceOffset'
   */
  if (ucie_sim_c_DW->obj_e.Count != 5.0) {
    ucie_sim_c_DW->obj_e.Count = 5.0;
  }

  if (ucie_sim_c_DW->obj_e.Step != 0.005) {
    ucie_sim_c_DW->obj_e.Step = 0.005;
  }

  if (ucie_sim_c_DW->obj_e.Sensitivity != 0.02) {
    ucie_sim_c_DW->obj_e.Sensitivity = 0.02;
  }

  if (ucie_sim_c_DW->obj_e.SymbolTime != ucie_sim_c_InstP->SymbolTime) {
    ucie_sim_c_DW->obj_e.SymbolTime = ucie_sim_c_InstP->SymbolTime;
  }

  if (ucie_sim_c_DW->obj_e.SampleInterval != ucie_sim_c_InstP->SampleInterval) {
    ucie_sim_c_DW->obj_e.SampleInterval = ucie_sim_c_InstP->SampleInterval;
  }

  if (ucie_sim_c_DW->obj_e.Modulation != ucie_sim_c_InstP->Modulation) {
    ucie_sim_c_DW->obj_e.Modulation = ucie_sim_c_InstP->Modulation;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj_e.ReferenceOffset ==
       ucie_sim_c_InstP->DFEClkFwdParameter.ReferenceOffset) || (rtIsNaN
       (ucie_sim_c_DW->obj_e.ReferenceOffset) && rtIsNaN
       (ucie_sim_c_InstP->DFEClkFwdParameter.ReferenceOffset))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    ucie_sim_c_DW->obj_e.ReferenceOffset =
      ucie_sim_c_InstP->DFEClkFwdParameter.ReferenceOffset;
  }

  ucie_sim_c_B->rEQ0 = false;
  if ((ucie_sim_c_DW->obj_e.PhaseOffset ==
       ucie_sim_c_InstP->DFEClkFwdParameter.PhaseOffset) || (rtIsNaN
       (ucie_sim_c_DW->obj_e.PhaseOffset) && rtIsNaN
       (ucie_sim_c_InstP->DFEClkFwdParameter.PhaseOffset))) {
    ucie_sim_c_B->b_p_f = true;
  } else {
    ucie_sim_c_B->b_p_f = false;
  }

  if (ucie_sim_c_B->b_p_f) {
    ucie_sim_c_B->rEQ0 = true;
  }

  if (!ucie_sim_c_B->rEQ0) {
    ucie_sim_c_DW->obj_e.PhaseOffset =
      ucie_sim_c_InstP->DFEClkFwdParameter.PhaseOffset;
  }

  ucie_sim_c_CDR_stepImpl(&ucie_sim_c_DW->obj_e,
    ucie_sim_c_B->DFESystemObject_o1, &ucie_sim_c_B->b_y1,
    &ucie_sim_c_B->ScaledPayload, &ucie_sim_c_B->ndbl, &ucie_sim_c_B->r,
    ucie_sim_c_B);

  /* MATLABSystem: '<S10>/CDR System Object' */
  ucie_sim_c_B->CDRSystemObject_o1 = ucie_sim_c_B->b_y1;

  /* MATLABSystem: '<S10>/CDR System Object' */
  ucie_sim_c_B->CDRSystemObject_o2.clockTime = ucie_sim_c_B->ScaledPayload;
  ucie_sim_c_B->CDRSystemObject_o2.clockValidOnRising = ucie_sim_c_B->ndbl;

  /* MATLABSystem: '<S10>/CDR System Object' */
  ucie_sim_c_B->CDRSystemObject_o3 = ucie_sim_c_B->r;

  /* DataStoreWrite: '<S10>/PAM_Thresholds' */
  memcpy(&ucie_sim_c_DW->PAM_Thresholds[0],
         &ucie_sim_c_B->CDRSystemObject_o3.PAMThreshold[0], 31U * sizeof(real_T));

  /* DataStoreWrite: '<S10>/TapWeights write' incorporates:
   *  MATLABSystem: '<S10>/DFE System Object'
   */
  ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[0] =
    ucie_sim_c_B->DFESystemObject_o2[0];
  ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[1] =
    ucie_sim_c_B->DFESystemObject_o2[1];
  ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[2] =
    ucie_sim_c_B->DFESystemObject_o2[2];
  ucie_sim_c_DW->DFEClkFwdSignal.TapWeights[3] =
    ucie_sim_c_B->DFESystemObject_o2[3];

  /* DataStoreRead: '<S10>/Forward Clock Times' */
  ucie_sim_c_B->ForwardClockTimes = ucie_sim_c_DW->ExternalClockTimesIn;

  /* MATLAB Function: '<S10>/Clocking Forwarding CDR' incorporates:
   *  Constant: '<S10>/ForwardClockOffset'
   */
  ucie_sim_c_B->b_y1 = ucie_sim_c_B->ForwardClockTimes;
  if (!ucie_sim_c_DW->SamplesPerSymbol_not_empty) {
    ucie_sim_c_DW->SamplesPerSymbol = ucie_sim_c_InstP->SymbolTime /
      ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->SamplesPerSymbol = rt_roundd_snf
      (ucie_sim_c_DW->SamplesPerSymbol);
    ucie_sim_c_DW->SamplesPerSymbol_not_empty = true;
    ucie_sim_c_B->dim = (int32_T)
      (ucie_sim_c_InstP->DFEClkFwdParameter.ForwardClockOffset + 1.0);
    ucie_sim_c_B->stride = ucie_sim_c_DW->ClockBuffer->size[0];
    ucie_sim_c_DW->ClockBuffer->size[0] = ucie_sim_c_B->dim;
    ucie_sim_c_emxEnsureCapacity_real_T(ucie_sim_c_DW->ClockBuffer,
      ucie_sim_c_B->stride, ucie_sim_c_B);
    if (ucie_sim_c_B->dim - 1 >= 0) {
      memset(&ucie_sim_c_DW->ClockBuffer->data[0], 0, (uint32_T)
             ucie_sim_c_B->dim * sizeof(real_T));
    }
  }

  ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->temp_DataSymbolOnRising;
  ucie_sim_c_B->ndbl = ucie_sim_c_DW->temp_ClockTimesInternal;
  ucie_sim_c_B->q = ucie_sim_c_DW->temp_DataSymbol;
  if (ucie_sim_c_B->ForwardClockTimes > 0.0) {
    ucie_sim_c_B->b_y1 = ucie_sim_c_InstP->DFEClkFwdParameter.ForwardClockOffset
      * ucie_sim_c_InstP->SampleInterval + ucie_sim_c_B->ForwardClockTimes;
  }

  ucie_sim_c_DW->ClockBuffer->data[0] = ucie_sim_c_B->b_y1;
  ucie_sim_c_B->b_y1 = ucie_sim_c_DW->ClockBuffer->data
    [ucie_sim_c_DW->ClockBuffer->size[0] - 1];
  ucie_sim_c_B->dim = 2;
  if (ucie_sim_c_DW->ClockBuffer->size[0] != 1) {
    ucie_sim_c_B->dim = 1;
  }

  if ((ucie_sim_c_DW->ClockBuffer->size[0] != 0) && (ucie_sim_c_DW->
       ClockBuffer->size[0] != 1)) {
    ucie_sim_c_B->coeffSize = 1;
    if (ucie_sim_c_B->dim > 1) {
      ucie_sim_c_B->coeffSize = 0;
    }

    ucie_sim_c_B->nm1d2 = (int32_T)((uint32_T)ucie_sim_c_DW->ClockBuffer->size[0]
      >> 1);
    ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
    binaryValues->size[0] = 1;
    binaryValues->size[1] = ucie_sim_c_B->nm1d2;
    ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
      ucie_sim_c_B);
    memset(&binaryValues->data[0], 0, (uint32_T)ucie_sim_c_B->nm1d2 * sizeof
           (real_T));
    if (ucie_sim_c_B->dim <= 1) {
      ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->ClockBuffer->size[0];
    } else {
      ucie_sim_c_B->lastBlockLength = 1;
    }

    ucie_sim_c_B->stride = 1;
    ucie_sim_c_B->firstBlockLength = ucie_sim_c_B->dim;
    for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim <=
         ucie_sim_c_B->firstBlockLength - 2; ucie_sim_c_B->dim++) {
      ucie_sim_c_B->stride *= ucie_sim_c_DW->ClockBuffer->size[0];
    }

    if ((ucie_sim_c_B->lastBlockLength > 1) && (ucie_sim_c_B->coeffSize > 0)) {
      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 < ucie_sim_c_B->stride;
           ucie_sim_c_B->nm1d2++) {
        binaryValues->data[0] = ucie_sim_c_DW->ClockBuffer->data
          [(ucie_sim_c_B->lastBlockLength - 1) * ucie_sim_c_B->stride +
          ucie_sim_c_B->nm1d2];
        for (ucie_sim_c_B->dim = ucie_sim_c_B->lastBlockLength;
             ucie_sim_c_B->dim >= 2; ucie_sim_c_B->dim--) {
          ucie_sim_c_DW->ClockBuffer->data[ucie_sim_c_B->nm1d2 +
            (ucie_sim_c_B->dim - 1) * ucie_sim_c_B->stride] =
            ucie_sim_c_DW->ClockBuffer->data[(ucie_sim_c_B->dim - 2) *
            ucie_sim_c_B->stride + ucie_sim_c_B->nm1d2];
        }

        ucie_sim_c_DW->ClockBuffer->data[ucie_sim_c_B->nm1d2] =
          binaryValues->data[0];
      }
    }
  }

  if (ucie_sim_c_B->b_y1 > ucie_sim_c_DW->PreviousClockTimeIn) {
    ucie_sim_c_B->ndbl = fmax(0.0, ucie_sim_c_B->b_y1 -
      ucie_sim_c_InstP->SymbolTime / 2.0);
    ucie_sim_c_B->ScaledPayload = 1.0;
    ucie_sim_c_DW->SampleCounter = 0.0;
    ucie_sim_c_DW->DataCounter = 1.0;
    ucie_sim_c_DW->PreviousClockTimeIn = ucie_sim_c_B->b_y1;
  }

  if (ucie_sim_c_DW->SamplesPerSymbol / 2.0 == ucie_sim_c_DW->SampleCounter) {
    ucie_sim_c_B->ScaledPayload = !(ucie_sim_c_B->ScaledPayload != 0.0);
  }

  ucie_sim_c_B->ClockInternal = ucie_sim_c_B->ScaledPayload;
  if (ucie_sim_c_DW->DataCounter == 1.0) {
    if (ucie_sim_c_B->DFESystemObject_o1 > 0.025) {
      ucie_sim_c_B->q = 0.5;
    } else if (ucie_sim_c_B->DFESystemObject_o1 < 0.025) {
      ucie_sim_c_B->q = -0.5;
    } else {
      ucie_sim_c_B->q = 0.0;
    }

    ucie_sim_c_DW->DataCounter = 0.0;
  }

  ucie_sim_c_DW->SamplesElapsed++;
  ucie_sim_c_DW->SampleCounter++;
  ucie_sim_c_DW->temp_DataSymbolOnRising = ucie_sim_c_B->ScaledPayload;
  ucie_sim_c_DW->temp_ClockTimesInternal = ucie_sim_c_B->ndbl;
  ucie_sim_c_DW->temp_DataSymbol = ucie_sim_c_B->q;
  ucie_sim_c_B->DataSymbolOnRising = ucie_sim_c_B->ScaledPayload;
  ucie_sim_c_B->ClockTimesInternal = ucie_sim_c_B->ndbl;
  ucie_sim_c_B->DataSymbol = ucie_sim_c_B->q;

  /* End of MATLAB Function: '<S10>/Clocking Forwarding CDR' */

  /* MATLAB Function: '<S10>/CDR Output Selector' */
  if (ucie_sim_c_B->ForwardClockTimes > -1.0) {
    ucie_sim_c_B->clockValid = ucie_sim_c_B->DataSymbolOnRising;
    ucie_sim_c_B->clockTime = ucie_sim_c_B->ClockTimesInternal;
    ucie_sim_c_B->DFEclock = ucie_sim_c_B->ClockInternal;
    ucie_sim_c_B->DFEdata = ucie_sim_c_B->DataSymbol;
  } else {
    ucie_sim_c_B->b_y1 = ucie_sim_c_B->CDRSystemObject_o2.clockValidOnRising;
    ucie_sim_c_B->clockValid = ucie_sim_c_B->b_y1;
    ucie_sim_c_B->clockTime = ucie_sim_c_B->CDRSystemObject_o2.clockTime;
    ucie_sim_c_B->DFEclock = ucie_sim_c_B->b_y1;
    ucie_sim_c_B->DFEdata = ucie_sim_c_B->CDRSystemObject_o3.symbolRecovered;
  }

  /* End of MATLAB Function: '<S10>/CDR Output Selector' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/No adjustment'
   */
  ucie_sim_c_B->Switch_a = 0.0;

  /* Sum: '<S13>/Sum' */
  ucie_sim_c_B->Sum = ucie_sim_c_B->clockTime;

  /* MinMax: '<S13>/Max' incorporates:
   *  Constant: '<S13>/No adjustment'
   */
  ucie_sim_c_B->b_y1 = fmax(ucie_sim_c_B->Sum, 0.0);

  /* MinMax: '<S13>/Max' */
  ucie_sim_c_B->Max = ucie_sim_c_B->b_y1;

  /* Outputs for Triggered SubSystem: '<S13>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S15>/Trigger'
   */
  ucie_sim_c_B->zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
    &ucie_sim_c_PrevZCX->TriggeredSubsystem_Trig_ZCE,
    (ucie_sim_c_B->clockValid));
  if (ucie_sim_c_B->zcEvent != NO_ZCEVENT) {
    /* S-Function (clock_times_writer): '<S15>/write_clock_times' */
    if (ucie_sim_c_clock_times_buf) {
      ucie_sim_c_clock_times_buf[ucie_sim_c_clock_times_idx++] =
        ucie_sim_c_B->Max;
    }
  }

  /* End of Outputs for SubSystem: '<S13>/Triggered Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/DFEClkFwd' */
  /* End of Outputs for SubSystem: '<Root>/Rx' */

  /* Outport: '<Root>/Outport' incorporates:
   *  Gain: '<Root>/Gain'
   */
  ucie_sim_c_Y->Outport = ucie_sim_c_B->DFESystemObject_o1;

  /* MATLABSystem: '<S18>/StrobeStimulus' */
  obj = &ucie_sim_c_DW->obj_f;
  ucie_sim_c_emxInit_real_T(&seedIn, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&PayloadBinary, 2, ucie_sim_c_B);
  ucie_sim_c_emxInit_real_T(&b, 1, ucie_sim_c_B);

  /* MATLABSystem: '<S18>/StrobeStimulus' incorporates:
   *  MATLABSystem: '<S18>/MATLAB System'
   */
  if (ucie_sim_c_DW->obj_f.privateSourceFlag == 3.0) {
    if (ucie_sim_c_DW->obj_f.privateDataIndex <= 0.0) {
      ucie_sim_c_B->ndbl = 0.0;
      ucie_sim_c_DW->obj_f.privateDataIndex++;
    } else {
      ucie_sim_c_B->ndbl = tmp[(int32_T)ucie_sim_c_DW->obj_f.privateDataIndex -
        1];
      ucie_sim_c_DW->obj_f.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_f.privateDataIndex,
         ucie_sim_c_DW->obj_f.privateLength) + 1.0;
    }
  } else if (ucie_sim_c_DW->obj_f.privateIndex ==
             ucie_sim_c_DW->obj_f.pNextEdgeSampleIndex) {
    if (ucie_sim_c_DW->obj_f.privateSourceFlag == 2.0) {
      ucie_sim_c_B->b_y1 = tmp_0[(int32_T)ucie_sim_c_DW->obj_f.privateDataIndex
        - 1];
      ucie_sim_c_DW->obj_f.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_f.privateDataIndex,
         ucie_sim_c_DW->obj_f.privateLength) + 1.0;
    } else if (ucie_sim_c_DW->obj_f.privateSourceFlag == 1.0) {
      ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
      binaryValues->size[0] = 1;
      ucie_sim_c_B->firstBlockLength = (int32_T)ucie_sim_c_DW->obj_f.privateM;
      binaryValues->size[1] = ucie_sim_c_B->firstBlockLength;
      ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
        ucie_sim_c_B);
      if (ucie_sim_c_B->firstBlockLength - 1 >= 0) {
        memset(&binaryValues->data[0], 0, (uint32_T)
               ucie_sim_c_B->firstBlockLength * sizeof(real_T));
      }

      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 <
           ucie_sim_c_B->firstBlockLength; ucie_sim_c_B->nm1d2++) {
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.privateOrder->
          data[ucie_sim_c_B->nm1d2];
        if (ucie_sim_c_B->b_y1 < 1.0) {
          ucie_sim_c_B->dim = 0;
        } else {
          ucie_sim_c_B->dim = (int32_T)ucie_sim_c_B->b_y1;
        }

        ucie_sim_c_B->stride = PayloadBinary->size[0] * PayloadBinary->size[1];
        PayloadBinary->size[0] = 1;
        PayloadBinary->size[1] = ucie_sim_c_B->dim;
        ucie_sim_c_emxEnsureCapacity_real_T(PayloadBinary, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          PayloadBinary->data[ucie_sim_c_B->hi] =
            ucie_sim_c_DW->obj_f.privateSeed->data
            [ucie_sim_c_DW->obj_f.privateSeed->size[0] * ucie_sim_c_B->hi +
            ucie_sim_c_B->nm1d2];
        }

        ucie_sim_c_B->b_y1 = ucie_sim_c_prbs_mj
          (ucie_sim_c_DW->obj_f.privateOrder->data[ucie_sim_c_B->nm1d2],
           PayloadBinary, ucie_sim_c_B);
        binaryValues->data[ucie_sim_c_B->nm1d2] = ucie_sim_c_B->b_y1;
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.privateOrder->
          data[ucie_sim_c_B->nm1d2];
        if (ucie_sim_c_B->b_y1 < 1.0) {
          ucie_sim_c_B->coeffSize = 0;
        } else {
          ucie_sim_c_B->coeffSize = (int32_T)ucie_sim_c_B->b_y1;
        }

        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->coeffSize;
             ucie_sim_c_B->hi++) {
          ucie_sim_c_DW->obj_f.privateSeed->data[ucie_sim_c_B->nm1d2 +
            ucie_sim_c_DW->obj_f.privateSeed->size[0] * ucie_sim_c_B->hi] =
            PayloadBinary->data[ucie_sim_c_B->hi];
        }
      }

      if (binaryValues->size[1] == ucie_sim_c_DW->
          obj_f.privateBinaryPowers->size[1]) {
        ucie_sim_c_B->dim = binaryValues->size[1] - 1;
        ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
        binaryValues->size[0] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          binaryValues->data[ucie_sim_c_B->hi] *=
            ucie_sim_c_DW->obj_f.privateBinaryPowers->data[ucie_sim_c_B->hi];
        }
      } else {
        ucie_sim_c_binary_expand_op(binaryValues, &ucie_sim_c_DW->obj_f,
          ucie_sim_c_B);
      }

      if (binaryValues->size[1] == 0) {
        ucie_sim_c_B->b_y1 = 0.0;
      } else {
        if (binaryValues->size[1] <= 1024) {
          ucie_sim_c_B->firstBlockLength = binaryValues->size[1];
          ucie_sim_c_B->lastBlockLength = 0;
          ucie_sim_c_B->nm1d2 = 1;
        } else {
          ucie_sim_c_B->firstBlockLength = 1024;
          ucie_sim_c_B->nm1d2 = (int32_T)((uint32_T)binaryValues->size[1] >> 10);
          ucie_sim_c_B->lastBlockLength = binaryValues->size[1] -
            (ucie_sim_c_B->nm1d2 << 10);
          if (ucie_sim_c_B->lastBlockLength > 0) {
            ucie_sim_c_B->nm1d2++;
          } else {
            ucie_sim_c_B->lastBlockLength = 1024;
          }
        }

        ucie_sim_c_B->b_y1 = binaryValues->data[0];
        for (ucie_sim_c_B->dim = 2; ucie_sim_c_B->dim <=
             ucie_sim_c_B->firstBlockLength; ucie_sim_c_B->dim++) {
          ucie_sim_c_B->b_y1 += binaryValues->data[ucie_sim_c_B->dim - 1];
        }

        for (ucie_sim_c_B->dim = 2; ucie_sim_c_B->dim <= ucie_sim_c_B->nm1d2;
             ucie_sim_c_B->dim++) {
          ucie_sim_c_B->stride = (ucie_sim_c_B->dim - 1) << 10;
          ucie_sim_c_B->ScaledPayload = binaryValues->data[ucie_sim_c_B->stride];
          if (ucie_sim_c_B->dim == ucie_sim_c_B->nm1d2) {
            ucie_sim_c_B->hi = ucie_sim_c_B->lastBlockLength;
          } else {
            ucie_sim_c_B->hi = 1024;
          }

          for (ucie_sim_c_B->firstBlockLength = 2;
               ucie_sim_c_B->firstBlockLength <= ucie_sim_c_B->hi;
               ucie_sim_c_B->firstBlockLength++) {
            ucie_sim_c_B->ScaledPayload += binaryValues->data
              [(ucie_sim_c_B->stride + ucie_sim_c_B->firstBlockLength) - 1];
          }

          ucie_sim_c_B->b_y1 += ucie_sim_c_B->ScaledPayload;
        }
      }

      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.privateMapToVoltage[(int32_T)
        (ucie_sim_c_B->b_y1 + 1.0) - 1];
    } else if ((ucie_sim_c_DW->obj_f.privateSourceFlag == 5.0) ||
               (ucie_sim_c_DW->obj_f.privateSourceFlag == 6.0)) {
      if (ucie_sim_c_DW->obj_f.FIFOPosition == 1.0) {
        if (ucie_sim_c_DW->obj_f.privateSourceFlag == 5.0) {
          ucie_sim_c_B->hi = ucie_sim_c_DW->obj_f.privateSeed->size[0];
          ucie_sim_c_B->stride = seedIn->size[0] * seedIn->size[1];
          seedIn->size[0] = ucie_sim_c_B->hi;
          ucie_sim_c_B->hi = ucie_sim_c_DW->obj_f.privateSeed->size[1];
          seedIn->size[1] = ucie_sim_c_B->hi;
          ucie_sim_c_emxEnsureCapacity_real_T(seedIn, ucie_sim_c_B->stride,
            ucie_sim_c_B);
          ucie_sim_c_B->nm1d2 = ucie_sim_c_DW->obj_f.privateSeed->size[0] *
            ucie_sim_c_DW->obj_f.privateSeed->size[1];
          for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->nm1d2;
               ucie_sim_c_B->hi++) {
            seedIn->data[ucie_sim_c_B->hi] = ucie_sim_c_DW->
              obj_f.privateSeed->data[ucie_sim_c_B->hi];
          }

          ucie_sim_c_prbs_mjc(ucie_sim_c_DW->obj_f.privateOrder,
                              ucie_sim_c_DW->obj_f.pPayloadLength, seedIn,
                              PayloadBinary, ucie_sim_c_B);
          ucie_sim_c_B->stride = ucie_sim_c_DW->obj_f.privateSeed->size[0] *
            ucie_sim_c_DW->obj_f.privateSeed->size[1];
          ucie_sim_c_DW->obj_f.privateSeed->size[0] = seedIn->size[0];
          ucie_sim_c_DW->obj_f.privateSeed->size[1] = seedIn->size[1];
          ucie_sim_c_emxEnsureCapacity_real_T(ucie_sim_c_DW->obj_f.privateSeed,
            ucie_sim_c_B->stride, ucie_sim_c_B);
          ucie_sim_c_B->nm1d2 = seedIn->size[0] * seedIn->size[1];
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < ucie_sim_c_B->nm1d2;
               ucie_sim_c_B->dim++) {
            ucie_sim_c_DW->obj_f.privateSeed->data[ucie_sim_c_B->dim] =
              seedIn->data[ucie_sim_c_B->dim];
          }
        } else {
          ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.pBinaryIndex;
          ucie_sim_c_B->ScaledPayload = (ucie_sim_c_DW->obj_f.pBinaryIndex +
            ucie_sim_c_DW->obj_f.pPayloadLength) - 1.0;
          if (rtIsNaN(ucie_sim_c_B->b_y1) || rtIsNaN(ucie_sim_c_B->ScaledPayload))
          {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            binaryValues->data[0] = (rtNaN);
          } else if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->b_y1) {
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 0;
          } else if ((rtIsInf(ucie_sim_c_B->b_y1) || rtIsInf
                      (ucie_sim_c_B->ScaledPayload)) && (ucie_sim_c_B->b_y1 ==
                      ucie_sim_c_B->ScaledPayload)) {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            binaryValues->data[0] = (rtNaN);
          } else if (floor(ucie_sim_c_B->b_y1) == ucie_sim_c_B->b_y1) {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            ucie_sim_c_B->dim = (int32_T)(ucie_sim_c_B->ScaledPayload -
              ucie_sim_c_B->b_y1);
            binaryValues->size[1] = ucie_sim_c_B->dim + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
                 ucie_sim_c_B->hi++) {
              binaryValues->data[ucie_sim_c_B->hi] = ucie_sim_c_B->b_y1 +
                (real_T)ucie_sim_c_B->hi;
            }
          } else {
            ucie_sim_c_B->ndbl = floor((ucie_sim_c_B->ScaledPayload -
              ucie_sim_c_B->b_y1) + 0.5);
            ucie_sim_c_B->q = ucie_sim_c_B->b_y1 + ucie_sim_c_B->ndbl;
            ucie_sim_c_B->cdiff = ucie_sim_c_B->q - ucie_sim_c_B->ScaledPayload;
            if (fabs(ucie_sim_c_B->cdiff) < 4.4408920985006262E-16 * fmax(fabs
                 (ucie_sim_c_B->b_y1), fabs(ucie_sim_c_B->ScaledPayload))) {
              ucie_sim_c_B->ndbl++;
              ucie_sim_c_B->q = ucie_sim_c_B->ScaledPayload;
            } else if (ucie_sim_c_B->cdiff > 0.0) {
              ucie_sim_c_B->q = (ucie_sim_c_B->ndbl - 1.0) + ucie_sim_c_B->b_y1;
            } else {
              ucie_sim_c_B->ndbl++;
            }

            if (ucie_sim_c_B->ndbl >= 0.0) {
              ucie_sim_c_B->hi = (int32_T)ucie_sim_c_B->ndbl;
            } else {
              ucie_sim_c_B->hi = 0;
            }

            ucie_sim_c_B->coeffSize = ucie_sim_c_B->hi - 1;
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = ucie_sim_c_B->coeffSize + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            if (ucie_sim_c_B->coeffSize + 1 > 0) {
              binaryValues->data[0] = ucie_sim_c_B->b_y1;
              if (ucie_sim_c_B->coeffSize + 1 > 1) {
                binaryValues->data[ucie_sim_c_B->coeffSize] = ucie_sim_c_B->q;
                ucie_sim_c_B->nm1d2 = (int32_T)((uint32_T)
                  ucie_sim_c_B->coeffSize >> 1);
                ucie_sim_c_B->lastBlockLength = ucie_sim_c_B->nm1d2 - 2;
                for (ucie_sim_c_B->firstBlockLength = 0;
                     ucie_sim_c_B->firstBlockLength <=
                     ucie_sim_c_B->lastBlockLength;
                     ucie_sim_c_B->firstBlockLength++) {
                  ucie_sim_c_B->dim = ucie_sim_c_B->firstBlockLength + 1;
                  binaryValues->data[ucie_sim_c_B->dim] = ucie_sim_c_B->b_y1 +
                    (real_T)ucie_sim_c_B->dim;
                  binaryValues->data[ucie_sim_c_B->coeffSize - ucie_sim_c_B->dim]
                    = ucie_sim_c_B->q - (real_T)ucie_sim_c_B->dim;
                }

                if (ucie_sim_c_B->nm1d2 << 1 == ucie_sim_c_B->coeffSize) {
                  binaryValues->data[ucie_sim_c_B->nm1d2] = (ucie_sim_c_B->b_y1
                    + ucie_sim_c_B->q) / 2.0;
                } else {
                  binaryValues->data[ucie_sim_c_B->nm1d2] = ucie_sim_c_B->b_y1 +
                    (real_T)ucie_sim_c_B->nm1d2;
                  binaryValues->data[ucie_sim_c_B->nm1d2 + 1] = ucie_sim_c_B->q
                    - (real_T)ucie_sim_c_B->nm1d2;
                }
              }
            }
          }

          ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.pBinaryLength;
          ucie_sim_c_B->stride = PayloadBinary->size[0] * PayloadBinary->size[1];
          PayloadBinary->size[0] = 1;
          ucie_sim_c_B->dim = binaryValues->size[1];
          PayloadBinary->size[1] = ucie_sim_c_B->dim;
          ucie_sim_c_emxEnsureCapacity_real_T(PayloadBinary,
            ucie_sim_c_B->stride, ucie_sim_c_B);
          for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
               ucie_sim_c_B->hi++) {
            ucie_sim_c_B->q = binaryValues->data[ucie_sim_c_B->hi] - 1.0;
            ucie_sim_c_B->ndbl = ucie_sim_c_B->q;
            if (ucie_sim_c_B->b_y1 == 0.0) {
              if (ucie_sim_c_B->q == 0.0) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
              }
            } else if (rtIsNaN(ucie_sim_c_B->q) || rtIsNaN(ucie_sim_c_B->b_y1) ||
                       rtIsInf(ucie_sim_c_B->q)) {
              ucie_sim_c_B->ndbl = (rtNaN);
            } else if (ucie_sim_c_B->q == 0.0) {
              ucie_sim_c_B->ndbl = 0.0 / ucie_sim_c_B->b_y1;
            } else if (rtIsInf(ucie_sim_c_B->b_y1)) {
              if ((ucie_sim_c_B->b_y1 < 0.0) != (ucie_sim_c_B->q < 0.0)) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
              }
            } else {
              ucie_sim_c_B->ndbl = fmod(ucie_sim_c_B->q, ucie_sim_c_B->b_y1);
              ucie_sim_c_B->rEQ0 = (ucie_sim_c_B->ndbl == 0.0);
              if ((!ucie_sim_c_B->rEQ0) && (ucie_sim_c_B->b_y1 > floor
                   (ucie_sim_c_B->b_y1))) {
                ucie_sim_c_B->q = fabs(ucie_sim_c_B->q / ucie_sim_c_B->b_y1);
                ucie_sim_c_B->rEQ0 = !(fabs(ucie_sim_c_B->q - floor
                  (ucie_sim_c_B->q + 0.5)) > 2.2204460492503131E-16 *
                  ucie_sim_c_B->q);
              }

              if (ucie_sim_c_B->rEQ0) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1 * 0.0;
              } else if (((ucie_sim_c_B->ndbl < 0.0) && (!(ucie_sim_c_B->b_y1 <
                            0.0))) || ((!(ucie_sim_c_B->ndbl < 0.0)) &&
                          (ucie_sim_c_B->b_y1 < 0.0))) {
                ucie_sim_c_B->ndbl += ucie_sim_c_B->b_y1;
              }
            }

            PayloadBinary->data[ucie_sim_c_B->hi] = tmp_3[(int32_T)
              (ucie_sim_c_B->ndbl + 1.0) - 1];
          }

          ucie_sim_c_DW->obj_f.pBinaryIndex = ucie_sim_c_mod_m
            (ucie_sim_c_B->ScaledPayload, ucie_sim_c_DW->obj_f.pBinaryLength) +
            1.0;
        }

        ucie_sim_c_B->dim = ucie_sim_c_DW->obj_f.PowersOf2->size[0];
        ucie_sim_c_B->stride = b->size[0];
        b->size[0] = ucie_sim_c_B->dim;
        ucie_sim_c_emxEnsureCapacity_real_T(b, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          b->data[ucie_sim_c_B->hi] = ucie_sim_c_DW->obj_f.PowersOf2->
            data[ucie_sim_c_B->hi];
        }

        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.pMessageLength;
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pPayloadLength;
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_rt_powd_snf(2.0,
          ucie_sim_c_B->ScaledPayload, ucie_sim_c_B);
        ucie_sim_c_B->ndbl = 0.0;
        ucie_sim_c_B->dim = PayloadBinary->size[1];
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          ucie_sim_c_B->ndbl += PayloadBinary->data[ucie_sim_c_B->hi] * b->
            data[ucie_sim_c_B->hi];
        }

        ucie_sim_c_B->ScaledPayload = ((ucie_sim_c_rt_powd_snf(2.0,
          ucie_sim_c_B->b_y1, ucie_sim_c_B) - ucie_sim_c_B->ScaledPayload) /
          ucie_sim_c_B->ScaledPayload + 1.0) * ucie_sim_c_B->ndbl;
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.pMessageLength - 1.0;
        ucie_sim_c_B->lastBlockLength = (int32_T)(ucie_sim_c_B->b_y1 + 1.0);
        for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim <
             ucie_sim_c_B->lastBlockLength; ucie_sim_c_B->dim++) {
          ucie_sim_c_B->b_y1 = rt_roundd_snf(ucie_sim_c_B->ScaledPayload);
          if (rtIsNaN(ucie_sim_c_B->b_y1) || rtIsInf(ucie_sim_c_B->b_y1)) {
            ucie_sim_c_B->b_y1 = (rtNaN);
          } else if (ucie_sim_c_B->b_y1 == 0.0) {
            ucie_sim_c_B->b_y1 = 0.0;
          } else {
            ucie_sim_c_B->b_y1 = fmod(ucie_sim_c_B->b_y1, 2.0);
            if (ucie_sim_c_B->b_y1 == 0.0) {
              ucie_sim_c_B->b_y1 = 0.0;
            } else if (ucie_sim_c_B->b_y1 < 0.0) {
              ucie_sim_c_B->b_y1 += 2.0;
            }
          }

          ucie_sim_c_DW->obj_f.SymbolFIFO->data[(int32_T)
            (ucie_sim_c_DW->obj_f.pMessageLength - (real_T)ucie_sim_c_B->dim) -
            1] = ucie_sim_c_B->b_y1;
          ucie_sim_c_B->ScaledPayload = (ucie_sim_c_B->ScaledPayload -
            ucie_sim_c_DW->obj_f.SymbolFIFO->data[(int32_T)
            (ucie_sim_c_DW->obj_f.pMessageLength - (real_T)ucie_sim_c_B->dim) -
            1]) / 2.0;
        }

        ucie_sim_c_DW->obj_f.FIFOPosition = ucie_sim_c_DW->obj_f.pMessageLength
          + 1.0;
      }

      ucie_sim_c_DW->obj_f.FIFOPosition--;
      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.SymbolFIFO->data[(int32_T)
        ucie_sim_c_DW->obj_f.FIFOPosition - 1] - 0.5;
    } else if (ucie_sim_c_DW->obj_f.privateSourceFlag == 7.0) {
      ucie_sim_c_B->b_y1 = (real_T)((int32_T)
        ucie_sim_c_DW->obj_f.privateDataIndex - 1) + 1.0;
      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.privateMapToVoltage[(int32_T)
        ucie_sim_c_B->b_y1 - 1];
      ucie_sim_c_DW->obj_f.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_f.privateDataIndex,
         ucie_sim_c_DW->obj_f.privateLength) + 1.0;
    } else {
      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 31; ucie_sim_c_B->hi++) {
        ucie_sim_c_B->seed31[ucie_sim_c_B->hi] = ucie_sim_c_DW->
          obj_f.pPAMnSeed[ucie_sim_c_B->hi];
      }

      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 < 16;
           ucie_sim_c_B->nm1d2++) {
        if (ucie_sim_c_B->seed31[0]) {
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 30; ucie_sim_c_B->dim
               ++) {
            ucie_sim_c_B->hi = tmp_1[ucie_sim_c_B->dim];
            ucie_sim_c_B->coeffSize = ucie_sim_c_B->seed31[ucie_sim_c_B->dim + 1];
            ucie_sim_c_B->seed31[ucie_sim_c_B->dim] = ((ucie_sim_c_B->coeffSize
              + ucie_sim_c_B->hi) - (ucie_sim_c_B->coeffSize << 1) *
              ucie_sim_c_B->hi != 0);
          }

          ucie_sim_c_B->seed31[30] = true;
        } else {
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 30; ucie_sim_c_B->dim
               ++) {
            ucie_sim_c_B->seed31[ucie_sim_c_B->dim] = ucie_sim_c_B->
              seed31[ucie_sim_c_B->dim + 1];
          }

          ucie_sim_c_B->seed31[30] = false;
        }

        ucie_sim_c_B->x1[ucie_sim_c_B->nm1d2] = (int8_T)ucie_sim_c_B->seed31[0];
      }

      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 31; ucie_sim_c_B->hi++) {
        ucie_sim_c_DW->obj_f.pPAMnSeed[ucie_sim_c_B->hi] = ucie_sim_c_B->
          seed31[ucie_sim_c_B->hi];
      }

      ucie_sim_c_B->dim = 0;
      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 16; ucie_sim_c_B->hi++) {
        ucie_sim_c_B->dim += ucie_sim_c_B->x1[ucie_sim_c_B->hi] *
          tmp_2[ucie_sim_c_B->hi];
      }

      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_f.privateMapToVoltage[(int32_T)
        rt_roundd_snf(3.0487525749599453E-5 * (real_T)ucie_sim_c_B->dim + 0.501)
        - 1];
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_f.privatePrevious;
    ucie_sim_c_DW->obj_f.pOddEven = !ucie_sim_c_DW->obj_f.pOddEven;
    ucie_sim_c_DW->obj_f.pSymbolCounter++;
    if (ucie_sim_c_B->b_y1 == ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
    } else {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pJitterValue;
      if (fabs(ucie_sim_c_B->ScaledPayload) < 2.2204460492503131E-16) {
        ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
      } else {
        ucie_sim_c_B->q = ucie_sim_c_B->b_y1 - ucie_sim_c_B->ndbl;
        ucie_sim_c_B->ScaledPayload = fabs(ucie_sim_c_B->q) /
          ucie_sim_c_DW->obj_f.pSymbolStep;
        if (ucie_sim_c_DW->obj_f.pJitterValue >= 0.0) {
          ucie_sim_c_B->cdiff = 2.0 * ucie_sim_c_B->ScaledPayload - 1.0;
          ucie_sim_c_B->q = ucie_sim_c_B->cdiff * ucie_sim_c_B->q / (2.0 *
            ucie_sim_c_B->ScaledPayload) + ucie_sim_c_B->ndbl;
          ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->cdiff / (2.0 *
            ucie_sim_c_B->ScaledPayload);
        } else {
          ucie_sim_c_B->q = ucie_sim_c_B->q / (2.0 * ucie_sim_c_B->ScaledPayload)
            + ucie_sim_c_B->ndbl;
          ucie_sim_c_B->ScaledPayload = 1.0 / (2.0 * ucie_sim_c_B->ScaledPayload);
        }

        ucie_sim_c_B->cdiff = (ucie_sim_c_DW->obj_f.pJitteredHalfCrossingTime -
          ucie_sim_c_DW->obj_f.pNextEdgeSampleIndex) + 0.5;
        ucie_sim_c_B->ScaledPayload += ucie_sim_c_B->cdiff;
        if (ucie_sim_c_B->ScaledPayload <= 1.0) {
          ucie_sim_c_B->ndbl += (ucie_sim_c_B->q - ucie_sim_c_B->ndbl) /
            ucie_sim_c_B->ScaledPayload;
        } else {
          ucie_sim_c_B->ndbl = (ucie_sim_c_B->b_y1 - ucie_sim_c_B->q) /
            (ucie_sim_c_B->ScaledPayload - 2.0) + ucie_sim_c_B->b_y1;
        }
      }
    }

    ucie_sim_c_DW->obj_f.privatePrevious = ucie_sim_c_B->b_y1;
    ucie_sim_c_B->b_y1 = 0.0;
    if (ucie_sim_c_DW->obj_f.pDj != 0.0) {
      ucie_sim_c_B->b_y1 = 2.0 * obj->pDj * (ucie_sim_c_rand_m(ucie_sim_c_DW) -
        0.5);
    }

    if (ucie_sim_c_DW->obj_f.pRj != 0.0) {
      ucie_sim_c_B->b_y1 += obj->pRj * ucie_sim_c_randn_m(ucie_sim_c_DW);
    }

    if (ucie_sim_c_DW->obj_f.pDCD != 0.0) {
      ucie_sim_c_B->rEQ0 = ucie_sim_c_DW->obj_f.pOddEven;
      ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_f.pDCD / 2.0 *
        ucie_sim_c_rt_powd_snf(-1.0, (real_T)ucie_sim_c_B->rEQ0, ucie_sim_c_B);
    }

    if (ucie_sim_c_DW->obj_f.pSj != 0.0) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pSymbolCounter *
        3.125E-11 * 2.0 * 3.1415926535897931 * 0.0;
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pSj * sin
        (ucie_sim_c_B->ScaledPayload);
      ucie_sim_c_B->b_y1 += ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_DW->obj_f.pJitterValue = ucie_sim_c_B->b_y1;
    ucie_sim_c_DW->obj_f.pIdealHalfCrossingTime +=
      ucie_sim_c_DW->obj_f.SamplesPerPeriod;
    ucie_sim_c_DW->obj_f.pJitteredHalfCrossingTime =
      ucie_sim_c_DW->obj_f.pIdealHalfCrossingTime +
      ucie_sim_c_DW->obj_f.pJitterValue;
    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pJitteredHalfCrossingTime;
    if (rt_roundd_snf(ucie_sim_c_B->ScaledPayload) <=
        ucie_sim_c_DW->obj_f.pNextEdgeSampleIndex) {
      ucie_sim_c_DW->obj_f.pJitteredHalfCrossingTime =
        ucie_sim_c_DW->obj_f.pNextEdgeSampleIndex + 2.0;
    }

    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_f.pJitteredHalfCrossingTime;
    ucie_sim_c_DW->obj_f.pNextEdgeSampleIndex = rt_roundd_snf
      (ucie_sim_c_B->ScaledPayload);
  } else {
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_f.privatePrevious;
  }

  ucie_sim_c_DW->obj_f.privateIndex++;

  /* MATLABSystem: '<S18>/StrobeStimulus' */
  ucie_sim_c_B->StrobeStimulus = ucie_sim_c_B->ndbl;

  /* Buffer: '<S18>/Buffer' */
  ucie_sim_c_B->stride = 1;
  ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_DW->Buffer_inBufPtrIdx_n;
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Buffer_inBufPtrIdx_n;
  if (ucie_sim_c_DW->Buffer_inBufPtrIdx_n > 255) {
    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
      ucie_sim_c_DW->Buffer_CircBuf_n[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize] = ucie_sim_c_B->StrobeStimulus;
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->lastBlockLength = 0;
    ucie_sim_c_B->stride = 1 - ucie_sim_c_B->nm1d2;
  }

  ucie_sim_c_B->coeffSize = 0;
  while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
    ucie_sim_c_DW->Buffer_CircBuf_n[ucie_sim_c_B->lastBlockLength +
      ucie_sim_c_B->coeffSize] = ucie_sim_c_B->StrobeStimulus;
    ucie_sim_c_B->coeffSize++;
  }

  ucie_sim_c_DW->Buffer_inBufPtrIdx_n++;
  if (ucie_sim_c_DW->Buffer_inBufPtrIdx_n >= 256) {
    ucie_sim_c_DW->Buffer_inBufPtrIdx_n -= 256;
  }

  ucie_sim_c_DW->Buffer_bufferLength_n++;
  if (ucie_sim_c_DW->Buffer_bufferLength_n > 256) {
    ucie_sim_c_DW->Buffer_outBufPtrIdx_d = (ucie_sim_c_DW->Buffer_outBufPtrIdx_d
      + ucie_sim_c_DW->Buffer_bufferLength_n) - 256;
    if (ucie_sim_c_DW->Buffer_outBufPtrIdx_d > 256) {
      ucie_sim_c_DW->Buffer_outBufPtrIdx_d -= 256;
    }

    ucie_sim_c_DW->Buffer_bufferLength_n = 256;
  }

  if (ucie_sim_c_B->b_nl) {
    ucie_sim_c_DW->Buffer_bufferLength_n -= 128;
    if (ucie_sim_c_DW->Buffer_bufferLength_n < 0) {
      ucie_sim_c_DW->Buffer_outBufPtrIdx_d +=
        ucie_sim_c_DW->Buffer_bufferLength_n;
      if (ucie_sim_c_DW->Buffer_outBufPtrIdx_d < 0) {
        ucie_sim_c_DW->Buffer_outBufPtrIdx_d += 256;
      }

      ucie_sim_c_DW->Buffer_bufferLength_n = 0;
    }

    ucie_sim_c_B->hi = 0;
    ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Buffer_outBufPtrIdx_d;
    ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_B->lastBlockLength;
    ucie_sim_c_B->stride = 128;
    if (ucie_sim_c_B->lastBlockLength > 128) {
      ucie_sim_c_B->coeffSize = 0;
      while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
        ucie_sim_c_B->Buffer_l[ucie_sim_c_B->coeffSize] =
          ucie_sim_c_DW->Buffer_CircBuf_n[ucie_sim_c_B->lastBlockLength +
          ucie_sim_c_B->coeffSize];
        ucie_sim_c_B->coeffSize++;
      }

      ucie_sim_c_B->hi = ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->stride = 128 - ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->lastBlockLength = 0;
    }

    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
      ucie_sim_c_B->Buffer_l[ucie_sim_c_B->hi + ucie_sim_c_B->coeffSize] =
        ucie_sim_c_DW->Buffer_CircBuf_n[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize];
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->lastBlockLength += ucie_sim_c_B->stride;
    if (ucie_sim_c_B->lastBlockLength == 256) {
      ucie_sim_c_B->lastBlockLength = 0;
    }

    ucie_sim_c_DW->Buffer_outBufPtrIdx_d = ucie_sim_c_B->lastBlockLength;

    /* DiscreteFir: '<S18>/Discrete FIR Filter' incorporates:
     *  Buffer: '<S18>/Buffer'
     */
    /* Reverse the coefficients */
    ucie_sim_c_B->b_y1 = ucie_sim_c_InstP->SampleInterval;
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 6651; ucie_sim_c_B->hi++) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_ConstP.pooled1[ucie_sim_c_B->hi];
      ucie_sim_c_B->ScaledPayload *= ucie_sim_c_B->b_y1;
      ucie_sim_c_B->a[ucie_sim_c_B->hi] = ucie_sim_c_B->ScaledPayload;
      ucie_sim_c_DW->DiscreteFIRFilter_simRevCoeff_k[6650 - ucie_sim_c_B->hi] =
        ucie_sim_c_B->a[ucie_sim_c_B->hi];
    }

    /* Reverse copy the states from States_Dwork to ContextBuff_Dwork */
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 6650; ucie_sim_c_B->hi++) {
      ucie_sim_c_DW->DiscreteFIRFilter_simContextBuf_b[6649 - ucie_sim_c_B->hi] =
        ucie_sim_c_DW->DiscreteFIRFilter_states_i[ucie_sim_c_B->hi];
    }

    /* Copy the initial part of input to ContextBuff_Dwork */
    memcpy(&ucie_sim_c_DW->DiscreteFIRFilter_simContextBuf_b[6650],
           &ucie_sim_c_B->Buffer_l[0], sizeof(real_T) << 7U);
    for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 128; ucie_sim_c_B->dim++) {
      ucie_sim_c_B->b_y1 = 0.0;
      for (ucie_sim_c_B->coeffSize = 0; ucie_sim_c_B->coeffSize < 6651;
           ucie_sim_c_B->coeffSize++) {
        ucie_sim_c_B->b_y1 += ucie_sim_c_DW->
          DiscreteFIRFilter_simContextBuf_b[ucie_sim_c_B->dim +
          ucie_sim_c_B->coeffSize] *
          ucie_sim_c_DW->DiscreteFIRFilter_simRevCoeff_k[ucie_sim_c_B->coeffSize];
      }

      /* store output sample */
      ucie_sim_c_B->DiscreteFIRFilter_a[ucie_sim_c_B->dim] = ucie_sim_c_B->b_y1;
    }

    /* Shift state buffer when input buffer is shorter than state buffer */
    ucie_sim_c_B->coeffSize = 6521;
    while (ucie_sim_c_B->coeffSize >= 0) {
      ucie_sim_c_DW->DiscreteFIRFilter_states_i[ucie_sim_c_B->coeffSize + 128] =
        ucie_sim_c_DW->DiscreteFIRFilter_states_i[ucie_sim_c_B->coeffSize];
      ucie_sim_c_B->coeffSize--;
    }

    /* Unbuffer: '<S18>/Unbuffer' incorporates:
     *  DiscreteFir: '<S18>/Discrete FIR Filter'
     */
    /* Reverse copy the states from input to States_Dwork */
    memcpy(&ucie_sim_c_DW->Unbuffer_CircBuff_c[0],
           &ucie_sim_c_B->DiscreteFIRFilter_a[0], sizeof(real_T) << 7U);
    for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 128; ucie_sim_c_B->hi++) {
      /* DiscreteFir: '<S18>/Discrete FIR Filter' incorporates:
       *  Buffer: '<S18>/Buffer'
       */
      ucie_sim_c_DW->DiscreteFIRFilter_states_i[127 - ucie_sim_c_B->hi] =
        ucie_sim_c_B->Buffer_l[ucie_sim_c_B->hi];
    }

    /* Unbuffer: '<S18>/Unbuffer' */
    ucie_sim_c_DW->Unbuffer_memIdx_e = 0;
  }

  /* Unbuffer: '<S18>/Unbuffer' */
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Unbuffer_memIdx_e;

  /* Unbuffer: '<S18>/Unbuffer' */
  ucie_sim_c_B->Unbuffer_b = ucie_sim_c_DW->Unbuffer_CircBuff_c
    [ucie_sim_c_B->lastBlockLength];

  /* Unbuffer: '<S18>/Unbuffer' */
  if (ucie_sim_c_DW->Unbuffer_memIdx_e < 127) {
    ucie_sim_c_DW->Unbuffer_memIdx_e++;
  }

  /* Buffer: '<S18>/Buffer1' */
  ucie_sim_c_B->stride = 1;
  ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_DW->Buffer1_inBufPtrIdx;
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Buffer1_inBufPtrIdx;
  if (ucie_sim_c_DW->Buffer1_inBufPtrIdx > 255) {
    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
      ucie_sim_c_DW->Buffer1_CircBuf[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize] = ucie_sim_c_B->StrobeStimulus;
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->lastBlockLength = 0;
    ucie_sim_c_B->stride = 1 - ucie_sim_c_B->nm1d2;
  }

  ucie_sim_c_B->coeffSize = 0;
  while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
    ucie_sim_c_DW->Buffer1_CircBuf[ucie_sim_c_B->lastBlockLength +
      ucie_sim_c_B->coeffSize] = ucie_sim_c_B->StrobeStimulus;
    ucie_sim_c_B->coeffSize++;
  }

  ucie_sim_c_DW->Buffer1_inBufPtrIdx++;
  if (ucie_sim_c_DW->Buffer1_inBufPtrIdx >= 256) {
    ucie_sim_c_DW->Buffer1_inBufPtrIdx -= 256;
  }

  ucie_sim_c_DW->Buffer1_bufferLength++;
  if (ucie_sim_c_DW->Buffer1_bufferLength > 256) {
    ucie_sim_c_DW->Buffer1_outBufPtrIdx = (ucie_sim_c_DW->Buffer1_outBufPtrIdx +
      ucie_sim_c_DW->Buffer1_bufferLength) - 256;
    if (ucie_sim_c_DW->Buffer1_outBufPtrIdx > 256) {
      ucie_sim_c_DW->Buffer1_outBufPtrIdx -= 256;
    }

    ucie_sim_c_DW->Buffer1_bufferLength = 256;
  }

  if (ucie_sim_c_B->b_nl) {
    ucie_sim_c_DW->Buffer1_bufferLength -= 128;
    if (ucie_sim_c_DW->Buffer1_bufferLength < 0) {
      ucie_sim_c_DW->Buffer1_outBufPtrIdx += ucie_sim_c_DW->Buffer1_bufferLength;
      if (ucie_sim_c_DW->Buffer1_outBufPtrIdx < 0) {
        ucie_sim_c_DW->Buffer1_outBufPtrIdx += 256;
      }

      ucie_sim_c_DW->Buffer1_bufferLength = 0;
    }

    ucie_sim_c_B->hi = 0;
    ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Buffer1_outBufPtrIdx;
    ucie_sim_c_B->nm1d2 = 256 - ucie_sim_c_B->lastBlockLength;
    ucie_sim_c_B->stride = 128;
    if (ucie_sim_c_B->lastBlockLength > 128) {
      ucie_sim_c_B->coeffSize = 0;
      while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->nm1d2) {
        ucie_sim_c_B->Buffer1[ucie_sim_c_B->coeffSize] =
          ucie_sim_c_DW->Buffer1_CircBuf[ucie_sim_c_B->lastBlockLength +
          ucie_sim_c_B->coeffSize];
        ucie_sim_c_B->coeffSize++;
      }

      ucie_sim_c_B->hi = ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->stride = 128 - ucie_sim_c_B->nm1d2;
      ucie_sim_c_B->lastBlockLength = 0;
    }

    ucie_sim_c_B->coeffSize = 0;
    while (ucie_sim_c_B->coeffSize < ucie_sim_c_B->stride) {
      ucie_sim_c_B->Buffer1[ucie_sim_c_B->hi + ucie_sim_c_B->coeffSize] =
        ucie_sim_c_DW->Buffer1_CircBuf[ucie_sim_c_B->lastBlockLength +
        ucie_sim_c_B->coeffSize];
      ucie_sim_c_B->coeffSize++;
    }

    ucie_sim_c_B->lastBlockLength += ucie_sim_c_B->stride;
    if (ucie_sim_c_B->lastBlockLength == 256) {
      ucie_sim_c_B->lastBlockLength = 0;
    }

    ucie_sim_c_DW->Buffer1_outBufPtrIdx = ucie_sim_c_B->lastBlockLength;

    /* Unbuffer: '<S18>/Unbuffer1' incorporates:
     *  Buffer: '<S18>/Buffer1'
     */
    memcpy(&ucie_sim_c_DW->Unbuffer1_CircBuff[0], &ucie_sim_c_B->Buffer1[0],
           sizeof(real_T) << 7U);
    ucie_sim_c_DW->Unbuffer1_memIdx = 0;
  }

  /* Unbuffer: '<S18>/Unbuffer1' */
  ucie_sim_c_B->lastBlockLength = ucie_sim_c_DW->Unbuffer1_memIdx;

  /* Unbuffer: '<S18>/Unbuffer1' */
  ucie_sim_c_B->Unbuffer1 = ucie_sim_c_DW->Unbuffer1_CircBuff
    [ucie_sim_c_B->lastBlockLength];

  /* Unbuffer: '<S18>/Unbuffer1' */
  if (ucie_sim_c_DW->Unbuffer1_memIdx < 127) {
    ucie_sim_c_DW->Unbuffer1_memIdx++;
  }

  /* Switch: '<S18>/Switch' */
  ucie_sim_c_B->Switch = ucie_sim_c_B->Unbuffer_b;

  /* MATLAB Function: '<S18>/ClockTimesGenerator' incorporates:
   *  Constant: '<S18>/clockTimesIn'
   */
  if (!ucie_sim_c_DW->samplesElapsed_not_empty) {
    ucie_sim_c_DW->samplesElapsed_not_empty = true;
    memcpy(&ucie_sim_c_DW->clock[0], &ucie_sim_c_ConstP.clockTimesIn_Value[0],
           640002U * sizeof(real_T));
    ucie_sim_c_DW->previousSample = ucie_sim_c_B->Switch;
  }

  ucie_sim_c_B->b_y1 = ucie_sim_c_DW->temp_ClockTimesOut;
  ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->samplesElapsed *
    ucie_sim_c_InstP->SampleInterval;
  if ((ucie_sim_c_DW->clockStart == 0.0) && (fabs(ucie_sim_c_B->Switch) > 0.005))
  {
    ucie_sim_c_DW->clockStart = 1.0;
  }

  if ((ucie_sim_c_DW->clockStart == 1.0) && (ucie_sim_c_DW->samplesElapsed > 1.0))
  {
    ucie_sim_c_B->q = ucie_sim_c_B->Switch;
    if (rtIsNaN(ucie_sim_c_B->q)) {
      ucie_sim_c_B->ndbl = (rtNaN);
    } else if (ucie_sim_c_B->q < 0.0) {
      ucie_sim_c_B->ndbl = -1.0;
    } else {
      ucie_sim_c_B->ndbl = (ucie_sim_c_B->q > 0.0);
    }

    ucie_sim_c_B->q = ucie_sim_c_DW->previousSample;
    if (rtIsNaN(ucie_sim_c_B->q)) {
      ucie_sim_c_B->q = (rtNaN);
    } else if (ucie_sim_c_B->q < 0.0) {
      ucie_sim_c_B->q = -1.0;
    } else {
      ucie_sim_c_B->q = (ucie_sim_c_B->q > 0.0);
    }

    if (ucie_sim_c_B->ndbl != ucie_sim_c_B->q) {
      ucie_sim_c_B->b_y1 = ucie_sim_c_B->ScaledPayload;
    }
  }

  ucie_sim_c_DW->samplesElapsed++;
  ucie_sim_c_DW->previousSample = ucie_sim_c_B->Switch;
  ucie_sim_c_DW->temp_ClockTimesOut = ucie_sim_c_B->b_y1;
  ucie_sim_c_B->ClockTimesOut = ucie_sim_c_B->b_y1;

  /* End of MATLAB Function: '<S18>/ClockTimesGenerator' */

  /* DataStoreWrite: '<S18>/Forward Clock Times' */
  ucie_sim_c_DW->ExternalClockTimesIn = ucie_sim_c_B->ClockTimesOut;

  /* MATLABSystem: '<S18>/MATLAB System' incorporates:
   *  MATLABSystem: '<S18>/StrobeStimulus'
   */
  obj = &ucie_sim_c_DW->obj_l;
  if (ucie_sim_c_DW->obj_l.privateSourceFlag == 3.0) {
    if (ucie_sim_c_DW->obj_l.privateDataIndex <= 0.0) {
      ucie_sim_c_B->ndbl = 0.0;
      ucie_sim_c_DW->obj_l.privateDataIndex++;
    } else {
      ucie_sim_c_B->ndbl = tmp[(int32_T)ucie_sim_c_DW->obj_l.privateDataIndex -
        1];
      ucie_sim_c_DW->obj_l.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_l.privateDataIndex,
         ucie_sim_c_DW->obj_l.privateLength) + 1.0;
    }
  } else if (ucie_sim_c_DW->obj_l.privateIndex ==
             ucie_sim_c_DW->obj_l.pNextEdgeSampleIndex) {
    if (ucie_sim_c_DW->obj_l.privateSourceFlag == 2.0) {
      ucie_sim_c_B->b_y1 = tmp_0[(int32_T)ucie_sim_c_DW->obj_l.privateDataIndex
        - 1];
      ucie_sim_c_DW->obj_l.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_l.privateDataIndex,
         ucie_sim_c_DW->obj_l.privateLength) + 1.0;
    } else if (ucie_sim_c_DW->obj_l.privateSourceFlag == 1.0) {
      ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
      binaryValues->size[0] = 1;
      ucie_sim_c_B->firstBlockLength = (int32_T)ucie_sim_c_DW->obj_l.privateM;
      binaryValues->size[1] = ucie_sim_c_B->firstBlockLength;
      ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
        ucie_sim_c_B);
      if (ucie_sim_c_B->firstBlockLength - 1 >= 0) {
        memset(&binaryValues->data[0], 0, (uint32_T)
               ucie_sim_c_B->firstBlockLength * sizeof(real_T));
      }

      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 <
           ucie_sim_c_B->firstBlockLength; ucie_sim_c_B->nm1d2++) {
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.privateOrder->
          data[ucie_sim_c_B->nm1d2];
        if (ucie_sim_c_B->b_y1 < 1.0) {
          ucie_sim_c_B->dim = 0;
        } else {
          ucie_sim_c_B->dim = (int32_T)ucie_sim_c_B->b_y1;
        }

        ucie_sim_c_B->stride = PayloadBinary->size[0] * PayloadBinary->size[1];
        PayloadBinary->size[0] = 1;
        PayloadBinary->size[1] = ucie_sim_c_B->dim;
        ucie_sim_c_emxEnsureCapacity_real_T(PayloadBinary, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          PayloadBinary->data[ucie_sim_c_B->hi] =
            ucie_sim_c_DW->obj_l.privateSeed->data
            [ucie_sim_c_DW->obj_l.privateSeed->size[0] * ucie_sim_c_B->hi +
            ucie_sim_c_B->nm1d2];
        }

        ucie_sim_c_B->b_y1 = ucie_sim_c_prbs(ucie_sim_c_DW->
          obj_l.privateOrder->data[ucie_sim_c_B->nm1d2], PayloadBinary,
          ucie_sim_c_B);
        binaryValues->data[ucie_sim_c_B->nm1d2] = ucie_sim_c_B->b_y1;
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.privateOrder->
          data[ucie_sim_c_B->nm1d2];
        if (ucie_sim_c_B->b_y1 < 1.0) {
          ucie_sim_c_B->coeffSize = 0;
        } else {
          ucie_sim_c_B->coeffSize = (int32_T)ucie_sim_c_B->b_y1;
        }

        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->coeffSize;
             ucie_sim_c_B->hi++) {
          ucie_sim_c_DW->obj_l.privateSeed->data[ucie_sim_c_B->nm1d2 +
            ucie_sim_c_DW->obj_l.privateSeed->size[0] * ucie_sim_c_B->hi] =
            PayloadBinary->data[ucie_sim_c_B->hi];
        }
      }

      if (binaryValues->size[1] == ucie_sim_c_DW->
          obj_l.privateBinaryPowers->size[1]) {
        ucie_sim_c_B->dim = binaryValues->size[1] - 1;
        ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
        binaryValues->size[0] = 1;
        ucie_sim_c_emxEnsureCapacity_real_T(binaryValues, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          binaryValues->data[ucie_sim_c_B->hi] *=
            ucie_sim_c_DW->obj_l.privateBinaryPowers->data[ucie_sim_c_B->hi];
        }
      } else {
        ucie_sim_c_binary_expand_op(binaryValues, &ucie_sim_c_DW->obj_l,
          ucie_sim_c_B);
      }

      if (binaryValues->size[1] == 0) {
        ucie_sim_c_B->b_y1 = 0.0;
      } else {
        if (binaryValues->size[1] <= 1024) {
          ucie_sim_c_B->firstBlockLength = binaryValues->size[1];
          ucie_sim_c_B->lastBlockLength = 0;
          ucie_sim_c_B->nm1d2 = 1;
        } else {
          ucie_sim_c_B->firstBlockLength = 1024;
          ucie_sim_c_B->nm1d2 = (int32_T)((uint32_T)binaryValues->size[1] >> 10);
          ucie_sim_c_B->lastBlockLength = binaryValues->size[1] -
            (ucie_sim_c_B->nm1d2 << 10);
          if (ucie_sim_c_B->lastBlockLength > 0) {
            ucie_sim_c_B->nm1d2++;
          } else {
            ucie_sim_c_B->lastBlockLength = 1024;
          }
        }

        ucie_sim_c_B->b_y1 = binaryValues->data[0];
        for (ucie_sim_c_B->dim = 2; ucie_sim_c_B->dim <=
             ucie_sim_c_B->firstBlockLength; ucie_sim_c_B->dim++) {
          ucie_sim_c_B->b_y1 += binaryValues->data[ucie_sim_c_B->dim - 1];
        }

        for (ucie_sim_c_B->dim = 2; ucie_sim_c_B->dim <= ucie_sim_c_B->nm1d2;
             ucie_sim_c_B->dim++) {
          ucie_sim_c_B->stride = (ucie_sim_c_B->dim - 1) << 10;
          ucie_sim_c_B->ScaledPayload = binaryValues->data[ucie_sim_c_B->stride];
          if (ucie_sim_c_B->dim == ucie_sim_c_B->nm1d2) {
            ucie_sim_c_B->hi = ucie_sim_c_B->lastBlockLength;
          } else {
            ucie_sim_c_B->hi = 1024;
          }

          for (ucie_sim_c_B->firstBlockLength = 2;
               ucie_sim_c_B->firstBlockLength <= ucie_sim_c_B->hi;
               ucie_sim_c_B->firstBlockLength++) {
            ucie_sim_c_B->ScaledPayload += binaryValues->data
              [(ucie_sim_c_B->stride + ucie_sim_c_B->firstBlockLength) - 1];
          }

          ucie_sim_c_B->b_y1 += ucie_sim_c_B->ScaledPayload;
        }
      }

      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.privateMapToVoltage[(int32_T)
        (ucie_sim_c_B->b_y1 + 1.0) - 1];
    } else if ((ucie_sim_c_DW->obj_l.privateSourceFlag == 5.0) ||
               (ucie_sim_c_DW->obj_l.privateSourceFlag == 6.0)) {
      if (ucie_sim_c_DW->obj_l.FIFOPosition == 1.0) {
        if (ucie_sim_c_DW->obj_l.privateSourceFlag == 5.0) {
          ucie_sim_c_B->hi = ucie_sim_c_DW->obj_l.privateSeed->size[0];
          ucie_sim_c_B->stride = seedIn->size[0] * seedIn->size[1];
          seedIn->size[0] = ucie_sim_c_B->hi;
          ucie_sim_c_B->hi = ucie_sim_c_DW->obj_l.privateSeed->size[1];
          seedIn->size[1] = ucie_sim_c_B->hi;
          ucie_sim_c_emxEnsureCapacity_real_T(seedIn, ucie_sim_c_B->stride,
            ucie_sim_c_B);
          ucie_sim_c_B->nm1d2 = ucie_sim_c_DW->obj_l.privateSeed->size[0] *
            ucie_sim_c_DW->obj_l.privateSeed->size[1];
          for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->nm1d2;
               ucie_sim_c_B->hi++) {
            seedIn->data[ucie_sim_c_B->hi] = ucie_sim_c_DW->
              obj_l.privateSeed->data[ucie_sim_c_B->hi];
          }

          ucie_sim_c_prbs_m(ucie_sim_c_DW->obj_l.privateOrder,
                            ucie_sim_c_DW->obj_l.pPayloadLength, seedIn,
                            PayloadBinary, ucie_sim_c_B);
          ucie_sim_c_B->stride = ucie_sim_c_DW->obj_l.privateSeed->size[0] *
            ucie_sim_c_DW->obj_l.privateSeed->size[1];
          ucie_sim_c_DW->obj_l.privateSeed->size[0] = seedIn->size[0];
          ucie_sim_c_DW->obj_l.privateSeed->size[1] = seedIn->size[1];
          ucie_sim_c_emxEnsureCapacity_real_T(ucie_sim_c_DW->obj_l.privateSeed,
            ucie_sim_c_B->stride, ucie_sim_c_B);
          ucie_sim_c_B->nm1d2 = seedIn->size[0] * seedIn->size[1];
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < ucie_sim_c_B->nm1d2;
               ucie_sim_c_B->dim++) {
            ucie_sim_c_DW->obj_l.privateSeed->data[ucie_sim_c_B->dim] =
              seedIn->data[ucie_sim_c_B->dim];
          }
        } else {
          ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.pBinaryIndex;
          ucie_sim_c_B->ScaledPayload = (ucie_sim_c_DW->obj_l.pBinaryIndex +
            ucie_sim_c_DW->obj_l.pPayloadLength) - 1.0;
          if (rtIsNaN(ucie_sim_c_B->b_y1) || rtIsNaN(ucie_sim_c_B->ScaledPayload))
          {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            binaryValues->data[0] = (rtNaN);
          } else if (ucie_sim_c_B->ScaledPayload < ucie_sim_c_B->b_y1) {
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 0;
          } else if ((rtIsInf(ucie_sim_c_B->b_y1) || rtIsInf
                      (ucie_sim_c_B->ScaledPayload)) && (ucie_sim_c_B->b_y1 ==
                      ucie_sim_c_B->ScaledPayload)) {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            binaryValues->data[0] = (rtNaN);
          } else if (floor(ucie_sim_c_B->b_y1) == ucie_sim_c_B->b_y1) {
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            ucie_sim_c_B->dim = (int32_T)(ucie_sim_c_B->ScaledPayload -
              ucie_sim_c_B->b_y1);
            binaryValues->size[1] = ucie_sim_c_B->dim + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi <= ucie_sim_c_B->dim;
                 ucie_sim_c_B->hi++) {
              binaryValues->data[ucie_sim_c_B->hi] = ucie_sim_c_B->b_y1 +
                (real_T)ucie_sim_c_B->hi;
            }
          } else {
            ucie_sim_c_B->ndbl = floor((ucie_sim_c_B->ScaledPayload -
              ucie_sim_c_B->b_y1) + 0.5);
            ucie_sim_c_B->q = ucie_sim_c_B->b_y1 + ucie_sim_c_B->ndbl;
            ucie_sim_c_B->cdiff = ucie_sim_c_B->q - ucie_sim_c_B->ScaledPayload;
            if (fabs(ucie_sim_c_B->cdiff) < 4.4408920985006262E-16 * fmax(fabs
                 (ucie_sim_c_B->b_y1), fabs(ucie_sim_c_B->ScaledPayload))) {
              ucie_sim_c_B->ndbl++;
              ucie_sim_c_B->q = ucie_sim_c_B->ScaledPayload;
            } else if (ucie_sim_c_B->cdiff > 0.0) {
              ucie_sim_c_B->q = (ucie_sim_c_B->ndbl - 1.0) + ucie_sim_c_B->b_y1;
            } else {
              ucie_sim_c_B->ndbl++;
            }

            if (ucie_sim_c_B->ndbl >= 0.0) {
              ucie_sim_c_B->hi = (int32_T)ucie_sim_c_B->ndbl;
            } else {
              ucie_sim_c_B->hi = 0;
            }

            ucie_sim_c_B->coeffSize = ucie_sim_c_B->hi - 1;
            ucie_sim_c_B->stride = binaryValues->size[0] * binaryValues->size[1];
            binaryValues->size[0] = 1;
            binaryValues->size[1] = ucie_sim_c_B->coeffSize + 1;
            ucie_sim_c_emxEnsureCapacity_real_T(binaryValues,
              ucie_sim_c_B->stride, ucie_sim_c_B);
            if (ucie_sim_c_B->coeffSize + 1 > 0) {
              binaryValues->data[0] = ucie_sim_c_B->b_y1;
              if (ucie_sim_c_B->coeffSize + 1 > 1) {
                binaryValues->data[ucie_sim_c_B->coeffSize] = ucie_sim_c_B->q;
                ucie_sim_c_B->nm1d2 = (int32_T)((uint32_T)
                  ucie_sim_c_B->coeffSize >> 1);
                ucie_sim_c_B->lastBlockLength = ucie_sim_c_B->nm1d2 - 2;
                for (ucie_sim_c_B->firstBlockLength = 0;
                     ucie_sim_c_B->firstBlockLength <=
                     ucie_sim_c_B->lastBlockLength;
                     ucie_sim_c_B->firstBlockLength++) {
                  ucie_sim_c_B->dim = ucie_sim_c_B->firstBlockLength + 1;
                  binaryValues->data[ucie_sim_c_B->dim] = ucie_sim_c_B->b_y1 +
                    (real_T)ucie_sim_c_B->dim;
                  binaryValues->data[ucie_sim_c_B->coeffSize - ucie_sim_c_B->dim]
                    = ucie_sim_c_B->q - (real_T)ucie_sim_c_B->dim;
                }

                if (ucie_sim_c_B->nm1d2 << 1 == ucie_sim_c_B->coeffSize) {
                  binaryValues->data[ucie_sim_c_B->nm1d2] = (ucie_sim_c_B->b_y1
                    + ucie_sim_c_B->q) / 2.0;
                } else {
                  binaryValues->data[ucie_sim_c_B->nm1d2] = ucie_sim_c_B->b_y1 +
                    (real_T)ucie_sim_c_B->nm1d2;
                  binaryValues->data[ucie_sim_c_B->nm1d2 + 1] = ucie_sim_c_B->q
                    - (real_T)ucie_sim_c_B->nm1d2;
                }
              }
            }
          }

          ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.pBinaryLength;
          ucie_sim_c_B->stride = PayloadBinary->size[0] * PayloadBinary->size[1];
          PayloadBinary->size[0] = 1;
          ucie_sim_c_B->dim = binaryValues->size[1];
          PayloadBinary->size[1] = ucie_sim_c_B->dim;
          ucie_sim_c_emxEnsureCapacity_real_T(PayloadBinary,
            ucie_sim_c_B->stride, ucie_sim_c_B);
          for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
               ucie_sim_c_B->hi++) {
            ucie_sim_c_B->q = binaryValues->data[ucie_sim_c_B->hi] - 1.0;
            ucie_sim_c_B->ndbl = ucie_sim_c_B->q;
            if (ucie_sim_c_B->b_y1 == 0.0) {
              if (ucie_sim_c_B->q == 0.0) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
              }
            } else if (rtIsNaN(ucie_sim_c_B->q) || rtIsNaN(ucie_sim_c_B->b_y1) ||
                       rtIsInf(ucie_sim_c_B->q)) {
              ucie_sim_c_B->ndbl = (rtNaN);
            } else if (ucie_sim_c_B->q == 0.0) {
              ucie_sim_c_B->ndbl = 0.0 / ucie_sim_c_B->b_y1;
            } else if (rtIsInf(ucie_sim_c_B->b_y1)) {
              if ((ucie_sim_c_B->b_y1 < 0.0) != (ucie_sim_c_B->q < 0.0)) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
              }
            } else {
              ucie_sim_c_B->ndbl = fmod(ucie_sim_c_B->q, ucie_sim_c_B->b_y1);
              ucie_sim_c_B->rEQ0 = (ucie_sim_c_B->ndbl == 0.0);
              if ((!ucie_sim_c_B->rEQ0) && (ucie_sim_c_B->b_y1 > floor
                   (ucie_sim_c_B->b_y1))) {
                ucie_sim_c_B->q = fabs(ucie_sim_c_B->q / ucie_sim_c_B->b_y1);
                ucie_sim_c_B->rEQ0 = !(fabs(ucie_sim_c_B->q - floor
                  (ucie_sim_c_B->q + 0.5)) > 2.2204460492503131E-16 *
                  ucie_sim_c_B->q);
              }

              if (ucie_sim_c_B->rEQ0) {
                ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1 * 0.0;
              } else if (((ucie_sim_c_B->ndbl < 0.0) && (!(ucie_sim_c_B->b_y1 <
                            0.0))) || ((!(ucie_sim_c_B->ndbl < 0.0)) &&
                          (ucie_sim_c_B->b_y1 < 0.0))) {
                ucie_sim_c_B->ndbl += ucie_sim_c_B->b_y1;
              }
            }

            PayloadBinary->data[ucie_sim_c_B->hi] = tmp_3[(int32_T)
              (ucie_sim_c_B->ndbl + 1.0) - 1];
          }

          ucie_sim_c_DW->obj_l.pBinaryIndex = ucie_sim_c_mod_m
            (ucie_sim_c_B->ScaledPayload, ucie_sim_c_DW->obj_l.pBinaryLength) +
            1.0;
        }

        ucie_sim_c_B->dim = ucie_sim_c_DW->obj_l.PowersOf2->size[0];
        ucie_sim_c_B->stride = b->size[0];
        b->size[0] = ucie_sim_c_B->dim;
        ucie_sim_c_emxEnsureCapacity_real_T(b, ucie_sim_c_B->stride,
          ucie_sim_c_B);
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          b->data[ucie_sim_c_B->hi] = ucie_sim_c_DW->obj_l.PowersOf2->
            data[ucie_sim_c_B->hi];
        }

        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.pMessageLength;
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pPayloadLength;
        ucie_sim_c_B->ScaledPayload = ucie_sim_c_rt_powd_snf(2.0,
          ucie_sim_c_B->ScaledPayload, ucie_sim_c_B);
        ucie_sim_c_B->ndbl = 0.0;
        ucie_sim_c_B->dim = PayloadBinary->size[1];
        for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < ucie_sim_c_B->dim;
             ucie_sim_c_B->hi++) {
          ucie_sim_c_B->ndbl += PayloadBinary->data[ucie_sim_c_B->hi] * b->
            data[ucie_sim_c_B->hi];
        }

        ucie_sim_c_B->ScaledPayload = ((ucie_sim_c_rt_powd_snf(2.0,
          ucie_sim_c_B->b_y1, ucie_sim_c_B) - ucie_sim_c_B->ScaledPayload) /
          ucie_sim_c_B->ScaledPayload + 1.0) * ucie_sim_c_B->ndbl;
        ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.pMessageLength - 1.0;
        ucie_sim_c_B->lastBlockLength = (int32_T)(ucie_sim_c_B->b_y1 + 1.0);
        for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim <
             ucie_sim_c_B->lastBlockLength; ucie_sim_c_B->dim++) {
          ucie_sim_c_B->b_y1 = rt_roundd_snf(ucie_sim_c_B->ScaledPayload);
          if (rtIsNaN(ucie_sim_c_B->b_y1) || rtIsInf(ucie_sim_c_B->b_y1)) {
            ucie_sim_c_B->b_y1 = (rtNaN);
          } else if (ucie_sim_c_B->b_y1 == 0.0) {
            ucie_sim_c_B->b_y1 = 0.0;
          } else {
            ucie_sim_c_B->b_y1 = fmod(ucie_sim_c_B->b_y1, 2.0);
            if (ucie_sim_c_B->b_y1 == 0.0) {
              ucie_sim_c_B->b_y1 = 0.0;
            } else if (ucie_sim_c_B->b_y1 < 0.0) {
              ucie_sim_c_B->b_y1 += 2.0;
            }
          }

          ucie_sim_c_DW->obj_l.SymbolFIFO->data[(int32_T)
            (ucie_sim_c_DW->obj_l.pMessageLength - (real_T)ucie_sim_c_B->dim) -
            1] = ucie_sim_c_B->b_y1;
          ucie_sim_c_B->ScaledPayload = (ucie_sim_c_B->ScaledPayload -
            ucie_sim_c_DW->obj_l.SymbolFIFO->data[(int32_T)
            (ucie_sim_c_DW->obj_l.pMessageLength - (real_T)ucie_sim_c_B->dim) -
            1]) / 2.0;
        }

        ucie_sim_c_DW->obj_l.FIFOPosition = ucie_sim_c_DW->obj_l.pMessageLength
          + 1.0;
      }

      ucie_sim_c_DW->obj_l.FIFOPosition--;
      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.SymbolFIFO->data[(int32_T)
        ucie_sim_c_DW->obj_l.FIFOPosition - 1] - 0.5;
    } else if (ucie_sim_c_DW->obj_l.privateSourceFlag == 7.0) {
      ucie_sim_c_B->b_y1 = (real_T)tmp_4[(int32_T)
        ucie_sim_c_DW->obj_l.privateDataIndex - 1] + 1.0;
      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.privateMapToVoltage[(int32_T)
        ucie_sim_c_B->b_y1 - 1];
      ucie_sim_c_DW->obj_l.privateDataIndex = ucie_sim_c_mod_m
        (ucie_sim_c_DW->obj_l.privateDataIndex,
         ucie_sim_c_DW->obj_l.privateLength) + 1.0;
    } else {
      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 31; ucie_sim_c_B->hi++) {
        ucie_sim_c_B->seed31[ucie_sim_c_B->hi] = ucie_sim_c_DW->
          obj_l.pPAMnSeed[ucie_sim_c_B->hi];
      }

      for (ucie_sim_c_B->nm1d2 = 0; ucie_sim_c_B->nm1d2 < 16;
           ucie_sim_c_B->nm1d2++) {
        if (ucie_sim_c_B->seed31[0]) {
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 30; ucie_sim_c_B->dim
               ++) {
            ucie_sim_c_B->hi = tmp_1[ucie_sim_c_B->dim];
            ucie_sim_c_B->coeffSize = ucie_sim_c_B->seed31[ucie_sim_c_B->dim + 1];
            ucie_sim_c_B->seed31[ucie_sim_c_B->dim] = ((ucie_sim_c_B->coeffSize
              + ucie_sim_c_B->hi) - (ucie_sim_c_B->coeffSize << 1) *
              ucie_sim_c_B->hi != 0);
          }

          ucie_sim_c_B->seed31[30] = true;
        } else {
          for (ucie_sim_c_B->dim = 0; ucie_sim_c_B->dim < 30; ucie_sim_c_B->dim
               ++) {
            ucie_sim_c_B->seed31[ucie_sim_c_B->dim] = ucie_sim_c_B->
              seed31[ucie_sim_c_B->dim + 1];
          }

          ucie_sim_c_B->seed31[30] = false;
        }

        ucie_sim_c_B->x1[ucie_sim_c_B->nm1d2] = (int8_T)ucie_sim_c_B->seed31[0];
      }

      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 31; ucie_sim_c_B->hi++) {
        ucie_sim_c_DW->obj_l.pPAMnSeed[ucie_sim_c_B->hi] = ucie_sim_c_B->
          seed31[ucie_sim_c_B->hi];
      }

      ucie_sim_c_B->dim = 0;
      for (ucie_sim_c_B->hi = 0; ucie_sim_c_B->hi < 16; ucie_sim_c_B->hi++) {
        ucie_sim_c_B->dim += ucie_sim_c_B->x1[ucie_sim_c_B->hi] *
          tmp_2[ucie_sim_c_B->hi];
      }

      ucie_sim_c_B->b_y1 = ucie_sim_c_DW->obj_l.privateMapToVoltage[(int32_T)
        rt_roundd_snf(3.0487525749599453E-5 * (real_T)ucie_sim_c_B->dim + 0.501)
        - 1];
    }

    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_l.privatePrevious;
    ucie_sim_c_DW->obj_l.pOddEven = !ucie_sim_c_DW->obj_l.pOddEven;
    ucie_sim_c_DW->obj_l.pSymbolCounter++;
    if (ucie_sim_c_B->b_y1 == ucie_sim_c_B->ndbl) {
      ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
    } else {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pJitterValue;
      if (fabs(ucie_sim_c_B->ScaledPayload) < 2.2204460492503131E-16) {
        ucie_sim_c_B->ndbl = ucie_sim_c_B->b_y1;
      } else {
        ucie_sim_c_B->q = ucie_sim_c_B->b_y1 - ucie_sim_c_B->ndbl;
        ucie_sim_c_B->ScaledPayload = fabs(ucie_sim_c_B->q) /
          ucie_sim_c_DW->obj_l.pSymbolStep;
        if (ucie_sim_c_DW->obj_l.pJitterValue >= 0.0) {
          ucie_sim_c_B->cdiff = 2.0 * ucie_sim_c_B->ScaledPayload - 1.0;
          ucie_sim_c_B->q = ucie_sim_c_B->cdiff * ucie_sim_c_B->q / (2.0 *
            ucie_sim_c_B->ScaledPayload) + ucie_sim_c_B->ndbl;
          ucie_sim_c_B->ScaledPayload = ucie_sim_c_B->cdiff / (2.0 *
            ucie_sim_c_B->ScaledPayload);
        } else {
          ucie_sim_c_B->q = ucie_sim_c_B->q / (2.0 * ucie_sim_c_B->ScaledPayload)
            + ucie_sim_c_B->ndbl;
          ucie_sim_c_B->ScaledPayload = 1.0 / (2.0 * ucie_sim_c_B->ScaledPayload);
        }

        ucie_sim_c_B->cdiff = (ucie_sim_c_DW->obj_l.pJitteredHalfCrossingTime -
          ucie_sim_c_DW->obj_l.pNextEdgeSampleIndex) + 0.5;
        ucie_sim_c_B->ScaledPayload += ucie_sim_c_B->cdiff;
        if (ucie_sim_c_B->ScaledPayload <= 1.0) {
          ucie_sim_c_B->ndbl += (ucie_sim_c_B->q - ucie_sim_c_B->ndbl) /
            ucie_sim_c_B->ScaledPayload;
        } else {
          ucie_sim_c_B->ndbl = (ucie_sim_c_B->b_y1 - ucie_sim_c_B->q) /
            (ucie_sim_c_B->ScaledPayload - 2.0) + ucie_sim_c_B->b_y1;
        }
      }
    }

    ucie_sim_c_DW->obj_l.privatePrevious = ucie_sim_c_B->b_y1;
    ucie_sim_c_B->b_y1 = 0.0;
    if (ucie_sim_c_DW->obj_l.pDj != 0.0) {
      ucie_sim_c_B->b_y1 = 2.0 * obj->pDj * (ucie_sim_c_rand(ucie_sim_c_DW) -
        0.5);
    }

    if (ucie_sim_c_DW->obj_l.pRj != 0.0) {
      ucie_sim_c_B->b_y1 += obj->pRj * ucie_sim_c_randn(ucie_sim_c_DW);
    }

    if (ucie_sim_c_DW->obj_l.pDCD != 0.0) {
      ucie_sim_c_B->rEQ0 = ucie_sim_c_DW->obj_l.pOddEven;
      ucie_sim_c_B->b_y1 += ucie_sim_c_DW->obj_l.pDCD / 2.0 *
        ucie_sim_c_rt_powd_snf(-1.0, (real_T)ucie_sim_c_B->rEQ0, ucie_sim_c_B);
    }

    if (ucie_sim_c_DW->obj_l.pSj != 0.0) {
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pSymbolCounter *
        3.125E-11 * 2.0 * 3.1415926535897931 * 0.0;
      ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pSj * sin
        (ucie_sim_c_B->ScaledPayload);
      ucie_sim_c_B->b_y1 += ucie_sim_c_B->ScaledPayload;
    }

    ucie_sim_c_DW->obj_l.pJitterValue = ucie_sim_c_B->b_y1;
    ucie_sim_c_DW->obj_l.pIdealHalfCrossingTime +=
      ucie_sim_c_DW->obj_l.SamplesPerPeriod;
    ucie_sim_c_DW->obj_l.pJitteredHalfCrossingTime =
      ucie_sim_c_DW->obj_l.pIdealHalfCrossingTime +
      ucie_sim_c_DW->obj_l.pJitterValue;
    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pJitteredHalfCrossingTime;
    if (rt_roundd_snf(ucie_sim_c_B->ScaledPayload) <=
        ucie_sim_c_DW->obj_l.pNextEdgeSampleIndex) {
      ucie_sim_c_DW->obj_l.pJitteredHalfCrossingTime =
        ucie_sim_c_DW->obj_l.pNextEdgeSampleIndex + 2.0;
    }

    ucie_sim_c_B->ScaledPayload = ucie_sim_c_DW->obj_l.pJitteredHalfCrossingTime;
    ucie_sim_c_DW->obj_l.pNextEdgeSampleIndex = rt_roundd_snf
      (ucie_sim_c_B->ScaledPayload);
  } else {
    ucie_sim_c_B->ndbl = ucie_sim_c_DW->obj_l.privatePrevious;
  }

  ucie_sim_c_emxFree_real_T(&b);
  ucie_sim_c_emxFree_real_T(&PayloadBinary);
  ucie_sim_c_emxFree_real_T(&seedIn);
  ucie_sim_c_emxFree_real_T(&binaryValues);

  /* MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_DW->obj_l.privateIndex++;

  /* MATLABSystem: '<S18>/MATLAB System' */
  ucie_sim_c_B->MATLABSystem = ucie_sim_c_B->ndbl;
}

/* Model update function */
void ucie_sim_c_update(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M)
{
  B_ucie_sim_c_T *ucie_sim_c_B = ucie_sim_c_M->blockIO;
  DW_ucie_sim_c_T *ucie_sim_c_DW = ucie_sim_c_M->dwork;

  /* Update for Atomic SubSystem: '<Root>/Rx' */
  /* Update for Atomic SubSystem: '<S3>/DFEClkFwd' */
  /* Update for Delay: '<S10>/Delay2' */
  ucie_sim_c_DW->Delay2_DSTATE = ucie_sim_c_B->DFEclock;

  /* Update for Delay: '<S10>/Delay' */
  ucie_sim_c_DW->Delay_DSTATE = ucie_sim_c_B->DFEdata;

  /* End of Update for SubSystem: '<S3>/DFEClkFwd' */
  /* End of Update for SubSystem: '<Root>/Rx' */
  rate_scheduler(ucie_sim_c_M);
}

/* Model initialize function */
void ucie_sim_c_initialize(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M)
{
  B_ucie_sim_c_T *ucie_sim_c_B = ucie_sim_c_M->blockIO;
  DW_ucie_sim_c_T *ucie_sim_c_DW = ucie_sim_c_M->dwork;
  InstP_ucie_sim_c_T *ucie_sim_c_InstP = ucie_sim_c_M->ucie_sim_c_InstP_ref;

  {
    static const char_T tmp[9] = { '1', 's', 't', ' ', 'o', 'r', 'd', 'e', 'r' };

    static const uint32_T tmp_0[625] = { 5489U, 1301868182U, 2938499221U,
      2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U,
      219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U,
      3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U,
      2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U,
      431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U,
      1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U,
      3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U,
      1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U,
      3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U,
      1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
      699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
      1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U,
      3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U,
      2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U,
      2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U,
      1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U,
      619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U,
      4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U,
      3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U,
      3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
      3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U,
      2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U,
      3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U,
      819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U,
      1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U,
      2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U,
      2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U,
      2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U,
      1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U,
      3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U,
      1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U,
      1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U,
      2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U,
      1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
      3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
      3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
      354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
      1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U,
      1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U,
      171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U,
      1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U,
      136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U,
      341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U,
      297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U,
      894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U,
      1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U,
      3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U,
      3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U,
      3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U,
      3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
      3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
      2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U,
      1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U,
      903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U,
      2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U,
      732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U,
      2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U,
      2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U,
      3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
      3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U,
      686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U,
      4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U,
      1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U,
      2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U,
      1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U,
      3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
      4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U,
      1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U,
      422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U,
      1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U,
      539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U,
      2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U,
      3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U,
      818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U,
      232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U,
      3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U,
      3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U,
      3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U,
      3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
      4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U,
      1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U,
      3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U,
      2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U,
      171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U,
      1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U,
      3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U,
      1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U,
      326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U,
      880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U,
      2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U,
      879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U,
      975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U,
      2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U,
      3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U,
      2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
      2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
      643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U,
      3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U,
      3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U,
      1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U,
      828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U,
      1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U,
      1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U,
      831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U,
      4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U,
      3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
      2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
      453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U,
      3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U,
      1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U,
      705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U,
      2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U,
      1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };

    /* Start for Atomic SubSystem: '<Root>/Tx' */
    /* Start for MATLABSystem: '<S22>/VGA' */
    ucie_sim_c_DW->objisempty = true;
    ucie_sim_c_DW->obj_fp.isInitialized = 1;
    ucie_sim_c_DW->obj_fp.Mode = 0.0;
    ucie_sim_c_DW->obj_fp.Gain = 0.0;

    /* End of Start for SubSystem: '<Root>/Tx' */
    ucie_sim_c_emxInitStruct_serdes_FFE(&ucie_sim_c_DW->obj_ku, ucie_sim_c_B);

    /* Start for Atomic SubSystem: '<Root>/Tx' */
    /* Start for MATLABSystem: '<S20>/FFE' */
    ucie_sim_c_DW->obj_ku.isInitialized = 0;
    ucie_sim_c_DW->objisempty_i = true;
    ucie_sim_c_DW->obj_ku.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_DW->obj_ku.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->obj_ku.isInitialized = 1;
    ucie_sim_c_DW->obj_ku.Mode = 0.0;
    ucie_sim_c_DW->obj_ku.TapWeights[0] = 0.0;
    ucie_sim_c_DW->obj_ku.TapWeights[1] = 0.0;
    ucie_sim_c_DW->obj_ku.privateSampleWaveType = true;
    ucie_sim_c_FFE_setupWeights(&ucie_sim_c_DW->obj_ku);
    ucie_sim_c_DW->obj_ku.TapCount = 2.0;
    ucie_sim_c_B->x = ucie_sim_c_DW->obj_ku.SymbolTime /
      ucie_sim_c_DW->obj_ku.SampleInterval;
    ucie_sim_c_DW->obj_ku.SamplesPerSymbol = rt_roundd_snf(ucie_sim_c_B->x);
    ucie_sim_c_DW->obj_ku.BuffSize = ucie_sim_c_DW->obj_ku.SamplesPerSymbol *
      ucie_sim_c_DW->obj_ku.TapCount;
    ucie_sim_c_B->i_c = ucie_sim_c_DW->obj_ku.Buff->size[0];
    ucie_sim_c_DW->obj_ku.Buff->size[0] = (int32_T)
      ucie_sim_c_DW->obj_ku.BuffSize;
    ucie_sim_c_emxEnsureCapacity_real_T(ucie_sim_c_DW->obj_ku.Buff,
      ucie_sim_c_B->i_c, ucie_sim_c_B);
    ucie_sim_c_B->loop_ub_a = (int32_T)ucie_sim_c_DW->obj_ku.BuffSize;
    for (ucie_sim_c_B->i_c = 0; ucie_sim_c_B->i_c < ucie_sim_c_B->loop_ub_a;
         ucie_sim_c_B->i_c++) {
      ucie_sim_c_DW->obj_ku.Buff->data[ucie_sim_c_B->i_c] = 0.0;
    }

    ucie_sim_c_DW->obj_ku.FIRpointer = 1.0;
    ucie_sim_c_DW->obj_ku.TunablePropsChanged = false;

    /* End of Start for MATLABSystem: '<S20>/FFE' */
    /* End of Start for SubSystem: '<Root>/Tx' */

    /* Start for Atomic SubSystem: '<Root>/Rx' */
    /* Start for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_DW->obj.privConfigInitialFlag = true;
    ucie_sim_c_DW->obj.isInitialized = 0;
    ucie_sim_c_DW->objisempty_b = true;
    ucie_sim_c_DW->obj.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_DW->obj.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->obj.isInitialized = 1;
    ucie_sim_c_DW->obj.Mode = 0.0;
    ucie_sim_c_DW->obj.ConfigSelect = 0.0;
    ucie_sim_c_DW->obj.SliceSelect = 0.0;
    ucie_sim_c_DW->obj.isUpToDate = false;
    ucie_sim_c_DW->obj.TunablePropsChanged = false;
    ucie_sim_c_CTLE_setupImpl(&ucie_sim_c_DW->obj, ucie_sim_c_B);
    ucie_sim_c_DW->obj.TunablePropsChanged = false;

    /* Start for Atomic SubSystem: '<S3>/DFEClkFwd' */
    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.FirstDFESetting = true;
    ucie_sim_c_DW->obj_k.isInitialized = 0;
    ucie_sim_c_DW->objisempty_p = true;
    ucie_sim_c_DW->obj_k.EqualizationGain = 3.0E-6;
    ucie_sim_c_DW->obj_k.EqualizationStep = 1.0E-6;
    ucie_sim_c_DW->obj_k.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_DW->obj_k.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->obj_k.Modulation = ucie_sim_c_InstP->Modulation;
    ucie_sim_c_DW->obj_k.isInitialized = 1;
    ucie_sim_c_DW->obj_k.Mode = 0.0;
    ucie_sim_c_DW->obj_k.TapMultiplier = 2.0;
    ucie_sim_c_B->x = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.MinimumTap[0] = -0.2;
    ucie_sim_c_DW->obj_k.MaximumTap[0] = 0.05;
    ucie_sim_c_DW->obj_k.TapWeights[0] = 0.0;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[0] = 0.0;
    ucie_sim_c_DW->obj_k.DFEtapInternal[0] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.MinimumTap[1] = -0.075;
    ucie_sim_c_DW->obj_k.MaximumTap[1] = 0.075;
    ucie_sim_c_DW->obj_k.TapWeights[1] = 0.0;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[1] = 0.0;
    ucie_sim_c_DW->obj_k.DFEtapInternal[1] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.MinimumTap[2] = -0.06;
    ucie_sim_c_DW->obj_k.MaximumTap[2] = 0.06;
    ucie_sim_c_DW->obj_k.TapWeights[2] = 0.0;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[2] = 0.0;
    ucie_sim_c_DW->obj_k.DFEtapInternal[2] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.MinimumTap[3] = -0.045;
    ucie_sim_c_DW->obj_k.MaximumTap[3] = 0.045;
    ucie_sim_c_DW->obj_k.TapWeights[3] = 0.0;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[3] = 0.0;
    ucie_sim_c_DW->obj_k.DFEtapInternal[3] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_B->x = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.DFEtapRounded[0] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_0_c = ucie_sim_c_DW->obj_k.MaximumTap[0];
    ucie_sim_c_DW->obj_k.DFEtapRounded[1] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_1_f = ucie_sim_c_DW->obj_k.MaximumTap[1];
    ucie_sim_c_DW->obj_k.DFEtapRounded[2] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_2_p = ucie_sim_c_DW->obj_k.MaximumTap[2];
    ucie_sim_c_DW->obj_k.DFEtapRounded[3] = 0.0 * ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_3 = ucie_sim_c_DW->obj_k.MaximumTap[3];
    ucie_sim_c_B->x = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.pMaximumTap[0] = ucie_sim_c_B->a_idx_0_c *
      ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_0_c = ucie_sim_c_DW->obj_k.MinimumTap[0];
    ucie_sim_c_DW->obj_k.pMaximumTap[1] = ucie_sim_c_B->a_idx_1_f *
      ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_1_f = ucie_sim_c_DW->obj_k.MinimumTap[1];
    ucie_sim_c_DW->obj_k.pMaximumTap[2] = ucie_sim_c_B->a_idx_2_p *
      ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_2_p = ucie_sim_c_DW->obj_k.MinimumTap[2];
    ucie_sim_c_DW->obj_k.pMaximumTap[3] = ucie_sim_c_B->a_idx_3 *
      ucie_sim_c_B->x;
    ucie_sim_c_B->a_idx_3 = ucie_sim_c_DW->obj_k.MinimumTap[3];
    ucie_sim_c_B->x = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.pMinimumTap[0] = ucie_sim_c_B->a_idx_0_c *
      ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.pMinimumTap[1] = ucie_sim_c_B->a_idx_1_f *
      ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.pMinimumTap[2] = ucie_sim_c_B->a_idx_2_p *
      ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.pMinimumTap[3] = ucie_sim_c_B->a_idx_3 *
      ucie_sim_c_B->x;
    ucie_sim_c_DW->obj_k.TunablePropsChanged = false;

    /* End of Start for SubSystem: '<S3>/DFEClkFwd' */
    /* End of Start for SubSystem: '<Root>/Rx' */
    ucie_sim_c_emxInitStruct_serdes_CDR(&ucie_sim_c_DW->obj_e, ucie_sim_c_B);

    /* Start for Atomic SubSystem: '<Root>/Rx' */
    /* Start for Atomic SubSystem: '<S3>/DFEClkFwd' */
    /* Start for MATLABSystem: '<S10>/CDR System Object' */
    ucie_sim_c_DW->obj_e.FrequencyStep = 0.00048828125;
    ucie_sim_c_DW->obj_e.FrequencyCount = 16.0;
    ucie_sim_c_DW->obj_e.FrequencyStepRamp = 3000.0;
    ucie_sim_c_DW->obj_e.AverageWindowInSymbols = 50.0;
    ucie_sim_c_DW->obj_e.AbsAveUpdateMAIsConverged = 0.0;
    ucie_sim_c_DW->obj_e.AbsAveUpdateMASign = 1.0;
    ucie_sim_c_DW->obj_e.AbsAveUpdateMASignChangeCount = 0.0;
    ucie_sim_c_DW->objisempty_a = true;
    for (ucie_sim_c_B->i_c = 0; ucie_sim_c_B->i_c < 9; ucie_sim_c_B->i_c++) {
      ucie_sim_c_DW->obj_e.CDRMode[ucie_sim_c_B->i_c] = tmp[ucie_sim_c_B->i_c];
    }

    ucie_sim_c_DW->obj_e.Count = 5.0;
    ucie_sim_c_DW->obj_e.Step = 0.005;
    ucie_sim_c_DW->obj_e.Sensitivity = 0.02;
    ucie_sim_c_DW->obj_e.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_DW->obj_e.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_DW->obj_e.Modulation = ucie_sim_c_InstP->Modulation;
    ucie_sim_c_DW->obj_e.isInitialized = 1;
    ucie_sim_c_DW->obj_e.ReferenceOffset = 0.0;
    ucie_sim_c_DW->obj_e.PhaseOffset = 0.0;

    /* End of Start for MATLABSystem: '<S10>/CDR System Object' */
    /* End of Start for SubSystem: '<S3>/DFEClkFwd' */
    /* End of Start for SubSystem: '<Root>/Rx' */
    ucie_sim_c_emxInit_real_T(&ucie_sim_c_DW->ClockBuffer, 1, ucie_sim_c_B);
    ucie_sim_c_emxInitStruct_serdes_Stimulus(&ucie_sim_c_DW->obj_f, ucie_sim_c_B);

    /* Start for MATLABSystem: '<S18>/StrobeStimulus' */
    ucie_sim_c_DW->method = 0U;
    ucie_sim_c_DW->method_not_empty = true;
    ucie_sim_c_DW->method_i = 7U;
    ucie_sim_c_DW->state_not_empty = true;
    memcpy(&ucie_sim_c_DW->state[0], &tmp_0[0], 625U * sizeof(uint32_T));
    ucie_sim_c_DW->method_not_empty_i = true;
    ucie_sim_c_DW->state_f = 0U;
    ucie_sim_c_DW->state_not_empty_l = true;
    ucie_sim_c_DW->state_not_empty_p = true;
    ucie_sim_c_DW->seed = 1144108930U;
    ucie_sim_c_DW->seed_not_empty = true;
    ucie_sim_c_DW->state_k[0] = 362436069U;
    ucie_sim_c_DW->state_d[0] = 362436069U;
    ucie_sim_c_DW->state_k[1] = 521288629U;
    ucie_sim_c_DW->state_d[1] = 521288629U;
    ucie_sim_c_DW->state_not_empty_n = true;
    ucie_sim_c_DW->obj_f.privateSeed->size[0] = 0;
    ucie_sim_c_DW->obj_f.privateSeed->size[1] = 0;
    ucie_sim_c_DW->obj_f.privateLength = 1.0;
    ucie_sim_c_DW->obj_f.pMessageLength = 1.0;
    ucie_sim_c_DW->obj_f.pPayloadLength = 1.0;
    ucie_sim_c_DW->obj_f.pBinaryLength = 1.0;
    ucie_sim_c_DW->obj_f.isInitialized = 0;
    ucie_sim_c_DW->objisempty_d = true;
    ucie_sim_c_DW->obj_f.privateM = 1.0;
    ucie_sim_c_SystemCore_setup_m(&ucie_sim_c_DW->obj_f, ucie_sim_c_B,
      ucie_sim_c_DW);
    ucie_sim_c_emxInitStruct_serdes_Stimulus(&ucie_sim_c_DW->obj_l, ucie_sim_c_B);

    /* Start for MATLABSystem: '<S18>/MATLAB System' */
    ucie_sim_c_DW->method_f = 0U;
    ucie_sim_c_DW->method_not_empty_a = true;
    ucie_sim_c_DW->method_m = 7U;
    ucie_sim_c_DW->state_not_empty_g = true;
    memcpy(&ucie_sim_c_DW->state_g[0], &tmp_0[0], 625U * sizeof(uint32_T));
    ucie_sim_c_DW->method_not_empty_n = true;
    ucie_sim_c_DW->state_dx = 0U;
    ucie_sim_c_DW->state_not_empty_d = true;
    ucie_sim_c_DW->state_not_empty_dt = true;
    ucie_sim_c_DW->seed_a = 1144108930U;
    ucie_sim_c_DW->seed_not_empty_l = true;
    ucie_sim_c_DW->state_a[0] = 362436069U;
    ucie_sim_c_DW->state_gd[0] = 362436069U;
    ucie_sim_c_DW->state_a[1] = 521288629U;
    ucie_sim_c_DW->state_gd[1] = 521288629U;
    ucie_sim_c_DW->state_not_empty_m = true;
    ucie_sim_c_DW->obj_l.privateSeed->size[0] = 0;
    ucie_sim_c_DW->obj_l.privateSeed->size[1] = 0;
    ucie_sim_c_DW->obj_l.privateLength = 1.0;
    ucie_sim_c_DW->obj_l.pMessageLength = 1.0;
    ucie_sim_c_DW->obj_l.pPayloadLength = 1.0;
    ucie_sim_c_DW->obj_l.pBinaryLength = 1.0;
    ucie_sim_c_DW->obj_l.isInitialized = 0;
    ucie_sim_c_DW->objisempty_c = true;
    ucie_sim_c_DW->obj_l.privateM = 1.0;
    ucie_sim_c_SystemCore_setup(&ucie_sim_c_DW->obj_l, ucie_sim_c_B,
      ucie_sim_c_DW);

    /* Start for DataStoreMemory generated from: '<S9>/CTLEConfigSelect' */
    ucie_sim_c_DW->CTLESignal = ucie_sim_c_ConstP.CTLESignal_InitialValue;

    /* Start for DataStoreMemory generated from: '<S10>/TapWeights read' */
    memset(&ucie_sim_c_DW->DFEClkFwdSignal, 0, sizeof(DFEClkFwdBus));

    /* Start for DataStoreMemory generated from: '<S10>/Forward Clock Times' */
    ucie_sim_c_DW->ExternalClockTimesIn = 0.0;

    /* Start for DataStoreMemory generated from: '<S10>/PAM_Thresholds' */
    memset(&ucie_sim_c_DW->PAM_Thresholds[0], 0, 31U * sizeof(real_T));

    /* Start for DataStoreMemory generated from: '<S7>/Equalized Impulse' */
    memcpy(&ucie_sim_c_DW->ImpulseMatrix[0], &ucie_sim_c_InstP->ChannelImpulse[0],
           sizeof(real_T) << 23U);
  }

  {
    emxArray_real_T_ucie_sim_c_T *LocalImpulse;
    emxArray_real_T_ucie_sim_c_T *LocalImpulse_0;
    emxArray_real_T_ucie_sim_c_T *b_LocalImpulse;

    /* InitializeConditions for Buffer: '<S6>/Buffer' */
    memset(&ucie_sim_c_DW->Buffer_CircBuf[0], 0, sizeof(real_T) << 8U);
    ucie_sim_c_DW->Buffer_inBufPtrIdx = 128;
    ucie_sim_c_DW->Buffer_bufferLength = 128;
    ucie_sim_c_DW->Buffer_outBufPtrIdx = 0;

    /* InitializeConditions for DiscreteFir: '<S6>/Discrete FIR Filter' */
    memset(&ucie_sim_c_DW->DiscreteFIRFilter_states[0], 0, 6650U * sizeof(real_T));

    /* InitializeConditions for Unbuffer: '<S6>/Unbuffer' */
    ucie_sim_c_DW->Unbuffer_memIdx = 0;
    memset(&ucie_sim_c_DW->Unbuffer_CircBuff[0], 0, sizeof(real_T) << 7U);

    /* InitializeConditions for Buffer: '<S18>/Buffer' */
    memset(&ucie_sim_c_DW->Buffer_CircBuf_n[0], 0, sizeof(real_T) << 8U);
    ucie_sim_c_DW->Buffer_inBufPtrIdx_n = 128;
    ucie_sim_c_DW->Buffer_bufferLength_n = 128;
    ucie_sim_c_DW->Buffer_outBufPtrIdx_d = 0;

    /* InitializeConditions for DiscreteFir: '<S18>/Discrete FIR Filter' */
    memset(&ucie_sim_c_DW->DiscreteFIRFilter_states_i[0], 0, 6650U * sizeof
           (real_T));

    /* InitializeConditions for Unbuffer: '<S18>/Unbuffer' */
    ucie_sim_c_DW->Unbuffer_memIdx_e = 0;
    memset(&ucie_sim_c_DW->Unbuffer_CircBuff_c[0], 0, sizeof(real_T) << 7U);

    /* InitializeConditions for Buffer: '<S18>/Buffer1' */
    memset(&ucie_sim_c_DW->Buffer1_CircBuf[0], 0, sizeof(real_T) << 8U);
    ucie_sim_c_DW->Buffer1_inBufPtrIdx = 128;
    ucie_sim_c_DW->Buffer1_bufferLength = 128;
    ucie_sim_c_DW->Buffer1_outBufPtrIdx = 0;

    /* InitializeConditions for Unbuffer: '<S18>/Unbuffer1' */
    ucie_sim_c_DW->Unbuffer1_memIdx = 0;
    memset(&ucie_sim_c_DW->Unbuffer1_CircBuff[0], 0, sizeof(real_T) << 7U);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Tx' */
    /* InitializeConditions for MATLABSystem: '<S20>/FFE' */
    ucie_sim_c_B->loop_ub = (int32_T)ucie_sim_c_DW->obj_ku.BuffSize;
    ucie_sim_c_B->i_f = ucie_sim_c_DW->obj_ku.Buff->size[0];
    ucie_sim_c_DW->obj_ku.Buff->size[0] = ucie_sim_c_B->loop_ub;
    ucie_sim_c_emxEnsureCapacity_real_T(ucie_sim_c_DW->obj_ku.Buff,
      ucie_sim_c_B->i_f, ucie_sim_c_B);
    for (ucie_sim_c_B->i_f = 0; ucie_sim_c_B->i_f < ucie_sim_c_B->loop_ub;
         ucie_sim_c_B->i_f++) {
      ucie_sim_c_DW->obj_ku.Buff->data[ucie_sim_c_B->i_f] = 0.0;
    }

    ucie_sim_c_DW->obj_ku.FIRpointer = 1.0;

    /* End of InitializeConditions for MATLABSystem: '<S20>/FFE' */

    /* Outputs for Atomic SubSystem: '<S21>/Initialize Function' */
    for (ucie_sim_c_B->i = 0; ucie_sim_c_B->i < 8388608; ucie_sim_c_B->i++) {
      /* DataStoreRead: '<S24>/TxImpulseIn' */
      ucie_sim_c_B->TxImpulseIn_l = ucie_sim_c_DW->ImpulseMatrix[ucie_sim_c_B->i];
      ucie_sim_c_B->TxImpulseIn[ucie_sim_c_B->i] = ucie_sim_c_B->TxImpulseIn_l;

      /* MATLAB Function: '<S24>/MATLAB Function' incorporates:
       *  DataStoreRead: '<S24>/TxImpulseIn'
       */
      ucie_sim_c_B->ImpulseOut[ucie_sim_c_B->i] = ucie_sim_c_B->TxImpulseIn_l;
    }

    /* End of Outputs for SubSystem: '<S21>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Tx' */
    ucie_sim_c_emxInit_real_T(&LocalImpulse, 2, ucie_sim_c_B);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    /* SystemInitialize for Atomic SubSystem: '<Root>/Tx' */
    /* Outputs for Atomic SubSystem: '<S21>/Initialize Function' */
    /* MATLAB Function: '<S24>/MATLAB Function' incorporates:
     *  DataStoreRead: '<S24>/TxImpulseIn'
     *  MATLAB Function: '<S16>/MATLAB Function'
     */
    ucie_sim_c_B->LocalImpulse_idx_0 = (int32_T)ucie_sim_c_InstP->RowSize;

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    ucie_sim_c_B->loop_ub = LocalImpulse->size[0] * LocalImpulse->size[1];
    LocalImpulse->size[0] = ucie_sim_c_B->LocalImpulse_idx_0;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    ucie_sim_c_B->i_f = (int32_T)(ucie_sim_c_InstP->Aggressors + 1.0);

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    LocalImpulse->size[1] = ucie_sim_c_B->i_f;
    ucie_sim_c_emxEnsureCapacity_real_T(LocalImpulse, ucie_sim_c_B->loop_ub,
      ucie_sim_c_B);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    ucie_sim_c_B->loop_ub_tmp = (int32_T)(ucie_sim_c_InstP->Aggressors + 1.0) *
      (int32_T)ucie_sim_c_InstP->RowSize;

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    if (ucie_sim_c_B->loop_ub_tmp - 1 >= 0) {
      memset(&LocalImpulse->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_tmp *
             sizeof(real_T));
    }

    ucie_sim_c_B->AggressorPosition_a = 1U;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    ucie_sim_c_B->TxImpulseIn_l = (ucie_sim_c_InstP->Aggressors + 1.0) *
      ucie_sim_c_InstP->RowSize;
    ucie_sim_c_B->b_tmp = (int32_T)(((ucie_sim_c_InstP->RowSize - 1.0) +
      ucie_sim_c_B->TxImpulseIn_l) / ucie_sim_c_InstP->RowSize);

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    for (ucie_sim_c_B->loop_ub = 0; ucie_sim_c_B->loop_ub < ucie_sim_c_B->b_tmp;
         ucie_sim_c_B->loop_ub++) {
      ucie_sim_c_B->RowPosition = (real_T)ucie_sim_c_B->loop_ub *
        ucie_sim_c_InstP->RowSize + 1.0;
      ucie_sim_c_B->c = (ucie_sim_c_InstP->RowSize - 1.0) +
        ucie_sim_c_B->RowPosition;
      if (ucie_sim_c_B->RowPosition > ucie_sim_c_B->c) {
        ucie_sim_c_B->e = 1;
      } else {
        ucie_sim_c_B->e = (int32_T)ucie_sim_c_B->RowPosition;
      }

      ucie_sim_c_B->AggressorPosition = (int32_T)
        ucie_sim_c_B->AggressorPosition_a;
      for (ucie_sim_c_B->i = 0; ucie_sim_c_B->i <
           ucie_sim_c_B->LocalImpulse_idx_0; ucie_sim_c_B->i++) {
        LocalImpulse->data[ucie_sim_c_B->i + LocalImpulse->size[0] *
          (ucie_sim_c_B->AggressorPosition - 1)] = ucie_sim_c_B->TxImpulseIn
          [(ucie_sim_c_B->e + ucie_sim_c_B->i) - 1];
      }

      ucie_sim_c_B->AggressorPosition_a++;
    }

    ucie_sim_c_B->VGAInit.isInitialized = 0;
    ucie_sim_c_B->VGAInit.Gain = ucie_sim_c_InstP->VGAParameter.Gain;
    ucie_sim_c_B->VGAInit.Mode = ucie_sim_c_InstP->VGAParameter.Mode;

    /* End of Outputs for SubSystem: '<S21>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Tx' */
    ucie_sim_c_emxInitStruct_serdes_FFE1(&ucie_sim_c_B->FFEInit, ucie_sim_c_B);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Tx' */
    /* Outputs for Atomic SubSystem: '<S21>/Initialize Function' */
    /* MATLAB Function: '<S24>/MATLAB Function' */
    ucie_sim_c_B->FFEInit.isInitialized = 0;
    ucie_sim_c_B->FFEInit.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_B->FFEInit.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_B->FFEInit.Mode = ucie_sim_c_InstP->FFEParameter.Mode;
    ucie_sim_c_B->FFEInit.TapWeights[0] =
      ucie_sim_c_InstP->FFEParameter.TapWeights[0];
    ucie_sim_c_B->FFEInit.TapWeights[1] =
      ucie_sim_c_InstP->FFEParameter.TapWeights[1];
    ucie_sim_c_SystemCore_step_bn(&ucie_sim_c_B->VGAInit, LocalImpulse);

    /* End of Outputs for SubSystem: '<S21>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Tx' */
    ucie_sim_c_emxInit_real_T(&LocalImpulse_0, 2, ucie_sim_c_B);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Tx' */
    /* Outputs for Atomic SubSystem: '<S21>/Initialize Function' */
    /* MATLAB Function: '<S24>/MATLAB Function' */
    ucie_sim_c_B->loop_ub = LocalImpulse_0->size[0] * LocalImpulse_0->size[1];
    LocalImpulse_0->size[0] = LocalImpulse->size[0];
    LocalImpulse_0->size[1] = LocalImpulse->size[1];
    ucie_sim_c_emxEnsureCapacity_real_T(LocalImpulse_0, ucie_sim_c_B->loop_ub,
      ucie_sim_c_B);
    ucie_sim_c_B->loop_ub = LocalImpulse->size[0] * LocalImpulse->size[1] - 1;
    if (ucie_sim_c_B->loop_ub >= 0) {
      memcpy(&LocalImpulse_0->data[0], &LocalImpulse->data[0], (uint32_T)
             (ucie_sim_c_B->loop_ub + 1) * sizeof(real_T));
    }

    ucie_sim_c_SystemCore_step_b(&ucie_sim_c_B->FFEInit, LocalImpulse_0,
      LocalImpulse, ucie_sim_c_B);

    /* End of Outputs for SubSystem: '<S21>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Tx' */
    ucie_sim_c_emxFree_real_T(&LocalImpulse_0);
    ucie_sim_c_emxFreeStruct_serdes_FFE1(&ucie_sim_c_B->FFEInit);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Tx' */
    /* Outputs for Atomic SubSystem: '<S21>/Initialize Function' */
    /* MATLAB Function: '<S24>/MATLAB Function' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_B->TxImpulseIn_l;
    if (ucie_sim_c_B->RowPosition < 1.0) {
      ucie_sim_c_B->loop_ub = 0;
    } else {
      ucie_sim_c_B->loop_ub = (int32_T)ucie_sim_c_B->RowPosition;
    }

    if (ucie_sim_c_B->loop_ub - 1 >= 0) {
      memcpy(&ucie_sim_c_B->ImpulseOut[0], &LocalImpulse->data[0], (uint32_T)
             ucie_sim_c_B->loop_ub * sizeof(real_T));
    }

    /* DataStoreWrite: '<S24>/TxImpulseOut' */
    memcpy(&ucie_sim_c_DW->ImpulseMatrix[0], &ucie_sim_c_B->ImpulseOut[0],
           sizeof(real_T) << 23U);

    /* End of Outputs for SubSystem: '<S21>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Tx' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* SystemInitialize for Atomic SubSystem: '<S3>/DFEClkFwd' */
    /* InitializeConditions for Delay: '<S10>/Delay2' */
    ucie_sim_c_DW->Delay2_DSTATE = 0.0;

    /* InitializeConditions for Delay: '<S10>/Delay' */
    ucie_sim_c_DW->Delay_DSTATE = 0.0;

    /* SystemInitialize for MATLAB Function: '<S10>/Clocking Forwarding CDR' */
    ucie_sim_c_DW->SamplesPerSymbol_not_empty = false;
    ucie_sim_c_DW->PreviousClockTimeIn = 0.0;
    ucie_sim_c_DW->DataCounter = 0.0;
    ucie_sim_c_DW->SamplesElapsed = 0.0;
    ucie_sim_c_DW->SampleCounter = 0.0;
    ucie_sim_c_DW->temp_ClockTimesInternal = 0.0;
    ucie_sim_c_DW->temp_DataSymbol = 0.0;
    ucie_sim_c_DW->temp_DataSymbolOnRising = 1.0;

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.PriorClock = 0.0;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[0] = 0.0;
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.TapWeights[0];
    ucie_sim_c_DW->obj_k.DFEtapInternal[0] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_B->a_idx_0 = ucie_sim_c_B->c;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[1] = 0.0;
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.TapWeights[1];
    ucie_sim_c_DW->obj_k.DFEtapInternal[1] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_B->a_idx_1 = ucie_sim_c_B->c;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[2] = 0.0;
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.TapWeights[2];
    ucie_sim_c_DW->obj_k.DFEtapInternal[2] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_B->a_idx_2 = ucie_sim_c_B->c;
    ucie_sim_c_DW->obj_k.SymbolShiftRegister[3] = 0.0;
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.TapWeights[3];
    ucie_sim_c_DW->obj_k.DFEtapInternal[3] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.DFEtapRounded[0] = ucie_sim_c_B->a_idx_0 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_0 = ucie_sim_c_DW->obj_k.MaximumTap[0];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.DFEtapRounded[1] = ucie_sim_c_B->a_idx_1 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_1 = ucie_sim_c_DW->obj_k.MaximumTap[1];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.DFEtapRounded[2] = ucie_sim_c_B->a_idx_2 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_2 = ucie_sim_c_DW->obj_k.MaximumTap[2];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.DFEtapRounded[3] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.MaximumTap[3];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.pMaximumTap[0] = ucie_sim_c_B->a_idx_0 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_0 = ucie_sim_c_DW->obj_k.MinimumTap[0];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMaximumTap[1] = ucie_sim_c_B->a_idx_1 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_1 = ucie_sim_c_DW->obj_k.MinimumTap[1];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMaximumTap[2] = ucie_sim_c_B->a_idx_2 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_2 = ucie_sim_c_DW->obj_k.MinimumTap[2];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMaximumTap[3] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.MinimumTap[3];

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.pMinimumTap[0] = ucie_sim_c_B->a_idx_0 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_0 = ucie_sim_c_DW->obj_k.EqualizationStep;

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMinimumTap[1] = ucie_sim_c_B->a_idx_1 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_1 = ucie_sim_c_DW->obj_k.EqualizationStep;

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMinimumTap[2] = ucie_sim_c_B->a_idx_2 *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->a_idx_2 = ucie_sim_c_DW->obj_k.EqualizationStep;

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_DW->obj_k.pMinimumTap[3] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;

    /* Start for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->c = ucie_sim_c_DW->obj_k.EqualizationStep;

    /* InitializeConditions for MATLABSystem: '<S10>/DFE System Object' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj_k.TapMultiplier;
    ucie_sim_c_DW->obj_k.pEqualizationStep[0] = ucie_sim_c_B->a_idx_0 *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_DW->obj_k.pEqualizationStep[1] = ucie_sim_c_B->a_idx_1 *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_DW->obj_k.pEqualizationStep[2] = ucie_sim_c_B->a_idx_2 *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_DW->obj_k.pEqualizationStep[3] = ucie_sim_c_B->c *
      ucie_sim_c_B->RowPosition;
    ucie_sim_c_DW->obj_k.AdaptNextStep = false;

    /* InitializeConditions for MATLABSystem: '<S10>/CDR System Object' */
    ucie_sim_c_CDR_resetImpl(&ucie_sim_c_DW->obj_e, ucie_sim_c_B);

    /* End of SystemInitialize for SubSystem: '<S3>/DFEClkFwd' */

    /* InitializeConditions for MATLABSystem: '<S9>/CTLE' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterCoefficients.inDelay[0];
    ucie_sim_c_DW->obj.FilterCoefficients.inDelay[0] = ucie_sim_c_B->RowPosition
      * 0.0;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterCoefficients.inDelay[1];
    ucie_sim_c_DW->obj.FilterCoefficients.inDelay[1] = ucie_sim_c_B->RowPosition
      * 0.0;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterCoefficients.inDelay[2];
    ucie_sim_c_DW->obj.FilterCoefficients.inDelay[2] = ucie_sim_c_B->RowPosition
      * 0.0;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterCoefficients.outDelay[0];
    ucie_sim_c_DW->obj.FilterCoefficients.outDelay[0] =
      ucie_sim_c_B->RowPosition * 0.0;
    ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterCoefficients.outDelay[1];
    ucie_sim_c_DW->obj.FilterCoefficients.outDelay[1] =
      ucie_sim_c_B->RowPosition * 0.0;
    for (ucie_sim_c_B->i = 0; ucie_sim_c_B->i < 40; ucie_sim_c_B->i++) {
      ucie_sim_c_B->RowPosition = ucie_sim_c_DW->obj.FilterStates
        [ucie_sim_c_B->i];
      ucie_sim_c_DW->obj.FilterStates[ucie_sim_c_B->i] =
        ucie_sim_c_B->RowPosition * 0.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S9>/CTLE' */

    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    for (ucie_sim_c_B->i = 0; ucie_sim_c_B->i < 8388608; ucie_sim_c_B->i++) {
      /* DataStoreRead: '<S16>/RxImpulseIn' */
      ucie_sim_c_B->RowPosition = ucie_sim_c_DW->ImpulseMatrix[ucie_sim_c_B->i];
      ucie_sim_c_B->RxImpulseIn[ucie_sim_c_B->i] = ucie_sim_c_B->RowPosition;

      /* MATLAB Function: '<S16>/MATLAB Function' incorporates:
       *  DataStoreRead: '<S16>/RxImpulseIn'
       */
      ucie_sim_c_B->ImpulseOut_g[ucie_sim_c_B->i] = ucie_sim_c_B->RowPosition;
    }

    /* MATLAB Function: '<S16>/MATLAB Function' incorporates:
     *  DataStoreRead: '<S16>/RxImpulseIn'
     */
    ucie_sim_c_B->loop_ub = LocalImpulse->size[0] * LocalImpulse->size[1];
    LocalImpulse->size[0] = ucie_sim_c_B->LocalImpulse_idx_0;
    LocalImpulse->size[1] = ucie_sim_c_B->i_f;
    ucie_sim_c_emxEnsureCapacity_real_T(LocalImpulse, ucie_sim_c_B->loop_ub,
      ucie_sim_c_B);
    if (ucie_sim_c_B->loop_ub_tmp - 1 >= 0) {
      memset(&LocalImpulse->data[0], 0, (uint32_T)ucie_sim_c_B->loop_ub_tmp *
             sizeof(real_T));
    }

    ucie_sim_c_B->AggressorPosition_a = 1U;
    for (ucie_sim_c_B->loop_ub = 0; ucie_sim_c_B->loop_ub < ucie_sim_c_B->b_tmp;
         ucie_sim_c_B->loop_ub++) {
      ucie_sim_c_B->RowPosition = (real_T)ucie_sim_c_B->loop_ub *
        ucie_sim_c_InstP->RowSize + 1.0;
      ucie_sim_c_B->c = (ucie_sim_c_InstP->RowSize - 1.0) +
        ucie_sim_c_B->RowPosition;
      if (ucie_sim_c_B->RowPosition > ucie_sim_c_B->c) {
        ucie_sim_c_B->e = 1;
      } else {
        ucie_sim_c_B->e = (int32_T)ucie_sim_c_B->RowPosition;
      }

      ucie_sim_c_B->AggressorPosition = (int32_T)
        ucie_sim_c_B->AggressorPosition_a;
      for (ucie_sim_c_B->i_f = 0; ucie_sim_c_B->i_f <
           ucie_sim_c_B->LocalImpulse_idx_0; ucie_sim_c_B->i_f++) {
        LocalImpulse->data[ucie_sim_c_B->i_f + LocalImpulse->size[0] *
          (ucie_sim_c_B->AggressorPosition - 1)] = ucie_sim_c_B->RxImpulseIn
          [(ucie_sim_c_B->e + ucie_sim_c_B->i_f) - 1];
      }

      ucie_sim_c_B->AggressorPosition_a++;
    }

    ucie_sim_c_B->CTLEInit.isInitialized = 0;
    ucie_sim_c_B->CTLEInit.SampleInterval = ucie_sim_c_InstP->SampleInterval;
    ucie_sim_c_B->CTLEInit.SymbolTime = ucie_sim_c_InstP->SymbolTime;
    ucie_sim_c_B->CTLEInit.Mode = ucie_sim_c_InstP->CTLEParameter.Mode;
    ucie_sim_c_B->CTLEInit.ConfigSelect =
      ucie_sim_c_InstP->CTLEParameter.ConfigSelect;

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    ucie_sim_c_emxInit_real_T(&b_LocalImpulse, 2, ucie_sim_c_B);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    /* MATLAB Function: '<S16>/MATLAB Function' */
    ucie_sim_c_SystemCore_step(&ucie_sim_c_B->CTLEInit, LocalImpulse,
      b_LocalImpulse, &ucie_sim_c_B->CTLEConfigSelect_e, ucie_sim_c_B);

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    ucie_sim_c_emxFree_real_T(&LocalImpulse);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    /* MATLAB Function: '<S16>/MATLAB Function' */
    ucie_sim_c_B->RowPosition = ucie_sim_c_B->TxImpulseIn_l;
    if (ucie_sim_c_B->RowPosition < 1.0) {
      ucie_sim_c_B->loop_ub = 0;
    } else {
      ucie_sim_c_B->loop_ub = (int32_T)ucie_sim_c_B->RowPosition;
    }

    if (ucie_sim_c_B->loop_ub - 1 >= 0) {
      memcpy(&ucie_sim_c_B->ImpulseOut_g[0], &b_LocalImpulse->data[0], (uint32_T)
             ucie_sim_c_B->loop_ub * sizeof(real_T));
    }

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */
    ucie_sim_c_emxFree_real_T(&b_LocalImpulse);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Rx' */
    /* Outputs for Atomic SubSystem: '<S11>/Initialize Function' */
    /* DataStoreWrite: '<S16>/CTLEConfigSelect' */
    ucie_sim_c_DW->CTLESignal.ConfigSelect = ucie_sim_c_B->CTLEConfigSelect_e;

    /* DataStoreWrite: '<S16>/RxImpulseOut' */
    memcpy(&ucie_sim_c_DW->ImpulseMatrix[0], &ucie_sim_c_B->ImpulseOut_g[0],
           sizeof(real_T) << 23U);

    /* End of Outputs for SubSystem: '<S11>/Initialize Function' */
    /* End of SystemInitialize for SubSystem: '<Root>/Rx' */

    /* SystemInitialize for MATLAB Function: '<S18>/ClockTimesGenerator' */
    ucie_sim_c_DW->samplesElapsed_not_empty = false;
    ucie_sim_c_DW->samplesElapsed = 0.0;
    ucie_sim_c_DW->clockTickCount = 1.0;
    ucie_sim_c_DW->clockStart = 0.0;
    ucie_sim_c_DW->temp_ClockTimesOut = 0.0;

    /* InitializeConditions for MATLABSystem: '<S18>/StrobeStimulus' */
    ucie_sim_c_Stimulus_resetImpl_m(&ucie_sim_c_DW->obj_f, ucie_sim_c_B);

    /* InitializeConditions for MATLABSystem: '<S18>/MATLAB System' */
    ucie_sim_c_Stimulus_resetImpl(&ucie_sim_c_DW->obj_l, ucie_sim_c_B);
  }
}

/* Model terminate function */
void ucie_sim_c_terminate(RT_MODEL_ucie_sim_c_T * ucie_sim_c_M)
{
  B_ucie_sim_c_T *ucie_sim_c_B = ucie_sim_c_M->blockIO;
  DW_ucie_sim_c_T *ucie_sim_c_DW = ucie_sim_c_M->dwork;

  /* Outputs for Atomic SubSystem: '<S2>/Terminate Function' */
  /* DataStoreRead: '<S7>/Equalized Impulse' */
  memcpy(&ucie_sim_c_B->EqualizedImpulse[0], &ucie_sim_c_DW->ImpulseMatrix[0],
         sizeof(real_T) << 23U);

  /* End of Outputs for SubSystem: '<S2>/Terminate Function' */
  ucie_sim_c_emxFreeStruct_serdes_FFE(&ucie_sim_c_DW->obj_ku);
  ucie_sim_c_emxFreeStruct_serdes_CDR(&ucie_sim_c_DW->obj_e);
  ucie_sim_c_emxFree_real_T(&ucie_sim_c_DW->ClockBuffer);
  ucie_sim_c_emxFreeStruct_serdes_Stimulus(&ucie_sim_c_DW->obj_f);
  ucie_sim_c_emxFreeStruct_serdes_Stimulus(&ucie_sim_c_DW->obj_l);

  /* model code */
  rt_FREE(ucie_sim_c_M->blockIO);
  rt_FREE(ucie_sim_c_M->inputs);
  rt_FREE(ucie_sim_c_M->outputs);
  rt_FREE(ucie_sim_c_M->dwork);
  rt_FREE(ucie_sim_c_M->prevZCSigState);

  /* Free instance parameters */
  rt_FREE(ucie_sim_c_M->ucie_sim_c_InstP_ref);
  rt_FREE(ucie_sim_c_M);
}

/* Model data allocation function */
RT_MODEL_ucie_sim_c_T *ucie_sim_c(void)
{
  RT_MODEL_ucie_sim_c_T *ucie_sim_c_M;
  ucie_sim_c_M = (RT_MODEL_ucie_sim_c_T *) malloc(sizeof(RT_MODEL_ucie_sim_c_T));
  if (ucie_sim_c_M == (NULL)) {
    return (NULL);
  }

  (void) memset((char *)ucie_sim_c_M, 0,
                sizeof(RT_MODEL_ucie_sim_c_T));

  /* block I/O */
  {
    B_ucie_sim_c_T *b = (B_ucie_sim_c_T *) malloc(sizeof(B_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,b);
    ucie_sim_c_M->blockIO = (b);
  }

  /* Initialize instance parameters */
  {
    InstP_ucie_sim_c_T *group__InstP = (InstP_ucie_sim_c_T *) malloc(sizeof
      (InstP_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,group__InstP);
    ucie_sim_c_M->ucie_sim_c_InstP_ref = (group__InstP);
    (void) memcpy(group__InstP, &ucie_sim_c_InstP,
                  sizeof(InstP_ucie_sim_c_T));
  }

  /* states (dwork) */
  {
    DW_ucie_sim_c_T *dwork = (DW_ucie_sim_c_T *) malloc(sizeof(DW_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,dwork);
    ucie_sim_c_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_ucie_sim_c_T *ucie_sim_c_U = (ExtU_ucie_sim_c_T *) malloc(sizeof
      (ExtU_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,ucie_sim_c_U);
    ucie_sim_c_M->inputs = (((ExtU_ucie_sim_c_T *) ucie_sim_c_U));
  }

  /* external outputs */
  {
    ExtY_ucie_sim_c_T *ucie_sim_c_Y = (ExtY_ucie_sim_c_T *) malloc(sizeof
      (ExtY_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,ucie_sim_c_Y);
    ucie_sim_c_M->outputs = (ucie_sim_c_Y);
  }

  /* previous zero-crossing states */
  {
    PrevZCX_ucie_sim_c_T *zc = (PrevZCX_ucie_sim_c_T *) malloc(sizeof
      (PrevZCX_ucie_sim_c_T));
    rt_VALIDATE_MEMORY(ucie_sim_c_M,zc);
    ucie_sim_c_M->prevZCSigState = (zc);
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  ucie_sim_c_InitializeDataMapInfo(ucie_sim_c_M);

  {
    B_ucie_sim_c_T *ucie_sim_c_B = ucie_sim_c_M->blockIO;
    DW_ucie_sim_c_T *ucie_sim_c_DW = ucie_sim_c_M->dwork;
    InstP_ucie_sim_c_T *ucie_sim_c_InstP = ucie_sim_c_M->ucie_sim_c_InstP_ref;
    PrevZCX_ucie_sim_c_T *ucie_sim_c_PrevZCX = ucie_sim_c_M->prevZCSigState;
    ExtU_ucie_sim_c_T *ucie_sim_c_U = (ExtU_ucie_sim_c_T *) ucie_sim_c_M->inputs;
    ExtY_ucie_sim_c_T *ucie_sim_c_Y = (ExtY_ucie_sim_c_T *)
      ucie_sim_c_M->outputs;

    /* block I/O */
    (void) memset(((void *) ucie_sim_c_B), 0,
                  sizeof(B_ucie_sim_c_T));

    /* states (dwork) */
    (void) memset((void *)ucie_sim_c_DW, 0,
                  sizeof(DW_ucie_sim_c_T));

    /* external inputs */
    ucie_sim_c_U->Inport = 0.0;

    /* external outputs */
    ucie_sim_c_Y->Outport = 0.0;

    /* previous zero-crossing states */
    {
      ucie_sim_c_PrevZCX->TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;
    }
  }

  return ucie_sim_c_M;
}
