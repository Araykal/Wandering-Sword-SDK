#pragma once



// Package: Quest_5343

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5343.Quest_5343_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5343_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5343_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5343(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A6C744C14D91D9F04BFB009253FA5A4A();
	void OnStop_A6C744C14D91D9F04BFB009253FA5A4A();
	void OnDlgClosed_B460314C455F1904AE32D0B12CC59D47(int32 NPCId);
	void OnDlgSelectedOption_B460314C455F1904AE32D0B12CC59D47(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5343_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5343_C")
	}
	static class UQuest_5343_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5343_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5343_C;

SDK_NAMESPACE_END
