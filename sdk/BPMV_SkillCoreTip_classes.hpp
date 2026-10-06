#pragma once



// Package: BPMV_SkillCoreTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_SkillCoreTip.BPMV_SkillCoreTip_C
// 0x0008 (0x0370 - 0x0368)
class UBPMV_SkillCoreTip_C final : public UJHNeoUISkillCoreTipView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_SkillCoreTip(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_SkillCoreTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_SkillCoreTip_C")
	}
	static class UBPMV_SkillCoreTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_SkillCoreTip_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_SkillCoreTip_C;

SDK_NAMESPACE_END
