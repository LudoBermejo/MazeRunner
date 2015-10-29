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

struct t2212;

#include "codegen/il2cpp-codegen.h"
#include "t1227.h"

extern "C" void m16507_gshared (t2212 * __this, const MethodInfo* method);
#define m16507(__this, method) (( void (*) (t2212 *, const MethodInfo*))m16507_gshared)(__this, method)
extern "C" int32_t m16508_gshared (t2212 * __this, t1227  p0, t1227  p1, const MethodInfo* method);
#define m16508(__this, p0, p1, method) (( int32_t (*) (t2212 *, t1227 , t1227 , const MethodInfo*))m16508_gshared)(__this, p0, p1, method)
