#pragma once



// Package: Quest_28038

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28038.Quest_28038_C
// 0x0030 (0x0270 - 0x0240)
class UQuest_28038_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28038_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_1;                                          // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_252[0x2];                                      // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Target_Location;                                   // 0x0254(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_28038(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_D92C485640FBE829C07A9BB9229C3023(int32 NPCId);
	void OnDlgSelectedOption_D92C485640FBE829C07A9BB9229C3023(int32 NPCId);
	void OnSuccess_4D2463AA49D06F5051F551B895ECEA00();
	void OnFinished_A9F006F64138B3FF8D77ADAEC442D56F();
	void OnStop_A9F006F64138B3FF8D77ADAEC442D56F();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28038_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28038_C")
	}
	static class UQuest_28038_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28038_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28038_C;

SDK_NAMESPACE_END
