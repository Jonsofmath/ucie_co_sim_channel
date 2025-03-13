/*
 *  rtmodel.h:
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

#ifndef rtmodel_h_
#define rtmodel_h_
#include "ucie_sim_c.h"
#define GRTINTERFACE                   0

/*
 * ROOT_IO_FORMAT: 0 (Individual arguments)
 * ROOT_IO_FORMAT: 1 (Structure reference)
 * ROOT_IO_FORMAT: 2 (Part of model data structure)
 */
#define ROOT_IO_FORMAT                 2

/* Macros generated for backwards compatibility  */
#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((void*) 0)
#endif
#endif                                 /* rtmodel_h_ */
