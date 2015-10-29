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

struct t2210;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t1227.h"

extern "C" void m16499_gshared (t2210 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m16499(__this, p0, p1, method) (( void (*) (t2210 *, t7 *, t196, const MethodInfo*))m16499_gshared)(__this, p0, p1, method)
extern "C" bool m16500_gshared (t2210 * __this, t1227  p0, const MethodInfo* method);
#define m16500(__this, p0, method) (( bool (*) (t2210 *, t1227 , const MethodInfo*))m16500_gshared)(__this, p0, method)
extern "C" t7 * m16501_gshared (t2210 * __this, t1227  p0, t182 * p1, t7 * p2, const MethodInfo* method);
#define m16501(__this, p0, p1, p2, method) (( t7 * (*) (t2210 *, t1227 , t182 *, t7 *, const MethodInfo*))m16501_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16502_gshared (t2210 * __this, t7 * p0, const MethodInfo* method);
#define m16502(__this, p0, method) (( bool (*) (t2210 *, t7 *, const MethodInfo*))m16502_gshared)(__this, p0, method)
