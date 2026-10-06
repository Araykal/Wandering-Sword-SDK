#pragma once



// Package: Quest_28902

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28902.Quest_28902_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28902_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28902_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28902(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4441AA6F43F3C472D4C29DBC32636613();
	void OnFinished_4C7CF862410CE0B738CF75A6EF5A2352();
	void OnStop_4C7CF862410CE0B738CF75A6EF5A2352();
	void OnDlgClosed_7208B5E54D1C3118A7D0F7BCE83ED0DC(int32 NPCId);
	void OnDlgSelectedOption_7208B5E54D1C3118A7D0F7BCE83ED0DC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28902_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28902_C")
	}
	static class UQuest_28902_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28902_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28902_C;

SDK_NAMESPACE_END
