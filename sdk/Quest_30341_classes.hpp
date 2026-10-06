#pragma once



// Package: Quest_30341

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30341.Quest_30341_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30341_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30341_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30341(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_76A3B7C342748C062071748C45207BCC();
	void OnFinished_424731824FE7C4AE09CE61A2537E5BBF();
	void OnStop_424731824FE7C4AE09CE61A2537E5BBF();
	void OnDlgClosed_415477CE4A35C20BC26098A3B953ECA7(int32 NPCId);
	void OnDlgSelectedOption_415477CE4A35C20BC26098A3B953ECA7(int32 NPCId);
	void He_Jiu(int32 NPCId, bool Msg);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30341_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30341_C")
	}
	static class UQuest_30341_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30341_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30341_C;

SDK_NAMESPACE_END
