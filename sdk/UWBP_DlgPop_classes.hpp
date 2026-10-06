#pragma once



// Package: UWBP_DlgPop

#include "Basic.hpp"

#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_DlgPop.UWBP_DlgPop_C
// 0x0008 (0x0268 - 0x0260)
class UUWBP_DlgPop_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_DlgPop_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_DlgPop_C")
	}
	static class UUWBP_DlgPop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_DlgPop_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_DlgPop_C;

SDK_NAMESPACE_END
