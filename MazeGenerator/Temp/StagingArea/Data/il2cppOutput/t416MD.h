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

struct t416;
struct t416_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2471 (t416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t416_marshal(const t416& unmarshaled, t416_marshaled& marshaled);
extern "C" void t416_marshal_back(const t416_marshaled& marshaled, t416& unmarshaled);
extern "C" void t416_marshal_cleanup(t416_marshaled& marshaled);
