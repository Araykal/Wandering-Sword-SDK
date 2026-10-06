#pragma once



// Package: Quest_28725

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28725.Quest_28725_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28725_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28725_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28725(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_79513D4445C7B0BB0C6C7D8650E1631B();
	void OnStop_79513D4445C7B0BB0C6C7D8650E1631B();
	void OnDlgClosed_0AC99CDC40637B7A0C019687ACB293FC(int32 NPCId);
	void OnDlgSelectedOption_0AC99CDC40637B7A0C019687ACB293FC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28725_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28725_C")
	}
	static class UQuest_28725_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28725_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28725_C;

SDK_NAMESPACE_END
