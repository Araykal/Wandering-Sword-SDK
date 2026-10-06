#pragma once



// Package: Quest_11872

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11872.Quest_11872_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11872_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11872_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11872(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8C28BBBA4F1E4744D47BC0B8412A091F();
	void OnStop_8C28BBBA4F1E4744D47BC0B8412A091F();
	void OnDlgClosed_8D661F064EF57CC0077B43A2095E49E1(int32 NPCId);
	void OnDlgSelectedOption_8D661F064EF57CC0077B43A2095E49E1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11872_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11872_C")
	}
	static class UQuest_11872_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11872_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11872_C;

SDK_NAMESPACE_END
