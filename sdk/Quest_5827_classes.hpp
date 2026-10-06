#pragma once



// Package: Quest_5827

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5827.Quest_5827_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5827_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5827_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5827(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_F6D54F9F46093D9B8D28C9BEA85C2E57();
	void OnFinished_F79F4CD64F550C22647DBFA0ECBD9004();
	void OnStop_F79F4CD64F550C22647DBFA0ECBD9004();
	void OnDlgClosed_AD704D0D42D288E2DC93E38337C13EFE(int32 NPCId);
	void OnDlgSelectedOption_AD704D0D42D288E2DC93E38337C13EFE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5827_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5827_C")
	}
	static class UQuest_5827_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5827_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5827_C;

SDK_NAMESPACE_END
