#pragma once



// Package: Quest_7043

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7043.Quest_7043_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7043_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7043_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7043(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4899168D4C0281AF188A94B031FD64F2();
	void OnStop_4899168D4C0281AF188A94B031FD64F2();
	void OnDlgClosed_2FD594A24314707E73C19A8F6067229E(int32 NPCId);
	void OnDlgSelectedOption_2FD594A24314707E73C19A8F6067229E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7043_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7043_C")
	}
	static class UQuest_7043_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7043_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7043_C;

SDK_NAMESPACE_END
