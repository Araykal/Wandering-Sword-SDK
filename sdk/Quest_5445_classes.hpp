#pragma once



// Package: Quest_5445

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5445.Quest_5445_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5445_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5445_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5445(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7706BDDB41DCF48D39216EB1DD6EC1F9();
	void OnStop_7706BDDB41DCF48D39216EB1DD6EC1F9();
	void OnDlgClosed_05AE21F448F0C8C3C844C8882E4D9A74(int32 NPCId);
	void OnDlgSelectedOption_05AE21F448F0C8C3C844C8882E4D9A74(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5445_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5445_C")
	}
	static class UQuest_5445_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5445_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5445_C;

SDK_NAMESPACE_END
