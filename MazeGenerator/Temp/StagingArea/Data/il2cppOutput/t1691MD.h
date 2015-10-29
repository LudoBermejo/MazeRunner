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

struct t1691;

#include "codegen/il2cpp-codegen.h"
#include "t1564.h"

extern "C" void m10150_gshared (t1691 * __this, const MethodInfo* method);
#define m10150(__this, method) (( void (*) (t1691 *, const MethodInfo*))m10150_gshared)(__this, method)
extern "C" int32_t m16740_gshared (t1691 * __this, t1564  p0, t1564  p1, const MethodInfo* method);
#define m16740(__this, p0, p1, method) (( int32_t (*) (t1691 *, t1564 , t1564 , const MethodInfo*))m16740_gshared)(__this, p0, p1, method)
