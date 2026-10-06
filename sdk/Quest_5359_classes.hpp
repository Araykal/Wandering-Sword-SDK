#pragma once



// Package: Quest_5359

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5359.Quest_5359_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5359_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5359_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5359(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0975E2DA471E141EDE0A35B9FDFBDED1();
	void OnStop_0975E2DA471E141EDE0A35B9FDFBDED1();
	void OnDlgClosed_39EE6C8E401BE885F740F39305F02030(int32 NPCId);
	void OnDlgSelectedOption_39EE6C8E401BE885F740F39305F02030(int32 NPCId);
	void OnSuccess_BE2932EC48F89BF4A194AD9E80697D67(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5359_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5359_C")
	}
	static class UQuest_5359_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5359_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5359_C;

SDK_NAMESPACE_END
