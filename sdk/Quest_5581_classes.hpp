#pragma once



// Package: Quest_5581

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5581.Quest_5581_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5581_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5581_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5581(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CA63FEA14A71877B26046AB9A4C19A99();
	void OnStop_CA63FEA14A71877B26046AB9A4C19A99();
	void OnDlgClosed_43A7D8F7412C4EEA99A05BAF9301DEE6(int32 NPCId);
	void OnDlgSelectedOption_43A7D8F7412C4EEA99A05BAF9301DEE6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5581_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5581_C")
	}
	static class UQuest_5581_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5581_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5581_C;

SDK_NAMESPACE_END
