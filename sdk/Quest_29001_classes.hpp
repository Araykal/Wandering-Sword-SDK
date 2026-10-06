#pragma once



// Package: Quest_29001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29001.Quest_29001_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29001_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29001_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29001(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B8059D3C4FC088FF1CE1BD837D9E4235();
	void OnFinished_A774528342769BA8FE25E1B9D4E94E14();
	void OnStop_A774528342769BA8FE25E1B9D4E94E14();
	void OnDlgClosed_7B9744F645D1E8DCE6536FADDC577F87(int32 NPCId);
	void OnDlgSelectedOption_7B9744F645D1E8DCE6536FADDC577F87(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29001_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29001_C")
	}
	static class UQuest_29001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29001_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29001_C;

SDK_NAMESPACE_END
