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

struct t2245;

#include "codegen/il2cpp-codegen.h"
#include "t1564.h"

extern "C" void m16754_gshared (t2245 * __this, const MethodInfo* method);
#define m16754(__this, method) (( void (*) (t2245 *, const MethodInfo*))m16754_gshared)(__this, method)
extern "C" int32_t m16755_gshared (t2245 * __this, t1564  p0, const MethodInfo* method);
#define m16755(__this, p0, method) (( int32_t (*) (t2245 *, t1564 , const MethodInfo*))m16755_gshared)(__this, p0, method)
extern "C" bool m16756_gshared (t2245 * __this, t1564  p0, t1564  p1, const MethodInfo* method);
#define m16756(__this, p0, p1, method) (( bool (*) (t2245 *, t1564 , t1564 , const MethodInfo*))m16756_gshared)(__this, p0, p1, method)
