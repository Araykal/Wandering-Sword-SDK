#pragma once



// Package: Quest_5559

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5559.Quest_5559_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5559_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5559_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5559(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_90522A4140C3F3AEBCD7E8A9BD961303();
	void OnStop_90522A4140C3F3AEBCD7E8A9BD961303();
	void OnDlgClosed_F688B39848EE5EC6342D4AA3AEEFD2C4(int32 NPCId);
	void OnDlgSelectedOption_F688B39848EE5EC6342D4AA3AEEFD2C4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5559_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5559_C")
	}
	static class UQuest_5559_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5559_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5559_C;

SDK_NAMESPACE_END
