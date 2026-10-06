#pragma once



// Package: Quest_28202

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28202.Quest_28202_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28202_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28202_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28202(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_05C1475C4F5484741031EC9AAFB3CF23();
	void OnFinished_D8316FF14F7E73B0737B78916E845DCE();
	void OnStop_D8316FF14F7E73B0737B78916E845DCE();
	void OnDlgClosed_9720322444CE987850C5D68558935230(int32 NPCId);
	void OnDlgSelectedOption_9720322444CE987850C5D68558935230(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28202_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28202_C")
	}
	static class UQuest_28202_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28202_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28202_C;

SDK_NAMESPACE_END
