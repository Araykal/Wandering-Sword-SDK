#pragma once



// Package: Quest_29812

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29812.Quest_29812_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29812_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29812_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29812(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B36AEBC64EC923D39705BFACB573F36E(bool bWinOrLose);
	void OnFinished_28FD06D0499E40F8A4FC908E5A5864D0();
	void OnStop_28FD06D0499E40F8A4FC908E5A5864D0();
	void OnDlgClosed_19C2B7054744D795BEF42BADA1DC0C7D(int32 NPCId);
	void OnDlgSelectedOption_19C2B7054744D795BEF42BADA1DC0C7D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29812_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29812_C")
	}
	static class UQuest_29812_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29812_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29812_C;

SDK_NAMESPACE_END
