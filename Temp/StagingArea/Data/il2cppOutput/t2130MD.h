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

struct t2130;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t957.h"

extern "C" void m15800_gshared (t2130 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m15800(__this, p0, p1, method) (( void (*) (t2130 *, t7 *, t196, const MethodInfo*))m15800_gshared)(__this, p0, p1, method)
extern "C" t957  m15801_gshared (t2130 * __this, t7 * p0, bool p1, const MethodInfo* method);
#define m15801(__this, p0, p1, method) (( t957  (*) (t2130 *, t7 *, bool, const MethodInfo*))m15801_gshared)(__this, p0, p1, method)
extern "C" t7 * m15802_gshared (t2130 * __this, t7 * p0, bool p1, t182 * p2, t7 * p3, const MethodInfo* method);
#define m15802(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2130 *, t7 *, bool, t182 *, t7 *, const MethodInfo*))m15802_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t957  m15803_gshared (t2130 * __this, t7 * p0, const MethodInfo* method);
#define m15803(__this, p0, method) (( t957  (*) (t2130 *, t7 *, const MethodInfo*))m15803_gshared)(__this, p0, method)
