###########################################################################
## Makefile generated for component 'ucie_sim_c'. 
## 
## Makefile     : ucie_sim_c.mk
## Generated on : Thu Mar 13 13:32:44 2025
## Final product: $(RELATIVE_PATH_TO_ANCHOR)ucie_sim_c_win64.so
## Product type : shared library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# DEF_FILE                Definition file

PRODUCT_NAME              = ucie_sim_c
MAKEFILE                  = ucie_sim_c.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2024b
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2024b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\glnxa64
START_DIR                 = D:\jonathan\Documents\MATLAB\Examples
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
DEF_FILE                  = $(PRODUCT_NAME).def
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Siemens Questa/ModelSim (64-bit Linux)
# Supported Version(s):    1.0
# ToolchainInfo Version:   2024b
# Specification Revision:  1.0
# 
TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Siemens Questa/ModelSim (64-bit Linux) C Compiler
CC = gcc

# Linker: Siemens Questa/ModelSim (64-bit Linux) Linker
LD = gcc

# C++ Compiler: Siemens Questa/ModelSim (64-bit Linux) GNU C++ Compiler
CPP = g++

# C++ Linker: Siemens Questa/ModelSim (64-bit Linux) GNU C++ Linker
CPP_LD = g++

# Archiver: Siemens Questa/ModelSim (64-bit Linux) GNU Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: Siemens Questa/ModelSim (64-bit Linux)
MAKE = echo "### Successfully generated all binary outputs."


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              =
C_OUTPUT_FLAG       =
LDDEBUG             =
OUTPUT_FLAG         =
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  =
ECHO                =
MV                  =
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              =
CFLAGS               =
CPPFLAGS             =
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           =  $(MAKEFILE)
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)ucie_sim_c_win64.so
PRODUCT_TYPE = "shared library"
BUILD_TYPE = "Shared Library Target"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -ccflags$(START_DIR) -ccflags$(START_DIR)ucie_sim_c_build -ccflags$(MATLAB_ROOT)externinclude -ccflags$(MATLAB_ROOT)simulinkinclude -ccflags$(MATLAB_ROOT)rtwcsrc

INCLUDES = 

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = RT USE_RTMODEL
DEFINES_BUILD_ARGS = CLASSIC_INTERFACE=0 ALLOCATIONFCN=1 ONESTEPFCN=0 TERMFCN=1 MULTI_INSTANCE_CODE=1 INTEGER_CODE=0 MT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = RT_MALLOC TID01EQ=0
DEFINES_STANDARD = MODEL=ucie_sim_c NUMST=2 NCSTATES=0 HAVESTDIO

DEFINES =     

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)ucie_sim_c_buildrtGetInf.c $(START_DIR)ucie_sim_c_buildrtGetNaN.c $(START_DIR)ucie_sim_c_buildrt_nonfinite.c $(START_DIR)ucie_sim_c_buildrt_zcfcn.c $(START_DIR)ucie_sim_c_builducie_sim_c.c $(START_DIR)ucie_sim_c_builducie_sim_c_capi.c $(START_DIR)ucie_sim_c_builducie_sim_c_data.c $(START_DIR)ucie_sim_c_builducie_sim_c_dpi.c

ALL_SRCS = 

###########################################################################
## OBJECTS
###########################################################################

OBJS = rtGetInf.o rtGetNaN.o rt_nonfinite.o rt_zcfcn.o ucie_sim_c.o ucie_sim_c_capi.o ucie_sim_c_data.o ucie_sim_c_dpi.o

ALL_OBJS = 

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += 

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += 

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	 "### Successfully generated all binary outputs."


build : prebuild 


prebuild : 


download : 


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#----------------------------------------
# Create a shared library
#----------------------------------------

 :  
	 "### Creating shared library "" ..."
	    $(subst ,/,) $(subst ,/,) $(subst ,/,)
	 "### Created: "


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	   "$@" $(subst ,/,"$<")


%.o : %.cpp
	  -o "$@" $(subst ,/,"$<")


%.o : $(START_DIR)%.c
	   "$@" $(subst ,/,"$<")


%.o : $(START_DIR)%.cpp
	  -o "$@" $(subst ,/,"$<")


%.o : $(START_DIR)ucie_sim_c_build%.c
	   "$@" $(subst ,/,"$<")


%.o : $(START_DIR)ucie_sim_c_build%.cpp
	  -o "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)rtwcsrc%.c
	   "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)rtwcsrc%.cpp
	  -o "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)simulinksrc%.c
	   "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)simulinksrc%.cpp
	  -o "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)toolboxsimulinkblockssrc%.c
	   "$@" $(subst ,/,"$<")


%.o : $(MATLAB_ROOT)toolboxsimulinkblockssrc%.cpp
	  -o "$@" $(subst ,/,"$<")


rtGetInf.o : $(START_DIR)ucie_sim_c_buildrtGetInf.c
	   "$@" $(subst ,/,"$<")


rtGetNaN.o : $(START_DIR)ucie_sim_c_buildrtGetNaN.c
	   "$@" $(subst ,/,"$<")


rt_nonfinite.o : $(START_DIR)ucie_sim_c_buildrt_nonfinite.c
	   "$@" $(subst ,/,"$<")


rt_zcfcn.o : $(START_DIR)ucie_sim_c_buildrt_zcfcn.c
	   "$@" $(subst ,/,"$<")


ucie_sim_c.o : $(START_DIR)ucie_sim_c_builducie_sim_c.c
	   "$@" $(subst ,/,"$<")


ucie_sim_c_capi.o : $(START_DIR)ucie_sim_c_builducie_sim_c_capi.c
	   "$@" $(subst ,/,"$<")


ucie_sim_c_data.o : $(START_DIR)ucie_sim_c_builducie_sim_c_data.c
	   "$@" $(subst ,/,"$<")


ucie_sim_c_dpi.o : $(START_DIR)ucie_sim_c_builducie_sim_c_dpi.c
	   "$@" $(subst ,/,"$<")


###########################################################################
## DEPENDENCIES
###########################################################################

 : rtw_proj.tmw 


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	 "### PRODUCT = "
	 "### PRODUCT_TYPE = "
	 "### BUILD_TYPE = "
	 "### INCLUDES = "
	 "### DEFINES = "
	 "### ALL_SRCS = "
	 "### ALL_OBJS = "
	 "### LIBS = "
	 "### MODELREF_LIBS = "
	 "### SYSTEM_LIBS = "
	 "### TOOLCHAIN_LIBS = "
	 "### CFLAGS = "
	 "### LDFLAGS = "
	 "### SHAREDLIB_LDFLAGS = "
	 "### CPPFLAGS = "
	 "### CPP_LDFLAGS = "
	 "### CPP_SHAREDLIB_LDFLAGS = "
	 "### ARFLAGS = "
	 "### MEX_CFLAGS = "
	 "### MEX_CPPFLAGS = "
	 "### MEX_LDFLAGS = "
	 "### MEX_CPPLDFLAGS = "
	 "### DOWNLOAD_FLAGS = "
	 "### EXECUTE_FLAGS = "
	 "### MAKE_FLAGS = "


clean : 
	 "### Deleting all derived files ..."
	 $(subst /,\,)
	 $(subst /,\,)
	 "### Deleted all derived files."


