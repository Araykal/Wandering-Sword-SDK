#pragma once



// Package: Quest_30333

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30333.Quest_30333_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30333_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30333_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30333(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DA73C9C54860E7FF9414F1970A27D667();
	void OnStop_DA73C9C54860E7FF9414F1970A27D667();
	void OnDlgClosed_3EF840E14F21266138B54782D3E883FF(int32 NPCId);
	void OnDlgSelectedOption_3EF840E14F21266138B54782D3E883FF(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30333_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30333_C")
	}
	static class UQuest_30333_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30333_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30333_C;

SDK_NAMESPACE_END
