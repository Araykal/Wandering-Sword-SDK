#pragma once



// Package: Quest_9013

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_9013.Quest_9013_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_9013_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_9013_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_9013(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C62A352E460294ED128FB6943DEFB096(bool bWinOrLose);
	void OnSuccess_DE36B4D34964457C44F2D485FB991F58(bool bWinOrLose);
	void OnSuccess_6AC3120649D6328758FBB4BBCA35FB57(bool bWinOrLose);
	void OnFinished_48CB09F44AEC5E4CAA2832A3C9F8A6C3();
	void OnStop_48CB09F44AEC5E4CAA2832A3C9F8A6C3();
	void OnDlgClosed_E4791E944F9C332AA96E6B895ECE9082(int32 NPCId);
	void OnDlgSelectedOption_E4791E944F9C332AA96E6B895ECE9082(int32 NPCId);
	void OnSuccess_D819DBC74BE3B7B579AC6F852729F098(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_9013_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_9013_C")
	}
	static class UQuest_9013_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_9013_C>();
	}
};
DUMPER7_ASSERTS_UQuest_9013_C;

SDK_NAMESPACE_END
