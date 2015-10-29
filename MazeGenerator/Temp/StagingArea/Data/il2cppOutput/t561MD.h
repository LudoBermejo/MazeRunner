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

struct t561;
struct t38;
struct t38_marshaled;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2905_gshared (t561 * __this, t38 * p0, t540 * p1, int32_t p2, const MethodInfo* method);
#define m2905(__this, p0, p1, p2, method) (( void (*) (t561 *, t38 *, t540 *, int32_t, const MethodInfo*))m2905_gshared)(__this, p0, p1, p2, method)
extern "C" void m15405_gshared (t561 * __this, t39* p0, const MethodInfo* method);
#define m15405(__this, p0, method) (( void (*) (t561 *, t39*, const MethodInfo*))m15405_gshared)(__this, p0, method)
