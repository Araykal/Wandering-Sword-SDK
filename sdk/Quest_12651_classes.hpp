#pragma once



// Package: Quest_12651

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12651.Quest_12651_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12651_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12651_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12651(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0E38A0DC4C10A47FABCCBB9FC89F1489();
	void OnStop_0E38A0DC4C10A47FABCCBB9FC89F1489();
	void OnDlgClosed_5DD75F7C445F41B806989489CEADAE09(int32 NPCId);
	void OnDlgSelectedOption_5DD75F7C445F41B806989489CEADAE09(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12651_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12651_C")
	}
	static class UQuest_12651_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12651_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12651_C;

SDK_NAMESPACE_END
