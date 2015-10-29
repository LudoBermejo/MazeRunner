#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2014;

#include "codegen/il2cpp-codegen.h"
#include "t9.h"

extern "C" void m14500_gshared (t2014 * __this, const MethodInfo* method);
#define m14500(__this, method) (( void (*) (t2014 *, const MethodInfo*))m14500_gshared)(__this, method)
extern "C" int32_t m14501_gshared (t2014 * __this, t9  p0, t9  p1, const MethodInfo* method);
#define m14501(__this, p0, p1, method) (( int32_t (*) (t2014 *, t9 , t9 , const MethodInfo*))m14501_gshared)(__this, p0, p1, method)
