#pragma once



// Package: Quest_29723

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29723.Quest_29723_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29723_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29723_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29723(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_BA728C154CCF916F2207F8AA29CB4FC8(bool bWinOrLose);
	void OnFinished_2A92D8BC45D5D6E310549A9C60225119();
	void OnStop_2A92D8BC45D5D6E310549A9C60225119();
	void OnDlgClosed_14D5C82E4364CA794B999DA08485DB15(int32 NPCId);
	void OnDlgSelectedOption_14D5C82E4364CA794B999DA08485DB15(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29723_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29723_C")
	}
	static class UQuest_29723_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29723_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29723_C;

SDK_NAMESPACE_END
