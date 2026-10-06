#pragma once



// Package: Quest_12127

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12127.Quest_12127_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12127_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12127_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   LV_25_P;                                           // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12127(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6E1B68154B51613AD21E6480E6B4359F();
	void OnStop_6E1B68154B51613AD21E6480E6B4359F();
	void OnDlgClosed_F8038ED74E53EF5878657C934E14FD50(int32 NPCId);
	void OnDlgSelectedOption_F8038ED74E53EF5878657C934E14FD50(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12127_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12127_C")
	}
	static class UQuest_12127_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12127_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12127_C;

SDK_NAMESPACE_END
