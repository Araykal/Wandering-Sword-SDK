#pragma once



// Package: Quest_12701

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12701.Quest_12701_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12701_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12701_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12701(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_33249BCD48BE4E8417B4FAAAC9EFD5B2();
	void OnFinished_47D9C84D47B9C2B86BCC578BCCAB5B1F();
	void OnStop_47D9C84D47B9C2B86BCC578BCCAB5B1F();
	void OnDlgClosed_E55424E6457502BF95E88FB2CCCF3C88(int32 NPCId);
	void OnDlgSelectedOption_E55424E6457502BF95E88FB2CCCF3C88(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12701_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12701_C")
	}
	static class UQuest_12701_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12701_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12701_C;

SDK_NAMESPACE_END
