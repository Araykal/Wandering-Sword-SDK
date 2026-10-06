#pragma once



// Package: Quest_31133

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_31133.Quest_31133_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_31133_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_31133_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_31133(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_DC26312A459498B79DDB5DBAB064859A(int32 NPCId);
	void OnDlgSelectedOption_DC26312A459498B79DDB5DBAB064859A(int32 NPCId);
	void OnSuccess_006C5C2B47C151F3E10D2BBEF1D354D1(bool bWinOrLose);
	void OnFinished_60305418499B07FB385A1BBC598B38B8();
	void OnStop_60305418499B07FB385A1BBC598B38B8();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_31133_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_31133_C")
	}
	static class UQuest_31133_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_31133_C>();
	}
};
DUMPER7_ASSERTS_UQuest_31133_C;

SDK_NAMESPACE_END
