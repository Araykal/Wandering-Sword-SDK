#pragma once



// Package: BPMV_FusionInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_FusionInfo.BPMV_FusionInfo_C
// 0x0030 (0x0390 - 0x0360)
class UBPMV_FusionInfo_C final : public UJHFusionInfoView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHCommon_BlockContainer_C*             JHCommon_BlockContainer;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_Probability_C*               VE_Fusion_Probability_2;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyList_C*              VE_Fusion_PropertyList;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyList_NoAlign_C*      VE_Fusion_PropertyList_NoAlign;                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_SpecialEffects_C*            VE_Fusion_SpecialEffects;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_FusionInfo(int32 EntryPoint);
	void EVT_RenderView();
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_FusionInfo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_FusionInfo_C")
	}
	static class UBPMV_FusionInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_FusionInfo_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_FusionInfo_C;

SDK_NAMESPACE_END
