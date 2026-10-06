#pragma once



// Package: Quest_28230

#include "Basic.hpp"

#include "GridRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28230.Quest_28230_C
// 0x0070 (0x02B0 - 0x0240)
class UQuest_28230_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28230_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LittleGameCharacter_C*              NewVar_0;                                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_1;                                          // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0xC];                                      // 0x0264(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             NewVar_2;                                          // 0x0270(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_SceneHero_C*                        As_BP_Scene_Hero;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EGridDirect                                   FaceDirect;                                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28230(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void End(const class FString& GuidanceType);
	void OnFinished_4641943B4C468F388360C88496CA7B6F();
	void OnStop_4641943B4C468F388360C88496CA7B6F();
	void OnDlgClosed_FDF1B29747A00CA06DCBE2B5B422576B(int32 NPCId);
	void OnDlgSelectedOption_FDF1B29747A00CA06DCBE2B5B422576B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28230_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28230_C")
	}
	static class UQuest_28230_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28230_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28230_C;

SDK_NAMESPACE_END
