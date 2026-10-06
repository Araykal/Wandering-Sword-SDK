#pragma once



// Package: Quest_7081

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7081.Quest_7081_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7081_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7081_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7081(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_99A8BC924D69945F851594957201C636(bool bWinOrLose);
	void OnSuccess_BE29B6CB4816BD747C4ED688B955E9EF(bool bWinOrLose);
	void OnSuccess_6AEAF3B2499D57782E6123821C6B8A90(bool bWinOrLose);
	void OnSuccess_3354D5C04EC33142B97B3D9F8BB9BDEA(bool bWinOrLose);
	void OnSuccess_CB3407224390144154610D8BE0C9D2CA(bool bWinOrLose);
	void OnFinished_5F7154BF4C3276944F9C96B440131E87();
	void OnStop_5F7154BF4C3276944F9C96B440131E87();
	void OnDlgClosed_FBFBA9D143F1707DCFC60BAF9B4E1248(int32 NPCId);
	void OnDlgSelectedOption_FBFBA9D143F1707DCFC60BAF9B4E1248(int32 NPCId);
	void OnSuccess_A44DDB0D40527B276529D48811B49E9B(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7081_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7081_C")
	}
	static class UQuest_7081_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7081_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7081_C;

SDK_NAMESPACE_END
