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

struct t2138;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t2131.h"

extern "C" void m15804_gshared (t2138 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m15804(__this, p0, p1, method) (( void (*) (t2138 *, t7 *, t196, const MethodInfo*))m15804_gshared)(__this, p0, p1, method)
extern "C" t2131  m15805_gshared (t2138 * __this, t7 * p0, bool p1, const MethodInfo* method);
#define m15805(__this, p0, p1, method) (( t2131  (*) (t2138 *, t7 *, bool, const MethodInfo*))m15805_gshared)(__this, p0, p1, method)
extern "C" t7 * m15806_gshared (t2138 * __this, t7 * p0, bool p1, t182 * p2, t7 * p3, const MethodInfo* method);
#define m15806(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2138 *, t7 *, bool, t182 *, t7 *, const MethodInfo*))m15806_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2131  m15807_gshared (t2138 * __this, t7 * p0, const MethodInfo* method);
#define m15807(__this, p0, method) (( t2131  (*) (t2138 *, t7 *, const MethodInfo*))m15807_gshared)(__this, p0, method)
