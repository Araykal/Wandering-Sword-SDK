#pragma once



// Package: Quest_30620

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30620.Quest_30620_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30620_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30620_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30620(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6EF4DD3E48D72256D57F8AB1C3DB3D90();
	void OnStop_6EF4DD3E48D72256D57F8AB1C3DB3D90();
	void OnDlgClosed_2387259741CE97A66FC249BEF5FA7545(int32 NPCId);
	void OnDlgSelectedOption_2387259741CE97A66FC249BEF5FA7545(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30620_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30620_C")
	}
	static class UQuest_30620_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30620_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30620_C;

SDK_NAMESPACE_END
