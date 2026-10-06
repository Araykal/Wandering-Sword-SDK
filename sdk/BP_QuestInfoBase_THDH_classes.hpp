#pragma once



// Package: BP_QuestInfoBase_THDH

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_QuestInfoBase_THDH.BP_QuestInfoBase_THDH_C
// 0x0008 (0x0248 - 0x0240)
class UBP_QuestInfoBase_THDH_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_QuestInfoBase_THDH_C;            // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_QuestInfoBase_THDH(int32 EntryPoint);
	void HandleProcessing(int32 NPCId);
	void OnDlgClosed_6CA69B70480D4EDB3A04C6BA853F3823(int32 NPCId);
	void OnDlgSelectedOption_6CA69B70480D4EDB3A04C6BA853F3823(int32 NPCId);
	bool IsProcessed(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_QuestInfoBase_THDH_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_QuestInfoBase_THDH_C")
	}
	static class UBP_QuestInfoBase_THDH_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestInfoBase_THDH_C>();
	}
};
DUMPER7_ASSERTS_UBP_QuestInfoBase_THDH_C;

SDK_NAMESPACE_END
