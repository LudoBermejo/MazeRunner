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

struct t25;

#include "codegen/il2cpp-codegen.h"
#include "t1258.h"

extern "C" void m7801 (t1258 * __this, t25* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1258_marshal(const t1258& unmarshaled, t1258_marshaled& marshaled);
extern "C" void t1258_marshal_back(const t1258_marshaled& marshaled, t1258& unmarshaled);
extern "C" void t1258_marshal_cleanup(t1258_marshaled& marshaled);
