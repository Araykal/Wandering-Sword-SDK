#pragma once



// Package: Quest_7032

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7032.Quest_7032_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7032_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7032_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7032(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0AAE190C40AB21A86F1F9995401A6F95(bool bWinOrLose);
	void OnFinished_D960C179483EDFC43F4D81A92BD37C7A();
	void OnStop_D960C179483EDFC43F4D81A92BD37C7A();
	void OnDlgClosed_E5A65EE44D2A0D6AE780B8BF28C3E018(int32 NPCId);
	void OnDlgSelectedOption_E5A65EE44D2A0D6AE780B8BF28C3E018(int32 NPCId);
	void OnSuccess_F07D901540EDE460EEB8EA937EC04421(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7032_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7032_C")
	}
	static class UQuest_7032_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7032_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7032_C;

SDK_NAMESPACE_END
