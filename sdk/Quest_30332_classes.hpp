#pragma once



// Package: Quest_30332

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30332.Quest_30332_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30332_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30332_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30332(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3F5ACF704A93B6285FB525A9C94E8229();
	void OnFinished_E07E6315465FA91BBD13DCA7DFF8163F();
	void OnStop_E07E6315465FA91BBD13DCA7DFF8163F();
	void OnDlgClosed_5D916372426EFD52191D9692EAE0C8B3(int32 NPCId);
	void OnDlgSelectedOption_5D916372426EFD52191D9692EAE0C8B3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30332_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30332_C")
	}
	static class UQuest_30332_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30332_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30332_C;

SDK_NAMESPACE_END
