#pragma once



// Package: Quest_5825

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5825.Quest_5825_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5825_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5825_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5825(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_441120234492277989BABAB4CB989490();
	void OnFinished_CC84E807490D154F81D0D49F0D5BEC7E();
	void OnStop_CC84E807490D154F81D0D49F0D5BEC7E();
	void OnDlgClosed_8E2DC4484B41D0491584CA90DC8DD31A(int32 NPCId);
	void OnDlgSelectedOption_8E2DC4484B41D0491584CA90DC8DD31A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5825_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5825_C")
	}
	static class UQuest_5825_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5825_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5825_C;

SDK_NAMESPACE_END
