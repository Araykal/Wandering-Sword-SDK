#pragma once



// Package: Quest_30671

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30671.Quest_30671_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30671_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30671_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30671(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_C5182C09424335478F3E9BAEBB71BEAB(int32 NPCId);
	void OnDlgSelectedOption_C5182C09424335478F3E9BAEBB71BEAB(int32 NPCId);
	void OnFinished_393202954B70BA0A99E526B973889FC9();
	void OnStop_393202954B70BA0A99E526B973889FC9();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30671_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30671_C")
	}
	static class UQuest_30671_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30671_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30671_C;

SDK_NAMESPACE_END
