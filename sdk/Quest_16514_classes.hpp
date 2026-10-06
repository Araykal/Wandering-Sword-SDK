#pragma once



// Package: Quest_16514

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16514.Quest_16514_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16514_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16514_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16514(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B45C85594AA2F99377F67BBDC56B85AA();
	void OnStop_B45C85594AA2F99377F67BBDC56B85AA();
	void OnDlgClosed_B3829333408A49544B7B278F9F63A257(int32 NPCId);
	void OnDlgSelectedOption_B3829333408A49544B7B278F9F63A257(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16514_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16514_C")
	}
	static class UQuest_16514_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16514_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16514_C;

SDK_NAMESPACE_END
