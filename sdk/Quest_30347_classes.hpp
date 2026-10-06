#pragma once



// Package: Quest_30347

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30347.Quest_30347_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30347_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30347_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30347(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_264233164054CCB6C3F5D88D45ED7419();
	void OnStop_264233164054CCB6C3F5D88D45ED7419();
	void OnDlgClosed_6869EB054D913E46CEFFCC8F7B6245CD(int32 NPCId);
	void OnDlgSelectedOption_6869EB054D913E46CEFFCC8F7B6245CD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30347_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30347_C")
	}
	static class UQuest_30347_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30347_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30347_C;

SDK_NAMESPACE_END
