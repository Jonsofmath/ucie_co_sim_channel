###############################################################################
### SystemVerilog DPI Component QuestaSim script
### To compile shared library for SystemVerilog DPI component
### 1. Launch ModelSim.
### 2. Execute the command: do ucie_sim_c.do
###############################################################################

###############################################################################
### SystemVerilog DPI Component Script for ucie_sim_c
###############################################################################

####### Create QuestaSim work directory

vlib work

####### Include paths

set INCLUDE_PATH	  "-I. "

####### Linker Flags

set LINKER_FLAGS ""

####### Compiler Flags

set COMPILER_FLAGS "-DINT64_T=\"long long\" -DRT_MALLOC -DMODEL=ucie_sim_c -DNUMST=2 -DNCSTATES=0 -DHAVESTDIO -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=1 -DTID01EQ=0 -DONESTEPFCN=0 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=1 -DINTEGER_CODE=0 -DMT=0 -DRT -DUSE_RTMODEL"

####### Invoke C compiler

vlog -ccflags "$INCLUDE_PATH $LINKER_FLAGS $COMPILER_FLAGS" rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_zcfcn.c ucie_sim_c.c ucie_sim_c_capi.c ucie_sim_c_data.c ucie_sim_c_dpi.c 

