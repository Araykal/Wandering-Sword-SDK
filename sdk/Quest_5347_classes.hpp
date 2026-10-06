#pragma once



// Package: Quest_5347

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5347.Quest_5347_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5347_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5347_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5347(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_6F544A5145CEDA59E3024EB8A757D66B(int32 NPCId);
	void OnDlgSelectedOption_6F544A5145CEDA59E3024EB8A757D66B(int32 NPCId);
	void OnFinished_5C4F893747CF6CE94E6DACB5DFC2B34E();
	void OnStop_5C4F893747CF6CE94E6DACB5DFC2B34E();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5347_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5347_C")
	}
	static class UQuest_5347_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5347_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5347_C;

SDK_NAMESPACE_END
