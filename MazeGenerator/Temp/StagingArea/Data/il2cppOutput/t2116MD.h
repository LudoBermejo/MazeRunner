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

struct t2116;
struct t540;
struct t25;
struct t7;
struct t516;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15595_gshared (t2116 * __this, const MethodInfo* method);
#define m15595(__this, method) (( void (*) (t2116 *, const MethodInfo*))m15595_gshared)(__this, method)
extern "C" t540 * m15596_gshared (t2116 * __this, t25* p0, t7 * p1, const MethodInfo* method);
#define m15596(__this, p0, p1, method) (( t540 * (*) (t2116 *, t25*, t7 *, const MethodInfo*))m15596_gshared)(__this, p0, p1, method)
extern "C" t516 * m15597_gshared (t2116 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15597(__this, p0, p1, method) (( t516 * (*) (t2116 *, t7 *, t540 *, const MethodInfo*))m15597_gshared)(__this, p0, p1, method)
