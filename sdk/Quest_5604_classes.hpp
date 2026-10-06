#pragma once



// Package: Quest_5604

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5604.Quest_5604_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5604_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5604_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5604(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_2E7AEE3E457A6405FEE6378B38D01F67();
	void OnStop_2E7AEE3E457A6405FEE6378B38D01F67();
	void OnDlgClosed_DB365515457117D48ECAE4819A55BB66(int32 NPCId);
	void OnDlgSelectedOption_DB365515457117D48ECAE4819A55BB66(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5604_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5604_C")
	}
	static class UQuest_5604_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5604_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5604_C;

SDK_NAMESPACE_END
