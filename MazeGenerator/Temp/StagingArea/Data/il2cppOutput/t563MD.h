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

struct t563;
struct t38;
struct t38_marshaled;
struct t540;
struct t39;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2907_gshared (t563 * __this, t38 * p0, t540 * p1, bool p2, const MethodInfo* method);
#define m2907(__this, p0, p1, p2, method) (( void (*) (t563 *, t38 *, t540 *, bool, const MethodInfo*))m2907_gshared)(__this, p0, p1, p2, method)
extern "C" void m15411_gshared (t563 * __this, t39* p0, const MethodInfo* method);
#define m15411(__this, p0, method) (( void (*) (t563 *, t39*, const MethodInfo*))m15411_gshared)(__this, p0, method)
