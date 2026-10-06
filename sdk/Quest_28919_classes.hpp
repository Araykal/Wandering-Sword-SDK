#pragma once



// Package: Quest_28919

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28919.Quest_28919_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28919_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28919_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28919(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B88C8A46484C78792BD33F8525EA1D01();
	void OnFinished_D6C18CB7499D4B69798E248CC48BA9A2();
	void OnStop_D6C18CB7499D4B69798E248CC48BA9A2();
	void OnDlgClosed_96066FCB4D5404608FBFB39B705F3082(int32 NPCId);
	void OnDlgSelectedOption_96066FCB4D5404608FBFB39B705F3082(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28919_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28919_C")
	}
	static class UQuest_28919_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28919_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28919_C;

SDK_NAMESPACE_END
