#pragma once



// Package: Quest_7031

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7031.Quest_7031_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7031_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7031_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7031(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C45C625049A37BD430258690675C9F19();
	void OnStop_C45C625049A37BD430258690675C9F19();
	void OnDlgClosed_EB4A5D1D4EE1C3530D136E838B31EB98(int32 NPCId);
	void OnDlgSelectedOption_EB4A5D1D4EE1C3530D136E838B31EB98(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7031_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7031_C")
	}
	static class UQuest_7031_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7031_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7031_C;

SDK_NAMESPACE_END
