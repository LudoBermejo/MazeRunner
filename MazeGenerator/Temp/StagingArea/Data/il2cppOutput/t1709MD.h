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

struct t1709;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10366_gshared (t1709 * __this, const MethodInfo* method);
#define m10366(__this, method) (( void (*) (t1709 *, const MethodInfo*))m10366_gshared)(__this, method)
extern "C" int32_t m10367_gshared (t1709 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m10367(__this, p0, p1, method) (( int32_t (*) (t1709 *, t7 *, t7 *, const MethodInfo*))m10367_gshared)(__this, p0, p1, method)
