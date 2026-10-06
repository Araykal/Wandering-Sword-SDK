#pragma once



// Package: BP_SceneHero

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneHero.BP_SceneHero_C
// 0x0030 (0x0610 - 0x05E0)
class ABP_SceneHero_C : public ASceneHero
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bPlayDie;                                          // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F9[0x7];                                      // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SpriteMaterialsInstance;                           // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetCache;                                       // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SceneHero(int32 EntryPoint);
	void EVT_TeleportToPlayerStartLocation();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneHero_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneHero_C")
	}
	static class ABP_SceneHero_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneHero_C>();
	}
};
DUMPER7_ASSERTS_ABP_SceneHero_C;

SDK_NAMESPACE_END
