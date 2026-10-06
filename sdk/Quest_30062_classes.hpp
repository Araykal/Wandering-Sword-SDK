#pragma once



// Package: Quest_30062

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30062.Quest_30062_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30062_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30062_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30062(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_633D26294AFB0D752FE558A1C2B0DC1C();
	void OnFinished_ED8A0A204AF06F4192C192B9BB9EB5CA();
	void OnStop_ED8A0A204AF06F4192C192B9BB9EB5CA();
	void OnDlgClosed_687C88CE4D3989F49CEBD294E8CE70BB(int32 NPCId);
	void OnDlgSelectedOption_687C88CE4D3989F49CEBD294E8CE70BB(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30062_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30062_C")
	}
	static class UQuest_30062_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30062_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30062_C;

SDK_NAMESPACE_END
