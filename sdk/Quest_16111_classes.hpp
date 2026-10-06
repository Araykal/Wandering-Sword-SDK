#pragma once



// Package: Quest_16111

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16111.Quest_16111_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16111_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16111_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16111(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_717DE160493F61BCEC58619CEE69D3A2();
	void OnStop_717DE160493F61BCEC58619CEE69D3A2();
	void OnDlgClosed_C502EF5C4473FBA55DF62EA922BDCBDA(int32 NPCId);
	void OnDlgSelectedOption_C502EF5C4473FBA55DF62EA922BDCBDA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16111_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16111_C")
	}
	static class UQuest_16111_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16111_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16111_C;

SDK_NAMESPACE_END
