#pragma once



// Package: Quest_16081

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16081.Quest_16081_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16081_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16081_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16081(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_5BAEBE304CC35667019000B692D4A9BD(bool bWinOrLose);
	void OnSuccess_E383149F483CC143F7170DB1C165B068(bool bWinOrLose);
	void OnSuccess_DD59AC2B4AFB86DD683BED8889700803(bool bWinOrLose);
	void OnFinished_33F01D534211A8C2EEFE739A53E14D51();
	void OnStop_33F01D534211A8C2EEFE739A53E14D51();
	void OnDlgClosed_EE4000A945B268E7109D2F89C2C96373(int32 NPCId);
	void OnDlgSelectedOption_EE4000A945B268E7109D2F89C2C96373(int32 NPCId);
	void OnSuccess_561C05C041EA2CAB025DED8E1B0804ED(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16081_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16081_C")
	}
	static class UQuest_16081_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16081_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16081_C;

SDK_NAMESPACE_END
