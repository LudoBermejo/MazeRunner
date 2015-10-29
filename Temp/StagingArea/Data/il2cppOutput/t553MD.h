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

extern "C" void t553_marshal(const t553& unmarshaled, t553_marshaled& marshaled);
extern "C" void t553_marshal_back(const t553_marshaled& marshaled, t553& unmarshaled);
extern "C" void t553_marshal_cleanup(t553_marshaled& marshaled);
