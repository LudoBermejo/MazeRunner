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

struct t2080;

#include "codegen/il2cpp-codegen.h"
#include "t371.h"

extern "C" void m15222_gshared (t2080 * __this, const MethodInfo* method);
#define m15222(__this, method) (( void (*) (t2080 *, const MethodInfo*))m15222_gshared)(__this, method)
extern "C" int32_t m15223_gshared (t2080 * __this, t371  p0, const MethodInfo* method);
#define m15223(__this, p0, method) (( int32_t (*) (t2080 *, t371 , const MethodInfo*))m15223_gshared)(__this, p0, method)
extern "C" bool m15224_gshared (t2080 * __this, t371  p0, t371  p1, const MethodInfo* method);
#define m15224(__this, p0, p1, method) (( bool (*) (t2080 *, t371 , t371 , const MethodInfo*))m15224_gshared)(__this, p0, p1, method)
