#pragma once



// Package: Quest_5307

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5307.Quest_5307_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5307_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5307_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5307(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4F85110D4E9930F5A5A31E8E0AEB49DA();
	void OnFinished_55BCFAA3437F549F37712F9C0F3C05BC();
	void OnStop_55BCFAA3437F549F37712F9C0F3C05BC();
	void OnDlgClosed_3AE9DC9D4F206B2C16C6DBA6C1AF135D(int32 NPCId);
	void OnDlgSelectedOption_3AE9DC9D4F206B2C16C6DBA6C1AF135D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5307_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5307_C")
	}
	static class UQuest_5307_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5307_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5307_C;

SDK_NAMESPACE_END
