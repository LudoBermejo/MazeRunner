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

struct t1991;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14202_gshared (t1991 * __this, const MethodInfo* method);
#define m14202(__this, method) (( void (*) (t1991 *, const MethodInfo*))m14202_gshared)(__this, method)
extern "C" void m14203_gshared (t7 * __this , const MethodInfo* method);
#define m14203(__this , method) (( void (*) (t7 * , const MethodInfo*))m14203_gshared)(__this , method)
extern "C" int32_t m14204_gshared (t1991 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m14204(__this, p0, p1, method) (( int32_t (*) (t1991 *, t7 *, t7 *, const MethodInfo*))m14204_gshared)(__this, p0, p1, method)
extern "C" t1991 * m14205_gshared (t7 * __this , const MethodInfo* method);
#define m14205(__this , method) (( t1991 * (*) (t7 * , const MethodInfo*))m14205_gshared)(__this , method)
