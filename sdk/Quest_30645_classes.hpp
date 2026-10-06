#pragma once



// Package: Quest_30645

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30645.Quest_30645_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30645_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30645_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30645(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EE05A4AB499FA62C25245ABB21B5F242();
	void OnFinished_FFD1294D4F4D3213E3BBF1BADEC5050D();
	void OnStop_FFD1294D4F4D3213E3BBF1BADEC5050D();
	void OnDlgClosed_65EFA8C34BF8F633929B6A825856EE4C(int32 NPCId);
	void OnDlgSelectedOption_65EFA8C34BF8F633929B6A825856EE4C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30645_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30645_C")
	}
	static class UQuest_30645_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30645_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30645_C;

SDK_NAMESPACE_END
