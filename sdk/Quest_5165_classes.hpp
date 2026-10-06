#pragma once



// Package: Quest_5165

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5165.Quest_5165_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5165_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5165_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5165(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6EB473264CD8FC632018A3BF17B25BD1();
	void OnStop_6EB473264CD8FC632018A3BF17B25BD1();
	void OnDlgClosed_961B11AE442F66A433280789A9FD1A47(int32 NPCId);
	void OnDlgSelectedOption_961B11AE442F66A433280789A9FD1A47(int32 NPCId);
	void OnSuccess_DF1B00C4400A5E0C63F6E7B1F09408C3(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5165_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5165_C")
	}
	static class UQuest_5165_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5165_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5165_C;

SDK_NAMESPACE_END
