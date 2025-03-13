/*
 * ucie_sim_c_types.h
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

#ifndef ucie_sim_c_types_h_
#define ucie_sim_c_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_CTLEBus_
#define DEFINED_TYPEDEF_FOR_CTLEBus_

typedef struct {
  real_T ConfigSelect;
} CTLEBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DFEClkFwdBus_
#define DEFINED_TYPEDEF_FOR_DFEClkFwdBus_

typedef struct {
  real_T TapWeights[4];
} DFEClkFwdBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Hh4802JZGHB15BspDZ57H_
#define DEFINED_TYPEDEF_FOR_struct_Hh4802JZGHB15BspDZ57H_

typedef struct {
  real_T Mode;
  real_T ConfigSelect;
  real_T SliceSelect;
} struct_Hh4802JZGHB15BspDZ57H;

#endif

#ifndef DEFINED_TYPEDEF_FOR_clockbus_
#define DEFINED_TYPEDEF_FOR_clockbus_

typedef struct {
  real_T clockTime;
  real_T clockValidOnRising;
} clockbus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cdrOptional_
#define DEFINED_TYPEDEF_FOR_cdrOptional_

typedef struct {
  real_T clockPhase;
  real_T symbolRecovered;
  real_T voltageSample;
  real_T PAM4Threshold;
  real_T CDRedgeVoltage;
  real_T CDRcounter;
  real_T CDRearlyLateCount;
  real_T PAMSymbolMiddleVoltage;
  real_T PAMSymbolOuterVoltage;
  real_T EyeHeightAbsAve;
  real_T PAMThreshold[31];
  real_T PhaseError;
  real_T FreqEstimate;
} cdrOptional;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_M21dWdeJoYKmUlJw54zjGH_
#define DEFINED_TYPEDEF_FOR_struct_M21dWdeJoYKmUlJw54zjGH_

typedef struct {
  real_T ForwardClockOffset;
  real_T Mode;
  real_T ReferenceOffset;
  real_T PhaseOffset;
  real_T TapWeights[4];
} struct_M21dWdeJoYKmUlJw54zjGH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_HG5YRIkYWgYOkgznq3h4n_
#define DEFINED_TYPEDEF_FOR_struct_HG5YRIkYWgYOkgznq3h4n_

typedef struct {
  real_T Mode;
  real_T TapWeights[2];
  real_T ConfigSelect;
} struct_HG5YRIkYWgYOkgznq3h4n;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_RnY6e51lDiqqn300n3CSMB_
#define DEFINED_TYPEDEF_FOR_struct_RnY6e51lDiqqn300n3CSMB_

typedef struct {
  real_T Gain;
  real_T Mode;
} struct_RnY6e51lDiqqn300n3CSMB;

#endif

/* Custom Type definition for MATLAB Function: '<S16>/MATLAB Function' */
#ifndef struct_tag_sH7lg5DlLPB2ZnEgFqPtocE
#define struct_tag_sH7lg5DlLPB2ZnEgFqPtocE

struct tag_sH7lg5DlLPB2ZnEgFqPtocE
{
  real_T inCoeff[12];
  real_T outCoeff[8];
  real_T inDelay[3];
  real_T outDelay[2];
  real_T nz[4];
  real_T np[4];
  real_T dt;
  real_T setSelection;
  boolean_T isdefined;
};

#endif                                 /* struct_tag_sH7lg5DlLPB2ZnEgFqPtocE */

#ifndef typedef_sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T
#define typedef_sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T

typedef struct tag_sH7lg5DlLPB2ZnEgFqPtocE sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T;

#endif                        /* typedef_sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_ucie_sim_c_T
#define typedef_cell_wrap_ucie_sim_c_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_ucie_sim_c_T;

#endif                                 /* typedef_cell_wrap_ucie_sim_c_T */

#ifndef struct_tag_WmR2pLzerKxuNBsRDHsqjD
#define struct_tag_WmR2pLzerKxuNBsRDHsqjD

