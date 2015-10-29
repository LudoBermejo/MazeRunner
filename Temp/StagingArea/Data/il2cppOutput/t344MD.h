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

struct t344;
struct t344_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1676 (t344 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t344_marshal(const t344& unmarshaled, t344_marshaled& marshaled);
extern "C" void t344_marshal_back(const t344_marshaled& marshaled, t344& unmarshaled);
extern "C" void t344_marshal_cleanup(t344_marshaled& marshaled);
