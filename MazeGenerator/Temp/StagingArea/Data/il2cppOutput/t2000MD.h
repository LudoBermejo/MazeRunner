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

struct t2000;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14341_gshared (t2000 * __this, const MethodInfo* method);
#define m14341(__this, method) (( void (*) (t2000 *, const MethodInfo*))m14341_gshared)(__this, method)
extern "C" void m14342_gshared (t7 * __this , const MethodInfo* method);
#define m14342(__this , method) (( void (*) (t7 * , const MethodInfo*))m14342_gshared)(__this , method)
extern "C" int32_t m14343_gshared (t2000 * __this, t7 * p0, const MethodInfo* method);
#define m14343(__this, p0, method) (( int32_t (*) (t2000 *, t7 *, const MethodInfo*))m14343_gshared)(__this, p0, method)
extern "C" bool m14344_gshared (t2000 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m14344(__this, p0, p1, method) (( bool (*) (t2000 *, t7 *, t7 *, const MethodInfo*))m14344_gshared)(__this, p0, p1, method)
extern "C" t2000 * m14345_gshared (t7 * __this , const MethodInfo* method);
#define m14345(__this , method) (( t2000 * (*) (t7 * , const MethodInfo*))m14345_gshared)(__this , method)
