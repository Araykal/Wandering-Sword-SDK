#pragma once



// Package: Quest_7023

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7023.Quest_7023_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7023_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7023_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7023(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_472CBB2E436F94ECAFFA0DAE93CF29CF();
	void OnStop_472CBB2E436F94ECAFFA0DAE93CF29CF();
	void OnDlgClosed_E449AC524F308CAEEE2A999A72BF5586(int32 NPCId);
	void OnDlgSelectedOption_E449AC524F308CAEEE2A999A72BF5586(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7023_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7023_C")
	}
	static class UQuest_7023_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7023_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7023_C;

SDK_NAMESPACE_END
