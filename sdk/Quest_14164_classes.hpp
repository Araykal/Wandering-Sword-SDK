#pragma once



// Package: Quest_14164

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14164.Quest_14164_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14164_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14164_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14164(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_42CC4855498C9074FA79B1B4746689C7();
	void OnStop_42CC4855498C9074FA79B1B4746689C7();
	void OnDlgClosed_554E122743D919C7C6F3FFA76413AF03(int32 NPCId);
	void OnDlgSelectedOption_554E122743D919C7C6F3FFA76413AF03(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14164_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14164_C")
	}
	static class UQuest_14164_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14164_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14164_C;

SDK_NAMESPACE_END
