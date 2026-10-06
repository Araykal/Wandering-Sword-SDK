#pragma once



// Package: Quest_5821

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5821.Quest_5821_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5821_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5821_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5821(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A2084E0848FC65E8B54C1A945F02AEE5();
	void OnStop_A2084E0848FC65E8B54C1A945F02AEE5();
	void OnDlgClosed_9D7E31364C3C8DBF8DF1C590B5D61BE7(int32 NPCId);
	void OnDlgSelectedOption_9D7E31364C3C8DBF8DF1C590B5D61BE7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5821_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5821_C")
	}
	static class UQuest_5821_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5821_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5821_C;

SDK_NAMESPACE_END
