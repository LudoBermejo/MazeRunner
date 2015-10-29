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

struct t418;
struct t418_marshaled;
struct t25;
struct t330;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2124 (t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2125 (t7 * __this , t418 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t418 * m2126 (t7 * __this , t25* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t418 * m2127 (t7 * __this , t330 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t418 * m2128 (t7 * __this , t330 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t418_marshal(const t418& unmarshaled, t418_marshaled& marshaled);
extern "C" void t418_marshal_back(const t418_marshaled& marshaled, t418& unmarshaled);
extern "C" void t418_marshal_cleanup(t418_marshaled& marshaled);
