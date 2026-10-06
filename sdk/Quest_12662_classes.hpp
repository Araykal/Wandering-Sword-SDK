#pragma once



// Package: Quest_12662

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12662.Quest_12662_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12662_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12662_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12662(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_48203633479D4848B49C33859242DCBF();
	void OnStop_48203633479D4848B49C33859242DCBF();
	void OnDlgClosed_8E9915A3476D64AB478F1FB5B6AAD4C8(int32 NPCId);
	void OnDlgSelectedOption_8E9915A3476D64AB478F1FB5B6AAD4C8(int32 NPCId);
	void OnSuccess_8CF08CBD49854FDFF7069E9B6C1C9EB0(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12662_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12662_C")
	}
	static class UQuest_12662_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12662_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12662_C;

SDK_NAMESPACE_END
