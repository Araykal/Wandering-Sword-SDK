#pragma once



// Package: BPMV_GHPropTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_GHPropTip.BPMV_GHPropTip_C
// 0x0008 (0x0370 - 0x0368)
class UBPMV_GHPropTip_C final : public UJHNeoUIPropTipViewS
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_GHPropTip(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_GHPropTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_GHPropTip_C")
	}
	static class UBPMV_GHPropTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_GHPropTip_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_GHPropTip_C;

SDK_NAMESPACE_END