struct tag_WmR2pLzerKxuNBsRDHsqjD
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_ucie_sim_c_T inputVarSize[4];
  real_T SymbolTime;
  real_T SampleInterval;
  real_T Mode;
  real_T SliceSelect;
  real_T ConfigSelect;
  sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T FilterCoefficients;
  boolean_T isUpToDate;
  real_T privConfigInitial;
  boolean_T privConfigInitialFlag;
  real_T FilterNumerator[20];
  real_T FilterNumeratorCount[4];
  real_T FilterDenominator[16];
  real_T FilterDenominatorCount[4];
  real_T FilterGain[4];
  real_T FilterStates[40];
  real_T FilterStatesCount[4];
  boolean_T pFilterMethod;
};

#endif                                 /* struct_tag_WmR2pLzerKxuNBsRDHsqjD */

#ifndef typedef_serdes_CTLE_ucie_sim_c_T
#define typedef_serdes_CTLE_ucie_sim_c_T

typedef struct tag_WmR2pLzerKxuNBsRDHsqjD serdes_CTLE_ucie_sim_c_T;

#endif                                 /* typedef_serdes_CTLE_ucie_sim_c_T */

#ifndef struct_tag_tUVwg7xfDLvrAI2CRPxWmC
#define struct_tag_tUVwg7xfDLvrAI2CRPxWmC

struct tag_tUVwg7xfDLvrAI2CRPxWmC
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_ucie_sim_c_T inputVarSize[5];
  real_T SymbolTime;
  real_T Modulation;
  real_T SampleInterval;
  real_T Mode;
  real_T TapWeights[4];
  real_T EqualizationGain;
  real_T EqualizationStep;
  real_T TapMultiplier;
  real_T MinimumTap[4];
  real_T MaximumTap[4];
  real_T PriorClock;
  real_T SymbolShiftRegister[4];
  real_T DFEtapInternal[4];
  real_T DFEtapRounded[4];
  boolean_T FirstDFESetting;
  boolean_T AdaptNextStep;
  real_T pMaximumTap[4];
  real_T pMinimumTap[4];
  real_T pEqualizationStep[4];
};

#endif                                 /* struct_tag_tUVwg7xfDLvrAI2CRPxWmC */

#ifndef typedef_serdes_DFE_ucie_sim_c_T
#define typedef_serdes_DFE_ucie_sim_c_T

typedef struct tag_tUVwg7xfDLvrAI2CRPxWmC serdes_DFE_ucie_sim_c_T;

#endif                                 /* typedef_serdes_DFE_ucie_sim_c_T */

/* Custom Type definition for MATLAB Function: '<S24>/MATLAB Function' */
#ifndef struct_tag_nXBjhR1Wj21MEXa9NE3OmC
#define struct_tag_nXBjhR1Wj21MEXa9NE3OmC

struct tag_nXBjhR1Wj21MEXa9NE3OmC
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_nXBjhR1Wj21MEXa9NE3OmC */

#ifndef typedef_cell_wrap_2_ucie_sim_c_T
#define typedef_cell_wrap_2_ucie_sim_c_T

typedef struct tag_nXBjhR1Wj21MEXa9NE3OmC cell_wrap_2_ucie_sim_c_T;

#endif                                 /* typedef_cell_wrap_2_ucie_sim_c_T */

#ifndef struct_tag_aScsl3hZgQ5s1sHmazdxRC
#define struct_tag_aScsl3hZgQ5s1sHmazdxRC

struct tag_aScsl3hZgQ5s1sHmazdxRC
{
  int32_T isInitialized;
  cell_wrap_ucie_sim_c_T inputVarSize[3];
  real_T Mode;
  real_T Gain;
};

#endif                                 /* struct_tag_aScsl3hZgQ5s1sHmazdxRC */

#ifndef typedef_serdes_VGA_ucie_sim_c_T
#define typedef_serdes_VGA_ucie_sim_c_T

typedef struct tag_aScsl3hZgQ5s1sHmazdxRC serdes_VGA_ucie_sim_c_T;

