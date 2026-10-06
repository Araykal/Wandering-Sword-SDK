#pragma once



// Package: Quest_7028

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7028.Quest_7028_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7028_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7028_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7028(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E23216D540521F8B650A1A8FBE90A0D2(bool bWinOrLose);
	void OnFinished_16BA139C49B53B4F18A006ABBD45CE1B();
	void OnStop_16BA139C49B53B4F18A006ABBD45CE1B();
	void OnDlgClosed_9E20CCDF4BF6F400A4E7899D409E9BF9(int32 NPCId);
	void OnDlgSelectedOption_9E20CCDF4BF6F400A4E7899D409E9BF9(int32 NPCId);
	void OnSuccess_FA2BB3AB46AAFC9D63ED918E23222E3D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7028_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7028_C")
	}
	static class UQuest_7028_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7028_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7028_C;

SDK_NAMESPACE_END
