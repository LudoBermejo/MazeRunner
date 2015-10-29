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

struct t110;
struct t306;
struct t540;
struct t25;
struct t7;
struct t516;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1620_gshared (t110 * __this, const MethodInfo* method);
#define m1620(__this, method) (( void (*) (t110 *, const MethodInfo*))m1620_gshared)(__this, method)
extern "C" void m1623_gshared (t110 * __this, t306 * p0, const MethodInfo* method);
#define m1623(__this, p0, method) (( void (*) (t110 *, t306 *, const MethodInfo*))m1623_gshared)(__this, p0, method)
extern "C" void m1950_gshared (t110 * __this, t306 * p0, const MethodInfo* method);
#define m1950(__this, p0, method) (( void (*) (t110 *, t306 *, const MethodInfo*))m1950_gshared)(__this, p0, method)
extern "C" t540 * m11630_gshared (t110 * __this, t25* p0, t7 * p1, const MethodInfo* method);
#define m11630(__this, p0, p1, method) (( t540 * (*) (t110 *, t25*, t7 *, const MethodInfo*))m11630_gshared)(__this, p0, p1, method)
extern "C" t516 * m11631_gshared (t110 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m11631(__this, p0, p1, method) (( t516 * (*) (t110 *, t7 *, t540 *, const MethodInfo*))m11631_gshared)(__this, p0, p1, method)
extern "C" t516 * m11632_gshared (t7 * __this , t306 * p0, const MethodInfo* method);
#define m11632(__this , p0, method) (( t516 * (*) (t7 * , t306 *, const MethodInfo*))m11632_gshared)(__this , p0, method)
extern "C" void m1622_gshared (t110 * __this, float p0, const MethodInfo* method);
#define m1622(__this, p0, method) (( void (*) (t110 *, float, const MethodInfo*))m1622_gshared)(__this, p0, method)
