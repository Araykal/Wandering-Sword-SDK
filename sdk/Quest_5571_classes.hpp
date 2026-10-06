#pragma once



// Package: Quest_5571

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5571.Quest_5571_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5571_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5571_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5571(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D700EC804AF23C649DC4ECB934297C4C();
	void OnStop_D700EC804AF23C649DC4ECB934297C4C();
	void OnDlgClosed_0343A3D046D0D2265C424A8551235608(int32 NPCId);
	void OnDlgSelectedOption_0343A3D046D0D2265C424A8551235608(int32 NPCId);
	void OnSuccess_E30191EE4308B5A4AD62FF840F64B855(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5571_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5571_C")
	}
	static class UQuest_5571_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5571_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5571_C;

SDK_NAMESPACE_END
