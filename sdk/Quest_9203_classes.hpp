#pragma once



// Package: Quest_9203

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_9203.Quest_9203_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_9203_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_9203_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_9203(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_950CBB4D4FA9F10DB98D83832716E883();
	void OnStop_950CBB4D4FA9F10DB98D83832716E883();
	void OnDlgClosed_0F7E0D8C47AD3F4359F00DAF51B3AEC6(int32 NPCId);
	void OnDlgSelectedOption_0F7E0D8C47AD3F4359F00DAF51B3AEC6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_9203_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_9203_C")
	}
	static class UQuest_9203_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_9203_C>();
	}
};
DUMPER7_ASSERTS_UQuest_9203_C;

SDK_NAMESPACE_END
