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

struct t2175;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16092_gshared (t2175 * __this, const MethodInfo* method);
#define m16092(__this, method) (( void (*) (t2175 *, const MethodInfo*))m16092_gshared)(__this, method)
extern "C" int32_t m16093_gshared (t2175 * __this, t7 * p0, const MethodInfo* method);
#define m16093(__this, p0, method) (( int32_t (*) (t2175 *, t7 *, const MethodInfo*))m16093_gshared)(__this, p0, method)
extern "C" bool m16094_gshared (t2175 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16094(__this, p0, p1, method) (( bool (*) (t2175 *, t7 *, t7 *, const MethodInfo*))m16094_gshared)(__this, p0, p1, method)
