#pragma once



// Package: WBP_Text

#include "Basic.hpp"

#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass WBP_Text.WBP_Text_C
// 0x0000 (0x02A8 - 0x02A8)
class UWBP_Text_C : public UTextBlock
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_Text_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_Text_C")
	}
	static class UWBP_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Text_C>();
	}
};
DUMPER7_ASSERTS_UWBP_Text_C;

SDK_NAMESPACE_END
