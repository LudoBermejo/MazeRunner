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

extern "C" void t739_marshal(const t739& unmarshaled, t739_marshaled& marshaled);
extern "C" void t739_marshal_back(const t739_marshaled& marshaled, t739& unmarshaled);
extern "C" void t739_marshal_cleanup(t739_marshaled& marshaled);
