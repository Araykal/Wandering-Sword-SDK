#pragma once



// Package: Quest_30320

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30320.Quest_30320_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30320_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30320_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30320(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_07B98690461B01A26C52E1BB9969D4BC();
	void OnFinished_F291301A4440BBC02998CB974ED36B15();
	void OnStop_F291301A4440BBC02998CB974ED36B15();
	void OnDlgClosed_C5CB68E14C793AF5332E37860FDEACA4(int32 NPCId);
	void OnDlgSelectedOption_C5CB68E14C793AF5332E37860FDEACA4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30320_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30320_C")
	}
	static class UQuest_30320_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30320_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30320_C;

SDK_NAMESPACE_END
