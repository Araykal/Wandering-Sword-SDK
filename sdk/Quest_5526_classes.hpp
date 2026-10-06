#pragma once



// Package: Quest_5526

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5526.Quest_5526_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5526_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5526_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5526(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CC04E11B48A6FED15DA82EA813024918();
	void OnStop_CC04E11B48A6FED15DA82EA813024918();
	void OnDlgClosed_BCFB59EB4378D1C3E1E2AB875A188048(int32 NPCId);
	void OnDlgSelectedOption_BCFB59EB4378D1C3E1E2AB875A188048(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5526_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5526_C")
	}
	static class UQuest_5526_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5526_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5526_C;

SDK_NAMESPACE_END
