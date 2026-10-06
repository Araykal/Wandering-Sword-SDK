#pragma once



// Package: Quest_5811

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5811.Quest_5811_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5811_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5811_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5811(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_664272594155294B75AFA6BA88FEE72C();
	void OnStop_664272594155294B75AFA6BA88FEE72C();
	void OnDlgClosed_443FAF7945F0FEDF194980930BE216DE(int32 NPCId);
	void OnDlgSelectedOption_443FAF7945F0FEDF194980930BE216DE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5811_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5811_C")
	}
	static class UQuest_5811_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5811_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5811_C;

SDK_NAMESPACE_END
