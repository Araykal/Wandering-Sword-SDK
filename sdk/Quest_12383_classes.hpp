#pragma once



// Package: Quest_12383

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12383.Quest_12383_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12383_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12383_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12383(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_9B73315F4D3AC78815F4DBB2FFF9B069();
	void OnStop_9B73315F4D3AC78815F4DBB2FFF9B069();
	void OnDlgClosed_6411FA9C4BB7F1889CB8A58C1765C220(int32 NPCId);
	void OnDlgSelectedOption_6411FA9C4BB7F1889CB8A58C1765C220(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12383_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12383_C")
	}
	static class UQuest_12383_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12383_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12383_C;

SDK_NAMESPACE_END
