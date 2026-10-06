#pragma once



// Package: Quest_29022

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29022.Quest_29022_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29022_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29022_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29022(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_7325BD274C240CA6CD096A91A2D0B8E9(int32 NPCId);
	void OnDlgSelectedOption_7325BD274C240CA6CD096A91A2D0B8E9(int32 NPCId);
	void OnFinished_D10B601444E34126A58E5EA8BE755F91();
	void OnStop_D10B601444E34126A58E5EA8BE755F91();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29022_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29022_C")
	}
	static class UQuest_29022_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29022_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29022_C;

SDK_NAMESPACE_END
