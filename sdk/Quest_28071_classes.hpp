#pragma once



// Package: Quest_28071

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28071.Quest_28071_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28071_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28071_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28071(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FC1C5212407D59344D0EFCA9D9D43935();
	void OnStop_FC1C5212407D59344D0EFCA9D9D43935();
	void OnDlgClosed_E582FA964AE2D7A541167FAFEAEA0EB4(int32 NPCId);
	void OnDlgSelectedOption_E582FA964AE2D7A541167FAFEAEA0EB4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28071_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28071_C")
	}
	static class UQuest_28071_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28071_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28071_C;

SDK_NAMESPACE_END
