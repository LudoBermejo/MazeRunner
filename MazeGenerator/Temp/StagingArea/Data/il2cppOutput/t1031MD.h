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

extern "C" void t1031_marshal(const t1031& unmarshaled, t1031_marshaled& marshaled);
extern "C" void t1031_marshal_back(const t1031_marshaled& marshaled, t1031& unmarshaled);
extern "C" void t1031_marshal_cleanup(t1031_marshaled& marshaled);
