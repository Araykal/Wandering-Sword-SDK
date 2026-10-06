#pragma once



// Package: Quest_12299

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12299.Quest_12299_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12299_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12299_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12299(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0A9AA73146CDC29927DA2E9FEDC5EE19();
	void OnStop_0A9AA73146CDC29927DA2E9FEDC5EE19();
	void OnDlgClosed_B4A9FC994524D6360FC9D5AC83A0F970(int32 NPCId);
	void OnDlgSelectedOption_B4A9FC994524D6360FC9D5AC83A0F970(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12299_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12299_C")
	}
	static class UQuest_12299_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12299_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12299_C;

SDK_NAMESPACE_END
