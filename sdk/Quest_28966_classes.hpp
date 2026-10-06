#pragma once



// Package: Quest_28966

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28966.Quest_28966_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28966_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28966_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28966(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_01FAA29549BBF536376E7BB4238905E4();
	void OnStop_01FAA29549BBF536376E7BB4238905E4();
	void OnDlgClosed_44997E9547BCA12D60BE278E487932AB(int32 NPCId);
	void OnDlgSelectedOption_44997E9547BCA12D60BE278E487932AB(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28966_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28966_C")
	}
	static class UQuest_28966_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28966_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28966_C;

SDK_NAMESPACE_END
