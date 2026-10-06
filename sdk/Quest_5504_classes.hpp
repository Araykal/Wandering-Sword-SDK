#pragma once



// Package: Quest_5504

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5504.Quest_5504_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5504_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5504_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5504(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_BF63341A4CE74CD3523DD9931391F1EF();
	void OnFinished_BBA2F38749E59D162CF3CE810D1D4D92();
	void OnStop_BBA2F38749E59D162CF3CE810D1D4D92();
	void OnDlgClosed_445BC30A46BBDE2F04D4B993B64F2938(int32 NPCId);
	void OnDlgSelectedOption_445BC30A46BBDE2F04D4B993B64F2938(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5504_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5504_C")
	}
	static class UQuest_5504_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5504_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5504_C;

SDK_NAMESPACE_END
