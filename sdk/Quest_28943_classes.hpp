#pragma once



// Package: Quest_28943

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28943.Quest_28943_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28943_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28943_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28943(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E7B1B5F742607AEC3168139DB51A2DA9();
	void OnFinished_0BF57B004E8C59408DB656A684157A75();
	void OnStop_0BF57B004E8C59408DB656A684157A75();
	void OnDlgClosed_A222B8404A0AFEA0B1E8689D00CB7547(int32 NPCId);
	void OnDlgSelectedOption_A222B8404A0AFEA0B1E8689D00CB7547(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28943_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28943_C")
	}
	static class UQuest_28943_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28943_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28943_C;

SDK_NAMESPACE_END
