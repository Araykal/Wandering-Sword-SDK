#pragma once



// Package: Quest_30398

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30398.Quest_30398_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30398_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30398_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30398(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2126CABA4F9C99D9491298BFAA9C5E18();
	void OnFinished_6C0E64424F9CA0752E11C4922F896B9B();
	void OnStop_6C0E64424F9CA0752E11C4922F896B9B();
	void OnDlgClosed_7F446E684FFAB4B39C578EBB6A5C7670(int32 NPCId);
	void OnDlgSelectedOption_7F446E684FFAB4B39C578EBB6A5C7670(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30398_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30398_C")
	}
	static class UQuest_30398_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30398_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30398_C;

SDK_NAMESPACE_END
