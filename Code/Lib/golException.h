/*=============================================================================

  PHAS0100LSAASSIGNMENT1: PHAS0100 LSA Assignment 1 Game of Life Simulation.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef golException_h
#define golException_h

#include "golWin32ExportHeader.h"
#include <stdexcept>
#include <ostream>
#include <sstream>

namespace gol {

/**
* \class Exception
* \brief Base exception class.
* \ingroup types
*/
class PHAS0100LSAASSIGNMENT1_WINEXPORT Exception : public std::exception
{
public:

  Exception(const std::string& fileName, int lineNumber);
  virtual ~Exception();

  std::string GetFileName() const;
  int GetLineNumber() const;

  std::string GetDescription() const;
  void SetDescription(const std::string& desc);
  virtual const char* What();

  Exception& operator<<(std::ostream& (*func)(std::ostream&))
  {
    std::ostringstream ss;
    ss << this->GetDescription() << func;
    this->SetDescription(ss.str());
    return *this;
  }

  template <class T> inline Exception& operator<<(T& data)
  {
    std::ostringstream ss;
    ss << this->GetDescription() << data;
    this->SetDescription(ss.str());
    return *this;
  }

   template <class T> inline Exception& operator<<(const T& data)
   {
     std::ostringstream ss;
     ss << this->GetDescription() << data;
     this->SetDescription(ss.str());
     return *this;
   }

private:
  std::string m_Description;
  std::string m_FileName;
  int         m_LineNumber;
};

} // end namespace

#endif
