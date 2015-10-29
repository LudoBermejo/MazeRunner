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

struct t2235;

#include "codegen/il2cpp-codegen.h"
#include "t635.h"

extern "C" void m16707_gshared (t2235 * __this, const MethodInfo* method);
#define m16707(__this, method) (( void (*) (t2235 *, const MethodInfo*))m16707_gshared)(__this, method)
extern "C" int32_t m16708_gshared (t2235 * __this, t635  p0, t635  p1, const MethodInfo* method);
#define m16708(__this, p0, p1, method) (( int32_t (*) (t2235 *, t635 , t635 , const MethodInfo*))m16708_gshared)(__this, p0, p1, method)
