#pragma once



// Package: Quest_30336

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30336.Quest_30336_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30336_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30336_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30336(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B3281D064D8B0DE63B0361ACC3B3DD6C();
	void OnStop_B3281D064D8B0DE63B0361ACC3B3DD6C();
	void OnDlgClosed_0FDF075546476B553D84AABD7D0BBCD3(int32 NPCId);
	void OnDlgSelectedOption_0FDF075546476B553D84AABD7D0BBCD3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30336_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30336_C")
	}
	static class UQuest_30336_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30336_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30336_C;

SDK_NAMESPACE_END
