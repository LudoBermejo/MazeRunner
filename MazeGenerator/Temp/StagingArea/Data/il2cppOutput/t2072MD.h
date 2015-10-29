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

struct t2072;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t373.h"

extern "C" void m15082_gshared (t2072 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m15082(__this, p0, p1, method) (( void (*) (t2072 *, t7 *, t196, const MethodInfo*))m15082_gshared)(__this, p0, p1, method)
extern "C" bool m15083_gshared (t2072 * __this, t373  p0, const MethodInfo* method);
#define m15083(__this, p0, method) (( bool (*) (t2072 *, t373 , const MethodInfo*))m15083_gshared)(__this, p0, method)
extern "C" t7 * m15084_gshared (t2072 * __this, t373  p0, t182 * p1, t7 * p2, const MethodInfo* method);
#define m15084(__this, p0, p1, p2, method) (( t7 * (*) (t2072 *, t373 , t182 *, t7 *, const MethodInfo*))m15084_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15085_gshared (t2072 * __this, t7 * p0, const MethodInfo* method);
#define m15085(__this, p0, method) (( bool (*) (t2072 *, t7 *, const MethodInfo*))m15085_gshared)(__this, p0, method)
