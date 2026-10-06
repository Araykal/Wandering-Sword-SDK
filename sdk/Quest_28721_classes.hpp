#pragma once



// Package: Quest_28721

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28721.Quest_28721_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28721_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28721_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28721(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F8CB9D544E43ED657A3B0B86EE8FE263();
	void OnStop_F8CB9D544E43ED657A3B0B86EE8FE263();
	void OnDlgClosed_89C392A940774E0E486C2498B619761C(int32 NPCId);
	void OnDlgSelectedOption_89C392A940774E0E486C2498B619761C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28721_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28721_C")
	}
	static class UQuest_28721_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28721_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28721_C;

SDK_NAMESPACE_END
