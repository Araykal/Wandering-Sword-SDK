#pragma once



// Package: Quest_11391

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11391.Quest_11391_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11391_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11391_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11391(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_108BCF5E4477534BD69756A688CB00DA();
	void OnStop_108BCF5E4477534BD69756A688CB00DA();
	void OnDlgClosed_CB5B738C41E98F09213C53B905F1E0AC(int32 NPCId);
	void OnDlgSelectedOption_CB5B738C41E98F09213C53B905F1E0AC(int32 NPCId);
	void OnSuccess_070702DC494F26BBD3ACBFAF77089F0F(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11391_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11391_C")
	}
	static class UQuest_11391_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11391_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11391_C;

SDK_NAMESPACE_END
