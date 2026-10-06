#pragma once



// Package: Quest_28019

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28019.Quest_28019_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28019_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28019_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28019(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_77DD02234A8D47C16B2C17ADBED69E78();
	void OnFinished_923E128C4CC2812E8A8BE781FD569AF0();
	void OnStop_923E128C4CC2812E8A8BE781FD569AF0();
	void OnDlgClosed_F7E7C51E4C29A0D7703AF09420CAFFEE(int32 NPCId);
	void OnDlgSelectedOption_F7E7C51E4C29A0D7703AF09420CAFFEE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28019_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28019_C")
	}
	static class UQuest_28019_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28019_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28019_C;

SDK_NAMESPACE_END
