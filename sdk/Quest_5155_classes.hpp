#pragma once



// Package: Quest_5155

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5155.Quest_5155_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5155_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5155_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5155(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_ACA260484D0AFDCE3B3E47AC4DCA1A77();
	void OnFinished_B22163FE42AAF3D8AAD6A5A0AA2CD787();
	void OnStop_B22163FE42AAF3D8AAD6A5A0AA2CD787();
	void OnDlgClosed_7D8B6C4B40D4AC58ACDFEC928D481288(int32 NPCId);
	void OnDlgSelectedOption_7D8B6C4B40D4AC58ACDFEC928D481288(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5155_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5155_C")
	}
	static class UQuest_5155_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5155_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5155_C;

SDK_NAMESPACE_END
