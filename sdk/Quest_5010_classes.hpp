#pragma once



// Package: Quest_5010

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5010.Quest_5010_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5010_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5010_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5010(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_EFCE6DD144CEB3ED9F7E1CAB1F0CB304();
	void OnStop_EFCE6DD144CEB3ED9F7E1CAB1F0CB304();
	void OnDlgClosed_709C3DD54983ECE68D694EA19C8D4E9C(int32 NPCId);
	void OnDlgSelectedOption_709C3DD54983ECE68D694EA19C8D4E9C(int32 NPCId);
	void OnSuccess_5C177D2849D9BDCFDC28E9A7F94A1B8F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5010_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5010_C")
	}
	static class UQuest_5010_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5010_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5010_C;

SDK_NAMESPACE_END
