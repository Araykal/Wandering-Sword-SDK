#pragma once



// Package: Quest_5539

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5539.Quest_5539_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5539_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5539_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5539(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C7FC4BF94E006AF924881B8D2939D16B();
	void OnStop_C7FC4BF94E006AF924881B8D2939D16B();
	void OnDlgClosed_AA8BFD8E49F06025688F32AA75C8AB18(int32 NPCId);
	void OnDlgSelectedOption_AA8BFD8E49F06025688F32AA75C8AB18(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5539_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5539_C")
	}
	static class UQuest_5539_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5539_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5539_C;

SDK_NAMESPACE_END
