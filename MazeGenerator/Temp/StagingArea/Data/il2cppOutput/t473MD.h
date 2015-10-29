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

struct t473;
struct t473_marshaled;
struct t7;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2786 (t473 * __this, t7 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2787 (t473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2788 (t7 * __this , t473 * p0, t473 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t473_marshal(const t473& unmarshaled, t473_marshaled& marshaled);
extern "C" void t473_marshal_back(const t473_marshaled& marshaled, t473& unmarshaled);
extern "C" void t473_marshal_cleanup(t473_marshaled& marshaled);
