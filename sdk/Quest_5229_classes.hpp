#pragma once



// Package: Quest_5229

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5229.Quest_5229_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5229_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5229_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5229(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D08215EA49BABD778FEB7DAD8D159682();
	void OnStop_D08215EA49BABD778FEB7DAD8D159682();
	void OnDlgClosed_A80973C64346A9A544509FB8B4339663(int32 NPCId);
	void OnDlgSelectedOption_A80973C64346A9A544509FB8B4339663(int32 NPCId);
	void OnSuccess_84DF96E4421557E1CE00F68AD872F24F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5229_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5229_C")
	}
	static class UQuest_5229_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5229_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5229_C;

SDK_NAMESPACE_END
