#pragma once



// Package: BP_GridManager

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GridManager.BP_GridManager_C
// 0x0008 (0x02B8 - 0x02B0)
class ABP_GridManager_C final : public AJHGridManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GridManager_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GridManager_C")
	}
	static class ABP_GridManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GridManager_C>();
	}
};
DUMPER7_ASSERTS_ABP_GridManager_C;

SDK_NAMESPACE_END
