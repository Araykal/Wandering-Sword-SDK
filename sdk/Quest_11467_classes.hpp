#pragma once



// Package: Quest_11467

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11467.Quest_11467_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11467_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11467_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11467(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void HandleAcceptRequested(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11467_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11467_C")
	}
	static class UQuest_11467_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11467_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11467_C;

SDK_NAMESPACE_END
