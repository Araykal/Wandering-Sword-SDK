#pragma once



// Package: Quest_28405

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28405.Quest_28405_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28405_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28405_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28405(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4AA92A7846E864D921CD1C9FA3D713CC(bool bWinOrLose);
	void OnFinished_5F1ADF494FA4BC930728F192F76E53E3();
	void OnStop_5F1ADF494FA4BC930728F192F76E53E3();
	void OnDlgClosed_E4ABCEF64F9ADFF785E3159B19A14892(int32 NPCId);
	void OnDlgSelectedOption_E4ABCEF64F9ADFF785E3159B19A14892(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28405_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28405_C")
	}
	static class UQuest_28405_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28405_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28405_C;

SDK_NAMESPACE_END
