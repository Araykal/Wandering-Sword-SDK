#pragma once



// Package: Quest_5398

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5398.Quest_5398_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5398_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5398_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5398(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1C00736F4B15C90141CF07BF40F89883();
	void OnFinished_90F451C44DF65C600CF8E1AD4E4E6063();
	void OnStop_90F451C44DF65C600CF8E1AD4E4E6063();
	void OnDlgClosed_09B81CE34B2938C4DAD0C8BAC861B0ED(int32 NPCId);
	void OnDlgSelectedOption_09B81CE34B2938C4DAD0C8BAC861B0ED(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5398_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5398_C")
	}
	static class UQuest_5398_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5398_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5398_C;

SDK_NAMESPACE_END
