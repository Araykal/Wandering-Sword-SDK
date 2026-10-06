#pragma once



// Package: Quest_28911

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28911.Quest_28911_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28911_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28911_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28911(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9();
	void OnStop_6B3AE4D84C3BC80EB7FAB0A04C7DA7E9();
	void OnDlgClosed_E1FCBB4F4356F11B3E66E7A7EB80CA99(int32 NPCId);
	void OnDlgSelectedOption_E1FCBB4F4356F11B3E66E7A7EB80CA99(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28911_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28911_C")
	}
	static class UQuest_28911_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28911_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28911_C;

SDK_NAMESPACE_END
