/*
 * ucie_sim_c.h
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

#ifndef ucie_sim_c_h_
#define ucie_sim_c_h_
#ifndef ucie_sim_c_COMMON_INCLUDES_
#define ucie_sim_c_COMMON_INCLUDES_
#include <stdlib.h>
#include <stdio.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* ucie_sim_c_COMMON_INCLUDES_ */

#include "ucie_sim_c_types.h"
#include "rt_zcfcn.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rtw_modelmap.h"
#include <stddef.h>
#include <string.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetucie_sim_c_InstP_ref
#define rtmGetucie_sim_c_InstP_ref(rtm) ((rtm)->ucie_sim_c_InstP_ref)
#endif

#ifndef rtmSetucie_sim_c_InstP_ref
#define rtmSetucie_sim_c_InstP_ref(rtm, val) ((rtm)->ucie_sim_c_InstP_ref = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define ucie_sim_c_M_TYPE              RT_MODEL_ucie_sim_c_T

/* Block signals (default storage) */
typedef struct {
  i_cell_wrap_ucie_sim_c_T primlist[100];
  i_cell_wrap_ucie_sim_c_T primlist_m[100];
  f_cell_wrap_ucie_sim_c_T primlist_c[100];
  f_cell_wrap_ucie_sim_c_T primlist_k[100];
  serdes_CTLE_ucie_sim_c_n_T CTLEInit;
  real_T maskp_data[101];
  real_T maskp_data_c[101];
  real_T maskp_data_b[101];
  real_T maskp_data_p[101];
  cdrOptional CDRSystemObject_o3;      /* '<S10>/CDR System Object' */
  cdrOptional r;
  serdes_FFE_ucie_sim_c_j_T FFEInit;
  int8_T maskp_data_cv[101];
  int8_T maskp_data_f[101];
  int8_T maskp_data_g[101];
  int8_T maskp_data_g1[101];
  real_T filtersos_data[10];
  real_T dv[10];
  creal_T numTmp_data[5];
  creal_T denTmp_data[5];
  creal_T A_data[5];
  real_T filtersos_data_m[10];
  real_T dv1[10];
  creal_T numTmp_data_n[5];
  creal_T denTmp_data_p[5];
  creal_T A_data_l[5];
  real_T b_localFilterStates_data[10];
  real_T a_data[10];
  real_T localFilterStates_data[10];
  real_T b_localFilterStates_data_j[10];
  real_T localFilterStates_data_d[10];
  real_T b_localFilterStates_data_g[10];
  creal_T q_data[4];
  creal_T b_A_data[4];
  creal_T q_data_l[4];
  creal_T c_A_data[4];
  serdes_VGA_ucie_sim_c_k_T VGAInit;
  creal_T pz_data[3];
  real_T sos[6];
  creal_T inCoeff1_data[3];
  creal_T pz_data_d[3];
  real_T sos_d[6];
  creal_T inCoeff1_data_l[3];
  real_T C[5];
  real_T C_o[5];
  real_T localNumerator_data[5];
  real_T localNumerator_data_b[5];
  real_T localNumerator_data_n[5];
  creal_T p_data[2];
  creal_T cTmp_data[2];
  creal_T coeff_data[2];
  creal_T x_data[2];
  creal_T coeff_data_b[2];
  creal_T p_data_l[2];
  creal_T cTmp_data_h[2];
  creal_T x_data_b[2];
  real_T goodness[4];
  real_T localDenominator_data[4];
  real_T goodness_d[4];
  real_T localDenominator_data_e[4];
  real_T localDenominator_data_b[4];
  real_T x4[4];
  uint32_T inSize[8];
  boolean_T seed31[31];
  emxArray_cell_wrap_22_1_ucie_sim_c_T psect;
  emxArray_f_cell_wrap_1_ucie_sim_c_T psect_f;
  int32_T g_data[6];
  int32_T g_data_o[6];
  int32_T g_data_n[6];
  int32_T g_data_i[6];
  real_T B[3];
  real_T A[3];
  real_T B_j[3];
  real_T B_a[3];
  real_T A_j[3];
  real_T B_jz[3];
  emxArray_cell_wrap_23_1_ucie_sim_c_T zsect;
  emxArray_g_cell_wrap_1_ucie_sim_c_T zsect_o;
  int8_T x1[16];
  int32_T perm[4];
  clockbus CDRSystemObject_o2;         /* '<S10>/CDR System Object' */
  real_T p_data_m[2];
  real_T psorted_data[2];
  real_T num0_data[2];
  real_T den1_data[2];
  real_T num1_data[2];
  real_T b_x_data[2];
  real_T p_data_c[2];
  real_T y_data[2];
  real_T psorted_data_m[2];
  real_T z_data[2];
  real_T num0_data_m[2];
  real_T den1_data_j[2];
  real_T num1_data_h[2];
  real_T wavetmp3[2];
  real_T varargin_1_data[2];
  real_T X[2];
  real_T waveIn[2];
  real_T b_state_data[2];
  real_T wavetmp1[2];
  real_T b_localFilterStates_data_c[2];
  real_T vwork_data[2];
  real_T xwork_data[2];
  creal_T zsect_data;
  creal_T zsect_data_n;
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Buffer[128];                  /* '<S6>/Buffer' */
  real_T DiscreteFIRFilter[128];       /* '<S6>/Discrete FIR Filter' */
  real_T Unbuffer;                     /* '<S6>/Unbuffer' */
  real_T Buffer_l[128];                /* '<S18>/Buffer' */
  real_T DiscreteFIRFilter_a[128];     /* '<S18>/Discrete FIR Filter' */
  real_T Unbuffer_b;                   /* '<S18>/Unbuffer' */
  real_T Buffer1[128];                 /* '<S18>/Buffer1' */
  real_T Unbuffer1;                    /* '<S18>/Unbuffer1' */
  real_T Switch;                       /* '<S18>/Switch' */
  real_T VGA;                          /* '<S22>/VGA' */
  real_T TxImpulseIn[8388608];         /* '<S24>/TxImpulseIn' */
  real_T ImpulseOut[8388608];          /* '<S24>/MATLAB Function' */
  real_T TapWeightsOut[2];             /* '<S20>/MATLAB Function' */
  real_T FFE;                          /* '<S20>/FFE' */
  real_T StrobeStimulus;               /* '<S18>/StrobeStimulus' */
  real_T MATLABSystem;                 /* '<S18>/MATLAB System' */
  real_T ClockTimesOut;                /* '<S18>/ClockTimesGenerator' */
  real_T CTLEConfigSelect;             /* '<S9>/CTLEConfigSelect' */
  real_T RxImpulseIn[8388608];         /* '<S16>/RxImpulseIn' */
  real_T ImpulseOut_g[8388608];        /* '<S16>/MATLAB Function' */
  real_T CTLEConfigSelect_e;           /* '<S16>/MATLAB Function' */
  real_T Delay2;                       /* '<S10>/Delay2' */
  real_T Delay;                        /* '<S10>/Delay' */
  real_T TapWeightsread[4];            /* '<S10>/TapWeights read' */
  real_T ForwardClockTimes;            /* '<S10>/Forward Clock Times' */
  real_T Switch_a;                     /* '<S13>/Switch' */
  real_T Sum;                          /* '<S13>/Sum' */
  real_T Max;                          /* '<S13>/Max' */
  real_T DFESystemObject_o1;           /* '<S10>/DFE System Object' */
  real_T DFESystemObject_o2[4];        /* '<S10>/DFE System Object' */
  real_T DataSymbolOnRising;           /* '<S10>/Clocking Forwarding CDR' */
  real_T ClockTimesInternal;           /* '<S10>/Clocking Forwarding CDR' */
  real_T ClockInternal;                /* '<S10>/Clocking Forwarding CDR' */
  real_T DataSymbol;                   /* '<S10>/Clocking Forwarding CDR' */
  real_T CDRSystemObject_o1;           /* '<S10>/CDR System Object' */
  real_T clockValid;                   /* '<S10>/CDR Output Selector' */
  real_T clockTime;                    /* '<S10>/CDR Output Selector' */
  real_T DFEclock;                     /* '<S10>/CDR Output Selector' */
  real_T DFEdata;                      /* '<S10>/CDR Output Selector' */
  real_T CTLE_o1;                      /* '<S9>/CTLE' */
  real_T CTLE_o2;                      /* '<S9>/CTLE' */
  real_T EqualizedImpulse[8388608];    /* '<S7>/Equalized Impulse' */
  real_T a[6651];
  real_T RowPosition;
  real_T c;
  real_T TxImpulseIn_l;
  real_T a_idx_0;
  real_T a_idx_1;
  real_T a_idx_2;
  real_T fc_dt;
  real_T ztmp_data;
  real_T b_a;
  real_T b;
  real_T b1;
  real_T az_idx_1;
  real_T az_idx_2;
  real_T az_idx_0;
  real_T bz_idx_0;
  real_T num1;
  real_T l;
  real_T cTmp_im;
  real_T oneNormA;
  real_T b_absrexk;
  real_T s;
  real_T b_s;
  real_T bim;
  real_T b_temp_re;
  real_T b_temp_im;
  real_T b_A_im;
  real_T b_A_re;
  real_T a_m;
  real_T b_m;
  real_T x;
  real_T a_idx_0_c;
  real_T a_idx_1_f;
  real_T a_idx_2_p;
  real_T a_idx_3;
  real_T fc_dt_e;
  real_T ztmp_data_o;
  real_T np;
  real_T a_h;
  real_T b_l;
  real_T az_idx_1_h;
  real_T az_idx_2_m;
  real_T az_idx_0_m;
  real_T bz_idx_0_h;
  real_T coeff_re;
  real_T cTmp_im_c;
  real_T z;
  real_T oneNormA_k;
  real_T kase;
  real_T s_p;
  real_T smax;
  real_T brm;
  real_T bim_p;
  real_T sgnbr;
  real_T temp_re;
  real_T temp_im;
  real_T x_im;
  real_T c_A_re;
  real_T c_A_im;
  real_T ScaledPayload;
  real_T ndbl;
  real_T cdiff;
  real_T b_y1;
  real_T q;
  real_T SamplesPerSymbol;
  real_T wavetmp2;
  real_T N;
  real_T n;
  real_T eye1_upper_data;
  real_T eye_height_data;
  real_T upperBound_data;
  real_T b_p;
  real_T num;
  real_T den;
  real_T SamplesPerSymbol_a;
  real_T startndx;
  real_T endndx;
  real_T b_j;
  real_T localNumerator;
  real_T localDenominator;
  real_T c_e;
  real_T dcval;
  real_T uidiff;
  real_T x_idx_0;
  real_T b_y_idx_0;
  real_T b_y_idx_1;
  real_T bsum;
  real_T x_o;
  real_T x_b;
  real_T d;
  real_T d1;
  real_T x4_a;
  real_T x4_g;
  real_T x4_e;
  int32_T tmp_data[2];
  int32_T tmp_data_c[2];
  int32_T p_size[2];
  int32_T z_size[2];
  int32_T tmp_size[2];
  int32_T tmp_data_p[2];
  int32_T tmp_size_p[2];
  int32_T tmp_size_a[2];
  int32_T tmp_data_e[2];
  int32_T tmp_data_a[2];
  int32_T p_size_a[2];
  int32_T z_size_i[2];
  int32_T y_size[2];
  int32_T tmp_size_l[2];
  int32_T tmp_data_o[2];
  int32_T tmp_size_o[2];
  int32_T tmp_size_i[2];
  int32_T maskp_size[2];
  int32_T maskp_size_f[2];
  int32_T maskp_size_i[2];
  int32_T maskp_size_ff[2];
  int32_T localNumerator_size[2];
  int32_T localDenominator_size[2];
  int32_T b_localFilterStates_size[2];
  int32_T a_size[2];
  int32_T localFilterStates_size[2];
  int32_T localNumerator_size_g[2];
  int32_T localDenominator_size_c[2];
  int32_T b_localFilterStates_size_o[2];
  int32_T idx_data[2];
  int32_T iwork_data[2];
  int8_T idx4[4];
  int32_T e;
  int32_T i;
  int32_T AggressorPosition;
  int32_T loop_ub;
  int32_T LocalImpulse_idx_0;
  int32_T loop_ub_tmp;
  int32_T b_tmp;
  int32_T i_f;
  int32_T ii;
  int32_T ntot;
  int32_T d_indx;
  int32_T yndx;
  int32_T i_h;
  int32_T zsect_tmp;
  int32_T psorted_size;
  int32_T kk;
  int32_T indx;
  int32_T nz;
  int32_T p_k;
  int32_T trueCount;
  int32_T nz_tmp;
  int32_T tmp_size_idx_1;
  int32_T kase_e;
  int32_T jA;
  int32_T c_i;
  int32_T d_i;
  int32_T ix;
  int32_T b_ix;
  int32_T c_ix;
  int32_T yk;
  int32_T i_c;
  int32_T loop_ub_a;
  int32_T b_ii;
  int32_T ntot_d;
  int32_T indx_a;
  int32_T yndx_p;
  int32_T h;
  int32_T k;
  int32_T loop_ub_m;
  int32_T psorted_size_o;
  int32_T b_kk;
  int32_T d_indx_n;
  int32_T nz_l;
  int32_T vlen;
  int32_T k_p;
  int32_T i1;
  int32_T tmp_size_idx_1_p;
  int32_T iter;
  int32_T j;
  int32_T b_j_f;
  int32_T ix_i;
  int32_T jA_o;
  int32_T iy;
  int32_T yk_k;
  int32_T coeffSize;
  int32_T nm1d2;
  int32_T firstBlockLength;
  int32_T lastBlockLength;
  int32_T hi;
  int32_T dim;
  int32_T stride;
  int32_T i_i;
  int32_T r_o;
  int32_T loop_ub_m4;
  int32_T loop_ub_c;
  int32_T unnamed_idx_1_tmp;
  int32_T e_tmp;
  int32_T i2;
  int32_T i3;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T stride_0_1;
  int32_T stride_1_1;
  int32_T loop_ub_f;
  int32_T loop_ub_h;
  int32_T i4;
  int32_T newNumel;
  int32_T i_m;
  int32_T i_a;
  int32_T r_k;
  int32_T loop_ub_p;
  int32_T loop_ub_b;
  int32_T unnamed_idx_1_tmp_c;
  int32_T e_tmp_n;
  int32_T i5;
  int32_T newNumel_i;
  int32_T i_my;
  int32_T e_j;
  int32_T i_e;
  int32_T loop_ub_mv;
  int32_T loop_ub_m0;
  int32_T unnamed_idx_1_tmp_j;
  int32_T stride_0_1_f;
  int32_T stride_1_1_a;
  int32_T e_g;
  int32_T i_n;
  int32_T loop_ub_d;
  int32_T loop_ub_n;
  int32_T unnamed_idx_1_tmp_cg;
  int32_T b_configCanidate;
  int32_T loop_ub_fx;
  int32_T loop_ub_pm;
  int32_T eye_height_size;
  int32_T upperBound_size;
  int32_T lowerBound_size;
  int32_T varargin_1_size;
  int32_T i6;
  int32_T c_p;
  int32_T i7;
  int32_T i8;
  int32_T loop_ub_nj;
  int32_T b_tmp_k;
  int32_T Index_tmp;
  int32_T b_state;
  int32_T b_indx;
  int32_T b_indx_n;
  int32_T i9;
  int32_T loop_ub_tmp_o;
  int32_T varargin_3;
  int32_T nx;
  int32_T i_g;
  int32_T penergy1;
  int32_T loop_ub_cq;
  int32_T loop_ub_cj;
  int32_T loop_ub_m1;
  int32_T loop_ub_j;
  int32_T waveIn_k;
  int32_T i10;
  int32_T c_m;
  int32_T h_p;
  int32_T indx_d;
  int32_T i11;
  int32_T i12;
  int32_T b_tmp_g;
  int32_T Index_tmp_c;
  int32_T loop_ub_tmp_c;
  int32_T i13;
  int32_T localFilterStates_size_idx_0;
  int32_T localNumerator_size_idx_0;
  int32_T localDenominator_size_idx_0;
  int32_T d_if;
  int32_T i14;
  int32_T loop_ub_dx;
  int32_T c_tmp;
  int32_T Index_tmp_g;
  int32_T b_localFilterStates_tmp;
  int32_T k_l;
  int32_T loop_ub_f1;
  int32_T i_d;
  int32_T nn;
  int32_T firstBlockLength_j;
  int32_T lastBlockLength_i;
  int32_T nblocks;
  int32_T xblockoffset;
  int32_T hi_h;
  int32_T b_k;
  int32_T b_n;
  int32_T indx_o;
  int32_T nv;
  int32_T ns;
  int32_T e_k;
  int32_T loop_ub_ch;
  int32_T c_idx_1;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T loop_ub_bd;
  int32_T i15;
  int32_T i_er;
  int32_T b_idx;
  int32_T last;
  int32_T k_d;
  int32_T last_i;
  int32_T idx;
  int32_T k_g;
  int32_T newNumel_n;
  int32_T i_l;
  int32_T newNumel_c;
  int32_T i_nc;
  int32_T vstride;
  int32_T b_ph;
  int32_T c_d;
  int32_T n_o;
  int32_T ib;
  int32_T wOffset;
  int32_T i1_j;
  int32_T i2_c;
  int32_T i3_h;
  int32_T i4_d;
  int32_T bLen;
  int32_T i_c5;
  int32_T i_p;
  int32_T i_pi;
  uint32_T AggressorPosition_a;
  uint32_T u;
  uint32_T u1;
  ZCEventType zcEvent;
  boolean_T sel_data[2];
  boolean_T tmp_data_ow[2];
  boolean_T tmp_data_j[2];
  int8_T ipiv_data[2];
  boolean_T sel_data_p[2];
  boolean_T tmp_data_ob[2];
  boolean_T tmp_data_l[2];
  int8_T b_ipiv_data[2];
  int8_T unnamed_idx_1;
  int8_T ipiv;
  int8_T unnamed_idx_1_k;
  boolean_T b_val;
  boolean_T tmp_data_jk;
  boolean_T b_A;
  boolean_T val;
  boolean_T tmp_data_f;
  boolean_T x_c;
  boolean_T c_A;
  boolean_T b_p_f;
  boolean_T b_nl;
  boolean_T rEQ0;
  boolean_T val_i;
  boolean_T tmp_data_l4;
  boolean_T val_i3;
  boolean_T cursormask;
  boolean_T shiftright;
} B_ucie_sim_c_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  serdes_CTLE_ucie_sim_c_T obj;        /* '<S9>/CTLE' */
  serdes_DFE_ucie_sim_c_T obj_k;       /* '<S10>/DFE System Object' */
  serdes_CDR_ucie_sim_c_T obj_e;       /* '<S10>/CDR System Object' */
  serdes_Stimulus_ucie_sim_c_T obj_f;  /* '<S18>/StrobeStimulus' */
  serdes_Stimulus_ucie_sim_c_T obj_l;  /* '<S18>/MATLAB System' */
  serdes_FFE_ucie_sim_c_T obj_ku;      /* '<S20>/FFE' */
  serdes_VGA_ucie_sim_c_T obj_fp;      /* '<S22>/VGA' */
  DFEClkFwdBus DFEClkFwdSignal;        /* synthesized block */
  real_T Buffer_CircBuf[256];          /* '<S6>/Buffer' */
  real_T DiscreteFIRFilter_states[6650];/* '<S6>/Discrete FIR Filter' */
  real_T Unbuffer_CircBuff[128];       /* '<S6>/Unbuffer' */
  real_T Buffer_CircBuf_n[256];        /* '<S18>/Buffer' */
  real_T DiscreteFIRFilter_states_i[6650];/* '<S18>/Discrete FIR Filter' */
  real_T Unbuffer_CircBuff_c[128];     /* '<S18>/Unbuffer' */
  real_T Buffer1_CircBuf[256];         /* '<S18>/Buffer1' */
  real_T Unbuffer1_CircBuff[128];      /* '<S18>/Unbuffer1' */
  real_T Delay2_DSTATE;                /* '<S10>/Delay2' */
  real_T Delay_DSTATE;                 /* '<S10>/Delay' */
  real_T DiscreteFIRFilter_simContextBuf[13300];/* '<S6>/Discrete FIR Filter' */
  real_T DiscreteFIRFilter_simRevCoeff[6651];/* '<S6>/Discrete FIR Filter' */
  real_T DiscreteFIRFilter_simContextBuf_b[13300];/* '<S18>/Discrete FIR Filter' */
  real_T DiscreteFIRFilter_simRevCoeff_k[6651];/* '<S18>/Discrete FIR Filter' */
  real_T ExternalClockTimesIn;         /* synthesized block */
  real_T PAM_Thresholds[31];           /* synthesized block */
  real_T ImpulseMatrix[8388608];       /* synthesized block */
  real_T samplesElapsed;               /* '<S18>/ClockTimesGenerator' */
  real_T clockTickCount;               /* '<S18>/ClockTimesGenerator' */
  real_T clock[640002];                /* '<S18>/ClockTimesGenerator' */
  real_T previousSample;               /* '<S18>/ClockTimesGenerator' */
  real_T temp_ClockTimesOut;           /* '<S18>/ClockTimesGenerator' */
  real_T clockStart;                   /* '<S18>/ClockTimesGenerator' */
  real_T SamplesPerSymbol;             /* '<S10>/Clocking Forwarding CDR' */
  real_T DataCounter;                  /* '<S10>/Clocking Forwarding CDR' */
  real_T SamplesElapsed;               /* '<S10>/Clocking Forwarding CDR' */
  real_T SampleCounter;                /* '<S10>/Clocking Forwarding CDR' */
  real_T PreviousClockTimeIn;          /* '<S10>/Clocking Forwarding CDR' */
  real_T temp_DataSymbolOnRising;      /* '<S10>/Clocking Forwarding CDR' */
  real_T temp_ClockTimesInternal;      /* '<S10>/Clocking Forwarding CDR' */
  real_T temp_DataSymbol;              /* '<S10>/Clocking Forwarding CDR' */
  CTLEBus CTLESignal;                  /* synthesized block */
  emxArray_real_T_ucie_sim_c_T* ClockBuffer;/* '<S10>/Clocking Forwarding CDR' */
  int32_T Buffer_inBufPtrIdx;          /* '<S6>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<S6>/Buffer' */
  int32_T Buffer_bufferLength;         /* '<S6>/Buffer' */
  int32_T Unbuffer_memIdx;             /* '<S6>/Unbuffer' */
  int32_T Buffer_inBufPtrIdx_n;        /* '<S18>/Buffer' */
  int32_T Buffer_outBufPtrIdx_d;       /* '<S18>/Buffer' */
  int32_T Buffer_bufferLength_n;       /* '<S18>/Buffer' */
  int32_T Unbuffer_memIdx_e;           /* '<S18>/Unbuffer' */
  int32_T Buffer1_inBufPtrIdx;         /* '<S18>/Buffer1' */
  int32_T Buffer1_outBufPtrIdx;        /* '<S18>/Buffer1' */
  int32_T Buffer1_bufferLength;        /* '<S18>/Buffer1' */
  int32_T Unbuffer1_memIdx;            /* '<S18>/Unbuffer1' */
  uint32_T seed;                       /* '<S18>/StrobeStimulus' */
  uint32_T method;                     /* '<S18>/StrobeStimulus' */
  uint32_T state[625];                 /* '<S18>/StrobeStimulus' */
  uint32_T method_i;                   /* '<S18>/StrobeStimulus' */
  uint32_T state_d[2];                 /* '<S18>/StrobeStimulus' */
  uint32_T state_f;                    /* '<S18>/StrobeStimulus' */
  uint32_T state_k[2];                 /* '<S18>/StrobeStimulus' */
  uint32_T seed_a;                     /* '<S18>/MATLAB System' */
  uint32_T method_f;                   /* '<S18>/MATLAB System' */
  uint32_T state_g[625];               /* '<S18>/MATLAB System' */
  uint32_T method_m;                   /* '<S18>/MATLAB System' */
  uint32_T state_gd[2];                /* '<S18>/MATLAB System' */
  uint32_T state_dx;                   /* '<S18>/MATLAB System' */
  uint32_T state_a[2];                 /* '<S18>/MATLAB System' */
  boolean_T objisempty;                /* '<S22>/VGA' */
  boolean_T objisempty_i;              /* '<S20>/FFE' */
  boolean_T objisempty_d;              /* '<S18>/StrobeStimulus' */
  boolean_T seed_not_empty;            /* '<S18>/StrobeStimulus' */
  boolean_T method_not_empty;          /* '<S18>/StrobeStimulus' */
  boolean_T state_not_empty;           /* '<S18>/StrobeStimulus' */
  boolean_T method_not_empty_i;        /* '<S18>/StrobeStimulus' */
  boolean_T state_not_empty_l;         /* '<S18>/StrobeStimulus' */
  boolean_T state_not_empty_p;         /* '<S18>/StrobeStimulus' */
  boolean_T state_not_empty_n;         /* '<S18>/StrobeStimulus' */
  boolean_T objisempty_c;              /* '<S18>/MATLAB System' */
  boolean_T seed_not_empty_l;          /* '<S18>/MATLAB System' */
  boolean_T method_not_empty_a;        /* '<S18>/MATLAB System' */
  boolean_T state_not_empty_g;         /* '<S18>/MATLAB System' */
  boolean_T method_not_empty_n;        /* '<S18>/MATLAB System' */
  boolean_T state_not_empty_d;         /* '<S18>/MATLAB System' */
  boolean_T state_not_empty_dt;        /* '<S18>/MATLAB System' */
  boolean_T state_not_empty_m;         /* '<S18>/MATLAB System' */
  boolean_T samplesElapsed_not_empty;  /* '<S18>/ClockTimesGenerator' */
  boolean_T objisempty_p;              /* '<S10>/DFE System Object' */
  boolean_T SamplesPerSymbol_not_empty;/* '<S10>/Clocking Forwarding CDR' */
  boolean_T objisempty_a;              /* '<S10>/CDR System Object' */
  boolean_T objisempty_b;              /* '<S9>/CTLE' */
} DW_ucie_sim_c_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S13>/Triggered Subsystem' */
} PrevZCX_ucie_sim_c_T;

