#pragma once



// Package: WBP_Label

#include "Basic.hpp"

#include "WBP_Text_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass WBP_Label.WBP_Label_C
// 0x0000 (0x02A8 - 0x02A8)
class UWBP_Label_C final : public UWBP_Text_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_Label_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_Label_C")
	}
	static class UWBP_Label_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Label_C>();
	}
};
DUMPER7_ASSERTS_UWBP_Label_C;

SDK_NAMESPACE_END
