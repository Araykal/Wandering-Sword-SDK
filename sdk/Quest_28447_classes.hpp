#pragma once



// Package: Quest_28447

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28447.Quest_28447_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28447_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28447_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28447(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void End(const class FString& GuidanceType);
	void OnFinished_0D4D05074D1131895AE7D187C9CCCDC3();
	void OnStop_0D4D05074D1131895AE7D187C9CCCDC3();
	void OnDlgClosed_C5FFFF9B40AC7066331EE89A05BF4664(int32 NPCId);
	void OnDlgSelectedOption_C5FFFF9B40AC7066331EE89A05BF4664(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28447_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28447_C")
	}
	static class UQuest_28447_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28447_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28447_C;

SDK_NAMESPACE_END
