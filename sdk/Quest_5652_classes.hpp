#pragma once



// Package: Quest_5652

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5652.Quest_5652_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5652_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5652_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5652(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_12A9EA5C4CCA49AB6A2859883F850CD4(bool bWinOrLose);
	void OnSuccess_3092A2934CADAFB68B09B3B561A1C215(bool bWinOrLose);
	void OnSuccess_D3BF59CD41A4B05D471397B8C6504D12(bool bWinOrLose);
	void OnFinished_F3147D534EE20E4BDE306597842DB874();
	void OnStop_F3147D534EE20E4BDE306597842DB874();
	void OnDlgClosed_86756DD14977C325ACC2C19EF5087097(int32 NPCId);
	void OnDlgSelectedOption_86756DD14977C325ACC2C19EF5087097(int32 NPCId);
	void OnSuccess_919013B1450A79ED60B778BD124870F5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5652_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5652_C")
	}
	static class UQuest_5652_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5652_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5652_C;

SDK_NAMESPACE_END
