#pragma once



// Package: Quest_16501

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16501.Quest_16501_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16501_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16501_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16501(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_87F7FDEE4C57E7C4D8F925BA6090DEAE();
	void OnFinished_ABC9EF3741C4B19DE6226391DD4DE27A();
	void OnStop_ABC9EF3741C4B19DE6226391DD4DE27A();
	void OnDlgClosed_3E8B897E4A90CA5B50B9F19588772A61(int32 NPCId);
	void OnDlgSelectedOption_3E8B897E4A90CA5B50B9F19588772A61(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16501_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16501_C")
	}
	static class UQuest_16501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16501_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16501_C;

SDK_NAMESPACE_END
