#pragma once



// Package: Quest_28266

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28266.Quest_28266_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28266_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28266_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28266(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4817D9894FF1ADA8F065689E168A114F();
	void OnStop_4817D9894FF1ADA8F065689E168A114F();
	void OnDlgClosed_2B91DE9F47482BC342BF94B4A3306A30(int32 NPCId);
	void OnDlgSelectedOption_2B91DE9F47482BC342BF94B4A3306A30(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28266_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28266_C")
	}
	static class UQuest_28266_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28266_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28266_C;

SDK_NAMESPACE_END
