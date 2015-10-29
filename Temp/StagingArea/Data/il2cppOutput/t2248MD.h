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

struct t2248;

#include "codegen/il2cpp-codegen.h"
#include "t872.h"

extern "C" void m16798_gshared (t2248 * __this, const MethodInfo* method);
#define m16798(__this, method) (( void (*) (t2248 *, const MethodInfo*))m16798_gshared)(__this, method)
extern "C" int32_t m16799_gshared (t2248 * __this, t872  p0, t872  p1, const MethodInfo* method);
#define m16799(__this, p0, p1, method) (( int32_t (*) (t2248 *, t872 , t872 , const MethodInfo*))m16799_gshared)(__this, p0, p1, method)
