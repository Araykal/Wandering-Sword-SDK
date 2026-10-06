#pragma once



// Package: Quest_16512

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16512.Quest_16512_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16512_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16512_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16512(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_15B679B5430916A7588C27897CAB372E();
	void OnStop_15B679B5430916A7588C27897CAB372E();
	void OnDlgClosed_A71C64FA4C25E13D7D4250BB98F4F116(int32 NPCId);
	void OnDlgSelectedOption_A71C64FA4C25E13D7D4250BB98F4F116(int32 NPCId);
	void OnSuccess_F7ABB5EB4FCF7755BEA7F9858F1A9077(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16512_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16512_C")
	}
	static class UQuest_16512_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16512_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16512_C;

SDK_NAMESPACE_END
