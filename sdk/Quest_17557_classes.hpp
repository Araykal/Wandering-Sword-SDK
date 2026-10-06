#pragma once



// Package: Quest_17557

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17557.Quest_17557_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_17557_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17557_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_17557(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B404680F4B3DB53851D830B0031C52DD();
	void OnFinished_CABF54804444D3DF42AC569EEF2560CE();
	void OnStop_CABF54804444D3DF42AC569EEF2560CE();
	void OnDlgClosed_6D6261A84419784D6A8F9B98A5AFCD95(int32 NPCId);
	void OnDlgSelectedOption_6D6261A84419784D6A8F9B98A5AFCD95(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17557_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17557_C")
	}
	static class UQuest_17557_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17557_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17557_C;

SDK_NAMESPACE_END
