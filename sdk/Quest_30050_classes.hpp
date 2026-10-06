#pragma once



// Package: Quest_30050

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30050.Quest_30050_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30050_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30050_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30050(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2397DBF5409D6C638073B69519460F5A();
	void OnFinished_315ABB494CC70EF7F0C34E8B75120024();
	void OnStop_315ABB494CC70EF7F0C34E8B75120024();
	void OnDlgClosed_3188596F4295CC969CAFC6B61047802D(int32 NPCId);
	void OnDlgSelectedOption_3188596F4295CC969CAFC6B61047802D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30050_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30050_C")
	}
	static class UQuest_30050_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30050_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30050_C;

SDK_NAMESPACE_END
