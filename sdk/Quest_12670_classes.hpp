#pragma once



// Package: Quest_12670

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12670.Quest_12670_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12670_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12670_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12670(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_775717EE431DE7FDAB17BB8BEEEBB954();
	void OnFinished_150FC102469A55914D752AA004F865C0();
	void OnStop_150FC102469A55914D752AA004F865C0();
	void OnDlgClosed_463BEE6C440ABE5D11B22AABBC4BBB1D(int32 NPCId);
	void OnDlgSelectedOption_463BEE6C440ABE5D11B22AABBC4BBB1D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12670_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12670_C")
	}
	static class UQuest_12670_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12670_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12670_C;

SDK_NAMESPACE_END
