#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t1;
struct t3;
struct t7;
struct t4;
struct t18;
struct t32;
struct t17;
struct t6;
struct t8;
struct t10;
struct t13;
struct t19;
struct t16;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t20.h"
#include "t0.h"
#include "t0MD.h"
#include "t1.h"
#include "t1MD.h"
#include "t21.h"
#include "t2MD.h"
#include "t22.h"
#include "t2.h"
#include "t23MD.h"
#include "t10MD.h"
#include "t23.h"
#include "t10.h"
#include "t3.h"
#include "t26MD.h"
#include "t24MD.h"
#include "t27MD.h"
#include "t15MD.h"
#include "t3MD.h"
#include "t24.h"
#include "t25.h"
#include "t15.h"
#include "t28.h"
#include "t4.h"
#include "t4MD.h"
#include "t18.h"
#include "t18MD.h"
#include "t29MD.h"
#include "t25MD.h"
#include "t31MD.h"
#include "t32MD.h"
#include "t33MD.h"
#include "t34MD.h"
#include "t7.h"
#include "t30.h"
#include "t5.h"
#include "t31.h"
#include "t32.h"
#include "t17.h"
#include "t33.h"
#include "t34.h"
#include "t6.h"
#include "t6MD.h"
#include "t35.h"
#include "t7MD.h"
#include "t8.h"
#include "t8MD.h"
#include "t12MD.h"
#include "t12.h"
#include "t37MD.h"
#include "mscorlib_ArrayTypes.h"
#include "t38MD.h"
#include "t38.h"
#include "t13.h"
#include "t13MD.h"
#include "t40MD.h"
#include "t40.h"
#include "t14.h"
#include "t41MD.h"
#include "t42.h"
#include "t14MD.h"
#include "t43MD.h"
#include "t19.h"
#include "t16.h"
#include "t16MD.h"
#include "t22MD.h"
#include "t17MD.h"

extern "C" t7 * m74_gshared (t10 * __this, const MethodInfo* method);
#define m74(__this, method) (( t7 * (*) (t10 *, const MethodInfo*))m74_gshared)(__this, method)
#define m29(__this, method) (( t3 * (*) (t10 *, const MethodInfo*))m74_gshared)(__this, method)
extern "C" t7 * m75_gshared (t23 * __this, const MethodInfo* method);
#define m75(__this, method) (( t7 * (*) (t23 *, const MethodInfo*))m75_gshared)(__this, method)
#define m45(__this, method) (( t32 * (*) (t23 *, const MethodInfo*))m75_gshared)(__this, method)
#define m47(__this, method) (( t17 * (*) (t23 *, const MethodInfo*))m75_gshared)(__this, method)
extern "C" t7 * m76_gshared (t7 * __this , t7 * p0, const MethodInfo* method);
#define m76(__this , p0, method) (( t7 * (*) (t7 * , t7 *, const MethodInfo*))m76_gshared)(__this , p0, method)
#define m54(__this , p0, method) (( t10 * (*) (t7 * , t10 *, const MethodInfo*))m76_gshared)(__this , p0, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m0 (t1 * __this, const MethodInfo* method)
{
	{
		__this->f2 = (3.0f);
		__this->f3 = (9.81f);
		m27(__this, NULL);
		return;
	}
}
extern const MethodInfo* m29_MI_var;
extern "C" void m1 (t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m29_MI_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		t10 * L_0 = m28(__this, NULL);
		t3 * L_1 = m29(L_0, m29_MI_var);
		__this->f4 = L_1;
		return;
	}
}
extern TypeInfo* t26_TI_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void m2 (t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t26_TI_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	t24  V_0 = {0};
	t24  V_1 = {0};
	t24  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(t26_TI_var);
		float L_0 = m30(NULL, _stringLiteral0, NULL);
		t24  L_1 = m31(NULL, NULL);
		t24  L_2 = m32(NULL, L_0, L_1, NULL);
		float L_3 = (__this->f2);
		t24  L_4 = m33(NULL, L_2, L_3, NULL);
		float L_5 = m34(NULL, NULL);
		t24  L_6 = m33(NULL, L_4, L_5, NULL);
		V_0 = L_6;
		float L_7 = m30(NULL, _stringLiteral1, NULL);
		t24  L_8 = m35(NULL, NULL);
		t24  L_9 = m32(NULL, L_7, L_8, NULL);
		float L_10 = (__this->f2);
		t24  L_11 = m33(NULL, L_9, L_10, NULL);
		float L_12 = m34(NULL, NULL);
		t24  L_13 = m33(NULL, L_11, L_12, NULL);
		V_1 = L_13;
		t15 * L_14 = m36(__this, NULL);
		t24  L_15 = V_0;
		t24  L_16 = V_1;
		t24  L_17 = m37(NULL, L_15, L_16, NULL);
		t24  L_18 = m38(L_14, L_17, NULL);
		V_2 = L_18;
		t24 * L_19 = (&V_2);
		float L_20 = (L_19->f2);
		float L_21 = (__this->f3);
		float L_22 = m34(NULL, NULL);
		L_19->f2 = ((float)((float)L_20-(float)((float)((float)L_21*(float)L_22))));
		t3 * L_23 = (__this->f4);
		t24  L_24 = V_2;
		m39(L_23, L_24, NULL);
		return;
	}
}
extern "C" void m3 (t4 * __this, const MethodInfo* method)
{
	{
		m27(__this, NULL);
		return;
	}
}
extern "C" void m4 (t4 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m5 (t4 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t25_TI_var;
extern const MethodInfo* m45_MI_var;
extern const MethodInfo* m47_MI_var;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void m6 (t4 * __this, t18 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t25_TI_var = il2cpp_codegen_type_info_from_index(5);
		m45_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		m47_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		t18 * L_0 = p0;
		t10 * L_1 = m40(L_0, NULL);
		m41(NULL, L_1, NULL);
		t18 * L_2 = p0;
		t10 * L_3 = m40(L_2, NULL);
		t25* L_4 = m42(L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t25_TI_var);
		bool L_5 = m43(NULL, L_4, _stringLiteral2, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		t5 * L_6 = (__this->f2);
		m44(L_6, 0, NULL);
		t5 * L_7 = (__this->f2);
		t32 * L_8 = m45(L_7, m45_MI_var);
		m46(L_8, (0.0f), NULL);
		t5 * L_9 = (__this->f2);
		t17 * L_10 = m47(L_9, m47_MI_var);
		t33  L_11 = m48(NULL, NULL);
		m49(L_10, L_11, NULL);
	}

IL_005b:
	{
		return;
	}
}
extern "C" void m7 (t6 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	{
		m50(__this, NULL);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern TypeInfo* t12_TI_var;
extern "C" void m8 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f8 = 6;
		__this->f9 = 6;
		t12 * L_0 = (t12 *)il2cpp_codegen_object_new (t12_TI_var);
		m51(L_0, NULL);
		__this->f14 = L_0;
		m27(__this, NULL);
		return;
	}
}
extern "C" void m9 (t8 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		int32_t L_1 = (__this->f9);
		m10(__this, L_0, L_1, NULL);
		m13(__this, NULL);
		return;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t11_TI_var;
extern TypeInfo* t36_TI_var;
extern TypeInfo* t6_TI_var;
extern "C" void m10 (t8 * __this, int32_t p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(6);
		t11_TI_var = il2cpp_codegen_type_info_from_index(7);
		t36_TI_var = il2cpp_codegen_type_info_from_index(8);
		t6_TI_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t6 * V_3 = {0};
	t12 * V_4 = {0};
	t6 * V_5 = {0};
	t6 * V_6 = {0};
	t6 * V_7 = {0};
	t6 * V_8 = {0};
	bool V_9 = false;
	int32_t V_10 = 0;
	t6 * V_11 = {0};
	{
		t12 * L_0 = (t12 *)il2cpp_codegen_object_new (t12_TI_var);
		m51(L_0, NULL);
		__this->f13 = L_0;
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)L_2))-(int32_t)1));
		int32_t L_3 = p0;
		__this->f10 = ((t11*)SZArrayNew(t11_TI_var, L_3));
		int32_t L_4 = p0;
		__this->f11 = ((t11*)SZArrayNew(t11_TI_var, L_4));
		int32_t L_5 = p0;
		__this->f12 = ((t11*)SZArrayNew(t11_TI_var, L_5));
		V_1 = 0;
		goto IL_009f;
	}

