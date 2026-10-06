#pragma once



// Package: Quest_5276

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5276.Quest_5276_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5276_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5276_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5276(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8F392A0445695DAB35727788DB4DEFDF();
	void OnStop_8F392A0445695DAB35727788DB4DEFDF();
	void OnDlgClosed_7B56607346D66DF0DAA4D8BB3FAF9821(int32 NPCId);
	void OnDlgSelectedOption_7B56607346D66DF0DAA4D8BB3FAF9821(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5276_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5276_C")
	}
	static class UQuest_5276_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5276_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5276_C;

SDK_NAMESPACE_END
