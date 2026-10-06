#pragma once



// Package: Quest_5303

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5303.Quest_5303_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5303_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5303_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5303(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8BC0CA2345EE427F97E3759FD81866EF();
	void OnFinished_A56882844967A633D23087AA98FF20B1();
	void OnStop_A56882844967A633D23087AA98FF20B1();
	void OnDlgClosed_72CB48A94C554CD49B8FA8A5B6BEB664(int32 NPCId);
	void OnDlgSelectedOption_72CB48A94C554CD49B8FA8A5B6BEB664(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5303_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5303_C")
	}
	static class UQuest_5303_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5303_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5303_C;

SDK_NAMESPACE_END
