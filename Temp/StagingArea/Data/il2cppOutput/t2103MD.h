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

struct t2103;
struct t38;
struct t38_marshaled;
struct t540;
struct t7;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15402_gshared (t2103 * __this, t38 * p0, t540 * p1, t7 * p2, const MethodInfo* method);
#define m15402(__this, p0, p1, p2, method) (( void (*) (t2103 *, t38 *, t540 *, t7 *, const MethodInfo*))m15402_gshared)(__this, p0, p1, p2, method)
extern "C" void m15403_gshared (t2103 * __this, t39* p0, const MethodInfo* method);
#define m15403(__this, p0, method) (( void (*) (t2103 *, t39*, const MethodInfo*))m15403_gshared)(__this, p0, method)