IL_003c:
	{
		t11* L_6 = (__this->f10);
		int32_t L_7 = V_1;
		int32_t L_8 = p1;
		ArrayElementTypeCheck (L_6, ((t36*)SZArrayNew(t36_TI_var, L_8)));
		*((t36**)(t36**)SZArrayLdElema(L_6, L_7, sizeof(t36*))) = (t36*)((t36*)SZArrayNew(t36_TI_var, L_8));
		t11* L_9 = (__this->f11);
		int32_t L_10 = V_1;
		int32_t L_11 = p1;
		ArrayElementTypeCheck (L_9, ((t36*)SZArrayNew(t36_TI_var, L_11)));
		*((t36**)(t36**)SZArrayLdElema(L_9, L_10, sizeof(t36*))) = (t36*)((t36*)SZArrayNew(t36_TI_var, L_11));
		t11* L_12 = (__this->f12);
		int32_t L_13 = V_1;
		int32_t L_14 = p1;
		ArrayElementTypeCheck (L_12, ((t36*)SZArrayNew(t36_TI_var, L_14)));
		*((t36**)(t36**)SZArrayLdElema(L_12, L_13, sizeof(t36*))) = (t36*)((t36*)SZArrayNew(t36_TI_var, L_14));
		V_2 = 0;
		goto IL_0092;
	}

