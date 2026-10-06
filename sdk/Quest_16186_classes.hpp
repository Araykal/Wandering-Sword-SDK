#pragma once



// Package: Quest_16186

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16186.Quest_16186_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16186_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16186_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16186(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_33A9AF614616944CF050F0B322F098DF();
	void OnStop_33A9AF614616944CF050F0B322F098DF();
	void OnDlgClosed_BE60976B483486E10CCFB8B0C25BBCA5(int32 NPCId);
	void OnDlgSelectedOption_BE60976B483486E10CCFB8B0C25BBCA5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16186_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16186_C")
	}
	static class UQuest_16186_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16186_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16186_C;

SDK_NAMESPACE_END
