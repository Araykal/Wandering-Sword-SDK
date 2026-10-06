#pragma once



// Package: BP_Target

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Target.BP_Target_C
// 0x0050 (0x0270 - 0x0220)
class ABP_Target_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         AffectedActors;                                    // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ABP_MirrorNew_C*                        BP_TrueActor;                                      // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MirrorNew_C*>                TagActors;                                         // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_MirrorNew_C*>                NoTagArr;                                          // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          NoTag;                                             // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Target(int32 EntryPoint);
	void ToggleState(bool bOn);
	void ReceiveBeginPlay();
	void CheckNoTagArr(bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Target_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Target_C")
	}
	static class ABP_Target_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Target_C>();
	}
};
DUMPER7_ASSERTS_ABP_Target_C;

SDK_NAMESPACE_END
