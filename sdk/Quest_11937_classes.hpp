#pragma once



// Package: Quest_11937

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11937.Quest_11937_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11937_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11937_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11937(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E69F94F44C99B00661328CBD54D961EF(bool bWinOrLose);
	void OnSuccess_7A89BB314ECC3831EB6F04B25F7BCFB4(bool bWinOrLose);
	void OnSuccess_CB8B1A4246C4D54E197ACABE66790EC3(bool bWinOrLose);
	void OnFinished_DA02AAF54B149F0A37DEBC81E16928D8();
	void OnStop_DA02AAF54B149F0A37DEBC81E16928D8();
	void OnDlgClosed_3AA976874D85AF014B37E4BBDDCC808F(int32 NPCId);
	void OnDlgSelectedOption_3AA976874D85AF014B37E4BBDDCC808F(int32 NPCId);
	void OnSuccess_DD35F17D48E4A4A700421BBC93F22BB5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11937_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11937_C")
	}
	static class UQuest_11937_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11937_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11937_C;

SDK_NAMESPACE_END
