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

struct t1890;
struct t7;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t195.h"

extern "C" void m12650_gshared (t1890 * __this, t7 * p0, t196 p1, const MethodInfo* method);
#define m12650(__this, p0, p1, method) (( void (*) (t1890 *, t7 *, t196, const MethodInfo*))m12650_gshared)(__this, p0, p1, method)
extern "C" int32_t m12651_gshared (t1890 * __this, t195  p0, t195  p1, const MethodInfo* method);
#define m12651(__this, p0, p1, method) (( int32_t (*) (t1890 *, t195 , t195 , const MethodInfo*))m12651_gshared)(__this, p0, p1, method)
extern "C" t7 * m12652_gshared (t1890 * __this, t195  p0, t195  p1, t182 * p2, t7 * p3, const MethodInfo* method);
#define m12652(__this, p0, p1, p2, p3, method) (( t7 * (*) (t1890 *, t195 , t195 , t182 *, t7 *, const MethodInfo*))m12652_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m12653_gshared (t1890 * __this, t7 * p0, const MethodInfo* method);
#define m12653(__this, p0, method) (( int32_t (*) (t1890 *, t7 *, const MethodInfo*))m12653_gshared)(__this, p0, method)