/* instance parameters, for system '<Root>' */
typedef struct {
  struct_M21dWdeJoYKmUlJw54zjGH DFEClkFwdParameter;/* Variable: DFEClkFwdParameter
                                                    * Referenced by:
                                                    *   '<S10>/DFEClkFwdPhaseOffset'
                                                    *   '<S10>/DFEClkFwdReferenceOffset'
                                                    *   '<S10>/ForwardClockOffset'
                                                    *   '<S10>/Mode'
                                                    */
  struct_HG5YRIkYWgYOkgznq3h4n FFEParameter;/* Variable: FFEParameter
                                             * Referenced by:
                                             *   '<S20>/ConfigSelect'
                                             *   '<S20>/FFEMode'
                                             *   '<S20>/FFETapWeights'
                                             *   '<S24>/MATLAB Function'
                                             */
  struct_Hh4802JZGHB15BspDZ57H CTLEParameter;/* Variable: CTLEParameter
                                              * Referenced by:
                                              *   '<S9>/CTLEMode'
                                              *   '<S9>/CTLESliceSelect'
                                              *   '<S16>/MATLAB Function'
                                              */
  struct_RnY6e51lDiqqn300n3CSMB VGAParameter;/* Variable: VGAParameter
                                              * Referenced by:
                                              *   '<S22>/VGAGain'
                                              *   '<S22>/VGAMode'
                                              *   '<S24>/MATLAB Function'
                                              */
  real_T ChannelImpulse[8388608];      /* Variable: ChannelImpulse
                                        * Referenced by:
                                        */
  real_T Aggressors;                   /* Variable: Aggressors
                                        * Referenced by:
                                        *   '<S16>/MATLAB Function'
                                        *   '<S24>/MATLAB Function'
                                        */
  real_T Modulation;                   /* Variable: Modulation
                                        * Referenced by:
                                        *   '<S10>/CDR System Object'
                                        *   '<S10>/DFE System Object'
                                        *   '<S16>/MATLAB Function'
                                        *   '<S24>/MATLAB Function'
                                        */
  real_T RowSize;                      /* Variable: RowSize
                                        * Referenced by:
                                        *   '<S16>/MATLAB Function'
                                        *   '<S24>/MATLAB Function'
                                        */
  real_T SampleInterval;               /* Variable: SampleInterval
                                        * Referenced by:
                                        *   '<S6>/Discrete FIR Filter'
                                        *   '<S9>/CTLE'
                                        *   '<S10>/Clocking Forwarding CDR'
                                        *   '<S10>/CDR System Object'
                                        *   '<S10>/DFE System Object'
                                        *   '<S18>/ClockTimesGenerator'
                                        *   '<S18>/Discrete FIR Filter'
                                        *   '<S20>/FFE'
                                        *   '<S16>/MATLAB Function'
                                        *   '<S24>/MATLAB Function'
                                        */
  real_T SymbolTime;                   /* Variable: SymbolTime
                                        * Referenced by:
                                        *   '<S9>/CTLE'
                                        *   '<S10>/Clocking Forwarding CDR'
                                        *   '<S10>/CDR System Object'
                                        *   '<S10>/DFE System Object'
                                        *   '<S20>/FFE'
                                        *   '<S13>/IBIS-AMI adjustment'
                                        *   '<S16>/MATLAB Function'
                                        *   '<S24>/MATLAB Function'
                                        */
} InstP_ucie_sim_c_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: ChannelImpulse(1:RowSize)'*SampleInterval)
   * Referenced by:
   *   '<S6>/Discrete FIR Filter'
   *   '<S18>/Discrete FIR Filter'
   */
  real_T pooled1[6651];

  /* Expression: []
   * Referenced by:
   */
  CTLEBus CTLESignal_InitialValue;

  /* Expression: MinimumTap
   * Referenced by: '<S10>/DFE System Object'
   */
  real_T DFESystemObject_MinimumTap[4];

  /* Expression: MaximumTap
   * Referenced by: '<S10>/DFE System Object'
   */
  real_T DFESystemObject_MaximumTap[4];

  /* Expression: currentClockTimes
   * Referenced by: '<S18>/clockTimesIn'
   */
  real_T clockTimesIn_Value[640002];
} ConstP_ucie_sim_c_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
} ExtU_ucie_sim_c_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY_ucie_sim_c_T;

