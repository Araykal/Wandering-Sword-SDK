#pragma once



// Package: BPCMP_ConsultListBG

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_ConsultListBG.BPCMP_ConsultListBG_C
// 0x0008 (0x0390 - 0x0388)
class UBPCMP_ConsultListBG_C final : public UNeoUI1Img1TxtComp
{
public:
	class UNeoUIImageBase*                        IMG_Title_BG;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_ConsultListBG_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_ConsultListBG_C")
	}
	static class UBPCMP_ConsultListBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_ConsultListBG_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_ConsultListBG_C;

SDK_NAMESPACE_END
