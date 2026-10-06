#pragma once



// Package: Quest_28740

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28740.Quest_28740_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28740_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28740_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28740(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EABA51C34025FE84153DC3ADBBC5864B(bool bWinOrLose);
	void OnFinished_57EE0EC6475B508E1006AFBE3B16546C();
	void OnStop_57EE0EC6475B508E1006AFBE3B16546C();
	void OnDlgClosed_8449E667493C8CFB6F92C7AB0EE70DA6(int32 NPCId);
	void OnDlgSelectedOption_8449E667493C8CFB6F92C7AB0EE70DA6(int32 NPCId);
	void OnSuccess_A912F1B449270D0AAF98D5AEBF62F8F5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28740_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28740_C")
	}
	static class UQuest_28740_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28740_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28740_C;

SDK_NAMESPACE_END
