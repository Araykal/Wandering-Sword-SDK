#pragma once



// Package: Quest_28035

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28035.Quest_28035_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28035_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28035_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28035(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_6E3FFA9240FFCA5D773C2D87837A849A(int32 NPCId);
	void OnDlgSelectedOption_6E3FFA9240FFCA5D773C2D87837A849A(int32 NPCId);
	void OnFinished_C075FD4641182508756EE486611D8EA5();
	void OnStop_C075FD4641182508756EE486611D8EA5();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28035_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28035_C")
	}
	static class UQuest_28035_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28035_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28035_C;

SDK_NAMESPACE_END
