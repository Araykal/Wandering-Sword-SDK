#pragma once



// Package: Quest_4100

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_4100.Quest_4100_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_4100_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_4100_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_4100(int32 EntryPoint);
	void HandleAcceptRequested(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_4100_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_4100_C")
	}
	static class UQuest_4100_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_4100_C>();
	}
};
DUMPER7_ASSERTS_UQuest_4100_C;

SDK_NAMESPACE_END
