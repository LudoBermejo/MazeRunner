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

struct t2117;
struct t540;
struct t25;
struct t7;
struct t516;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15598_gshared (t2117 * __this, const MethodInfo* method);
#define m15598(__this, method) (( void (*) (t2117 *, const MethodInfo*))m15598_gshared)(__this, method)
extern "C" t540 * m15599_gshared (t2117 * __this, t25* p0, t7 * p1, const MethodInfo* method);
#define m15599(__this, p0, p1, method) (( t540 * (*) (t2117 *, t25*, t7 *, const MethodInfo*))m15599_gshared)(__this, p0, p1, method)
extern "C" t516 * m15600_gshared (t2117 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15600(__this, p0, p1, method) (( t516 * (*) (t2117 *, t7 *, t540 *, const MethodInfo*))m15600_gshared)(__this, p0, p1, method)
