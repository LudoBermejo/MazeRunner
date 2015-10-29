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

struct t2238;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16720_gshared (t2238 * __this, const MethodInfo* method);
#define m16720(__this, method) (( void (*) (t2238 *, const MethodInfo*))m16720_gshared)(__this, method)
extern "C" void m16721_gshared (t7 * __this , const MethodInfo* method);
#define m16721(__this , method) (( void (*) (t7 * , const MethodInfo*))m16721_gshared)(__this , method)
extern "C" int32_t m16722_gshared (t2238 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16722(__this, p0, p1, method) (( int32_t (*) (t2238 *, t7 *, t7 *, const MethodInfo*))m16722_gshared)(__this, p0, p1, method)
extern "C" t2238 * m16723_gshared (t7 * __this , const MethodInfo* method);
#define m16723(__this , method) (( t2238 * (*) (t7 * , const MethodInfo*))m16723_gshared)(__this , method)
