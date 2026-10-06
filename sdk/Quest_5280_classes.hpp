#pragma once



// Package: Quest_5280

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5280.Quest_5280_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5280_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5280_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5280(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C983EDEC457B9B192816599C9EC01494();
	void OnStop_C983EDEC457B9B192816599C9EC01494();
	void OnDlgClosed_9544B904485106B332BB0EB82C73E4F5(int32 NPCId);
	void OnDlgSelectedOption_9544B904485106B332BB0EB82C73E4F5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5280_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5280_C")
	}
	static class UQuest_5280_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5280_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5280_C;

SDK_NAMESPACE_END
