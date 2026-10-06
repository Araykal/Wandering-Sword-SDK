#pragma once



// Package: Quest_5648

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5648.Quest_5648_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5648_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5648_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5648(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_187063994971873B229DAB900DD1B578();
	void OnStop_187063994971873B229DAB900DD1B578();
	void OnDlgClosed_2E5694C74F635DFD49B67DB076179C20(int32 NPCId);
	void OnDlgSelectedOption_2E5694C74F635DFD49B67DB076179C20(int32 NPCId);
	void OnSuccess_F54447DB4483CC8B9192AE97049E5724(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5648_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5648_C")
	}
	static class UQuest_5648_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5648_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5648_C;

SDK_NAMESPACE_END
