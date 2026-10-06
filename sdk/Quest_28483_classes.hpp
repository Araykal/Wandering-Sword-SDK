#pragma once



// Package: Quest_28483

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28483.Quest_28483_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28483_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28483_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28483(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_512D5B7F4581D09CE9B0328EEA849CDD();
	void OnStop_512D5B7F4581D09CE9B0328EEA849CDD();
	void OnDlgClosed_A6BBA78F49DAB5B92B8F68B6F6AC20DA(int32 NPCId);
	void OnDlgSelectedOption_A6BBA78F49DAB5B92B8F68B6F6AC20DA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28483_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28483_C")
	}
	static class UQuest_28483_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28483_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28483_C;

SDK_NAMESPACE_END
