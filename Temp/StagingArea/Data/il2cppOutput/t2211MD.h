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

struct t2211;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16503_gshared (t2211 * __this, const MethodInfo* method);
#define m16503(__this, method) (( void (*) (t2211 *, const MethodInfo*))m16503_gshared)(__this, method)
extern "C" void m16504_gshared (t7 * __this , const MethodInfo* method);
#define m16504(__this , method) (( void (*) (t7 * , const MethodInfo*))m16504_gshared)(__this , method)
extern "C" int32_t m16505_gshared (t2211 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16505(__this, p0, p1, method) (( int32_t (*) (t2211 *, t7 *, t7 *, const MethodInfo*))m16505_gshared)(__this, p0, p1, method)
extern "C" t2211 * m16506_gshared (t7 * __this , const MethodInfo* method);
#define m16506(__this , method) (( t2211 * (*) (t7 * , const MethodInfo*))m16506_gshared)(__this , method)
