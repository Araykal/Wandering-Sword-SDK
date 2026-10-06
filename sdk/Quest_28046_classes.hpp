#pragma once



// Package: Quest_28046

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28046.Quest_28046_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28046_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28046_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28046(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_49E032AA49F13CC91EDBF9B6CCD5667B();
	void OnSuccess_00616F0544E2463E97E1B28EB573231D();
	void OnFinished_D6CFC48945E1A4E16C25ABBA42D25AF0();
	void OnStop_D6CFC48945E1A4E16C25ABBA42D25AF0();
	void OnDlgClosed_7187A91040647B9A22FC4E9DB503AFE4(int32 NPCId);
	void OnDlgSelectedOption_7187A91040647B9A22FC4E9DB503AFE4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28046_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28046_C")
	}
	static class UQuest_28046_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28046_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28046_C;

SDK_NAMESPACE_END
