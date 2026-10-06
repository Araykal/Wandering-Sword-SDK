#pragma once



// Package: Quest_5341

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5341.Quest_5341_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5341_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5341_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5341(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F994A9A24B3E4238B238EE9C6A0F11BB();
	void OnStop_F994A9A24B3E4238B238EE9C6A0F11BB();
	void OnDlgClosed_4B4D39A647629B179166FFA8C89E5A05(int32 NPCId);
	void OnDlgSelectedOption_4B4D39A647629B179166FFA8C89E5A05(int32 NPCId);
	void OnSuccess_0BD32EFB40A12D3EFCD5A1B2CE74A265(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5341_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5341_C")
	}
	static class UQuest_5341_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5341_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5341_C;

SDK_NAMESPACE_END
