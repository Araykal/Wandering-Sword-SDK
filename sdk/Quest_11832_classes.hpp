#pragma once



// Package: Quest_11832

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11832.Quest_11832_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11832_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11832_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11832(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4B3217D9434FB2F1F913DE86C8E520AA(bool bWinOrLose);
	void OnFinished_5D76E49142E183307CAF1E8125AAFB06();
	void OnStop_5D76E49142E183307CAF1E8125AAFB06();
	void OnDlgClosed_093EBFDF462EE604329988A5A7DFA435(int32 NPCId);
	void OnDlgSelectedOption_093EBFDF462EE604329988A5A7DFA435(int32 NPCId);
	void OnSuccess_477D572941264E64D2DAFDAD2473C2B0(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11832_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11832_C")
	}
	static class UQuest_11832_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11832_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11832_C;

SDK_NAMESPACE_END
