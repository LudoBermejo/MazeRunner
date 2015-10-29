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

struct t2242;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16741_gshared (t2242 * __this, const MethodInfo* method);
#define m16741(__this, method) (( void (*) (t2242 *, const MethodInfo*))m16741_gshared)(__this, method)
extern "C" void m16742_gshared (t7 * __this , const MethodInfo* method);
#define m16742(__this , method) (( void (*) (t7 * , const MethodInfo*))m16742_gshared)(__this , method)
extern "C" int32_t m16743_gshared (t2242 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16743(__this, p0, p1, method) (( int32_t (*) (t2242 *, t7 *, t7 *, const MethodInfo*))m16743_gshared)(__this, p0, p1, method)
extern "C" t2242 * m16744_gshared (t7 * __this , const MethodInfo* method);
#define m16744(__this , method) (( t2242 * (*) (t7 * , const MethodInfo*))m16744_gshared)(__this , method)
