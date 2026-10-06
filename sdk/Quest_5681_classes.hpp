#pragma once



// Package: Quest_5681

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5681.Quest_5681_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5681_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5681_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5681(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4C9C7D9841B71FB89396BDB91CC8941D();
	void OnStop_4C9C7D9841B71FB89396BDB91CC8941D();
	void OnDlgClosed_083872774FE41B9E697C0A986E356530(int32 NPCId);
	void OnDlgSelectedOption_083872774FE41B9E697C0A986E356530(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5681_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5681_C")
	}
	static class UQuest_5681_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5681_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5681_C;

SDK_NAMESPACE_END
