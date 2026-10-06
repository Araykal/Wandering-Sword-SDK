#pragma once



// Package: Quest_5367

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5367.Quest_5367_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5367_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5367_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5367(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_15F7BC8E4F162D0A32EED1817E512BF5();
	void OnFinished_56960D664EF86EA44B67D39C0BFBA40E();
	void OnStop_56960D664EF86EA44B67D39C0BFBA40E();
	void OnDlgClosed_7310EC064AE5368A5197B1A1A60B0EA9(int32 NPCId);
	void OnDlgSelectedOption_7310EC064AE5368A5197B1A1A60B0EA9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5367_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5367_C")
	}
	static class UQuest_5367_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5367_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5367_C;

SDK_NAMESPACE_END
