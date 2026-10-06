#pragma once



// Package: Quest_12315

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12315.Quest_12315_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12315_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12315_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12315(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_16087D8E4AA06B5221844CBDA4BD86EC();
	void OnStop_16087D8E4AA06B5221844CBDA4BD86EC();
	void OnDlgClosed_09485344486E6630A3973599A6D01065(int32 NPCId);
	void OnDlgSelectedOption_09485344486E6630A3973599A6D01065(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12315_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12315_C")
	}
	static class UQuest_12315_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12315_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12315_C;

SDK_NAMESPACE_END
