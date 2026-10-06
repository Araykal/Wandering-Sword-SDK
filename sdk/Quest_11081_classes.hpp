#pragma once



// Package: Quest_11081

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11081.Quest_11081_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11081_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11081_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11081(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11081_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11081_C")
	}
	static class UQuest_11081_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11081_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11081_C;

SDK_NAMESPACE_END
