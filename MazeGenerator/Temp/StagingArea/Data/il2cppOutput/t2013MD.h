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

struct t2013;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14496_gshared (t2013 * __this, const MethodInfo* method);
#define m14496(__this, method) (( void (*) (t2013 *, const MethodInfo*))m14496_gshared)(__this, method)
extern "C" void m14497_gshared (t7 * __this , const MethodInfo* method);
#define m14497(__this , method) (( void (*) (t7 * , const MethodInfo*))m14497_gshared)(__this , method)
extern "C" int32_t m14498_gshared (t2013 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m14498(__this, p0, p1, method) (( int32_t (*) (t2013 *, t7 *, t7 *, const MethodInfo*))m14498_gshared)(__this, p0, p1, method)
extern "C" t2013 * m14499_gshared (t7 * __this , const MethodInfo* method);
#define m14499(__this , method) (( t2013 * (*) (t7 * , const MethodInfo*))m14499_gshared)(__this , method)
