#pragma once



// Package: BP_SceneMonster

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneMonster.BP_SceneMonster_C
// 0x0010 (0x0560 - 0x0550)
class ABP_SceneMonster_C final : public ASceneMonster
{
public:
	class USphereComponent*                       Sphere;                                            // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneMonster_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneMonster_C")
	}
	static class ABP_SceneMonster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneMonster_C>();
	}
};
DUMPER7_ASSERTS_ABP_SceneMonster_C;

SDK_NAMESPACE_END
