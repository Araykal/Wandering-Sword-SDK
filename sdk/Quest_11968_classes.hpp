#pragma once



// Package: Quest_11968

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11968.Quest_11968_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11968_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11968_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11968(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_23F55FF64DAE1D423D5C96A7FBC439D2(bool bWinOrLose);
	void OnSuccess_A472CEBE49A6258F41CBC78BB3057A8B(bool bWinOrLose);
	void OnSuccess_9FB0945042174F384988F7A3189EA2DD(bool bWinOrLose);
	void OnFinished_7B6AD98C41AECC03F95579B542F8394E();
	void OnStop_7B6AD98C41AECC03F95579B542F8394E();
	void OnDlgClosed_A3EFACFE4B222C1400CA49B8AB6B9C02(int32 NPCId);
	void OnDlgSelectedOption_A3EFACFE4B222C1400CA49B8AB6B9C02(int32 NPCId);
	void OnSuccess_F6E61A9142507BCC5B1BD890B5E27509(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11968_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11968_C")
	}
	static class UQuest_11968_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11968_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11968_C;

SDK_NAMESPACE_END
