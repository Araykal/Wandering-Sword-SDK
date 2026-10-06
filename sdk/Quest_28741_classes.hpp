#pragma once



// Package: Quest_28741

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28741.Quest_28741_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28741_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28741_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28741(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_679DF7E14C1432D34E48FC9548A6DE89();
	void OnStop_679DF7E14C1432D34E48FC9548A6DE89();
	void OnDlgClosed_7944D4994C978AC7E380B3B1A3FE62BC(int32 NPCId);
	void OnDlgSelectedOption_7944D4994C978AC7E380B3B1A3FE62BC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28741_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28741_C")
	}
	static class UQuest_28741_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28741_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28741_C;

SDK_NAMESPACE_END
