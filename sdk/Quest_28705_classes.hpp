#pragma once



// Package: Quest_28705

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28705.Quest_28705_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28705_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28705_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28705(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_058D9A3D48246FD0B30026892910D19F();
	void OnStop_058D9A3D48246FD0B30026892910D19F();
	void OnDlgClosed_648CFC294BF6EEB34BBF2EA688186A68(int32 NPCId);
	void OnDlgSelectedOption_648CFC294BF6EEB34BBF2EA688186A68(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28705_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28705_C")
	}
	static class UQuest_28705_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28705_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28705_C;

SDK_NAMESPACE_END
