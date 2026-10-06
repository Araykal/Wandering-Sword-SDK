#pragma once



// Package: Quest_5730

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5730.Quest_5730_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5730_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5730_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5730(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FA1D4B0448DCE84D133FAB9CAE69BC67();
	void OnFinished_EC17D67D4A804D237F5219B219C5940E();
	void OnStop_EC17D67D4A804D237F5219B219C5940E();
	void OnDlgClosed_3FED27704048A73D24A874BD56016807(int32 NPCId);
	void OnDlgSelectedOption_3FED27704048A73D24A874BD56016807(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5730_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5730_C")
	}
	static class UQuest_5730_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5730_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5730_C;

SDK_NAMESPACE_END
