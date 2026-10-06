#pragma once



// Package: Quest_5706

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5706.Quest_5706_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5706_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5706_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5706(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3B040ED5482D57C6BF074C8885EBB50F();
	void OnStop_3B040ED5482D57C6BF074C8885EBB50F();
	void OnDlgClosed_47D8CB094DF2573D7914BFAFBA603635(int32 NPCId);
	void OnDlgSelectedOption_47D8CB094DF2573D7914BFAFBA603635(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5706_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5706_C")
	}
	static class UQuest_5706_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5706_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5706_C;

SDK_NAMESPACE_END
