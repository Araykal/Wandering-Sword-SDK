#pragma once



// Package: Quest_12508

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12508.Quest_12508_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12508_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12508_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12508(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12508_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12508_C")
	}
	static class UQuest_12508_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12508_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12508_C;

SDK_NAMESPACE_END
