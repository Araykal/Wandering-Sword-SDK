#pragma once



// Package: BP_SceneWalkNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SceneNPC_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneWalkNPC.BP_SceneWalkNPC_C
// 0x0000 (0x0540 - 0x0540)
class ABP_SceneWalkNPC_C final : public ABP_SceneNPC_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SceneWalkNPC_C;                  // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SceneWalkNPC(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneWalkNPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneWalkNPC_C")
	}
	static class ABP_SceneWalkNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneWalkNPC_C>();
	}
};
DUMPER7_ASSERTS_ABP_SceneWalkNPC_C;

SDK_NAMESPACE_END
