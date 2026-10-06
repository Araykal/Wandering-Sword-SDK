#pragma once



// Package: Quest_16188

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16188.Quest_16188_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16188_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16188_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16188(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5EEDF01C425CB45DB3DEE09222BA4D4C();
	void OnStop_5EEDF01C425CB45DB3DEE09222BA4D4C();
	void OnDlgClosed_6D91F89A4FD544962A4C92B3A54C4C11(int32 NPCId);
	void OnDlgSelectedOption_6D91F89A4FD544962A4C92B3A54C4C11(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16188_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16188_C")
	}
	static class UQuest_16188_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16188_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16188_C;

SDK_NAMESPACE_END
