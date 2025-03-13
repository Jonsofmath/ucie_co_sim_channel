#ifndef ucie_sim_c_cap_host_h__
#define ucie_sim_c_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} ucie_sim_c_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C"
{

#endif

  void ucie_sim_c_host_InitializeDataMapInfo(ucie_sim_c_host_DataMapInfo_T
    *dataMap, const char *path);

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* ucie_sim_c_cap_host_h__ */

/* EOF: ucie_sim_c_capi_host.h */
