#pragma once



// Package: Quest_28487

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28487.Quest_28487_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28487_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28487_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28487(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_2F76AF4343887D9DD963598AFA3CCE66();
	void OnStop_2F76AF4343887D9DD963598AFA3CCE66();
	void OnDlgClosed_F59095914005C2401846D2AAEEFC4AFB(int32 NPCId);
	void OnDlgSelectedOption_F59095914005C2401846D2AAEEFC4AFB(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28487_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28487_C")
	}
	static class UQuest_28487_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28487_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28487_C;

SDK_NAMESPACE_END
