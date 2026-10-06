#pragma once



// Package: Quest_7022

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7022.Quest_7022_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7022_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7022_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7022(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A28028E24AC8125E846278B51322AD43();
	void OnStop_A28028E24AC8125E846278B51322AD43();
	void OnDlgClosed_16D142704AE1EB1771929FB10C571737(int32 NPCId);
	void OnDlgSelectedOption_16D142704AE1EB1771929FB10C571737(int32 NPCId);
	void OnSuccess_ECAB6A50408E302B7B1ADE9083D5BFE9(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7022_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7022_C")
	}
	static class UQuest_7022_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7022_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7022_C;

SDK_NAMESPACE_END