#endif                                 /* typedef_serdes_VGA_ucie_sim_c_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T_ucie_sim_c_T
#define typedef_emxArray_real_T_ucie_sim_c_T

typedef struct emxArray_real_T emxArray_real_T_ucie_sim_c_T;

#endif                                /* typedef_emxArray_real_T_ucie_sim_c_T */

#ifndef struct_tag_J4ghaMKhgCwg4HiYwpHs4G
#define struct_tag_J4ghaMKhgCwg4HiYwpHs4G

struct tag_J4ghaMKhgCwg4HiYwpHs4G
{
  int32_T isInitialized;
  cell_wrap_ucie_sim_c_T inputVarSize[3];
  real_T SymbolTime;
  real_T Modulation;
  real_T SampleInterval;
  real_T Count;
  real_T Step;
  real_T PhaseOffset;
  real_T ReferenceOffset;
  real_T Sensitivity;
  char_T CDRMode[9];
  real_T FrequencyStep;
  real_T FrequencyCount;
  real_T FrequencyStepRamp;
  real_T AverageWindowInSymbols;
  real_T ClockTimesInternal;
  real_T Phase;
  real_T SamplesPerSymbol;
  real_T SamplesElapsed;
  real_T EdgeSampleCounter;
  real_T EdgeSymbol;
  real_T EdgeVoltage;
  real_T DataSymbol;
  real_T DataVoltage;
  real_T DataSampleCounter;
  real_T LastSample;
  real_T EarlyLateCounter;
  real_T InternalCountMax;
  real_T PriorData;
  real_T DataSymbolOnRising;
  emxArray_real_T_ucie_sim_c_T *PAMThreshold;
  real_T EyeHeightAbsAve;
  real_T PAMSymbolMiddleVoltage;
  real_T PAMSymbolOuterVoltage;
  real_T AverageWindow;
  real_T AbsAveUpdateMA;
  real_T AbsAveUpdateMAIsConverged;
  real_T AbsAveUpdateMASign;
  real_T AbsAveUpdateMASignChangeCount;
  emxArray_real_T_ucie_sim_c_T *SymbolSet;
  emxArray_real_T_ucie_sim_c_T *VoltageLevels;
  real_T privatePD;
  real_T PriorDataVoltage;
  real_T privateCDRMode;
  real_T FreqEstimate;
  real_T FrequencyCounter;
  real_T pFrequencyStep;
  real_T pFrequencyStepInterval;
};

#endif                                 /* struct_tag_J4ghaMKhgCwg4HiYwpHs4G */

#ifndef typedef_serdes_CDR_ucie_sim_c_T
#define typedef_serdes_CDR_ucie_sim_c_T

typedef struct tag_J4ghaMKhgCwg4HiYwpHs4G serdes_CDR_ucie_sim_c_T;

#endif                                 /* typedef_serdes_CDR_ucie_sim_c_T */

#ifndef struct_tag_l9BUGCx9zvq79imp5x5mOF
#define struct_tag_l9BUGCx9zvq79imp5x5mOF

struct tag_l9BUGCx9zvq79imp5x5mOF
{
  int32_T isInitialized;
  real_T SamplesPerPeriod;
  real_T privateDelay;
  real_T privateIndex;
  real_T privatePrevious;
  real_T privateSourceFlag;
  real_T privateM;
  emxArray_real_T_ucie_sim_c_T *privateOrder;
  emxArray_real_T_ucie_sim_c_T *privateSeed;
  real_T privateMapToVoltage[2];
  emxArray_real_T_ucie_sim_c_T *privateBinaryPowers;
  real_T privateLength;
  real_T privateDataIndex;
  real_T pNextEdgeSampleIndex;
  real_T pIdealHalfCrossingTime;
  real_T pJitteredHalfCrossingTime;
  real_T pJitterValue;
  real_T pSymbolStep;
  real_T pDj;
  real_T pRj;
  real_T pSj;
  real_T pDCD;
  boolean_T pOddEven;
  real_T pSymbolCounter;
  boolean_T pPAMnSeed[31];
  real_T FIFOPosition;
  emxArray_real_T_ucie_sim_c_T *SymbolFIFO;
  real_T pMessageLength;
  real_T pPayloadLength;
  emxArray_real_T_ucie_sim_c_T *PowersOf2;
  real_T pBinaryIndex;
  real_T pBinaryLength;
};

