#pragma once



// Package: Quest_5172

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5172.Quest_5172_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5172_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5172_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5172(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CF07CA9B43C7326C7D5B69A1FD6354D2();
	void OnStop_CF07CA9B43C7326C7D5B69A1FD6354D2();
	void OnDlgClosed_0CB6E8824CA8626C372597A156BFC6CD(int32 NPCId);
	void OnDlgSelectedOption_0CB6E8824CA8626C372597A156BFC6CD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5172_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5172_C")
	}
	static class UQuest_5172_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5172_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5172_C;

SDK_NAMESPACE_END
