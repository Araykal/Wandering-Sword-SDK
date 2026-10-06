#pragma once



// Package: Quest_5812

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5812.Quest_5812_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5812_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5812_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5812(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_27FA001C437C7C836757AE9205FA857A();
	void OnFinished_8C7B9CBE43059685B2D02E892CB7A519();
	void OnStop_8C7B9CBE43059685B2D02E892CB7A519();
	void OnDlgClosed_284B0364407673FC9ABF00AC95DC4041(int32 NPCId);
	void OnDlgSelectedOption_284B0364407673FC9ABF00AC95DC4041(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5812_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5812_C")
	}
	static class UQuest_5812_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5812_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5812_C;

SDK_NAMESPACE_END
