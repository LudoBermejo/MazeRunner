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

struct t2174;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16090_gshared (t2174 * __this, const MethodInfo* method);
#define m16090(__this, method) (( void (*) (t2174 *, const MethodInfo*))m16090_gshared)(__this, method)
extern "C" int32_t m16091_gshared (t2174 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m16091(__this, p0, p1, method) (( int32_t (*) (t2174 *, t7 *, t7 *, const MethodInfo*))m16091_gshared)(__this, p0, p1, method)
