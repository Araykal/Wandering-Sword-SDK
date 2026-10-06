#pragma once



// Package: Quest_29513

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29513.Quest_29513_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_29513_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29513_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29513(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F266DBD9476F2A2BBDF393A25455F0C1();
	void OnStop_F266DBD9476F2A2BBDF393A25455F0C1();
	void OnDlgClosed_470EDBEE4BCCF659CAB5FFA8BE2A7449(int32 NPCId);
	void OnDlgSelectedOption_470EDBEE4BCCF659CAB5FFA8BE2A7449(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29513_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29513_C")
	}
	static class UQuest_29513_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29513_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29513_C;

SDK_NAMESPACE_END
