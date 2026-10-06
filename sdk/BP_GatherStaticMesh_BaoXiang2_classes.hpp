#pragma once



// Package: BP_GatherStaticMesh_BaoXiang2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GatherStaticMesh_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GatherStaticMesh_BaoXiang2.BP_GatherStaticMesh_BaoXiang2_C
// 0x0008 (0x0468 - 0x0460)
class ABP_GatherStaticMesh_BaoXiang2_C final : public ABP_GatherStaticMesh_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GatherStaticMesh_BaoXiang2_C;    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GatherStaticMesh_BaoXiang2(int32 EntryPoint);
	void HandlePostGather(EGatherType GatherType);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GatherStaticMesh_BaoXiang2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GatherStaticMesh_BaoXiang2_C")
	}
	static class ABP_GatherStaticMesh_BaoXiang2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatherStaticMesh_BaoXiang2_C>();
	}
};
DUMPER7_ASSERTS_ABP_GatherStaticMesh_BaoXiang2_C;

SDK_NAMESPACE_END
