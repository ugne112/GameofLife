/*=============================================================================

  PHAS0100LSAASSIGNMENT1: PHAS0100 LSA Assignment 1 Game of Life Simulation.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef golWin32ExportHeader_h
#define golWin32ExportHeader_h

/**
* \file golWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PHAS0100LSAASSIGNMENT1_STATIC)
  #ifdef PHAS0100LSAASSIGNMENT1_WINDOWS_EXPORT
    #define PHAS0100LSAASSIGNMENT1_WINEXPORT __declspec(dllexport)
  #else
    #define PHAS0100LSAASSIGNMENT1_WINEXPORT __declspec(dllimport)
  #endif  /* PHAS0100LSAASSIGNMENT1_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define PHAS0100LSAASSIGNMENT1_WINEXPORT
#endif

#endif
