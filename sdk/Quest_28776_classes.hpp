#pragma once



// Package: Quest_28776

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28776.Quest_28776_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28776_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28776_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28776(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A7E198E1435541CDB2DB01AB0F72FA6C();
	void OnFinished_F3E20FC348C5619B5961D99A263DA5CA();
	void OnStop_F3E20FC348C5619B5961D99A263DA5CA();
	void OnDlgClosed_8DF8B00D4E2E196063354287C6C284F2(int32 NPCId);
	void OnDlgSelectedOption_8DF8B00D4E2E196063354287C6C284F2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28776_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28776_C")
	}
	static class UQuest_28776_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28776_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28776_C;

SDK_NAMESPACE_END
