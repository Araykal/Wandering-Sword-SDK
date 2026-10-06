#pragma once



// Package: Quest_16126

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16126.Quest_16126_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16126_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16126_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16126(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1F757CE84F44F2F5633DF0901FCA6A23();
	void OnStop_1F757CE84F44F2F5633DF0901FCA6A23();
	void OnDlgClosed_01472DBB4F09F6BBBC23ABB2060B5569(int32 NPCId);
	void OnDlgSelectedOption_01472DBB4F09F6BBBC23ABB2060B5569(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16126_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16126_C")
	}
	static class UQuest_16126_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16126_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16126_C;

SDK_NAMESPACE_END
