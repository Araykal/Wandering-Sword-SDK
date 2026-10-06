#pragma once



// Package: Quest_12276

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12276.Quest_12276_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12276_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12276_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EQuestStep                                    NewVar_0;                                          // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12276(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12276_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12276_C")
	}
	static class UQuest_12276_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12276_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12276_C;

SDK_NAMESPACE_END
