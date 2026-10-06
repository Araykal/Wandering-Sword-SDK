#pragma once



// Package: Quest_11102

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11102.Quest_11102_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11102_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11102_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11102(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3D47024041468C1BD3D2929B91437FA3();
	void OnStop_3D47024041468C1BD3D2929B91437FA3();
	void OnDlgClosed_2ABCD015476278EE9676A7AE20701140(int32 NPCId);
	void OnDlgSelectedOption_2ABCD015476278EE9676A7AE20701140(int32 NPCId);
	void OnSuccess_8D4547D9474D90684B0C8DA6084ECD4F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11102_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11102_C")
	}
	static class UQuest_11102_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11102_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11102_C;

SDK_NAMESPACE_END
