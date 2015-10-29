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

struct t1983;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14067_gshared (t1983 * __this, const MethodInfo* method);
#define m14067(__this, method) (( void (*) (t1983 *, const MethodInfo*))m14067_gshared)(__this, method)
extern "C" void m14068_gshared (t7 * __this , const MethodInfo* method);
#define m14068(__this , method) (( void (*) (t7 * , const MethodInfo*))m14068_gshared)(__this , method)
extern "C" int32_t m14069_gshared (t1983 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m14069(__this, p0, p1, method) (( int32_t (*) (t1983 *, t7 *, t7 *, const MethodInfo*))m14069_gshared)(__this, p0, p1, method)
extern "C" t1983 * m14070_gshared (t7 * __this , const MethodInfo* method);
#define m14070(__this , method) (( t1983 * (*) (t7 * , const MethodInfo*))m14070_gshared)(__this , method)
