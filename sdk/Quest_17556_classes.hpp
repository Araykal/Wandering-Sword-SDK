#pragma once



// Package: Quest_17556

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17556.Quest_17556_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_17556_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17556_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_17556(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_5C558CEE42509575072102910B54E86C(int32 NPCId);
	void OnDlgSelectedOption_5C558CEE42509575072102910B54E86C(int32 NPCId);
	void OnFinished_D8B97304452EB96EFC1D1BBFBA076974();
	void OnStop_D8B97304452EB96EFC1D1BBFBA076974();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17556_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17556_C")
	}
	static class UQuest_17556_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17556_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17556_C;

SDK_NAMESPACE_END
