#pragma once



// Package: Quest_5022

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5022.Quest_5022_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5022_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5022_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5022(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8FD19C674AD6A38939CD06BA570CBD2B();
	void OnStop_8FD19C674AD6A38939CD06BA570CBD2B();
	void OnDlgClosed_4997B88D4281332FD70A7F82E647E799(int32 NPCId);
	void OnDlgSelectedOption_4997B88D4281332FD70A7F82E647E799(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5022_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5022_C")
	}
	static class UQuest_5022_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5022_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5022_C;

SDK_NAMESPACE_END
