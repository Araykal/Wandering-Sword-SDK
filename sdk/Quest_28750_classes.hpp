#pragma once



// Package: Quest_28750

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28750.Quest_28750_C
// 0x0050 (0x0290 - 0x0240)
class UQuest_28750_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28750_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Spawn_Transform;                                   // 0x0250(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	class ABP_Radiation_C*                        NewVar_0;                                          // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28750(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3DC20D3C458AD5063EE854A2D0B01D14();
	void OnStop_3DC20D3C458AD5063EE854A2D0B01D14();
	void OnDlgClosed_3EA023FD4816D057FFFFE781D4C43854(int32 NPCId);
	void OnDlgSelectedOption_3EA023FD4816D057FFFFE781D4C43854(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28750_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28750_C")
	}
	static class UQuest_28750_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28750_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28750_C;

SDK_NAMESPACE_END
