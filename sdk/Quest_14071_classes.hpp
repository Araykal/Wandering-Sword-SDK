#pragma once



// Package: Quest_14071

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14071.Quest_14071_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14071_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14071_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14071(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A6FBD9A14C7DAD0D39B71A976DA4F530();
	void OnStop_A6FBD9A14C7DAD0D39B71A976DA4F530();
	void OnDlgClosed_0522331549C930769131FEAAA2AFA5C1(int32 NPCId);
	void OnDlgSelectedOption_0522331549C930769131FEAAA2AFA5C1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14071_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14071_C")
	}
	static class UQuest_14071_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14071_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14071_C;

SDK_NAMESPACE_END