IL_006d:
	{
		t11* L_15 = (__this->f10);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		int32_t L_18 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_15, L_17, sizeof(t36*))), L_18, sizeof(int32_t))) = (int32_t)1;
		t11* L_19 = (__this->f11);
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_19, L_21, sizeof(t36*))), L_22, sizeof(int32_t))) = (int32_t)1;
		t11* L_23 = (__this->f12);
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		int32_t L_26 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_23, L_25, sizeof(t36*))), L_26, sizeof(int32_t))) = (int32_t)0;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = p1;
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)((int32_t)L_29-(int32_t)1)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_009f:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = p0;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)((int32_t)L_32-(int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_33 = p0;
		int32_t L_34 = m52(NULL, 0, ((int32_t)((int32_t)L_33-(int32_t)1)), NULL);
		int32_t L_35 = p1;
		int32_t L_36 = m52(NULL, 0, ((int32_t)((int32_t)L_35-(int32_t)1)), NULL);
		t6 * L_37 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m7(L_37, L_34, L_36, NULL);
		V_3 = L_37;
		t6 * L_38 = V_3;
		L_38->f0 = 0;
		t6 * L_39 = V_3;
		L_39->f1 = 0;
		goto IL_0350;
	}

IL_00d3:
	{
		t11* L_40 = (__this->f12);
		t6 * L_41 = V_3;
		int32_t L_42 = (L_41->f0);
		int32_t L_43 = L_42;
		t6 * L_44 = V_3;
		int32_t L_45 = (L_44->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_40, L_43, sizeof(t36*))), L_45, sizeof(int32_t))) = (int32_t)1;
		t12 * L_46 = (t12 *)il2cpp_codegen_object_new (t12_TI_var);
		m51(L_46, NULL);
		V_4 = L_46;
		t6 * L_47 = V_3;
		int32_t L_48 = (L_47->f0);
		if ((((int32_t)((int32_t)((int32_t)L_48-(int32_t)1))) < ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		t6 * L_49 = V_3;
		int32_t L_50 = (L_49->f0);
		t6 * L_51 = V_3;
		int32_t L_52 = (L_51->f1);
		t6 * L_53 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m7(L_53, ((int32_t)((int32_t)L_50-(int32_t)1)), L_52, NULL);
		V_5 = L_53;
		t12 * L_54 = V_4;
		t6 * L_55 = V_5;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_54, L_55);
	}

IL_011c:
	{
		t6 * L_56 = V_3;
		int32_t L_57 = (L_56->f0);
		int32_t L_58 = p0;
		if ((((int32_t)((int32_t)((int32_t)L_57+(int32_t)1))) >= ((int32_t)L_58)))
		{
			goto IL_0149;
		}
	}
	{
		t6 * L_59 = V_3;
		int32_t L_60 = (L_59->f0);
		t6 * L_61 = V_3;
		int32_t L_62 = (L_61->f1);
		t6 * L_63 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m7(L_63, ((int32_t)((int32_t)L_60+(int32_t)1)), L_62, NULL);
		V_6 = L_63;
		t12 * L_64 = V_4;
		t6 * L_65 = V_6;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_64, L_65);
	}

IL_0149:
	{
		t6 * L_66 = V_3;
		int32_t L_67 = (L_66->f1);
		if ((((int32_t)((int32_t)((int32_t)L_67-(int32_t)1))) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		t6 * L_68 = V_3;
		int32_t L_69 = (L_68->f0);
		t6 * L_70 = V_3;
		int32_t L_71 = (L_70->f1);
		t6 * L_72 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m7(L_72, L_69, ((int32_t)((int32_t)L_71-(int32_t)1)), NULL);
		V_7 = L_72;
		t12 * L_73 = V_4;
		t6 * L_74 = V_7;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_73, L_74);
	}

IL_0176:
	{
		t6 * L_75 = V_3;
		int32_t L_76 = (L_75->f1);
		int32_t L_77 = p1;
		if ((((int32_t)((int32_t)((int32_t)L_76+(int32_t)1))) >= ((int32_t)L_77)))
		{
			goto IL_01a3;
		}
	}
	{
		t6 * L_78 = V_3;
		int32_t L_79 = (L_78->f0);
		t6 * L_80 = V_3;
		int32_t L_81 = (L_80->f1);
		t6 * L_82 = (t6 *)il2cpp_codegen_object_new (t6_TI_var);
		m7(L_82, L_79, ((int32_t)((int32_t)L_81+(int32_t)1)), NULL);
		V_8 = L_82;
		t12 * L_83 = V_4;
		t6 * L_84 = V_8;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_83, L_84);
	}

IL_01a3:
	{
		V_9 = 0;
		goto IL_02ff;
	}

IL_01ab:
	{
		t12 * L_85 = V_4;
		int32_t L_86 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_85);
		int32_t L_87 = m52(NULL, 0, L_86, NULL);
		V_10 = L_87;
		t12 * L_88 = V_4;
		int32_t L_89 = V_10;
		t7 * L_90 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_88, L_89);
		V_11 = ((t6 *)CastclassClass(L_90, t6_TI_var));
		t12 * L_91 = V_4;
		int32_t L_92 = V_10;
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_91, L_92);
		t6 * L_93 = V_11;
		int32_t L_94 = (L_93->f0);
		if ((((int32_t)L_94) < ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		t6 * L_95 = V_11;
		int32_t L_96 = (L_95->f1);
		if ((((int32_t)L_96) < ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		t6 * L_97 = V_11;
		int32_t L_98 = (L_97->f0);
		int32_t L_99 = p0;
		if ((((int32_t)L_98) >= ((int32_t)L_99)))
		{
			goto IL_02ff;
		}
	}
	{
		t6 * L_100 = V_11;
		int32_t L_101 = (L_100->f1);
		int32_t L_102 = p1;
		if ((((int32_t)L_101) >= ((int32_t)L_102)))
		{
			goto IL_02ff;
		}
	}
	{
		t11* L_103 = (__this->f12);
		t6 * L_104 = V_11;
		int32_t L_105 = (L_104->f0);
		int32_t L_106 = L_105;
		t6 * L_107 = V_11;
		int32_t L_108 = (L_107->f1);
		int32_t L_109 = L_108;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_103, L_106, sizeof(t36*))), L_109, sizeof(int32_t))))
		{
			goto IL_02ff;
		}
	}
	{
		V_9 = 1;
		t11* L_110 = (__this->f12);
		t6 * L_111 = V_11;
		int32_t L_112 = (L_111->f0);
		int32_t L_113 = L_112;
		t6 * L_114 = V_11;
		int32_t L_115 = (L_114->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_110, L_113, sizeof(t36*))), L_115, sizeof(int32_t))) = (int32_t)1;
		t6 * L_116 = V_11;
		int32_t L_117 = (L_116->f0);
		t6 * L_118 = V_3;
		int32_t L_119 = (L_118->f0);
		if ((((int32_t)L_117) <= ((int32_t)L_119)))
		{
			goto IL_0268;
		}
	}
	{
		t11* L_120 = (__this->f11);
		t6 * L_121 = V_3;
		int32_t L_122 = (L_121->f0);
		int32_t L_123 = L_122;
		t6 * L_124 = V_3;
		int32_t L_125 = (L_124->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_120, L_123, sizeof(t36*))), L_125, sizeof(int32_t))) = (int32_t)0;
		goto IL_02eb;
	}

