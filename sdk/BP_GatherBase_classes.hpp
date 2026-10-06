#pragma once



// Package: BP_GatherBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GatherBase.BP_GatherBase_C
// 0x0018 (0x0268 - 0x0250)
class ABP_GatherBase_C : public AJHGatherBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USoundBase*                             采集声音;                                          // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GatherBase(int32 EntryPoint);
	void SetVisibleImp(bool bNewVisible);
	void HandlePostGather(EGatherType GatherType);
	void HandleVisible(bool bVisible, EGatherType GatherType);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GatherBase_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GatherBase_C")
	}
	static class ABP_GatherBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatherBase_C>();
	}
};
DUMPER7_ASSERTS_ABP_GatherBase_C;

SDK_NAMESPACE_END
