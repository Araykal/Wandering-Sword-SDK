#pragma once



// Package: Quest_16084

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16084.Quest_16084_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16084_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16084_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16084(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_ED9FD28C4DC96AFE4B1BE0AE3C19B1EA();
	void OnFinished_48DD3B13478EC8881E01028A38B0DCF1();
	void OnStop_48DD3B13478EC8881E01028A38B0DCF1();
	void OnDlgClosed_20CE9C764F60312BFF447AA2D8E83050(int32 NPCId);
	void OnDlgSelectedOption_20CE9C764F60312BFF447AA2D8E83050(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16084_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16084_C")
	}
	static class UQuest_16084_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16084_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16084_C;

SDK_NAMESPACE_END