IL_0268:
	{
		t6 * L_126 = V_11;
		int32_t L_127 = (L_126->f0);
		t6 * L_128 = V_3;
		int32_t L_129 = (L_128->f0);
		if ((((int32_t)L_127) >= ((int32_t)L_129)))
		{
			goto IL_0296;
		}
	}
	{
		t11* L_130 = (__this->f11);
		t6 * L_131 = V_11;
		int32_t L_132 = (L_131->f0);
		int32_t L_133 = L_132;
		t6 * L_134 = V_11;
		int32_t L_135 = (L_134->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_130, L_133, sizeof(t36*))), L_135, sizeof(int32_t))) = (int32_t)0;
		goto IL_02eb;
	}

IL_0296:
	{
		t6 * L_136 = V_11;
		int32_t L_137 = (L_136->f1);
		t6 * L_138 = V_3;
		int32_t L_139 = (L_138->f1);
		if ((((int32_t)L_137) <= ((int32_t)L_139)))
		{
			goto IL_02c2;
		}
	}
	{
		t11* L_140 = (__this->f10);
		t6 * L_141 = V_3;
		int32_t L_142 = (L_141->f0);
		int32_t L_143 = L_142;
		t6 * L_144 = V_3;
		int32_t L_145 = (L_144->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_140, L_143, sizeof(t36*))), L_145, sizeof(int32_t))) = (int32_t)0;
		goto IL_02eb;
	}

IL_02c2:
	{
		t6 * L_146 = V_11;
		int32_t L_147 = (L_146->f1);
		t6 * L_148 = V_3;
		int32_t L_149 = (L_148->f1);
		if ((((int32_t)L_147) >= ((int32_t)L_149)))
		{
			goto IL_02eb;
		}
	}
	{
		t11* L_150 = (__this->f10);
		t6 * L_151 = V_11;
		int32_t L_152 = (L_151->f0);
		int32_t L_153 = L_152;
		t6 * L_154 = V_11;
		int32_t L_155 = (L_154->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_150, L_153, sizeof(t36*))), L_155, sizeof(int32_t))) = (int32_t)0;
	}

IL_02eb:
	{
		t6 * L_156 = V_11;
		V_3 = L_156;
		int32_t L_157 = V_0;
		V_0 = ((int32_t)((int32_t)L_157-(int32_t)1));
		t12 * L_158 = (__this->f13);
		t6 * L_159 = V_3;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_158, L_159);
	}

IL_02ff:
	{
		t12 * L_160 = V_4;
		int32_t L_161 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_160);
		if ((((int32_t)L_161) <= ((int32_t)0)))
		{
			goto IL_0313;
		}
	}
	{
		bool L_162 = V_9;
		if (!L_162)
		{
			goto IL_01ab;
		}
	}

IL_0313:
	{
		bool L_163 = V_9;
		if (L_163)
		{
			goto IL_0350;
		}
	}
	{
		t12 * L_164 = (__this->f13);
		t12 * L_165 = (__this->f13);
		int32_t L_166 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_165);
		t7 * L_167 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_164, ((int32_t)((int32_t)L_166-(int32_t)1)));
		V_3 = ((t6 *)CastclassClass(L_167, t6_TI_var));
		t12 * L_168 = (__this->f13);
		t12 * L_169 = (__this->f13);
		int32_t L_170 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_169);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_168, ((int32_t)((int32_t)L_170-(int32_t)1)));
	}

IL_0350:
	{
		int32_t L_171 = V_0;
		if ((((int32_t)L_171) > ((int32_t)0)))
		{
			goto IL_00d3;
		}
	}
	{
		return;
	}
}
extern "C" void m11 (t8 * __this, const MethodInfo* method)
{
	{
		m12(__this, NULL);
		int32_t L_0 = (__this->f8);
		__this->f8 = ((int32_t)((int32_t)L_0+(int32_t)2));
		int32_t L_1 = (__this->f9);
		__this->f9 = ((int32_t)((int32_t)L_1+(int32_t)2));
		int32_t L_2 = (__this->f8);
		int32_t L_3 = (__this->f9);
		m10(__this, L_2, L_3, NULL);
		m13(__this, NULL);
		return;
	}
}
extern TypeInfo* t10_TI_var;
extern "C" void m12 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t10_TI_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		t12 * L_0 = (__this->f14);
		t7 * L_1 = (t7 *)VirtFuncInvoker1< t7 *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, 0);
		m53(NULL, ((t10 *)CastclassSealed(L_1, t10_TI_var)), NULL);
		t12 * L_2 = (__this->f14);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_2, 0);
	}

