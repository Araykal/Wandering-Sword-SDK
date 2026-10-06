#pragma once



// Package: Quest_12626

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12626.Quest_12626_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12626_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12626_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12626(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_12D2C05144186058849E0F88932FDEB0();
	void OnFinished_AEA8D5B94977BF7D0DD18A8271777E85();
	void OnStop_AEA8D5B94977BF7D0DD18A8271777E85();
	void OnDlgClosed_F7E690D842257F86FC1DB2AFB6614FD0(int32 NPCId);
	void OnDlgSelectedOption_F7E690D842257F86FC1DB2AFB6614FD0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12626_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12626_C")
	}
	static class UQuest_12626_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12626_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12626_C;

SDK_NAMESPACE_END
