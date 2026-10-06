#pragma once



// Package: Quest_28049

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28049.Quest_28049_C
// 0x0028 (0x0268 - 0x0240)
class UQuest_28049_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28049_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_28049(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_464292714AD10BE4D2B0F1BD86DE0E47();
	void OnFinished_8ABFD2B649CB39FE6D24FBB7F92DD72B();
	void OnStop_8ABFD2B649CB39FE6D24FBB7F92DD72B();
	void OnDlgClosed_5AC0A7044066258392E5E1AC54B41E89(int32 NPCId);
	void OnDlgSelectedOption_5AC0A7044066258392E5E1AC54B41E89(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28049_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28049_C")
	}
	static class UQuest_28049_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28049_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28049_C;

SDK_NAMESPACE_END
