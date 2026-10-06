#pragma once



// Package: Quest_5037

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5037.Quest_5037_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5037_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5037_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5037(int32 EntryPoint);
	void HandleRequesting(int32 NPCId);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_33FE9F26402A365CB42F5C95382E50F8(bool bWinOrLose);
	void OnFinished_27226B4E440787EF2BBD4282637A3694();
	void OnStop_27226B4E440787EF2BBD4282637A3694();
	void OnDlgClosed_FD6487F44C16C072EBC34CA9A1B21395(int32 NPCId);
	void OnDlgSelectedOption_FD6487F44C16C072EBC34CA9A1B21395(int32 NPCId);
	void OnSuccess_492F312D41E50BB626ADDE9F9078E428(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5037_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5037_C")
	}
	static class UQuest_5037_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5037_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5037_C;

SDK_NAMESPACE_END
