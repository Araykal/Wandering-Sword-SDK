#pragma once



// Package: Quest_30715

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30715.Quest_30715_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30715_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30715_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30715(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_223D848F478F62EEB12E0196448D0959();
	void OnStop_223D848F478F62EEB12E0196448D0959();
	void OnDlgClosed_FFE9F408458440AEB3193F86B72BD35B(int32 NPCId);
	void OnDlgSelectedOption_FFE9F408458440AEB3193F86B72BD35B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30715_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30715_C")
	}
	static class UQuest_30715_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30715_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30715_C;

SDK_NAMESPACE_END