#endif                                 /* struct_tag_l9BUGCx9zvq79imp5x5mOF */

#ifndef typedef_serdes_Stimulus_ucie_sim_c_T
#define typedef_serdes_Stimulus_ucie_sim_c_T

typedef struct tag_l9BUGCx9zvq79imp5x5mOF serdes_Stimulus_ucie_sim_c_T;

#endif                                /* typedef_serdes_Stimulus_ucie_sim_c_T */

#ifndef struct_tag_uPAlPZwV6uOjZpvcLOpijC
#define struct_tag_uPAlPZwV6uOjZpvcLOpijC

struct tag_uPAlPZwV6uOjZpvcLOpijC
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_ucie_sim_c_T inputVarSize[3];
  real_T SymbolTime;
  real_T SampleInterval;
  real_T Mode;
  real_T TapWeights[2];
  emxArray_real_T_ucie_sim_c_T *Buff;
  real_T FIRpointer;
  real_T WeightsInternal[2];
  real_T SamplesPerSymbol;
  real_T BuffSize;
  real_T TapCount;
  boolean_T privateSampleWaveType;
};

#endif                                 /* struct_tag_uPAlPZwV6uOjZpvcLOpijC */

#ifndef typedef_serdes_FFE_ucie_sim_c_T
#define typedef_serdes_FFE_ucie_sim_c_T

typedef struct tag_uPAlPZwV6uOjZpvcLOpijC serdes_FFE_ucie_sim_c_T;

#endif                                 /* typedef_serdes_FFE_ucie_sim_c_T */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_char_T */

#ifndef typedef_emxArray_char_T_ucie_sim_c_T
#define typedef_emxArray_char_T_ucie_sim_c_T

typedef struct emxArray_char_T emxArray_char_T_ucie_sim_c_T;

#endif                                /* typedef_emxArray_char_T_ucie_sim_c_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_int32_T */

#ifndef typedef_emxArray_int32_T_ucie_sim_c_T
#define typedef_emxArray_int32_T_ucie_sim_c_T

typedef struct emxArray_int32_T emxArray_int32_T_ucie_sim_c_T;

#endif                               /* typedef_emxArray_int32_T_ucie_sim_c_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_boolean_T */

#ifndef typedef_emxArray_boolean_T_ucie_sim_c_T
#define typedef_emxArray_boolean_T_ucie_sim_c_T

typedef struct emxArray_boolean_T emxArray_boolean_T_ucie_sim_c_T;

#endif                             /* typedef_emxArray_boolean_T_ucie_sim_c_T */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T

