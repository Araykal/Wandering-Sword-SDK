#pragma once



// Package: Quest_28752

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28752.Quest_28752_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28752_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28752_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28752(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DA536E734B878F4A546DF6A342010704();
	void OnStop_DA536E734B878F4A546DF6A342010704();
	void OnDlgClosed_4166AA784CBAEA2B27F48BA32CE02AC7(int32 NPCId);
	void OnDlgSelectedOption_4166AA784CBAEA2B27F48BA32CE02AC7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28752_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28752_C")
	}
	static class UQuest_28752_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28752_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28752_C;

SDK_NAMESPACE_END
