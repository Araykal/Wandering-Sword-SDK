#pragma once



// Package: Quest_17562

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17562.Quest_17562_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_17562_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17562_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_17562(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_157EA95745C3E92530233BB59E5B1F37();
	void OnStop_157EA95745C3E92530233BB59E5B1F37();
	void OnDlgClosed_D46E40994DD7F96A57E28481ECD1A69A(int32 NPCId);
	void OnDlgSelectedOption_D46E40994DD7F96A57E28481ECD1A69A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17562_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17562_C")
	}
	static class UQuest_17562_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17562_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17562_C;

SDK_NAMESPACE_END
