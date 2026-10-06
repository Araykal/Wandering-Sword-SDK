#pragma once



// Package: BPCMP_QuestDetail_DescTitle

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_QuestDetail_DescTitle.BPCMP_QuestDetail_DescTitle_C
// 0x0008 (0x0390 - 0x0388)
class UBPCMP_QuestDetail_DescTitle_C final : public UNeoUI1Img1TxtComp
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_351;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_QuestDetail_DescTitle_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_QuestDetail_DescTitle_C")
	}
	static class UBPCMP_QuestDetail_DescTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_QuestDetail_DescTitle_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_QuestDetail_DescTitle_C;

SDK_NAMESPACE_END
