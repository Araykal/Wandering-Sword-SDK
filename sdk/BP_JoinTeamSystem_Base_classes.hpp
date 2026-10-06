#pragma once



// Package: BP_JoinTeamSystem_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JoinTeamSystem_Base.BP_JoinTeamSystem_Base_C
// 0x0008 (0x0060 - 0x0058)
class UBP_JoinTeamSystem_Base_C final : public UJoinTeamSystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_JoinTeamSystem_Base(int32 EntryPoint);
	void Active(int32 NPCId);
	void OnJoinFail(int32 NPCId);
	void OnJoinSuss(int32 NPCId);
	void OnDlgClosed_23ABD56C45BEAD31CF0455BF514F7FB3(int32 NPCId);
	void OnDlgSelectedOption_23ABD56C45BEAD31CF0455BF514F7FB3(int32 NPCId);
	bool CheckRequirement(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JoinTeamSystem_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JoinTeamSystem_Base_C")
	}
	static class UBP_JoinTeamSystem_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JoinTeamSystem_Base_C>();
	}
};
DUMPER7_ASSERTS_UBP_JoinTeamSystem_Base_C;

SDK_NAMESPACE_END
