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

struct t1708;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10362_gshared (t1708 * __this, const MethodInfo* method);
#define m10362(__this, method) (( void (*) (t1708 *, const MethodInfo*))m10362_gshared)(__this, method)
extern "C" void m10363_gshared (t7 * __this , const MethodInfo* method);
#define m10363(__this , method) (( void (*) (t7 * , const MethodInfo*))m10363_gshared)(__this , method)
extern "C" int32_t m10364_gshared (t1708 * __this, t7 * p0, t7 * p1, const MethodInfo* method);
#define m10364(__this, p0, p1, method) (( int32_t (*) (t1708 *, t7 *, t7 *, const MethodInfo*))m10364_gshared)(__this, p0, p1, method)
extern "C" t1708 * m10365_gshared (t7 * __this , const MethodInfo* method);
#define m10365(__this , method) (( t1708 * (*) (t7 * , const MethodInfo*))m10365_gshared)(__this , method)
