#pragma once



// Package: Quest_28032

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28032.Quest_28032_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_28032_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28032_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_28032(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3FEA420A451C453754E545AF8154436E();
	void OnStop_3FEA420A451C453754E545AF8154436E();
	void OnDlgClosed_30731A4045C19992EC06C59A7CEE36B5(int32 NPCId);
	void OnDlgSelectedOption_30731A4045C19992EC06C59A7CEE36B5(int32 NPCId);
	void OnSuccess_35B85130498FDF177D99BB98605EDC5F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28032_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28032_C")
	}
	static class UQuest_28032_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28032_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28032_C;

SDK_NAMESPACE_END
