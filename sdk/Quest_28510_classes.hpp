#pragma once



// Package: Quest_28510

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28510.Quest_28510_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28510_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28510_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28510(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C6FDE0A144D4EA768FFE11A368BDA01B();
	void OnStop_C6FDE0A144D4EA768FFE11A368BDA01B();
	void OnDlgClosed_1661FFA04EDF4D7901E55D94D47D5B30(int32 NPCId);
	void OnDlgSelectedOption_1661FFA04EDF4D7901E55D94D47D5B30(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28510_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28510_C")
	}
	static class UQuest_28510_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28510_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28510_C;

SDK_NAMESPACE_END
