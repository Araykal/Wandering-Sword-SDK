#pragma once



// Package: Quest_30088

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30088.Quest_30088_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30088_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30088_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30088(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_462A827E45F7BDE4062D23BE08B67A44();
	void OnFinished_76F74C684F73397CFF2222B33C016C9C();
	void OnStop_76F74C684F73397CFF2222B33C016C9C();
	void OnDlgClosed_4F3DDB234A91BCC6BE478F80CB5E3999(int32 NPCId);
	void OnDlgSelectedOption_4F3DDB234A91BCC6BE478F80CB5E3999(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30088_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30088_C")
	}
	static class UQuest_30088_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30088_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30088_C;

SDK_NAMESPACE_END
