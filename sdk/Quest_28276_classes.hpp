#pragma once



// Package: Quest_28276

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28276.Quest_28276_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28276_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28276_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28276(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0396CB9F40C6FFACBBBA379ACC9A5337(bool bWinOrLose);
	void OnSuccess_E29BA15F4D9B9A8278D9B2981B0FEC30(bool bWinOrLose);
	void OnFinished_520DA71944C1211C24A48E90DC6541C7();
	void OnStop_520DA71944C1211C24A48E90DC6541C7();
	void OnDlgClosed_A2DACA0341A5F9FDD413679F5C9F7109(int32 NPCId);
	void OnDlgSelectedOption_A2DACA0341A5F9FDD413679F5C9F7109(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28276_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28276_C")
	}
	static class UQuest_28276_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28276_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28276_C;

SDK_NAMESPACE_END
