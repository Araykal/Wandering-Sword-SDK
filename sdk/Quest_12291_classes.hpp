#pragma once



// Package: Quest_12291

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12291.Quest_12291_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12291_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12291_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12291(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_21ECA32B417CFE90A3851D978C6EBE09();
	void OnFinished_8F923A6D467A96EC5FB0C99060E98CC2();
	void OnStop_8F923A6D467A96EC5FB0C99060E98CC2();
	void OnDlgClosed_82F2742447087004682EC1B7FC5ACC26(int32 NPCId);
	void OnDlgSelectedOption_82F2742447087004682EC1B7FC5ACC26(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12291_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12291_C")
	}
	static class UQuest_12291_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12291_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12291_C;

SDK_NAMESPACE_END
