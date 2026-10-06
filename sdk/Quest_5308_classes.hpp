#pragma once



// Package: Quest_5308

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5308.Quest_5308_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5308_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5308_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5308(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AE87911F4C06A8E33AB23FAD766A0A4B();
	void OnFinished_9858B4774C363495409A139DB1A19A30();
	void OnStop_9858B4774C363495409A139DB1A19A30();
	void OnDlgClosed_FB192BA840200E9B1C1D9B8013BF1001(int32 NPCId);
	void OnDlgSelectedOption_FB192BA840200E9B1C1D9B8013BF1001(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5308_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5308_C")
	}
	static class UQuest_5308_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5308_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5308_C;

SDK_NAMESPACE_END
