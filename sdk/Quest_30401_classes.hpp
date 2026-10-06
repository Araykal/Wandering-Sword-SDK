#pragma once



// Package: Quest_30401

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30401.Quest_30401_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30401_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30401_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30401(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_508188A14D8D79D625B32FACE850BC44();
	void OnFinished_3866CE7F44A33CE78EFEDAB9A75BB3F9();
	void OnStop_3866CE7F44A33CE78EFEDAB9A75BB3F9();
	void OnDlgClosed_0896D44F453C7AE8EDF8F981E9D6679D(int32 NPCId);
	void OnDlgSelectedOption_0896D44F453C7AE8EDF8F981E9D6679D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30401_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30401_C")
	}
	static class UQuest_30401_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30401_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30401_C;

SDK_NAMESPACE_END
