#pragma once



// Package: Quest_5167

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5167.Quest_5167_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5167_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5167_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5167(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EC7C7341406C3CB2F30A31BD96A856D7(bool bWinOrLose);
	void OnSuccess_EBDEA7344E86E08E9CCACCA3E6A7E7FA(bool bWinOrLose);
	void OnSuccess_8F64E1094A1ED835A25B0186EBDE8B8F(bool bWinOrLose);
	void OnFinished_1ABC279C49A6B659538A3C9395AF261D();
	void OnStop_1ABC279C49A6B659538A3C9395AF261D();
	void OnDlgClosed_AE2A5E074772F4779AE8888C2B33B91D(int32 NPCId);
	void OnDlgSelectedOption_AE2A5E074772F4779AE8888C2B33B91D(int32 NPCId);
	void OnSuccess_818C53944A6EAFC24874C99D38899C10(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5167_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5167_C")
	}
	static class UQuest_5167_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5167_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5167_C;

SDK_NAMESPACE_END
