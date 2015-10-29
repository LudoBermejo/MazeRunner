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

struct t560;
struct t38;
struct t38_marshaled;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2904_gshared (t560 * __this, t38 * p0, t540 * p1, float p2, const MethodInfo* method);
#define m2904(__this, p0, p1, p2, method) (( void (*) (t560 *, t38 *, t540 *, float, const MethodInfo*))m2904_gshared)(__this, p0, p1, p2, method)
extern "C" void m15404_gshared (t560 * __this, t39* p0, const MethodInfo* method);
#define m15404(__this, p0, method) (( void (*) (t560 *, t39*, const MethodInfo*))m15404_gshared)(__this, p0, method)
