#pragma once



// Package: Quest_12233

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12233.Quest_12233_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12233_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12233_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12233(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_302228C74F78FB7776EBC19AB4F0DE37();
	void OnStop_302228C74F78FB7776EBC19AB4F0DE37();
	void OnDlgClosed_11B158E249D3CE4E449FA5993C80B056(int32 NPCId);
	void OnDlgSelectedOption_11B158E249D3CE4E449FA5993C80B056(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12233_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12233_C")
	}
	static class UQuest_12233_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12233_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12233_C;

SDK_NAMESPACE_END
