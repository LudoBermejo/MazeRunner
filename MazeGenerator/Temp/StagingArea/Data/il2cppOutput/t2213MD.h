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

struct t2213;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t1227.h"

extern "C" void m16509_gshared (t2213 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m16509(__this, p0, p1, method) (( void (*) (t2213 *, t7 *, t196, const MethodInfo*))m16509_gshared)(__this, p0, p1, method)
extern "C" int32_t m16510_gshared (t2213 * __this, t1227  p0, t1227  p1, const MethodInfo* method);
#define m16510(__this, p0, p1, method) (( int32_t (*) (t2213 *, t1227 , t1227 , const MethodInfo*))m16510_gshared)(__this, p0, p1, method)
extern "C" t7 * m16511_gshared (t2213 * __this, t1227  p0, t1227  p1, t182 * p2, t7 * p3, const MethodInfo* method);
#define m16511(__this, p0, p1, p2, p3, method) (( t7 * (*) (t2213 *, t1227 , t1227 , t182 *, t7 *, const MethodInfo*))m16511_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16512_gshared (t2213 * __this, t7 * p0, const MethodInfo* method);
#define m16512(__this, p0, method) (( int32_t (*) (t2213 *, t7 *, const MethodInfo*))m16512_gshared)(__this, p0, method)
