#pragma once



// Package: Quest_5420

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5420.Quest_5420_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5420_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5420_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5420(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B93844914CBCF6F7F10BF0B88EF5D74C(bool bWinOrLose);
	void OnSuccess_D184182541F6FDB4BD8990B65523D38D(bool bWinOrLose);
	void OnSuccess_85A53AEF463E33E63406069BDFEA8FE8(bool bWinOrLose);
	void OnFinished_5C3020B040AAC0A230E89784659B158E();
	void OnStop_5C3020B040AAC0A230E89784659B158E();
	void OnDlgClosed_E5319C50462F8BA2E9B5378ABF0F131A(int32 NPCId);
	void OnDlgSelectedOption_E5319C50462F8BA2E9B5378ABF0F131A(int32 NPCId);
	void OnSuccess_4820B80B480D19F6A23FD59902FC6BCE(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5420_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5420_C")
	}
	static class UQuest_5420_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5420_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5420_C;

SDK_NAMESPACE_END
