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

struct t2250;

#include "codegen/il2cpp-codegen.h"
#include "t872.h"

extern "C" void m16807_gshared (t2250 * __this, const MethodInfo* method);
#define m16807(__this, method) (( void (*) (t2250 *, const MethodInfo*))m16807_gshared)(__this, method)
extern "C" int32_t m16808_gshared (t2250 * __this, t872  p0, const MethodInfo* method);
#define m16808(__this, p0, method) (( int32_t (*) (t2250 *, t872 , const MethodInfo*))m16808_gshared)(__this, p0, method)
extern "C" bool m16809_gshared (t2250 * __this, t872  p0, t872  p1, const MethodInfo* method);
#define m16809(__this, p0, p1, method) (( bool (*) (t2250 *, t872 , t872 , const MethodInfo*))m16809_gshared)(__this, p0, p1, method)
