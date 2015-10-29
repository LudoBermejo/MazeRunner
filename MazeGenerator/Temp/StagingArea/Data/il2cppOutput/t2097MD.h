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

struct t2097;
struct t7;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15381_gshared (t2097 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15381(__this, p0, p1, method) (( void (*) (t2097 *, t7 *, t540 *, const MethodInfo*))m15381_gshared)(__this, p0, p1, method)
extern "C" void m15382_gshared (t2097 * __this, t39* p0, const MethodInfo* method);
#define m15382(__this, p0, method) (( void (*) (t2097 *, t39*, const MethodInfo*))m15382_gshared)(__this, p0, method)
extern "C" bool m15383_gshared (t2097 * __this, t7 * p0, t540 * p1, const MethodInfo* method);
#define m15383(__this, p0, p1, method) (( bool (*) (t2097 *, t7 *, t540 *, const MethodInfo*))m15383_gshared)(__this, p0, p1, method)
