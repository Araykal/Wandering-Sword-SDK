#pragma once



// Package: Quest_11844

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11844.Quest_11844_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11844_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11844_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11844(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D686D82C4108C2CCEDE570A8508A9210();
	void OnStop_D686D82C4108C2CCEDE570A8508A9210();
	void OnDlgClosed_9BB88CCD4E2F99DCC4C08AA913E0833D(int32 NPCId);
	void OnDlgSelectedOption_9BB88CCD4E2F99DCC4C08AA913E0833D(int32 NPCId);
	void OnSuccess_51ECCDAF4A3FB0492D74CE9A0C731B18(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11844_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11844_C")
	}
	static class UQuest_11844_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11844_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11844_C;

SDK_NAMESPACE_END
