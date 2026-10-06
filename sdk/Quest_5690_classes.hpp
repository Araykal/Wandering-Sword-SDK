#pragma once



// Package: Quest_5690

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5690.Quest_5690_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5690_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5690_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5690(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9D9334554E3B15B67D78A18D96F959DC();
	void OnFinished_619869704753FC18D13E1BB38BBF1E38();
	void OnStop_619869704753FC18D13E1BB38BBF1E38();
	void OnDlgClosed_C4252652467A83C2D8A6D49562BBAFF6(int32 NPCId);
	void OnDlgSelectedOption_C4252652467A83C2D8A6D49562BBAFF6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5690_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5690_C")
	}
	static class UQuest_5690_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5690_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5690_C;

SDK_NAMESPACE_END
