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

struct t1823;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t1817.h"

extern "C" void m11770_gshared (t1823 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m11770(__this, p0, p1, method) (( void (*) (t1823 *, t7 *, t196, const MethodInfo*))m11770_gshared)(__this, p0, p1, method)
extern "C" t1817  m11771_gshared (t1823 * __this, t7 * p0, int32_t p1, const MethodInfo* method);
#define m11771(__this, p0, p1, method) (( t1817  (*) (t1823 *, t7 *, int32_t, const MethodInfo*))m11771_gshared)(__this, p0, p1, method)
extern "C" t7 * m11772_gshared (t1823 * __this, t7 * p0, int32_t p1, t182 * p2, t7 * p3, const MethodInfo* method);
#define m11772(__this, p0, p1, p2, p3, method) (( t7 * (*) (t1823 *, t7 *, int32_t, t182 *, t7 *, const MethodInfo*))m11772_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1817  m11773_gshared (t1823 * __this, t7 * p0, const MethodInfo* method);
#define m11773(__this, p0, method) (( t1817  (*) (t1823 *, t7 *, const MethodInfo*))m11773_gshared)(__this, p0, method)