IL_0027:
	{
		t12 * L_3 = (__this->f14);
		t39* L_4 = (t39*)VirtFuncInvoker0< t39* >::Invoke(47 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((t20 *)L_4)->max_length))))) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
extern const MethodInfo* m54_MI_var;
extern "C" void m13 (t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m54_MI_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	t10 * V_0 = {0};
	t10 * V_1 = {0};
	t10 * V_2 = {0};
	t10 * V_3 = {0};
	t10 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t10 * V_7 = {0};
	t24  V_8 = {0};
	t10 * V_9 = {0};
	t24  V_10 = {0};
	t10 * V_11 = {0};
	t10 * V_12 = {0};
	{
		t10 * L_0 = (__this->f4);
		t10 * L_1 = m54(NULL, L_0, m54_MI_var);
		V_0 = L_1;
		t10 * L_2 = V_0;
		t15 * L_3 = m55(L_2, NULL);
		t15 * L_4 = L_3;
		t24  L_5 = m56(L_4, NULL);
		t11* L_6 = (__this->f10);
		t24  L_7 = {0};
		m57(&L_7, (((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_6)->max_length))))*(int32_t)3))))), (0.0f), (0.0f), NULL);
		t24  L_8 = m37(NULL, L_5, L_7, NULL);
		m58(L_4, L_8, NULL);
		t10 * L_9 = V_0;
		t15 * L_10 = m55(L_9, NULL);
		t15 * L_11 = L_10;
		t24  L_12 = m59(L_11, NULL);
		t11* L_13 = (__this->f10);
		t24  L_14 = {0};
		m57(&L_14, (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_13)->max_length))))*(int32_t)3))/(int32_t)2))-(int32_t)1))))), (0.0f), (-2.0f), NULL);
		t24  L_15 = m37(NULL, L_12, L_14, NULL);
		m60(L_11, L_15, NULL);
		t10 * L_16 = (__this->f4);
		t10 * L_17 = m54(NULL, L_16, m54_MI_var);
		V_1 = L_17;
		t10 * L_18 = V_1;
		t15 * L_19 = m55(L_18, NULL);
		t15 * L_20 = L_19;
		t24  L_21 = m56(L_20, NULL);
		t11* L_22 = (__this->f10);
		t24  L_23 = {0};
		m57(&L_23, (((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_22)->max_length))))*(int32_t)3))))), (0.0f), (0.0f), NULL);
		t24  L_24 = m37(NULL, L_21, L_23, NULL);
		m58(L_20, L_24, NULL);
		t10 * L_25 = V_1;
		t15 * L_26 = m55(L_25, NULL);
		t15 * L_27 = L_26;
		t24  L_28 = m59(L_27, NULL);
		t11* L_29 = (__this->f10);
		t11* L_30 = (__this->f10);
		int32_t L_31 = 0;
		t24  L_32 = {0};
		m57(&L_32, (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_29)->max_length))))*(int32_t)3))/(int32_t)2))-(int32_t)1))))), (0.0f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_30, L_31, sizeof(t36*))))->max_length))))*(int32_t)3))-(int32_t)1))))), NULL);
		t24  L_33 = m37(NULL, L_28, L_32, NULL);
		m60(L_27, L_33, NULL);
		t10 * L_34 = (__this->f4);
		t10 * L_35 = m54(NULL, L_34, m54_MI_var);
		V_2 = L_35;
		t10 * L_36 = V_2;
		t15 * L_37 = m55(L_36, NULL);
		t15 * L_38 = L_37;
		t24  L_39 = m56(L_38, NULL);
		t11* L_40 = (__this->f10);
		t24  L_41 = {0};
		m57(&L_41, (0.0f), (0.0f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_40)->max_length))))*(int32_t)3))+(int32_t)1))))), NULL);
		t24  L_42 = m37(NULL, L_39, L_41, NULL);
		m58(L_38, L_42, NULL);
		t10 * L_43 = V_2;
		t15 * L_44 = m55(L_43, NULL);
		t15 * L_45 = L_44;
		t24  L_46 = m59(L_45, NULL);
		t11* L_47 = (__this->f10);
		int32_t L_48 = 0;
		t24  L_49 = {0};
		m57(&L_49, (-2.0f), (0.0f), ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_47, L_48, sizeof(t36*))))->max_length))))*(int32_t)3))/(int32_t)2)))))-(float)(1.5f))), NULL);
		t24  L_50 = m37(NULL, L_46, L_49, NULL);
		m60(L_45, L_50, NULL);
		t10 * L_51 = (__this->f4);
		t10 * L_52 = m54(NULL, L_51, m54_MI_var);
		V_3 = L_52;
		t10 * L_53 = V_3;
		t15 * L_54 = m55(L_53, NULL);
		t15 * L_55 = L_54;
		t24  L_56 = m56(L_55, NULL);
		t11* L_57 = (__this->f10);
		t24  L_58 = {0};
		m57(&L_58, (0.0f), (0.0f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_57)->max_length))))*(int32_t)3))+(int32_t)1))))), NULL);
		t24  L_59 = m37(NULL, L_56, L_58, NULL);
		m58(L_55, L_59, NULL);
		t10 * L_60 = V_3;
		t15 * L_61 = m55(L_60, NULL);
		t15 * L_62 = L_61;
		t24  L_63 = m59(L_62, NULL);
		t11* L_64 = (__this->f10);
		t11* L_65 = (__this->f10);
		int32_t L_66 = 0;
		t24  L_67 = {0};
		m57(&L_67, (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_64)->max_length))))*(int32_t)3))-(int32_t)1))))), (0.0f), ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_65, L_66, sizeof(t36*))))->max_length))))*(int32_t)3))/(int32_t)2)))))-(float)(1.5f))), NULL);
		t24  L_68 = m37(NULL, L_63, L_67, NULL);
		m60(L_62, L_68, NULL);
		t10 * L_69 = (__this->f5);
		t10 * L_70 = m54(NULL, L_69, m54_MI_var);
		V_4 = L_70;
		t10 * L_71 = V_4;
		t15 * L_72 = m55(L_71, NULL);
		t15 * L_73 = L_72;
		t24  L_74 = m56(L_73, NULL);
		t11* L_75 = (__this->f10);
		t11* L_76 = (__this->f10);
		t24  L_77 = {0};
		m57(&L_77, (((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_75)->max_length))))*(int32_t)3))))), (1.0f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_76)->max_length))))*(int32_t)3))+(int32_t)1))))), NULL);
		t24  L_78 = m37(NULL, L_74, L_77, NULL);
		m58(L_73, L_78, NULL);
		t10 * L_79 = V_4;
		t15 * L_80 = m55(L_79, NULL);
		t15 * L_81 = L_80;
		t24  L_82 = m59(L_81, NULL);
		t11* L_83 = (__this->f10);
		t11* L_84 = (__this->f10);
		int32_t L_85 = 0;
		t24  L_86 = {0};
		m57(&L_86, ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_83)->max_length))))*(int32_t)3))/(int32_t)2)))))-(float)(1.5f))), (-4.0f), ((float)((float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_84, L_85, sizeof(t36*))))->max_length))))*(int32_t)3))/(int32_t)2)))))-(float)(1.5f))), NULL);
		t24  L_87 = m37(NULL, L_82, L_86, NULL);
		m60(L_81, L_87, NULL);
		t12 * L_88 = (__this->f14);
		t10 * L_89 = V_0;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_88, L_89);
		t12 * L_90 = (__this->f14);
		t10 * L_91 = V_1;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_90, L_91);
		t12 * L_92 = (__this->f14);
		t10 * L_93 = V_2;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_92, L_93);
		t12 * L_94 = (__this->f14);
		t10 * L_95 = V_3;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_94, L_95);
		t12 * L_96 = (__this->f14);
		t10 * L_97 = V_4;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_96, L_97);
		V_5 = 0;
		goto IL_039a;
	}

