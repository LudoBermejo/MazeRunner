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

struct t2200;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16337_gshared (t2200 * __this, const MethodInfo* method);
#define m16337(__this, method) (( void (*) (t2200 *, const MethodInfo*))m16337_gshared)(__this, method)
extern "C" void m16338_gshared (t7 * __this , const MethodInfo* method);
#define m16338(__this , method) (( void (*) (t7 * , const MethodInfo*))m16338_gshared)(__this , method)
extern "C" int32_t m16339_gshared (t2200 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16339(__this, p0, p1, method) (( int32_t (*) (t2200 *, t7 *, t7 *, const MethodInfo*))m16339_gshared)(__this, p0, p1, method)
extern "C" t2200 * m16340_gshared (t7 * __this , const MethodInfo* method);
#define m16340(__this , method) (( t2200 * (*) (t7 * , const MethodInfo*))m16340_gshared)(__this , method)
