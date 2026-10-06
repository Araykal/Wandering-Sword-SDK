#pragma once



// Package: Quest_28703

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28703.Quest_28703_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28703_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28703_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28703(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_96B103064FFA44632C6AFEAF0C2FB271();
	void OnFinished_8F736F2F4E66A74B56A1C993D8C877AC();
	void OnStop_8F736F2F4E66A74B56A1C993D8C877AC();
	void OnDlgClosed_B07D0BF5450A5CC2E33A4CB1E660A9F8(int32 NPCId);
	void OnDlgSelectedOption_B07D0BF5450A5CC2E33A4CB1E660A9F8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28703_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28703_C")
	}
	static class UQuest_28703_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28703_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28703_C;

SDK_NAMESPACE_END
