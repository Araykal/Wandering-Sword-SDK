#pragma once



// Package: BP_GameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// 0x0028 (0x0430 - 0x0408)
class ABP_GameMode_C : public AJHGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   未知地图;                                          // 0x0418(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GameMode(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GameMode_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GameMode_C")
	}
	static class ABP_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_C>();
	}
};
DUMPER7_ASSERTS_ABP_GameMode_C;

SDK_NAMESPACE_END
