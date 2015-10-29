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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1142_marshal(const t1142& unmarshaled, t1142_marshaled& marshaled);
extern "C" void t1142_marshal_back(const t1142_marshaled& marshaled, t1142& unmarshaled);
extern "C" void t1142_marshal_cleanup(t1142_marshaled& marshaled);
