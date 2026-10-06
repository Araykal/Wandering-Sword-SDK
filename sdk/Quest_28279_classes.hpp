#pragma once



// Package: Quest_28279

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28279.Quest_28279_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28279_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28279_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28279(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_320C73E24498457231B715A529B93C4A(bool bWinOrLose);
	void OnSuccess_B6A9F4674251B7B2EDDE5B964394AC76(bool bWinOrLose);
	void OnSuccess_CABEA02F49B4C86E3E76BF95C7D02302(bool bWinOrLose);
	void OnSuccess_C95706E54EC5EA7774895EAEF2C4BB03(bool bWinOrLose);
	void OnFinished_5F2C4F3948AB9A6FB36ADD9D46DFD23B();
	void OnStop_5F2C4F3948AB9A6FB36ADD9D46DFD23B();
	void OnDlgClosed_95A0143E408FE9EAD65FA0875E9B3EC7(int32 NPCId);
	void OnDlgSelectedOption_95A0143E408FE9EAD65FA0875E9B3EC7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28279_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28279_C")
	}
	static class UQuest_28279_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28279_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28279_C;

SDK_NAMESPACE_END
