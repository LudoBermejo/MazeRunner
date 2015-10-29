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

struct t2115;
struct t540;
struct t25;
struct t7;
struct t516;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15592_gshared (t2115 * __this, const MethodInfo* method);
#define m15592(__this, method) (( void (*) (t2115 *, const MethodInfo*))m15592_gshared)(__this, method)
extern "C" t540 * m15593_gshared (t2115 * __this, t25* p0, t7 * p1, const MethodInfo* method);
#define m15593(__this, p0, p1, method) (( t540 * (*) (t2115 *, t25*, t7 *, const MethodInfo*))m15593_gshared)(__this, p0, p1, method)
extern "C" t516 * m15594_gshared (t2115 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15594(__this, p0, p1, method) (( t516 * (*) (t2115 *, t7 *, t540 *, const MethodInfo*))m15594_gshared)(__this, p0, p1, method)
