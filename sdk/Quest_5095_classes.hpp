#pragma once



// Package: Quest_5095

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5095.Quest_5095_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5095_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5095_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5095(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7A53A3244862589F0BAE0AA3B59F2564(bool bWinOrLose);
	void OnSuccess_7B4225EF422A4ACBD58D08BF8BF6796A(bool bWinOrLose);
	void OnSuccess_41DEA5E9451BBD39FA8845AA2A73F8B4(bool bWinOrLose);
	void OnFinished_82B18DB8415A83AE7659039F1CE9D63D();
	void OnStop_82B18DB8415A83AE7659039F1CE9D63D();
	void OnDlgClosed_B00917864D160F144BC54DA10E14DCD1(int32 NPCId);
	void OnDlgSelectedOption_B00917864D160F144BC54DA10E14DCD1(int32 NPCId);
	void OnSuccess_232DE5734BD2D4C1058ACCA4535740D3(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5095_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5095_C")
	}
	static class UQuest_5095_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5095_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5095_C;

SDK_NAMESPACE_END
