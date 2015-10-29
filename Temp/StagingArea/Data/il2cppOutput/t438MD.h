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

extern "C" void t438_marshal(const t438& unmarshaled, t438_marshaled& marshaled);
extern "C" void t438_marshal_back(const t438_marshaled& marshaled, t438& unmarshaled);
extern "C" void t438_marshal_cleanup(t438_marshaled& marshaled);
