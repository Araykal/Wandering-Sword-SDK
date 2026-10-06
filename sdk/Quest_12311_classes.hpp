#pragma once



// Package: Quest_12311

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12311.Quest_12311_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12311_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12311_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12311(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DC869FCA4DF31CAFCD1C808AA00821C4();
	void OnStop_DC869FCA4DF31CAFCD1C808AA00821C4();
	void OnDlgClosed_1163215E4935357F31DA45911BA03FC7(int32 NPCId);
	void OnDlgSelectedOption_1163215E4935357F31DA45911BA03FC7(int32 NPCId);
	void OnSuccess_676D9482437A052BCFDDB9A35B8DB664(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12311_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12311_C")
	}
	static class UQuest_12311_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12311_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12311_C;

SDK_NAMESPACE_END
