#pragma once



// Package: Quest_5566

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5566.Quest_5566_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5566_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5566_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5566(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_51CCC653447AE95A91CAD8913FB915B6();
	void OnFinished_74E1D65E4F35D0E4624ED6AA94E65B62();
	void OnStop_74E1D65E4F35D0E4624ED6AA94E65B62();
	void OnDlgClosed_7CC1C24B48EB311552B8B59780631277(int32 NPCId);
	void OnDlgSelectedOption_7CC1C24B48EB311552B8B59780631277(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5566_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5566_C")
	}
	static class UQuest_5566_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5566_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5566_C;

SDK_NAMESPACE_END