IL_02bb:
	{
		V_6 = 0;
		goto IL_0381;
	}

IL_02c3:
	{
		t11* L_98 = (__this->f10);
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		int32_t L_101 = V_6;
		int32_t L_102 = L_101;
		if ((!(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_98, L_100, sizeof(t36*))), L_102, sizeof(int32_t)))) == ((uint32_t)1))))
		{
			goto IL_031f;
		}
	}
	{
		t10 * L_103 = (__this->f3);
		t10 * L_104 = m54(NULL, L_103, m54_MI_var);
		V_7 = L_104;
		int32_t L_105 = V_5;
		int32_t L_106 = V_6;
		m57((&V_8), (((float)((float)((int32_t)((int32_t)L_105*(int32_t)3))))), (0.0f), (((float)((float)((int32_t)((int32_t)L_106*(int32_t)3))))), NULL);
		t10 * L_107 = V_7;
		t15 * L_108 = m55(L_107, NULL);
		t15 * L_109 = L_108;
		t24  L_110 = m59(L_109, NULL);
		t24  L_111 = V_8;
		t24  L_112 = m37(NULL, L_110, L_111, NULL);
		m60(L_109, L_112, NULL);
		t12 * L_113 = (__this->f14);
		t10 * L_114 = V_7;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_113, L_114);
	}

IL_031f:
	{
		t11* L_115 = (__this->f11);
		int32_t L_116 = V_5;
		int32_t L_117 = L_116;
		int32_t L_118 = V_6;
		int32_t L_119 = L_118;
		if ((!(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema((*(t36**)(t36**)SZArrayLdElema(L_115, L_117, sizeof(t36*))), L_119, sizeof(int32_t)))) == ((uint32_t)1))))
		{
			goto IL_037b;
		}
	}
	{
		t10 * L_120 = (__this->f2);
		t10 * L_121 = m54(NULL, L_120, m54_MI_var);
		V_9 = L_121;
		int32_t L_122 = V_5;
		int32_t L_123 = V_6;
		m57((&V_10), (((float)((float)((int32_t)((int32_t)L_122*(int32_t)3))))), (0.0f), (((float)((float)((int32_t)((int32_t)L_123*(int32_t)3))))), NULL);
		t10 * L_124 = V_9;
		t15 * L_125 = m55(L_124, NULL);
		t15 * L_126 = L_125;
		t24  L_127 = m59(L_126, NULL);
		t24  L_128 = V_10;
		t24  L_129 = m37(NULL, L_127, L_128, NULL);
		m60(L_126, L_129, NULL);
		t12 * L_130 = (__this->f14);
		t10 * L_131 = V_9;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_130, L_131);
	}

IL_037b:
	{
		int32_t L_132 = V_6;
		V_6 = ((int32_t)((int32_t)L_132+(int32_t)1));
	}

