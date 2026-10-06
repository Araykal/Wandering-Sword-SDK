#pragma once



// Package: BP_SceneNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_SceneNPC.BP_SceneNPC_C
// 0x0010 (0x0540 - 0x0530)
#pragma pack(push, 0x1)
class SDK_ALIGN(0x10) ABP_SceneNPC_C : public ASceneNPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SceneNPC(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnChangeSkin(int32 NPCId_0, bool bNext, class FName NewAvatarName);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_SceneNPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_SceneNPC_C")
	}
	static class ABP_SceneNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneNPC_C>();
	}
};
#pragma pack(pop)
DUMPER7_ASSERTS_ABP_SceneNPC_C;

SDK_NAMESPACE_END
