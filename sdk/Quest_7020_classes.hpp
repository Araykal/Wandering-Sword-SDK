#pragma once



// Package: Quest_7020

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7020.Quest_7020_C
// 0x0028 (0x0268 - 0x0240)
class UQuest_7020_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7020_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_7020(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C082276640A75E688C38B1BB220524E5();
	void OnFinished_55E3529D48101F59CFF1E6BB31AF6B2A();
	void OnStop_55E3529D48101F59CFF1E6BB31AF6B2A();
	void OnDlgClosed_5A8E33B84D81EE889CAE55866C75B2B6(int32 NPCId);
	void OnDlgSelectedOption_5A8E33B84D81EE889CAE55866C75B2B6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7020_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7020_C")
	}
	static class UQuest_7020_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7020_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7020_C;

SDK_NAMESPACE_END
