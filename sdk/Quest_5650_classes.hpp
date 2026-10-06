#pragma once



// Package: Quest_5650

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5650.Quest_5650_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5650_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5650_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5650(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8F5BE9574A0DFCD7B68E55AA7EBA0AD2(bool bWinOrLose);
	void OnSuccess_D7EF48364C9DC78C4EC797BE547CCEE9(bool bWinOrLose);
	void OnFinished_475C61FB4BD5258EECC5509FD2ADEA1E();
	void OnStop_475C61FB4BD5258EECC5509FD2ADEA1E();
	void OnDlgClosed_20B8DBB8465D691BF5E5CF893209A48B(int32 NPCId);
	void OnDlgSelectedOption_20B8DBB8465D691BF5E5CF893209A48B(int32 NPCId);
	void OnSuccess_B2F463CA419218ABF566149F59B85C9A(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5650_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5650_C")
	}
	static class UQuest_5650_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5650_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5650_C;

SDK_NAMESPACE_END
