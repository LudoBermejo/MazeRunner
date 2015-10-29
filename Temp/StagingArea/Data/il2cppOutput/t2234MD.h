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

struct t2234;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16703_gshared (t2234 * __this, const MethodInfo* method);
#define m16703(__this, method) (( void (*) (t2234 *, const MethodInfo*))m16703_gshared)(__this, method)
extern "C" void m16704_gshared (t7 * __this , const MethodInfo* method);
#define m16704(__this , method) (( void (*) (t7 * , const MethodInfo*))m16704_gshared)(__this , method)
extern "C" int32_t m16705_gshared (t2234 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16705(__this, p0, p1, method) (( int32_t (*) (t2234 *, t7 *, t7 *, const MethodInfo*))m16705_gshared)(__this, p0, p1, method)
extern "C" t2234 * m16706_gshared (t7 * __this , const MethodInfo* method);
#define m16706(__this , method) (( t2234 * (*) (t7 * , const MethodInfo*))m16706_gshared)(__this , method)
