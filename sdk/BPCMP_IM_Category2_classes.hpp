#pragma once



// Package: BPCMP_IM_Category2

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_IM_Category2.BPCMP_IM_Category2_C
// 0x0010 (0x0290 - 0x0280)
class UBPCMP_IM_Category2_C final : public UJHNeoUIConfig_IMCategory2
{
public:
	class UNeoUIButtonBase*                       BTN_Fold;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_TitleBG;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_IM_Category2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_IM_Category2_C")
	}
	static class UBPCMP_IM_Category2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_IM_Category2_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_IM_Category2_C;

SDK_NAMESPACE_END
