#pragma once



// Package: Quest_5270

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5270.Quest_5270_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5270_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5270_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5270(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_F32CCBFA47923A478BE71DA413F13C1B();
	void OnFinished_020C9FE44CDFA21AE0CBE5AF1BAB2C89();
	void OnStop_020C9FE44CDFA21AE0CBE5AF1BAB2C89();
	void OnDlgClosed_22377B164AC73B77499EB893EF5CE795(int32 NPCId);
	void OnDlgSelectedOption_22377B164AC73B77499EB893EF5CE795(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5270_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5270_C")
	}
	static class UQuest_5270_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5270_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5270_C;

SDK_NAMESPACE_END
