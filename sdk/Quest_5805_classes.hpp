#pragma once



// Package: Quest_5805

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5805.Quest_5805_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5805_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5805_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5805(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_413CDB534CC431911EF83CB597E94C33();
	void OnFinished_B55BCA47449FFDECFA5F88AD1B832311();
	void OnStop_B55BCA47449FFDECFA5F88AD1B832311();
	void OnDlgClosed_C865F6B647A6C7AF4099889DF3F63037(int32 NPCId);
	void OnDlgSelectedOption_C865F6B647A6C7AF4099889DF3F63037(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5805_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5805_C")
	}
	static class UQuest_5805_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5805_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5805_C;

SDK_NAMESPACE_END
