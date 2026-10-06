#pragma once



// Package: Quest_30345

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30345.Quest_30345_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30345_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30345_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30345(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8C4529F54AD568B71F26EF8CF8B494CF();
	void OnFinished_5EADD13C438B6C4766DCC3950FFE952E();
	void OnStop_5EADD13C438B6C4766DCC3950FFE952E();
	void OnDlgClosed_DF512EEA4FD8E3584B34D48AFC462500(int32 NPCId);
	void OnDlgSelectedOption_DF512EEA4FD8E3584B34D48AFC462500(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30345_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30345_C")
	}
	static class UQuest_30345_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30345_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30345_C;

SDK_NAMESPACE_END
