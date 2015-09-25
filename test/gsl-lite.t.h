// Copyright 2015 by Martin Moene
//
// gsl-lite is based on GSL: Guidelines Support Library,
// https://github.com/microsoft/gsl
//
// This code is licensed under the MIT License (MIT). 
//

#pragma once

#include "gsl-lite.h"
#include "lest_cpp03.hpp"

using namespace Guide;

#define CASE( name ) lest_CASE( specification(), name )

extern lest::tests & specification();

#if gsl_BETWEEN( gsl_COMPILER_MSVC_VERSION, 10, 12 )
namespace lest { inline std::string to_string( nullptr_t const & ) { return "nullptr"; } }
#endif 

// end of file