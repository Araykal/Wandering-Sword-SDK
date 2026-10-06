#pragma once



// Package: Quest_5008

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5008.Quest_5008_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5008_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5008_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5008(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3C08796A4CB52751771374BA909934AE();
	void OnStop_3C08796A4CB52751771374BA909934AE();
	void OnDlgClosed_5556CBF64A310D880C44CE8E813766FE(int32 NPCId);
	void OnDlgSelectedOption_5556CBF64A310D880C44CE8E813766FE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5008_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5008_C")
	}
	static class UQuest_5008_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5008_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5008_C;

SDK_NAMESPACE_END
