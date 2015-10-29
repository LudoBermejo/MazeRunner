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

struct t2217;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"

extern "C" void m16539_gshared (t2217 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m16539(__this, p0, p1, method) (( void (*) (t2217 *, t7 *, t196, const MethodInfo*))m16539_gshared)(__this, p0, p1, method)
extern "C" t7 * m16540_gshared (t2217 * __this, const MethodInfo* method);
#define m16540(__this, method) (( t7 * (*) (t2217 *, const MethodInfo*))m16540_gshared)(__this, method)
extern "C" t7 * m16541_gshared (t2217 * __this, t182 * p0, t7 * p1, const MethodInfo* method);
#define m16541(__this, p0, p1, method) (( t7 * (*) (t2217 *, t182 *, t7 *, const MethodInfo*))m16541_gshared)(__this, p0, p1, method)
extern "C" t7 * m16542_gshared (t2217 * __this, t7 * p0, const MethodInfo* method);
#define m16542(__this, p0, method) (( t7 * (*) (t2217 *, t7 *, const MethodInfo*))m16542_gshared)(__this, p0, method)
