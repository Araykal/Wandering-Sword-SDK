#pragma once



// Package: Quest_30317

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30317.Quest_30317_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30317_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30317_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30317(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_56B7D98F48B9652D431AB8AE95E63BC6();
	void OnStop_56B7D98F48B9652D431AB8AE95E63BC6();
	void OnDlgClosed_D1CF52854BBC0F76F78725AA1C9ECA82(int32 NPCId);
	void OnDlgSelectedOption_D1CF52854BBC0F76F78725AA1C9ECA82(int32 NPCId);
	void OnSuccess_8AF984BD4CD5E66F5CC6E3A5B0040218(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30317_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30317_C")
	}
	static class UQuest_30317_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30317_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30317_C;

SDK_NAMESPACE_END
