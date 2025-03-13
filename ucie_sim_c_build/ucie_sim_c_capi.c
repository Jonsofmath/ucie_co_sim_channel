/*
 * ucie_sim_c_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ucie_sim_c_capi_host.h"
#define sizeof(...)                    ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#ifndef SS_UINT64
#define SS_UINT64                      33
#endif

#ifndef SS_INT64
#define SS_INT64                       34
#endif

#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "ucie_sim_c.h"
#include "ucie_sim_c_capi.h"
#include "ucie_sim_c_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Individual block tuning is not valid when inline parameters is *
 * selected. An empty map is produced to provide a consistent     *
 * interface independent  of inlining parameters.                 *
 */
static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, TARGET_STRING("DFEClkFwdParameter"), 1, 2, 0 },

  { 1, TARGET_STRING("FFEParameter"), 2, 2, 0 },

  { 2, TARGET_STRING("CTLEParameter"), 3, 2, 0 },

  { 3, TARGET_STRING("VGAParameter"), 4, 2, 0 },

  { 4, TARGET_STRING("ChannelImpulse"), 0, 4, 0 },

  { 5, TARGET_STRING("Aggressors"), 0, 2, 0 },

  { 6, TARGET_STRING("Modulation"), 0, 2, 0 },

  { 7, TARGET_STRING("RowSize"), 0, 2, 0 },

  { 8, TARGET_STRING("SampleInterval"), 0, 2, 0 },

  { 9, TARGET_STRING("SymbolTime"), 0, 2, 0 },

  { 0, (NULL), 0, 0, 0 }
};

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), (uint8_T)SS_DOUBLE, 0, 0, 0 },

  { "struct", "struct_M21dWdeJoYKmUlJw54zjGH", 5, 1, sizeof
    (struct_M21dWdeJoYKmUlJw54zjGH), (uint8_T)SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_HG5YRIkYWgYOkgznq3h4n", 3, 6, sizeof
    (struct_HG5YRIkYWgYOkgznq3h4n), (uint8_T)SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_Hh4802JZGHB15BspDZ57H", 3, 9, sizeof
    (struct_Hh4802JZGHB15BspDZ57H), (uint8_T)SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_RnY6e51lDiqqn300n3CSMB", 2, 12, sizeof
    (struct_RnY6e51lDiqqn300n3CSMB), (uint8_T)SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "ForwardClockOffset", rt_offsetof(struct_M21dWdeJoYKmUlJw54zjGH,
    ForwardClockOffset), 0, 0, 0 },

  { "Mode", rt_offsetof(struct_M21dWdeJoYKmUlJw54zjGH, Mode), 0, 0, 0 },

  { "ReferenceOffset", rt_offsetof(struct_M21dWdeJoYKmUlJw54zjGH,
    ReferenceOffset), 0, 0, 0 },

  { "PhaseOffset", rt_offsetof(struct_M21dWdeJoYKmUlJw54zjGH, PhaseOffset), 0, 0,
    0 },

  { "TapWeights", rt_offsetof(struct_M21dWdeJoYKmUlJw54zjGH, TapWeights), 0, 1,
    0 },

  { "Mode", rt_offsetof(struct_HG5YRIkYWgYOkgznq3h4n, Mode), 0, 0, 0 },

  { "TapWeights", rt_offsetof(struct_HG5YRIkYWgYOkgznq3h4n, TapWeights), 0, 3, 0
  },

  { "ConfigSelect", rt_offsetof(struct_HG5YRIkYWgYOkgznq3h4n, ConfigSelect), 0,
    0, 0 },

  { "Mode", rt_offsetof(struct_Hh4802JZGHB15BspDZ57H, Mode), 0, 0, 0 },

  { "ConfigSelect", rt_offsetof(struct_Hh4802JZGHB15BspDZ57H, ConfigSelect), 0,
    0, 0 },

  { "SliceSelect", rt_offsetof(struct_Hh4802JZGHB15BspDZ57H, SliceSelect), 0, 0,
    0 },

  { "Gain", rt_offsetof(struct_RnY6e51lDiqqn300n3CSMB, Gain), 0, 0, 0 },

  { "Mode", rt_offsetof(struct_RnY6e51lDiqqn300n3CSMB, Mode), 0, 0, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  4,                                   /* 3 */
  1,                                   /* 4 */
  2,                                   /* 5 */
  8388608,                             /* 6 */
  1                                    /* 7 */
};

/* Fixed Point Map */
static rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, (boolean_T)0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  {
    (NULL), (NULL), 0, 0
  }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 0,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 0,
    rtModelParameters, 10 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1043420338U,
    853222493U,
    3537782602U,
    2818632175U },
  (NULL), 0,
  (boolean_T)0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  ucie_sim_c_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void ucie_sim_c_InitializeDataMapInfo(RT_MODEL_ucie_sim_c_T *const ucie_sim_c_M)
{
  /* run-time setup of addresses */
  InstP_ucie_sim_c_T *ucie_sim_c_InstP = (InstP_ucie_sim_c_T *)
    ucie_sim_c_M->ucie_sim_c_InstP_ref;
  void* *rtDataAddrMap;
  int32_T* *rtVarDimsAddrMap;
  rt_FREE( rtwCAPI_GetDataAddressMap( &(ucie_sim_c_M->DataMapInfo.mmi) ) );
  rtDataAddrMap = (void* *) malloc(10 * sizeof(void* ));
  if ((rtDataAddrMap) == (NULL)) {
    rtmSetErrorStatus(ucie_sim_c_M, RT_MEMORY_ALLOCATION_ERROR);
    return;
  }

  rtDataAddrMap[0] = (void* )(&ucie_sim_c_InstP->DFEClkFwdParameter);
  rtDataAddrMap[1] = (void* )(&ucie_sim_c_InstP->FFEParameter);
  rtDataAddrMap[2] = (void* )(&ucie_sim_c_InstP->CTLEParameter);
  rtDataAddrMap[3] = (void* )(&ucie_sim_c_InstP->VGAParameter);
  rtDataAddrMap[4] = (void* )(&ucie_sim_c_InstP->ChannelImpulse[0]);
  rtDataAddrMap[5] = (void* )(&ucie_sim_c_InstP->Aggressors);
  rtDataAddrMap[6] = (void* )(&ucie_sim_c_InstP->Modulation);
  rtDataAddrMap[7] = (void* )(&ucie_sim_c_InstP->RowSize);
  rtDataAddrMap[8] = (void* )(&ucie_sim_c_InstP->SampleInterval);
  rtDataAddrMap[9] = (void* )(&ucie_sim_c_InstP->SymbolTime);
  rt_FREE( rtwCAPI_GetVarDimsAddressMap( &(ucie_sim_c_M->DataMapInfo.mmi) ) );
  rtVarDimsAddrMap = (int32_T* *) malloc(1 * sizeof(int32_T* ));
  if ((rtVarDimsAddrMap) == (NULL)) {
    rtmSetErrorStatus(ucie_sim_c_M, RT_MEMORY_ALLOCATION_ERROR);
    return;
  }

  rtVarDimsAddrMap[0] = (int32_T* )((NULL));

  /* Set C-API version */
  rtwCAPI_SetVersion(ucie_sim_c_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(ucie_sim_c_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(ucie_sim_c_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(ucie_sim_c_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(ucie_sim_c_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(ucie_sim_c_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(ucie_sim_c_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(ucie_sim_c_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C"
{

#endif

  void ucie_sim_c_host_InitializeDataMapInfo(ucie_sim_c_host_DataMapInfo_T
    *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, (NULL));

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, (NULL));

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, (NULL));

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: ucie_sim_c_capi.c */
