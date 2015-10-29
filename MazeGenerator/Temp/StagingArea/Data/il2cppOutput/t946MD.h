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
#include "t946.h"

extern "C" void m4825 (t946 * __this, t25* p0, t25* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t946_marshal(const t946& unmarshaled, t946_marshaled& marshaled);
extern "C" void t946_marshal_back(const t946_marshaled& marshaled, t946& unmarshaled);
extern "C" void t946_marshal_cleanup(t946_marshaled& marshaled);
