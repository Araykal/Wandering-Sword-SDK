#pragma once



// Package: GE_SL_D_DaCi

#include "Basic.hpp"

#include "GE_Event_PostCrit_0_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_SL_D_DaCi.GE_SL_D_DaCi_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_SL_D_DaCi_C final : public GE_Event_PostCrit_0::UGE_Event_PostCrit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_SL_D_DaCi_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_SL_D_DaCi_C")
	}
	static class UGE_SL_D_DaCi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SL_D_DaCi_C>();
	}
};
DUMPER7_ASSERTS_UGE_SL_D_DaCi_C;

SDK_NAMESPACE_END
