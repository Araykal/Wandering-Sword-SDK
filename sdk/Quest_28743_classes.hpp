#pragma once



// Package: Quest_28743

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28743.Quest_28743_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28743_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28743_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28743(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0649AB92437CC92620D47CB95A98E0F4();
	void OnStop_0649AB92437CC92620D47CB95A98E0F4();
	void OnDlgClosed_8701D7234F1C5B269EBDA4BC7DCC1496(int32 NPCId);
	void OnDlgSelectedOption_8701D7234F1C5B269EBDA4BC7DCC1496(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28743_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28743_C")
	}
	static class UQuest_28743_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28743_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28743_C;

SDK_NAMESPACE_END
