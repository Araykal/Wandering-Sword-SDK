#pragma once



// Package: Quest_5087

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5087.Quest_5087_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5087_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5087_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5087(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FFB751F64B53024631A973A56841A852();
	void OnStop_FFB751F64B53024631A973A56841A852();
	void OnDlgClosed_B4484E80410B416F43F09CB91E185485(int32 NPCId);
	void OnDlgSelectedOption_B4484E80410B416F43F09CB91E185485(int32 NPCId);
	void OnSuccess_BAD0117649471F00AC4C0CB07816917F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5087_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5087_C")
	}
	static class UQuest_5087_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5087_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5087_C;

SDK_NAMESPACE_END
