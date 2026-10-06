#pragma once



// Package: Quest_28009

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28009.Quest_28009_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28009_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28009_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28009(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_27543BA14483D629EC86D8A8AD63777A();
	void OnStop_27543BA14483D629EC86D8A8AD63777A();
	void OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId);
	void OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28009_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28009_C")
	}
	static class UQuest_28009_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28009_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28009_C;

SDK_NAMESPACE_END
