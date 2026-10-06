#pragma once



// Package: Quest_30702

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30702.Quest_30702_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30702_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30702_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30702(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_0D8E397E47C1F8F80B42119BA25398F8(int32 NPCId);
	void OnDlgSelectedOption_0D8E397E47C1F8F80B42119BA25398F8(int32 NPCId);
	void OnFinished_1AD02ED246B21B7A651B4EBC405C9A41();
	void OnStop_1AD02ED246B21B7A651B4EBC405C9A41();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30702_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30702_C")
	}
	static class UQuest_30702_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30702_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30702_C;

SDK_NAMESPACE_END
