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

extern "C" void t712_marshal(const t712& unmarshaled, t712_marshaled& marshaled);
extern "C" void t712_marshal_back(const t712_marshaled& marshaled, t712& unmarshaled);
extern "C" void t712_marshal_cleanup(t712_marshaled& marshaled);
