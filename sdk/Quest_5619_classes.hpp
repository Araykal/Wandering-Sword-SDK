#pragma once



// Package: Quest_5619

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5619.Quest_5619_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5619_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5619_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5619(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_38210E274F5076E681396F8B329CE2E5(bool bWinOrLose);
	void OnFinished_1157C82145307C49AA34578797030D6B();
	void OnStop_1157C82145307C49AA34578797030D6B();
	void OnDlgClosed_E3A4B7774BA358145F98C5BFE0E53CB1(int32 NPCId);
	void OnDlgSelectedOption_E3A4B7774BA358145F98C5BFE0E53CB1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5619_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5619_C")
	}
	static class UQuest_5619_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5619_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5619_C;

SDK_NAMESPACE_END
