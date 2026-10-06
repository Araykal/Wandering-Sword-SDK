#pragma once



// Package: Quest_30001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30001.Quest_30001_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30001_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30001_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30001(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_187132534D149C7A853C9481CD228035(bool bWinOrLose);
	void OnFinished_D5C045E4409E83B74B11BF84BB826D26();
	void OnStop_D5C045E4409E83B74B11BF84BB826D26();
	void OnDlgClosed_EEDF41D748841F953FFC97B2CF912A6E(int32 NPCId);
	void OnDlgSelectedOption_EEDF41D748841F953FFC97B2CF912A6E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30001_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30001_C")
	}
	static class UQuest_30001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30001_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30001_C;

SDK_NAMESPACE_END
