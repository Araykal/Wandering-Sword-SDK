#pragma once



// Package: Quest_28472

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28472.Quest_28472_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28472_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28472_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28472(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3960C7354D7B22BB3EB2909BD3789267();
	void OnStop_3960C7354D7B22BB3EB2909BD3789267();
	void OnDlgClosed_8B79606243BE275B51B262ABB49F4220(int32 NPCId);
	void OnDlgSelectedOption_8B79606243BE275B51B262ABB49F4220(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28472_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28472_C")
	}
	static class UQuest_28472_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28472_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28472_C;

SDK_NAMESPACE_END
