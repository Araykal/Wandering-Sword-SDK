#pragma once



// Package: Quest_12661

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12661.Quest_12661_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12661_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12661_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12661(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_975C7E3248614BA0CE33CDBB440AB079();
	void OnStop_975C7E3248614BA0CE33CDBB440AB079();
	void OnDlgClosed_A849ED784A8EACEFE3CAC6BEC73E8C52(int32 NPCId);
	void OnDlgSelectedOption_A849ED784A8EACEFE3CAC6BEC73E8C52(int32 NPCId);
	void OnSuccess_E5CBD8ED4676FD4A46215580D6478788(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12661_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12661_C")
	}
	static class UQuest_12661_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12661_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12661_C;

SDK_NAMESPACE_END
