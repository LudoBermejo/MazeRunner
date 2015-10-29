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

struct t2099;
struct t7;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15388_gshared (t2099 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15388(__this, p0, p1, method) (( void (*) (t2099 *, t7 *, t540 *, const MethodInfo*))m15388_gshared)(__this, p0, p1, method)
extern "C" void m15389_gshared (t2099 * __this, t39* p0, const MethodInfo* method);
#define m15389(__this, p0, method) (( void (*) (t2099 *, t39*, const MethodInfo*))m15389_gshared)(__this, p0, method)
extern "C" bool m15390_gshared (t2099 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15390(__this, p0, p1, method) (( bool (*) (t2099 *, t7 *, t540 *, const MethodInfo*))m15390_gshared)(__this, p0, p1, method)
