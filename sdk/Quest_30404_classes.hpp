#pragma once



// Package: Quest_30404

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30404.Quest_30404_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30404_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30404_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30404(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AC05B19442DAA48CCB952891F1A6E144();
	void OnStop_AC05B19442DAA48CCB952891F1A6E144();
	void OnDlgClosed_80D0027545061D329EA6B0A3017C96F3(int32 NPCId);
	void OnDlgSelectedOption_80D0027545061D329EA6B0A3017C96F3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30404_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30404_C")
	}
	static class UQuest_30404_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30404_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30404_C;

SDK_NAMESPACE_END
