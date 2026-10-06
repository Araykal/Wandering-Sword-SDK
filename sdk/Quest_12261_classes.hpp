#pragma once



// Package: Quest_12261

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12261.Quest_12261_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12261_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12261_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12261(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_89E8D29F462E704535111A9053BEB162();
	void OnStop_89E8D29F462E704535111A9053BEB162();
	void OnDlgClosed_F0668DD94CD0907E62308F99EDBDB64F(int32 NPCId);
	void OnDlgSelectedOption_F0668DD94CD0907E62308F99EDBDB64F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12261_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12261_C")
	}
	static class UQuest_12261_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12261_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12261_C;

SDK_NAMESPACE_END
