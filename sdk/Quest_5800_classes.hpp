#pragma once



// Package: Quest_5800

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5800.Quest_5800_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5800_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5800_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5800(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_49F10E534B5BC603E9641F8EB360B199();
	void OnStop_49F10E534B5BC603E9641F8EB360B199();
	void OnDlgClosed_F68A107A478AA0A742F4EF847396FA13(int32 NPCId);
	void OnDlgSelectedOption_F68A107A478AA0A742F4EF847396FA13(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5800_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5800_C")
	}
	static class UQuest_5800_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5800_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5800_C;

SDK_NAMESPACE_END
