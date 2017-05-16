// *****************************************************************************
// *****************************************************************************
// Copyright 2012 - 2013, Cadence Design Systems
// 
// This  file  is  part  of  the  Cadence  LEF/DEF  Open   Source
// Distribution,  Product Version 5.8. 
// 
// Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
//    implied. See the License for the specific language governing
//    permissions and limitations under the License.
// 
// For updates, support, or to become part of the LEF/DEF Community,
// check www.openeda.org for details.
// 
//  $Author: dell $
//  $Revision: #7 $
//  $Date: 2015/01/27 $
//  $State:  $
// *****************************************************************************
// *****************************************************************************

#ifndef lefiDebug_h
#define lefiDebug_h 1

#include "lefiKRDefs.hpp"

BEGIN_LEFDEF_PARSER_NAMESPACE

// Set flag 
extern void lefiSetDebug (int num, int value) ;

// Read flag 
extern int lefiDebug (int num) ;

// Error reporting routine 
extern void lefiError (int check, int msgNum, const char* msg);

extern const char* CASE(const char *x); 

END_LEFDEF_PARSER_NAMESPACE

USE_LEFDEF_PARSER_NAMESPACE

#endif
