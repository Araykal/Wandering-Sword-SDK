#pragma once



// Package: Quest_12687

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12687.Quest_12687_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12687_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12687_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12687(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_84099F31433718788273E9B3FE4CF679(bool bWinOrLose);
	void OnSuccess_FE6B98C445A9595CDE6A85BBF3251EC1(bool bWinOrLose);
	void OnFinished_15CCC8B24E9091746496578E25A9CFD3();
	void OnStop_15CCC8B24E9091746496578E25A9CFD3();
	void OnDlgClosed_00AF71D240A509E8F0F6829E5E5868A9(int32 NPCId);
	void OnDlgSelectedOption_00AF71D240A509E8F0F6829E5E5868A9(int32 NPCId);
	void OnSuccess_E1E9E31549F889546C08279E5B864368(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12687_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12687_C")
	}
	static class UQuest_12687_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12687_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12687_C;

SDK_NAMESPACE_END
