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

struct t1689;

#include "codegen/il2cpp-codegen.h"
#include "t1545.h"

extern "C" void m10145_gshared (t1689 * __this, const MethodInfo* method);
#define m10145(__this, method) (( void (*) (t1689 *, const MethodInfo*))m10145_gshared)(__this, method)
extern "C" int32_t m16719_gshared (t1689 * __this, t1545  p0, t1545  p1, const MethodInfo* method);
#define m16719(__this, p0, p1, method) (( int32_t (*) (t1689 *, t1545 , t1545 , const MethodInfo*))m16719_gshared)(__this, p0, p1, method)
