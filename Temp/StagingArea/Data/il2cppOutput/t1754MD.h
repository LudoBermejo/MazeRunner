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

struct t1754;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10853_gshared (t1754 * __this, const MethodInfo* method);
#define m10853(__this, method) (( void (*) (t1754 *, const MethodInfo*))m10853_gshared)(__this, method)
extern "C" void m10854_gshared (t7 * __this , const MethodInfo* method);
#define m10854(__this , method) (( void (*) (t7 * , const MethodInfo*))m10854_gshared)(__this , method)
extern "C" int32_t m10855_gshared (t1754 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m10855(__this, p0, p1, method) (( int32_t (*) (t1754 *, t7 *, t7 *, const MethodInfo*))m10855_gshared)(__this, p0, p1, method)
extern "C" t1754 * m10856_gshared (t7 * __this , const MethodInfo* method);
#define m10856(__this , method) (( t1754 * (*) (t7 * , const MethodInfo*))m10856_gshared)(__this , method)
