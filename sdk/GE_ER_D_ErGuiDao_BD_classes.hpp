#pragma once



// Package: GE_ER_D_ErGuiDao_BD

#include "Basic.hpp"

#include "GE_Event_PostCrit_0_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_ER_D_ErGuiDao_BD.GE_ER_D_ErGuiDao_BD_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_ER_D_ErGuiDao_BD_C final : public GE_Event_PostCrit_0::UGE_Event_PostCrit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_ER_D_ErGuiDao_BD_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_ER_D_ErGuiDao_BD_C")
	}
	static class UGE_ER_D_ErGuiDao_BD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ER_D_ErGuiDao_BD_C>();
	}
};
DUMPER7_ASSERTS_UGE_ER_D_ErGuiDao_BD_C;

SDK_NAMESPACE_END
