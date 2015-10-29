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

struct t2239;

#include "codegen/il2cpp-codegen.h"
#include "t1545.h"

extern "C" void m16724_gshared (t2239 * __this, const MethodInfo* method);
#define m16724(__this, method) (( void (*) (t2239 *, const MethodInfo*))m16724_gshared)(__this, method)
extern "C" int32_t m16725_gshared (t2239 * __this, t1545  p0, t1545  p1, const MethodInfo* method);
#define m16725(__this, p0, p1, method) (( int32_t (*) (t2239 *, t1545 , t1545 , const MethodInfo*))m16725_gshared)(__this, p0, p1, method)
