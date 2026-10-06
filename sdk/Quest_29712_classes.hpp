#pragma once



// Package: Quest_29712

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29712.Quest_29712_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29712_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29712_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29712(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_ECFD124342CE9FFDAB3293AFDAAF4E40();
	void OnFinished_71B1600643A8514B22315098D761B785();
	void OnStop_71B1600643A8514B22315098D761B785();
	void OnDlgClosed_5F367BFC4105EBD965176E92F1691F6D(int32 NPCId);
	void OnDlgSelectedOption_5F367BFC4105EBD965176E92F1691F6D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29712_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29712_C")
	}
	static class UQuest_29712_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29712_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29712_C;

SDK_NAMESPACE_END
