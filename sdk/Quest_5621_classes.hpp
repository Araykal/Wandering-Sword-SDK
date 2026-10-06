#pragma once



// Package: Quest_5621

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5621.Quest_5621_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5621_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5621_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5621(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FB16B60D4BB6CE096CC521B1344D5D48(bool bWinOrLose);
	void OnFinished_84A40B154A302B910D37E3AC5329F5E9();
	void OnStop_84A40B154A302B910D37E3AC5329F5E9();
	void OnDlgClosed_56DE03D745548F592048E09FE2FF0D37(int32 NPCId);
	void OnDlgSelectedOption_56DE03D745548F592048E09FE2FF0D37(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5621_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5621_C")
	}
	static class UQuest_5621_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5621_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5621_C;

SDK_NAMESPACE_END
