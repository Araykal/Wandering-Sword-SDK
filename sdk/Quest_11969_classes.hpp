#pragma once



// Package: Quest_11969

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11969.Quest_11969_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11969_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11969_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11969(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B3F27B964F2ED83CCAE3A39CBB1E56BA();
	void OnFinished_88903E394AFC2EA45A370FB8F7A50F09();
	void OnStop_88903E394AFC2EA45A370FB8F7A50F09();
	void OnDlgClosed_A35171F74055C11F6A4E3BADA7C51A63(int32 NPCId);
	void OnDlgSelectedOption_A35171F74055C11F6A4E3BADA7C51A63(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11969_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11969_C")
	}
	static class UQuest_11969_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11969_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11969_C;

SDK_NAMESPACE_END
