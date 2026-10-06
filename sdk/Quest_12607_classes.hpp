#pragma once



// Package: Quest_12607

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12607.Quest_12607_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12607_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12607_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12607(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F05208AD4850BCAF88A76B8CE42BB081();
	void OnStop_F05208AD4850BCAF88A76B8CE42BB081();
	void OnDlgClosed_6D7BF4AF43233DB2432842AF6AEEE82D(int32 NPCId);
	void OnDlgSelectedOption_6D7BF4AF43233DB2432842AF6AEEE82D(int32 NPCId);
	void OnSuccess_1F317B664C1025523B4DD08E61F27FC8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12607_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12607_C")
	}
	static class UQuest_12607_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12607_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12607_C;

SDK_NAMESPACE_END
