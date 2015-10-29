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

struct t2201;

#include "codegen/il2cpp-codegen.h"
#include "t1228.h"

extern "C" void m16341_gshared (t2201 * __this, const MethodInfo* method);
#define m16341(__this, method) (( void (*) (t2201 *, const MethodInfo*))m16341_gshared)(__this, method)
extern "C" int32_t m16342_gshared (t2201 * __this, t1228  p0, t1228  p1, const MethodInfo* method);
#define m16342(__this, p0, p1, method) (( int32_t (*) (t2201 *, t1228 , t1228 , const MethodInfo*))m16342_gshared)(__this, p0, p1, method)
