#pragma once



// Package: Quest_5735

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5735.Quest_5735_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5735_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5735_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5735(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3B43F705443686B408FC7487E767EB03();
	void OnStop_3B43F705443686B408FC7487E767EB03();
	void OnDlgClosed_7CDECAC14E55D3234AFCDBABA597BBC3(int32 NPCId);
	void OnDlgSelectedOption_7CDECAC14E55D3234AFCDBABA597BBC3(int32 NPCId);
	void OnSuccess_744151F44196270CACCC84B20A23A936(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5735_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5735_C")
	}
	static class UQuest_5735_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5735_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5735_C;

SDK_NAMESPACE_END
