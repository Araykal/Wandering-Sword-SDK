#pragma once



// Package: Quest_5829

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5829.Quest_5829_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5829_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5829_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5829(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AEB6617E4A184D13FA2B5A82632281BD();
	void OnStop_AEB6617E4A184D13FA2B5A82632281BD();
	void OnDlgClosed_D4CCBFC946959ACFB66B4F8232387E9D(int32 NPCId);
	void OnDlgSelectedOption_D4CCBFC946959ACFB66B4F8232387E9D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5829_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5829_C")
	}
	static class UQuest_5829_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5829_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5829_C;

SDK_NAMESPACE_END