IL_0381:
	{
		int32_t L_133 = V_6;
		t11* L_134 = (__this->f11);
		int32_t L_135 = 0;
		if ((((int32_t)L_133) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_134, L_135, sizeof(t36*))))->max_length))))-(int32_t)1)))))
		{
			goto IL_02c3;
		}
	}
	{
		int32_t L_136 = V_5;
		V_5 = ((int32_t)((int32_t)L_136+(int32_t)1));
	}

IL_039a:
	{
		int32_t L_137 = V_5;
		t11* L_138 = (__this->f10);
		if ((((int32_t)L_137) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_138)->max_length))))-(int32_t)1)))))
		{
			goto IL_02bb;
		}
	}
	{
		t10 * L_139 = (__this->f6);
		t10 * L_140 = m54(NULL, L_139, m54_MI_var);
		V_11 = L_140;
		t10 * L_141 = V_11;
		t15 * L_142 = m55(L_141, NULL);
		t11* L_143 = (__this->f10);
		t11* L_144 = (__this->f10);
		int32_t L_145 = 0;
		t24  L_146 = {0};
		m57(&L_146, ((float)((float)((float)((float)(((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_143)->max_length))))*(int32_t)3)))))-(float)(1.5f)))-(float)(2.0f))), (-0.5f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_144, L_145, sizeof(t36*))))->max_length))))*(int32_t)3))-(int32_t)3))))), NULL);
		m60(L_142, L_146, NULL);
		t12 * L_147 = (__this->f14);
		t10 * L_148 = V_11;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_147, L_148);
		t10 * L_149 = (__this->f7);
		t10 * L_150 = m54(NULL, L_149, m54_MI_var);
		V_12 = L_150;
		t10 * L_151 = V_12;
		t15 * L_152 = m55(L_151, NULL);
		t11* L_153 = (__this->f10);
		t11* L_154 = (__this->f10);
		int32_t L_155 = 0;
		t24  L_156 = {0};
		m57(&L_156, ((float)((float)((float)((float)(((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)L_153)->max_length))))*(int32_t)3)))))-(float)(1.5f)))-(float)(2.0f))), (-0.5f), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((t20 *)(*(t36**)(t36**)SZArrayLdElema(L_154, L_155, sizeof(t36*))))->max_length))))*(int32_t)3))-(int32_t)3))))), NULL);
		m60(L_152, L_156, NULL);
		t12 * L_157 = (__this->f14);
		t10 * L_158 = V_12;
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_157, L_158);
		return;
	}
}
extern "C" void m14 (t13 * __this, const MethodInfo* method)
{
	{
		__this->f2 = (2.0f);
		__this->f3 = (2.0f);
		__this->f4 = 1;
		__this->f5 = (-90.0f);
		__this->f6 = (90.0f);
		__this->f8 = (5.0f);
		m27(__this, NULL);
		return;
	}
}
extern "C" void m15 (t13 * __this, const MethodInfo* method)
{
	{
		m17(__this, 1, NULL);
		t10 * L_0 = m28(__this, NULL);
		t15 * L_1 = m55(L_0, NULL);
		__this->f11 = L_1;
		t40 * L_2 = m61(NULL, NULL);
		t15 * L_3 = m36(L_2, NULL);
		__this->f12 = L_3;
		t15 * L_4 = (__this->f12);
		m41(NULL, L_4, NULL);
		t15 * L_5 = (__this->f11);
		t14  L_6 = m62(L_5, NULL);
		__this->f9 = L_6;
		t15 * L_7 = (__this->f12);
		t14  L_8 = m62(L_7, NULL);
		__this->f10 = L_8;
		return;
	}
}
extern TypeInfo* t26_TI_var;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void m16 (t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t26_TI_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		m18(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t26_TI_var);
		bool L_0 = m63(NULL, _stringLiteral3, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		m17(__this, 0, NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t26_TI_var);
		bool L_1 = m63(NULL, _stringLiteral4, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		bool L_2 = (__this->f13);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		m17(__this, 1, NULL);
	}

IL_003d:
	{
		return;
	}
}
extern "C" void m17 (t13 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		m64(NULL, 0, NULL);
		m65(NULL, 1, NULL);
		goto IL_0023;
	}

IL_0017:
	{
		m64(NULL, 1, NULL);
		m65(NULL, 0, NULL);
	}

IL_0023:
	{
		return;
	}
}
extern TypeInfo* t26_TI_var;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void m18 (t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t26_TI_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t26_TI_var);
		float L_0 = m30(NULL, _stringLiteral5, NULL);
		float L_1 = (__this->f2);
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = m30(NULL, _stringLiteral6, NULL);
		float L_3 = (__this->f3);
		V_1 = ((float)((float)L_2*(float)L_3));
		t14  L_4 = (__this->f9);
		float L_5 = V_0;
		t14  L_6 = m66(NULL, (0.0f), L_5, (0.0f), NULL);
		t14  L_7 = m67(NULL, L_4, L_6, NULL);
		__this->f9 = L_7;
		t14  L_8 = (__this->f10);
		float L_9 = V_1;
		t14  L_10 = m66(NULL, ((-L_9)), (0.0f), (0.0f), NULL);
		t14  L_11 = m67(NULL, L_8, L_10, NULL);
		__this->f10 = L_11;
		bool L_12 = (__this->f4);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		t14  L_13 = (__this->f10);
		t14  L_14 = m19(__this, L_13, NULL);
		__this->f10 = L_14;
	}

