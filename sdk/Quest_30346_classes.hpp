#pragma once



// Package: Quest_30346

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30346.Quest_30346_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30346_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30346_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30346(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_64C4987440A84169EB4D0E805E8CA534();
	void OnFinished_C58990A24D23B0975DE78C85C16F9254();
	void OnStop_C58990A24D23B0975DE78C85C16F9254();
	void OnDlgClosed_5D9B2D41404628C20B5145B6D1F55495(int32 NPCId);
	void OnDlgSelectedOption_5D9B2D41404628C20B5145B6D1F55495(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30346_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30346_C")
	}
	static class UQuest_30346_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30346_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30346_C;

SDK_NAMESPACE_END
