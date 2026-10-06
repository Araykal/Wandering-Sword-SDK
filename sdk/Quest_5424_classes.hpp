#pragma once



// Package: Quest_5424

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5424.Quest_5424_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5424_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5424_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5424(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F58936484CEC5018E0175C82AB6FED03();
	void OnStop_F58936484CEC5018E0175C82AB6FED03();
	void OnDlgClosed_CE8ABD254B6B51B24BEF5B9BA883892A(int32 NPCId);
	void OnDlgSelectedOption_CE8ABD254B6B51B24BEF5B9BA883892A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5424_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5424_C")
	}
	static class UQuest_5424_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5424_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5424_C;

SDK_NAMESPACE_END
