#pragma once



// Package: Quest_5602

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5602.Quest_5602_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5602_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5602_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5602(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B6F9ECB74A7262DA62202C8FF3B3DB10();
	void OnFinished_41F6262A44C7FC29C53563B7F6F7CBBF();
	void OnStop_41F6262A44C7FC29C53563B7F6F7CBBF();
	void OnDlgClosed_1360D6334E954CEAA5393F9C5E4D2631(int32 NPCId);
	void OnDlgSelectedOption_1360D6334E954CEAA5393F9C5E4D2631(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5602_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5602_C")
	}
	static class UQuest_5602_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5602_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5602_C;

SDK_NAMESPACE_END
