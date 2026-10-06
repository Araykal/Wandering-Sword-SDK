#pragma once



// Package: Quest_5385

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5385.Quest_5385_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5385_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5385_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5385(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_BEEA36D44C889E2685C652AD1AA7AE72(bool bWinOrLose);
	void OnSuccess_8D57F89040C580DE3752BF85561115B4(bool bWinOrLose);
	void OnSuccess_FA30FB7147189C1AD1057F850A890BA3(bool bWinOrLose);
	void OnFinished_4BDD7BFF4443AFF4FE8A618F4AE8D6D1();
	void OnStop_4BDD7BFF4443AFF4FE8A618F4AE8D6D1();
	void OnDlgClosed_0A7A3A1A4CF0F6AD7458C4B80DB6C76B(int32 NPCId);
	void OnDlgSelectedOption_0A7A3A1A4CF0F6AD7458C4B80DB6C76B(int32 NPCId);
	void OnSuccess_09673654457CD713FAFE2C9DBEAF13A7(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5385_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5385_C")
	}
	static class UQuest_5385_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5385_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5385_C;

SDK_NAMESPACE_END
