#pragma once



// Package: Quest_28901

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28901.Quest_28901_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28901_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28901_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28901(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FB1764A6415E52A50442C1A9764A7040();
	void OnStop_FB1764A6415E52A50442C1A9764A7040();
	void OnDlgClosed_58A6584042565FD2431CBC86F16BA1C3(int32 NPCId);
	void OnDlgSelectedOption_58A6584042565FD2431CBC86F16BA1C3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28901_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28901_C")
	}
	static class UQuest_28901_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28901_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28901_C;

SDK_NAMESPACE_END
