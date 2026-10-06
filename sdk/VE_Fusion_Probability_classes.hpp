#pragma once



// Package: VE_Fusion_Probability

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_Fusion_Probability.VE_Fusion_Probability_C
// 0x0028 (0x0300 - 0x02D8)
class UVE_Fusion_Probability_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_37;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_ProbabilityItem_C*           VE_Item0;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_ProbabilityItem_C*           VE_Item1;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_ProbabilityItem_C*           VE_Item2;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_Fusion_Probability(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_Fusion_Probability_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_Fusion_Probability_C")
	}
	static class UVE_Fusion_Probability_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_Fusion_Probability_C>();
	}
};
DUMPER7_ASSERTS_UVE_Fusion_Probability_C;

SDK_NAMESPACE_END
