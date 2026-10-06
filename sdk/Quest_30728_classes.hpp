#pragma once



// Package: Quest_30728

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30728.Quest_30728_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30728_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30728_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30728(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1B7755944378854192CE74B9648644DA();
	void OnFinished_561009164F80E899A5DAC185FAC341CC();
	void OnStop_561009164F80E899A5DAC185FAC341CC();
	void OnDlgClosed_35D09ED2421BFF6B3825E9AFAB838997(int32 NPCId);
	void OnDlgSelectedOption_35D09ED2421BFF6B3825E9AFAB838997(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30728_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30728_C")
	}
	static class UQuest_30728_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30728_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30728_C;

SDK_NAMESPACE_END
