#pragma once



// Package: Quest_14163

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14163.Quest_14163_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14163_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14163_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14163(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A45EF466440638282CBCECA7A9105E38();
	void OnStop_A45EF466440638282CBCECA7A9105E38();
	void OnDlgClosed_5A3E79EE48646F811E070FB135F69A3B(int32 NPCId);
	void OnDlgSelectedOption_5A3E79EE48646F811E070FB135F69A3B(int32 NPCId);
	void OnSuccess_C79D27C04C9AD7D422484A9BC4592A27(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14163_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14163_C")
	}
	static class UQuest_14163_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14163_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14163_C;

SDK_NAMESPACE_END
