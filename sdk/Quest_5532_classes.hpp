#pragma once



// Package: Quest_5532

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5532.Quest_5532_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5532_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5532_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5532(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5F3C9EA543E7C55029AD5AAF86D9FF26();
	void OnStop_5F3C9EA543E7C55029AD5AAF86D9FF26();
	void OnDlgClosed_E751E9124575DAA974CF13A67037AB70(int32 NPCId);
	void OnDlgSelectedOption_E751E9124575DAA974CF13A67037AB70(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5532_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5532_C")
	}
	static class UQuest_5532_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5532_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5532_C;

SDK_NAMESPACE_END
