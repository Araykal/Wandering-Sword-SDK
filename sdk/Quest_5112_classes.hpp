#pragma once



// Package: Quest_5112

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5112.Quest_5112_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5112_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5112_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5112(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A0D0428749C553F1DF74D6AAC684E441();
	void OnFinished_87ECBF7844B3ABE2E7BA6B85BD83F69F();
	void OnStop_87ECBF7844B3ABE2E7BA6B85BD83F69F();
	void OnDlgClosed_235244CE4A2AC7328D39D3AD36CE4235(int32 NPCId);
	void OnDlgSelectedOption_235244CE4A2AC7328D39D3AD36CE4235(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5112_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5112_C")
	}
	static class UQuest_5112_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5112_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5112_C;

SDK_NAMESPACE_END
