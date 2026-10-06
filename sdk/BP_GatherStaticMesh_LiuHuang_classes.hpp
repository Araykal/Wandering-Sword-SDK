#pragma once



// Package: BP_GatherStaticMesh_LiuHuang

#include "Basic.hpp"

#include "BP_GatherStaticMesh_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GatherStaticMesh_LiuHuang.BP_GatherStaticMesh_LiuHuang_C
// 0x0008 (0x0468 - 0x0460)
class ABP_GatherStaticMesh_LiuHuang_C final : public ABP_GatherStaticMesh_C
{
public:
	class UParticleVisibleComponent*              ParticleVisible;                                   // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GatherStaticMesh_LiuHuang_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GatherStaticMesh_LiuHuang_C")
	}
	static class ABP_GatherStaticMesh_LiuHuang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatherStaticMesh_LiuHuang_C>();
	}
};
DUMPER7_ASSERTS_ABP_GatherStaticMesh_LiuHuang_C;

SDK_NAMESPACE_END
