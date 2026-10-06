#pragma once



// Package: Quest_16101

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16101.Quest_16101_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16101_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16101_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16101(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A43030174B7F7CA989AA068D21A29A09();
	void OnStop_A43030174B7F7CA989AA068D21A29A09();
	void OnDlgClosed_66F6500E432E722B09318E8A024D1024(int32 NPCId);
	void OnDlgSelectedOption_66F6500E432E722B09318E8A024D1024(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16101_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16101_C")
	}
	static class UQuest_16101_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16101_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16101_C;

SDK_NAMESPACE_END
