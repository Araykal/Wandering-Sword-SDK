#pragma once



// Package: Quest_28744

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28744.Quest_28744_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28744_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28744_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28744(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AD50A6B54B90B52B924EE8AD5BACDD70();
	void OnFinished_92724FBB4A57491ED17BD28812411C97();
	void OnStop_92724FBB4A57491ED17BD28812411C97();
	void OnDlgClosed_FAE55DA642461751BB2EAAB2B65985D7(int32 NPCId);
	void OnDlgSelectedOption_FAE55DA642461751BB2EAAB2B65985D7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28744_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28744_C")
	}
	static class UQuest_28744_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28744_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28744_C;

SDK_NAMESPACE_END