struct emxArray_uint32_T
{
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_uint32_T */

#ifndef typedef_emxArray_uint32_T_ucie_sim_c_T
#define typedef_emxArray_uint32_T_ucie_sim_c_T

typedef struct emxArray_uint32_T emxArray_uint32_T_ucie_sim_c_T;

#endif                              /* typedef_emxArray_uint32_T_ucie_sim_c_T */

#ifndef struct_emxArray_real_T_1x7
#define struct_emxArray_real_T_1x7

struct emxArray_real_T_1x7
{
  real_T data[7];
  int32_T size[2];
};

#endif                                 /* struct_emxArray_real_T_1x7 */

#ifndef typedef_emxArray_real_T_1x7_ucie_sim_c_T
#define typedef_emxArray_real_T_1x7_ucie_sim_c_T

typedef struct emxArray_real_T_1x7 emxArray_real_T_1x7_ucie_sim_c_T;

#endif                            /* typedef_emxArray_real_T_1x7_ucie_sim_c_T */

#ifndef struct_tag_1Vasl7izprFqUgICnVmM5E
#define struct_tag_1Vasl7izprFqUgICnVmM5E

struct tag_1Vasl7izprFqUgICnVmM5E
{
  emxArray_real_T_1x7_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_1Vasl7izprFqUgICnVmM5E */

#ifndef typedef_i_cell_wrap_ucie_sim_c_T
#define typedef_i_cell_wrap_ucie_sim_c_T

typedef struct tag_1Vasl7izprFqUgICnVmM5E i_cell_wrap_ucie_sim_c_T;

#endif                                 /* typedef_i_cell_wrap_ucie_sim_c_T */

#ifndef struct_tag_1Vasl7izprFqUgICnVmM5E
#define struct_tag_1Vasl7izprFqUgICnVmM5E

struct tag_1Vasl7izprFqUgICnVmM5E
{
  emxArray_real_T_1x7_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_1Vasl7izprFqUgICnVmM5E */

#ifndef typedef_f_cell_wrap_ucie_sim_c_T
#define typedef_f_cell_wrap_ucie_sim_c_T

typedef struct tag_1Vasl7izprFqUgICnVmM5E f_cell_wrap_ucie_sim_c_T;

#endif                                 /* typedef_f_cell_wrap_ucie_sim_c_T */

/* Custom Type definition for MATLAB Function: '<S24>/MATLAB Function' */
#ifndef struct_tag_NBcKKPGB57inq4U9uVioXE
#define struct_tag_NBcKKPGB57inq4U9uVioXE

struct tag_NBcKKPGB57inq4U9uVioXE
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_2_ucie_sim_c_T inputVarSize;
  real_T SymbolTime;
  real_T SampleInterval;
  real_T Mode;
  real_T TapWeights[2];
  emxArray_real_T_ucie_sim_c_T *Buff;
  real_T FIRpointer;
  real_T WeightsInternal[2];
  real_T SamplesPerSymbol;
  real_T BuffSize;
  real_T TapCount;
  boolean_T privateSampleWaveType;
};

#endif                                 /* struct_tag_NBcKKPGB57inq4U9uVioXE */

#ifndef typedef_serdes_FFE_ucie_sim_c_j_T
#define typedef_serdes_FFE_ucie_sim_c_j_T

typedef struct tag_NBcKKPGB57inq4U9uVioXE serdes_FFE_ucie_sim_c_j_T;

#endif                                 /* typedef_serdes_FFE_ucie_sim_c_j_T */

#ifndef struct_tag_GqFaEajn0EdteVLEcEk7SC
#define struct_tag_GqFaEajn0EdteVLEcEk7SC

struct tag_GqFaEajn0EdteVLEcEk7SC
{
  int32_T isInitialized;
  cell_wrap_2_ucie_sim_c_T inputVarSize;
  real_T Mode;
  real_T Gain;
};

#endif                                 /* struct_tag_GqFaEajn0EdteVLEcEk7SC */

#ifndef typedef_serdes_VGA_ucie_sim_c_k_T
#define typedef_serdes_VGA_ucie_sim_c_k_T

typedef struct tag_GqFaEajn0EdteVLEcEk7SC serdes_VGA_ucie_sim_c_k_T;

#endif                                 /* typedef_serdes_VGA_ucie_sim_c_k_T */

/* Custom Type definition for MATLAB Function: '<S16>/MATLAB Function' */
#ifndef struct_tag_T8mWafY899pDrUCsP9ZddC
#define struct_tag_T8mWafY899pDrUCsP9ZddC

struct tag_T8mWafY899pDrUCsP9ZddC
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_2_ucie_sim_c_T inputVarSize;
  real_T SymbolTime;
  real_T SampleInterval;
  real_T Mode;
  real_T SliceSelect;
  real_T ConfigSelect;
  sH7lg5DlLPB2ZnEgFqPtocE_ucie_sim_c_T FilterCoefficients;
  boolean_T isUpToDate;
  real_T FilterNumerator[20];
  real_T FilterNumeratorCount[4];
  real_T FilterDenominator[16];
  real_T FilterDenominatorCount[4];
  real_T FilterGain[4];
  real_T FilterStates[40];
  real_T FilterStatesCount[4];
  boolean_T pFilterMethod;
};

#endif                                 /* struct_tag_T8mWafY899pDrUCsP9ZddC */

#ifndef typedef_serdes_CTLE_ucie_sim_c_n_T
#define typedef_serdes_CTLE_ucie_sim_c_n_T

typedef struct tag_T8mWafY899pDrUCsP9ZddC serdes_CTLE_ucie_sim_c_n_T;

#endif                                 /* typedef_serdes_CTLE_ucie_sim_c_n_T */

#ifndef struct_emxArray_real_T_2
#define struct_emxArray_real_T_2

struct emxArray_real_T_2
{
  real_T data[2];
  int32_T size;
};

#endif                                 /* struct_emxArray_real_T_2 */

#ifndef typedef_emxArray_real_T_2_ucie_sim_c_T
#define typedef_emxArray_real_T_2_ucie_sim_c_T

typedef struct emxArray_real_T_2 emxArray_real_T_2_ucie_sim_c_T;

#endif                              /* typedef_emxArray_real_T_2_ucie_sim_c_T */

#ifndef struct_tag_ZANOL2Evj6Xf0S5ayEQoP
#define struct_tag_ZANOL2Evj6Xf0S5ayEQoP

struct tag_ZANOL2Evj6Xf0S5ayEQoP
{
  emxArray_real_T_2_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_ZANOL2Evj6Xf0S5ayEQoP */

#ifndef typedef_f_cell_wrap_ucie_sim_c_m_T
#define typedef_f_cell_wrap_ucie_sim_c_m_T

typedef struct tag_ZANOL2Evj6Xf0S5ayEQoP f_cell_wrap_ucie_sim_c_m_T;

#endif                                 /* typedef_f_cell_wrap_ucie_sim_c_m_T */

#ifndef struct_emxArray_tag_ZANOL2Evj6Xf0S5ayE
#define struct_emxArray_tag_ZANOL2Evj6Xf0S5ayE

struct emxArray_tag_ZANOL2Evj6Xf0S5ayE
{
  f_cell_wrap_ucie_sim_c_m_T data;
  int32_T size;
};

#endif                              /* struct_emxArray_tag_ZANOL2Evj6Xf0S5ayE */

#ifndef typedef_emxArray_f_cell_wrap_1_ucie_sim_c_T
#define typedef_emxArray_f_cell_wrap_1_ucie_sim_c_T

typedef struct emxArray_tag_ZANOL2Evj6Xf0S5ayE
  emxArray_f_cell_wrap_1_ucie_sim_c_T;

#endif                         /* typedef_emxArray_f_cell_wrap_1_ucie_sim_c_T */

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1

struct emxArray_real_T_1x1
{
  real_T data;
  int32_T size[2];
};

#endif                                 /* struct_emxArray_real_T_1x1 */

#ifndef typedef_emxArray_real_T_1x1_ucie_sim_c_T
#define typedef_emxArray_real_T_1x1_ucie_sim_c_T

typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1_ucie_sim_c_T;

#endif                            /* typedef_emxArray_real_T_1x1_ucie_sim_c_T */

#ifndef struct_tag_AC002yYp1shR6isXhNdEtD
#define struct_tag_AC002yYp1shR6isXhNdEtD

struct tag_AC002yYp1shR6isXhNdEtD
{
  emxArray_real_T_1x1_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_AC002yYp1shR6isXhNdEtD */

#ifndef typedef_g_cell_wrap_ucie_sim_c_T
#define typedef_g_cell_wrap_ucie_sim_c_T

typedef struct tag_AC002yYp1shR6isXhNdEtD g_cell_wrap_ucie_sim_c_T;

#endif                                 /* typedef_g_cell_wrap_ucie_sim_c_T */

#ifndef struct_emxArray_tag_AC002yYp1shR6isXhN
#define struct_emxArray_tag_AC002yYp1shR6isXhN

struct emxArray_tag_AC002yYp1shR6isXhN
{
  g_cell_wrap_ucie_sim_c_T data;
  int32_T size;
};

#endif                              /* struct_emxArray_tag_AC002yYp1shR6isXhN */

#ifndef typedef_emxArray_g_cell_wrap_1_ucie_sim_c_T
#define typedef_emxArray_g_cell_wrap_1_ucie_sim_c_T

typedef struct emxArray_tag_AC002yYp1shR6isXhN
  emxArray_g_cell_wrap_1_ucie_sim_c_T;

#endif                         /* typedef_emxArray_g_cell_wrap_1_ucie_sim_c_T */

#ifndef struct_tag_OZY8IDBffityjQlUdOzaQE
#define struct_tag_OZY8IDBffityjQlUdOzaQE

struct tag_OZY8IDBffityjQlUdOzaQE
{
  emxArray_real_T_2_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_OZY8IDBffityjQlUdOzaQE */

#ifndef typedef_cell_wrap_22_ucie_sim_c_T
#define typedef_cell_wrap_22_ucie_sim_c_T

typedef struct tag_OZY8IDBffityjQlUdOzaQE cell_wrap_22_ucie_sim_c_T;

#endif                                 /* typedef_cell_wrap_22_ucie_sim_c_T */

/* Custom Type definition for MATLAB Function: '<S16>/MATLAB Function' */
#ifndef struct_emxArray_tag_OZY8IDBffityjQlUdO
#define struct_emxArray_tag_OZY8IDBffityjQlUdO

struct emxArray_tag_OZY8IDBffityjQlUdO
{
  cell_wrap_22_ucie_sim_c_T data;
  int32_T size;
};

#endif                              /* struct_emxArray_tag_OZY8IDBffityjQlUdO */

#ifndef typedef_emxArray_cell_wrap_22_1_ucie_sim_c_T
#define typedef_emxArray_cell_wrap_22_1_ucie_sim_c_T

typedef struct emxArray_tag_OZY8IDBffityjQlUdO
  emxArray_cell_wrap_22_1_ucie_sim_c_T;

#endif                        /* typedef_emxArray_cell_wrap_22_1_ucie_sim_c_T */

#ifndef struct_tag_NjRrOtlmRSoOig0sNeoUj
#define struct_tag_NjRrOtlmRSoOig0sNeoUj

struct tag_NjRrOtlmRSoOig0sNeoUj
{
  emxArray_real_T_1x1_ucie_sim_c_T f1;
};

#endif                                 /* struct_tag_NjRrOtlmRSoOig0sNeoUj */

#ifndef typedef_cell_wrap_23_ucie_sim_c_T
#define typedef_cell_wrap_23_ucie_sim_c_T

typedef struct tag_NjRrOtlmRSoOig0sNeoUj cell_wrap_23_ucie_sim_c_T;

#endif                                 /* typedef_cell_wrap_23_ucie_sim_c_T */

/* Custom Type definition for MATLAB Function: '<S16>/MATLAB Function' */
#ifndef struct_emxArray_tag_NjRrOtlmRSoOig0sNe
#define struct_emxArray_tag_NjRrOtlmRSoOig0sNe

struct emxArray_tag_NjRrOtlmRSoOig0sNe
{
  cell_wrap_23_ucie_sim_c_T data;
  int32_T size;
};

#endif                              /* struct_emxArray_tag_NjRrOtlmRSoOig0sNe */

#ifndef typedef_emxArray_cell_wrap_23_1_ucie_sim_c_T
#define typedef_emxArray_cell_wrap_23_1_ucie_sim_c_T

typedef struct emxArray_tag_NjRrOtlmRSoOig0sNe
  emxArray_cell_wrap_23_1_ucie_sim_c_T;

#endif                        /* typedef_emxArray_cell_wrap_23_1_ucie_sim_c_T */

#ifndef SS_UINT64
#define SS_UINT64                      33
#endif

#ifndef SS_INT64
#define SS_INT64                       34
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_ucie_sim_c_T RT_MODEL_ucie_sim_c_T;

#endif                                 /* ucie_sim_c_types_h_ */
