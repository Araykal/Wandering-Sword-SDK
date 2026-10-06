#pragma once



// Package: Quest_16138

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16138.Quest_16138_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16138_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16138_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16138(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_274E571F41672ED9D8D409A0F08EB8DA();
	void OnStop_274E571F41672ED9D8D409A0F08EB8DA();
	void OnDlgClosed_71B6E48D46ABA76D1D96419B1F3CC7D5(int32 NPCId);
	void OnDlgSelectedOption_71B6E48D46ABA76D1D96419B1F3CC7D5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16138_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16138_C")
	}
	static class UQuest_16138_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16138_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16138_C;

SDK_NAMESPACE_END
