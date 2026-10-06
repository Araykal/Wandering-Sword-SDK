#pragma once



// Package: Quest_30058

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30058.Quest_30058_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30058_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30058_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30058(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E884B8324964CF5D347C4CB90623640D();
	void OnFinished_1DDF66D04B4C2C5FD62D09BB6DF549E3();
	void OnStop_1DDF66D04B4C2C5FD62D09BB6DF549E3();
	void OnDlgClosed_B0215D7F47C5608B647D649E064AA207(int32 NPCId);
	void OnDlgSelectedOption_B0215D7F47C5608B647D649E064AA207(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30058_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30058_C")
	}
	static class UQuest_30058_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30058_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30058_C;

SDK_NAMESPACE_END