/* Real-time Model Data Structure */
struct tag_RTM_ucie_sim_c_T {
  const char_T *errorStatus;
  B_ucie_sim_c_T *blockIO;
  PrevZCX_ucie_sim_c_T *prevZCSigState;
  ExtU_ucie_sim_c_T *inputs;
  ExtY_ucie_sim_c_T *outputs;
  DW_ucie_sim_c_T *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[10];
    int32_T* vardimsAddress[10];
    RTWLoggingFcnPtr loggingPtrs[10];
  } DataMapInfo;

  InstP_ucie_sim_c_T *ucie_sim_c_InstP_ref;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

/* instance parameters */
extern InstP_ucie_sim_c_T ucie_sim_c_InstP;

/* External data declarations for dependent source files */
extern const char_T *RT_MEMORY_ALLOCATION_ERROR;

/* Constant parameters (default storage) */
extern const ConstP_ucie_sim_c_T ucie_sim_c_ConstP;

/* Model entry point functions */
extern RT_MODEL_ucie_sim_c_T *ucie_sim_c(void);
extern void ucie_sim_c_initialize(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M);
extern void ucie_sim_c_output(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M);
extern void ucie_sim_c_update(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M);
extern void ucie_sim_c_terminate(RT_MODEL_ucie_sim_c_T * ucie_sim_c_M);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  ucie_sim_c_GetCAPIStaticMap(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ucie_sim_c'
 * '<S1>'   : 'ucie_sim_c/Analog Channel'
 * '<S2>'   : 'ucie_sim_c/Configuration'
 * '<S3>'   : 'ucie_sim_c/Rx'
 * '<S4>'   : 'ucie_sim_c/Stimulus'
 * '<S5>'   : 'ucie_sim_c/Tx'
 * '<S6>'   : 'ucie_sim_c/Analog Channel/zero aggressor'
 * '<S7>'   : 'ucie_sim_c/Configuration/Terminate Function'
 * '<S8>'   : 'ucie_sim_c/Configuration/Terminate Function/Save Equalized Impulse'
 * '<S9>'   : 'ucie_sim_c/Rx/CTLE'
 * '<S10>'  : 'ucie_sim_c/Rx/DFEClkFwd'
 * '<S11>'  : 'ucie_sim_c/Rx/Init'
 * '<S12>'  : 'ucie_sim_c/Rx/DFEClkFwd/CDR Output Selector'
 * '<S13>'  : 'ucie_sim_c/Rx/DFEClkFwd/Clock Times'
 * '<S14>'  : 'ucie_sim_c/Rx/DFEClkFwd/Clocking Forwarding CDR'
 * '<S15>'  : 'ucie_sim_c/Rx/DFEClkFwd/Clock Times/Triggered Subsystem'
 * '<S16>'  : 'ucie_sim_c/Rx/Init/Initialize Function'
 * '<S17>'  : 'ucie_sim_c/Rx/Init/Initialize Function/MATLAB Function'
 * '<S18>'  : 'ucie_sim_c/Stimulus/Clock Forward'
 * '<S19>'  : 'ucie_sim_c/Stimulus/Clock Forward/ClockTimesGenerator'
 * '<S20>'  : 'ucie_sim_c/Tx/FFE'
 * '<S21>'  : 'ucie_sim_c/Tx/Init'
 * '<S22>'  : 'ucie_sim_c/Tx/VGA'
 * '<S23>'  : 'ucie_sim_c/Tx/FFE/MATLAB Function'
 * '<S24>'  : 'ucie_sim_c/Tx/Init/Initialize Function'
 * '<S25>'  : 'ucie_sim_c/Tx/Init/Initialize Function/MATLAB Function'
 */
#endif                                 /* ucie_sim_c_h_ */
