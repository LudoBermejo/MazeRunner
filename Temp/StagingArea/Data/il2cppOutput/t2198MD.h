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

struct t2198;

#include "codegen/il2cpp-codegen.h"
#include "t1228.h"

extern "C" void m16330_gshared (t2198 * __this, const MethodInfo* method);
#define m16330(__this, method) (( void (*) (t2198 *, const MethodInfo*))m16330_gshared)(__this, method)
extern "C" int32_t m16331_gshared (t2198 * __this, t1228  p0, const MethodInfo* method);
#define m16331(__this, p0, method) (( int32_t (*) (t2198 *, t1228 , const MethodInfo*))m16331_gshared)(__this, p0, method)
extern "C" bool m16332_gshared (t2198 * __this, t1228  p0, t1228  p1, const MethodInfo* method);
#define m16332(__this, p0, p1, method) (( bool (*) (t2198 *, t1228 , t1228 , const MethodInfo*))m16332_gshared)(__this, p0, p1, method)
