#pragma once



// Package: Quest_7030

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7030.Quest_7030_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7030_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7030_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7030(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AF6C1AA147EDDBFE6683C7A067A666E4(bool bWinOrLose);
	void OnSuccess_219FD86542FC44ECA48B1197BA1D66E6(bool bWinOrLose);
	void OnSuccess_F602ECB84434353ABC085589D6916508(bool bWinOrLose);
	void OnFinished_F5C8FA894EEB52180B2AD498CF8C1318();
	void OnStop_F5C8FA894EEB52180B2AD498CF8C1318();
	void OnDlgClosed_5CFBBCDB43E1F125D7630AA209AE451A(int32 NPCId);
	void OnDlgSelectedOption_5CFBBCDB43E1F125D7630AA209AE451A(int32 NPCId);
	void OnSuccess_08DEE97A4B8F79030ABDC1A69A6B11EE(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7030_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7030_C")
	}
	static class UQuest_7030_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7030_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7030_C;

SDK_NAMESPACE_END
