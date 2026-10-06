#pragma once



// Package: Quest_30300

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30300.Quest_30300_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30300_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30300_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30300(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_33585FEC441C61ACEB3DF18B131620B1();
	void OnFinished_C4783B844DC2B937C10645A712CC562E();
	void OnStop_C4783B844DC2B937C10645A712CC562E();
	void OnDlgClosed_F6EB4286483B7B858BD9A582C8B8CD08(int32 NPCId);
	void OnDlgSelectedOption_F6EB4286483B7B858BD9A582C8B8CD08(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30300_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30300_C")
	}
	static class UQuest_30300_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30300_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30300_C;

SDK_NAMESPACE_END
