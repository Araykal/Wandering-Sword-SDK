#pragma once



// Package: Quest_11957

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11957.Quest_11957_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11957_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11957_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11957(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D779D38A4EC815C70F8E33901878159C();
	void OnStop_D779D38A4EC815C70F8E33901878159C();
	void OnDlgClosed_7AD10CD7469F89E8C096DBBF35563ED0(int32 NPCId);
	void OnDlgSelectedOption_7AD10CD7469F89E8C096DBBF35563ED0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11957_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11957_C")
	}
	static class UQuest_11957_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11957_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11957_C;

SDK_NAMESPACE_END
