#pragma once



// Package: Quest_5745

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5745.Quest_5745_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5745_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5745_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5745(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9A0C2ADC4A7D51D4E11B0DB2B614D104(bool bWinOrLose);
	void OnFinished_C4805974429867F9B1FCF8B2DF0C1639();
	void OnStop_C4805974429867F9B1FCF8B2DF0C1639();
	void OnDlgClosed_A859960448BAD3787F8A5DB7F163BF78(int32 NPCId);
	void OnDlgSelectedOption_A859960448BAD3787F8A5DB7F163BF78(int32 NPCId);
	void OnSuccess_E0C30EA341852912D572B98E5B86E7B3(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5745_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5745_C")
	}
	static class UQuest_5745_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5745_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5745_C;

SDK_NAMESPACE_END
