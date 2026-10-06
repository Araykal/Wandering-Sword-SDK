#pragma once



// Package: Quest_28006

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28006.Quest_28006_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28006_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28006_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28006(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_28175650447EE884D2142FB2C8CC4722();
	void OnStop_28175650447EE884D2142FB2C8CC4722();
	void OnDlgClosed_6236FC86442A8BD3840189849D7D3CDB(int32 NPCId);
	void OnDlgSelectedOption_6236FC86442A8BD3840189849D7D3CDB(int32 NPCId);
	void OnSuccess_BE1B2AED453D171D87686BB8C6B7FE07(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28006_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28006_C")
	}
	static class UQuest_28006_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28006_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28006_C;

SDK_NAMESPACE_END
