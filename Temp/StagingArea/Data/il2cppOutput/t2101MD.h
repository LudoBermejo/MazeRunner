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

struct t2101;
struct t7;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15395_gshared (t2101 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15395(__this, p0, p1, method) (( void (*) (t2101 *, t7 *, t540 *, const MethodInfo*))m15395_gshared)(__this, p0, p1, method)
extern "C" void m15396_gshared (t2101 * __this, t39* p0, const MethodInfo* method);
#define m15396(__this, p0, method) (( void (*) (t2101 *, t39*, const MethodInfo*))m15396_gshared)(__this, p0, method)
extern "C" bool m15397_gshared (t2101 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15397(__this, p0, p1, method) (( bool (*) (t2101 *, t7 *, t540 *, const MethodInfo*))m15397_gshared)(__this, p0, p1, method)
