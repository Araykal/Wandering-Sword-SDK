#pragma once



// Package: Quest_12114

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12114.Quest_12114_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12114_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12114_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12114(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4295C4FB4BCE05CD6020F8AF599019D8();
	void OnFinished_59911DBE409BA7533A226E99492D5AB4();
	void OnStop_59911DBE409BA7533A226E99492D5AB4();
	void OnDlgClosed_5B0BCA244CE258C9A3DBE9A2AF2D26A3(int32 NPCId);
	void OnDlgSelectedOption_5B0BCA244CE258C9A3DBE9A2AF2D26A3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12114_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12114_C")
	}
	static class UQuest_12114_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12114_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12114_C;

SDK_NAMESPACE_END
