#/*============================================================================
#
#  PHAS0100LSAASSIGNMENT1: PHAS0100 LSA Assignment 1 Game of Life Simulation.
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

set(PHAS0100LSAASSIGNMENT1_LIBRARY_NAME phas0100lsaassignment1)

set(PHAS0100LSAASSIGNMENT1_LIBRARY_SRCS
  golBasicTypes.cpp
  golMyFunctions.cpp
  golException.cpp
  grid.cpp
)

set(PHAS0100LSAASSIGNMENT1_LIBRARY_HDRS
  golExceptionMacro.h
)

add_library(${PHAS0100LSAASSIGNMENT1_LIBRARY_NAME} ${PHAS0100LSAASSIGNMENT1_LIBRARY_HDRS} ${PHAS0100LSAASSIGNMENT1_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DPHAS0100LSAASSIGNMENT1_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${PHAS0100LSAASSIGNMENT1_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

