#pragma once



// Package: Quest_30008

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30008.Quest_30008_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30008_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30008_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30008(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_01683DDB40BA1B367537AAAD39EE2DE5(bool bWinOrLose);
	void OnFinished_DF1225EA4A9DB30CF76F19B8D2678E13();
	void OnStop_DF1225EA4A9DB30CF76F19B8D2678E13();
	void OnDlgClosed_22693DE64EAD8EB47E018AAA6FD1D615(int32 NPCId);
	void OnDlgSelectedOption_22693DE64EAD8EB47E018AAA6FD1D615(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30008_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30008_C")
	}
	static class UQuest_30008_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30008_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30008_C;

SDK_NAMESPACE_END
