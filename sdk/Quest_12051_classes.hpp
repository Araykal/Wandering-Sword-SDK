#pragma once



// Package: Quest_12051

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12051.Quest_12051_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12051_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12051_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12051(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E4C15036480E569CE5E7AC86B566CDA3();
	void OnFinished_ECBE49DF4BA2AD879747B698D0D51B10();
	void OnStop_ECBE49DF4BA2AD879747B698D0D51B10();
	void OnDlgClosed_43EEF8214EA85F85D546678F6C6D3911(int32 NPCId);
	void OnDlgSelectedOption_43EEF8214EA85F85D546678F6C6D3911(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12051_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12051_C")
	}
	static class UQuest_12051_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12051_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12051_C;

SDK_NAMESPACE_END
