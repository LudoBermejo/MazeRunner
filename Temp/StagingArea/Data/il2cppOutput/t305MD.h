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

struct t305;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t33.h"

extern "C" void m1770_gshared (t305 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m1770(__this, p0, p1, method) (( void (*) (t305 *, t7 *, t196, const MethodInfo*))m1770_gshared)(__this, p0, p1, method)
extern "C" void m11623_gshared (t305 * __this, t33  p0, const MethodInfo* method);
#define m11623(__this, p0, method) (( void (*) (t305 *, t33 , const MethodInfo*))m11623_gshared)(__this, p0, method)
extern "C" t7 * m11624_gshared (t305 * __this, t33  p0, t182 * p1, t7 * p2, const MethodInfo* method);
#define m11624(__this, p0, p1, p2, method) (( t7 * (*) (t305 *, t33 , t182 *, t7 *, const MethodInfo*))m11624_gshared)(__this, p0, p1, p2, method)
extern "C" void m11625_gshared (t305 * __this, t7 * p0, const MethodInfo* method);
#define m11625(__this, p0, method) (( void (*) (t305 *, t7 *, const MethodInfo*))m11625_gshared)(__this, p0, method)
