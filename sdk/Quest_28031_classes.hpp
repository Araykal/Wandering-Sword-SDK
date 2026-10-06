#pragma once



// Package: Quest_28031

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28031.Quest_28031_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28031_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28031_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28031(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AB63FC174915ACAEFC918194A58853E8();
	void OnStop_AB63FC174915ACAEFC918194A58853E8();
	void OnDlgClosed_F1235A8140361B09BB55F8AE01AFD1E2(int32 NPCId);
	void OnDlgSelectedOption_F1235A8140361B09BB55F8AE01AFD1E2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28031_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28031_C")
	}
	static class UQuest_28031_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28031_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28031_C;

SDK_NAMESPACE_END
