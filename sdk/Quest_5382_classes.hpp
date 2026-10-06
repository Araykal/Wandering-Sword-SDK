#pragma once



// Package: Quest_5382

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5382.Quest_5382_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5382_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5382_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5382(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_03FF942343B54B93DBA759B1DB75EF56();
	void OnStop_03FF942343B54B93DBA759B1DB75EF56();
	void OnDlgClosed_C392090A4B5BFA1E2F76CB8501DEE00D(int32 NPCId);
	void OnDlgSelectedOption_C392090A4B5BFA1E2F76CB8501DEE00D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5382_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5382_C")
	}
	static class UQuest_5382_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5382_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5382_C;

SDK_NAMESPACE_END
