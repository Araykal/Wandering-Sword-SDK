#pragma once



// Package: Quest_30720

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30720.Quest_30720_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30720_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30720_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30720(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_45E33EC040CECA350F6FCB95E575A566();
	void OnFinished_B1E31C4C4C395EE56E0DB5A3BDF047BB();
	void OnStop_B1E31C4C4C395EE56E0DB5A3BDF047BB();
	void OnDlgClosed_FE79595F4BB3870471280F97E589B73D(int32 NPCId);
	void OnDlgSelectedOption_FE79595F4BB3870471280F97E589B73D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30720_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30720_C")
	}
	static class UQuest_30720_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30720_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30720_C;

SDK_NAMESPACE_END
