#pragma once



// Package: Quest_11389

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11389.Quest_11389_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11389_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11389_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11389(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_318815274371CDE78C844680C113D71C();
	void OnStop_318815274371CDE78C844680C113D71C();
	void OnDlgClosed_AB5391584E9797E2C5DFBCA9ECAC4170(int32 NPCId);
	void OnDlgSelectedOption_AB5391584E9797E2C5DFBCA9ECAC4170(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11389_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11389_C")
	}
	static class UQuest_11389_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11389_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11389_C;

SDK_NAMESPACE_END
