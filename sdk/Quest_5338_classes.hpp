#pragma once



// Package: Quest_5338

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5338.Quest_5338_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5338_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5338_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5338(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E0E1A83F43BF134E2CD4919CD2BE850E();
	void OnStop_E0E1A83F43BF134E2CD4919CD2BE850E();
	void OnDlgClosed_AD2C138348FB606CEA66538EF32E8269(int32 NPCId);
	void OnDlgSelectedOption_AD2C138348FB606CEA66538EF32E8269(int32 NPCId);
	void OnSuccess_3C4AB1A847B5275B85F107B75BBB1D2C(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5338_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5338_C")
	}
	static class UQuest_5338_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5338_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5338_C;

SDK_NAMESPACE_END
