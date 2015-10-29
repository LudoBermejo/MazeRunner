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

struct t38;
struct t38_marshaled;
struct t25;
struct t7;

#include "codegen/il2cpp-codegen.h"
#include "t357.h"
#include "t196.h"

extern "C" void m2426 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t38 * m2427 (t7 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2428 (t7 * __this , t38 * p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m53 (t7 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2429 (t7 * __this , t38 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1856 (t7 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t25* m1895 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1663 (t38 * __this, t25* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1756 (t38 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t25* m2430 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2431 (t38 * __this, t7 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2432 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2433 (t7 * __this , t38 * p0, t38 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2434 (t7 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2435 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t196 m2436 (t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2437 (t7 * __this , t7 * p0, t25* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1482 (t7 * __this , t38 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1485 (t7 * __this , t38 * p0, t38 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m1488 (t7 * __this , t38 * p0, t38 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t38_marshal(const t38& unmarshaled, t38_marshaled& marshaled);
extern "C" void t38_marshal_back(const t38_marshaled& marshaled, t38& unmarshaled);
extern "C" void t38_marshal_cleanup(t38_marshaled& marshaled);
