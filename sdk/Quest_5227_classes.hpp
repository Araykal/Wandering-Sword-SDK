#pragma once



// Package: Quest_5227

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5227.Quest_5227_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5227_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5227_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5227(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_01377961410B42FDC20BD8B17226F72F();
	void OnStop_01377961410B42FDC20BD8B17226F72F();
	void OnDlgClosed_53D8DEE54035E5076504BE8C419BA883(int32 NPCId);
	void OnDlgSelectedOption_53D8DEE54035E5076504BE8C419BA883(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5227_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5227_C")
	}
	static class UQuest_5227_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5227_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5227_C;

SDK_NAMESPACE_END
