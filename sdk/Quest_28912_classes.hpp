#pragma once



// Package: Quest_28912

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28912.Quest_28912_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28912_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28912_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28912(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_110803EC4A195876265840977DD7134A();
	void OnFinished_170E213E41E22768AA6FA0AF650762CB();
	void OnStop_170E213E41E22768AA6FA0AF650762CB();
	void OnDlgClosed_E443322D43426392CA22A7BEB3EED343(int32 NPCId);
	void OnDlgSelectedOption_E443322D43426392CA22A7BEB3EED343(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28912_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28912_C")
	}
	static class UQuest_28912_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28912_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28912_C;

SDK_NAMESPACE_END
