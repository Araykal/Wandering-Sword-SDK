#pragma once



// Package: Quest_7033

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7033.Quest_7033_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7033_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7033_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7033(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_25F2102D466473DFCFA6C194093FC65D();
	void OnStop_25F2102D466473DFCFA6C194093FC65D();
	void OnDlgClosed_B651155C4FF41B95E30E1084FBA42FC7(int32 NPCId);
	void OnDlgSelectedOption_B651155C4FF41B95E30E1084FBA42FC7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7033_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7033_C")
	}
	static class UQuest_7033_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7033_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7033_C;

SDK_NAMESPACE_END
