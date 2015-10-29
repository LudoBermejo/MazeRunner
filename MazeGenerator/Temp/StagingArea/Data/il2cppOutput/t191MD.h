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

struct t191;
struct t191_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2121 (t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2122 (t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2123 (t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t191_marshal(const t191& unmarshaled, t191_marshaled& marshaled);
extern "C" void t191_marshal_back(const t191_marshaled& marshaled, t191& unmarshaled);
extern "C" void t191_marshal_cleanup(t191_marshaled& marshaled);