IL_0084:
	{
		bool L_15 = (__this->f7);
		if (!L_15)
		{
			goto IL_00ee;
		}
	}
	{
		t15 * L_16 = (__this->f11);
		t15 * L_17 = (__this->f11);
		t14  L_18 = m62(L_17, NULL);
		t14  L_19 = (__this->f9);
		float L_20 = (__this->f8);
		float L_21 = m34(NULL, NULL);
		t14  L_22 = m68(NULL, L_18, L_19, ((float)((float)L_20*(float)L_21)), NULL);
		m69(L_16, L_22, NULL);
		t15 * L_23 = (__this->f12);
		t15 * L_24 = (__this->f12);
		t14  L_25 = m62(L_24, NULL);
		t14  L_26 = (__this->f10);
		float L_27 = (__this->f8);
		float L_28 = m34(NULL, NULL);
		t14  L_29 = m68(NULL, L_25, L_26, ((float)((float)L_27*(float)L_28)), NULL);
		m69(L_23, L_29, NULL);
		goto IL_0110;
	}

IL_00ee:
	{
		t15 * L_30 = (__this->f11);
		t14  L_31 = (__this->f9);
		m69(L_30, L_31, NULL);
		t15 * L_32 = (__this->f12);
		t14  L_33 = (__this->f10);
		m69(L_32, L_33, NULL);
	}

IL_0110:
	{
		return;
	}
}
extern TypeInfo* t43_TI_var;
extern "C" t14  m19 (t13 * __this, t14  p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t43_TI_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		t14 * L_0 = (&p0);
		float L_1 = (L_0->f1);
		float L_2 = ((&p0)->f4);
		L_0->f1 = ((float)((float)L_1/(float)L_2));
		t14 * L_3 = (&p0);
		float L_4 = (L_3->f2);
		float L_5 = ((&p0)->f4);
		L_3->f2 = ((float)((float)L_4/(float)L_5));
		t14 * L_6 = (&p0);
		float L_7 = (L_6->f3);
		float L_8 = ((&p0)->f4);
		L_6->f3 = ((float)((float)L_7/(float)L_8));
		(&p0)->f4 = (1.0f);
		float L_9 = ((&p0)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(t43_TI_var);
		float L_10 = atanf(L_9);
		V_0 = ((float)((float)(114.59156f)*(float)L_10));
		float L_11 = V_0;
		float L_12 = (__this->f5);
		float L_13 = (__this->f6);
		float L_14 = m70(NULL, L_11, L_12, L_13, NULL);
		V_0 = L_14;
		float L_15 = V_0;
		float L_16 = tanf(((float)((float)(0.008726646f)*(float)L_15)));
		(&p0)->f1 = L_16;
		t14  L_17 = p0;
		return L_17;
	}
}
extern "C" void m20 (t13 * __this, const MethodInfo* method)
{
	{
		__this->f13 = 0;
		m17(__this, 1, NULL);
		t15 * L_0 = (__this->f11);
		t15 * L_1 = m36(L_0, NULL);
		t24  L_2 = {0};
		m57(&L_2, (0.0f), (0.0f), (0.0f), NULL);
		m60(L_1, L_2, NULL);
		return;
	}
}
extern "C" void m21 (t13 * __this, t19 * p0, const MethodInfo* method)
{
	{
		__this->f13 = 1;
		m17(__this, 0, NULL);
		return;
	}
}
extern "C" void m22 (t16 * __this, const MethodInfo* method)
{
	{
		m27(__this, NULL);
		return;
	}
}
extern const MethodInfo* m45_MI_var;
extern const MethodInfo* m47_MI_var;
extern "C" void m23 (t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m45_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		m47_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5 * L_0 = (__this->f2);
		m44(L_0, 0, NULL);
		t5 * L_1 = (__this->f2);
		t32 * L_2 = m45(L_1, m45_MI_var);
		m46(L_2, (0.0f), NULL);
		t5 * L_3 = (__this->f2);
		t17 * L_4 = m47(L_3, m47_MI_var);
		t33  L_5 = m48(NULL, NULL);
		m49(L_4, L_5, NULL);
		return;
	}
}
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void m24 (t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		t17 * L_0 = (__this->f3);
		float L_1 = m71(NULL, NULL);
		V_0 = L_1;
		t25* L_2 = m72((&V_0), _stringLiteral7, NULL);
		VirtActionInvoker1< t25* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
extern const MethodInfo* m45_MI_var;
extern const MethodInfo* m47_MI_var;
extern "C" void m25 (t16 * __this, t19 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m45_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		m47_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5 * L_0 = (__this->f2);
		m44(L_0, 1, NULL);
		t5 * L_1 = (__this->f2);
		t32 * L_2 = m45(L_1, m45_MI_var);
		m46(L_2, (1.0f), NULL);
		t5 * L_3 = (__this->f2);
		t17 * L_4 = m47(L_3, m47_MI_var);
		t33  L_5 = m73(NULL, NULL);
		m49(L_4, L_5, NULL);
		return;
	}
}
extern const MethodInfo* m45_MI_var;
extern const MethodInfo* m47_MI_var;
extern "C" void m26 (t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m45_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		m47_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		t5 * L_0 = (__this->f2);
		m44(L_0, 0, NULL);
		t5 * L_1 = (__this->f2);
		t32 * L_2 = m45(L_1, m45_MI_var);
		m46(L_2, (0.0f), NULL);
		t5 * L_3 = (__this->f2);
		t17 * L_4 = m47(L_3, m47_MI_var);
		t33  L_5 = m48(NULL, NULL);
		m49(L_4, L_5, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
