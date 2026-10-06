#pragma once



// Package: Quest_12664

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12664.Quest_12664_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12664_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12664_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12664(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_323E72DB4C0BA4E24E0C338C32B4EA96();
	void OnFinished_E21512B146DC6F08A14FF29C47F96E73();
	void OnStop_E21512B146DC6F08A14FF29C47F96E73();
	void OnDlgClosed_165816E1419813C10B0AA2A1311666D5(int32 NPCId);
	void OnDlgSelectedOption_165816E1419813C10B0AA2A1311666D5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12664_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12664_C")
	}
	static class UQuest_12664_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12664_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12664_C;

SDK_NAMESPACE_END
