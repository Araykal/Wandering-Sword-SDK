#pragma once



// Package: Quest_30615

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30615.Quest_30615_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30615_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30615_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30615(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_10E4ACEB47228B2E2E9EC9BBA8A48042();
	void OnStop_10E4ACEB47228B2E2E9EC9BBA8A48042();
	void OnDlgClosed_2728F4014D7BDAD391080498405C93E0(int32 NPCId);
	void OnDlgSelectedOption_2728F4014D7BDAD391080498405C93E0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30615_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30615_C")
	}
	static class UQuest_30615_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30615_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30615_C;

SDK_NAMESPACE_END
