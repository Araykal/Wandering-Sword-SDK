#pragma once



// Package: Quest_5238

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5238.Quest_5238_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5238_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5238_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5238(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EDBA2F2846C968EF08D3ACACF6478D60();
	void OnFinished_EE5343E2433F0A4ECCA7C4995F615A3E();
	void OnStop_EE5343E2433F0A4ECCA7C4995F615A3E();
	void OnDlgClosed_9DE8200447E52AA12ADA75A40E4610CF(int32 NPCId);
	void OnDlgSelectedOption_9DE8200447E52AA12ADA75A40E4610CF(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5238_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5238_C")
	}
	static class UQuest_5238_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5238_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5238_C;

SDK_NAMESPACE_END
