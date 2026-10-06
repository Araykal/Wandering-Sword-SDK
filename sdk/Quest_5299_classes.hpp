#pragma once



// Package: Quest_5299

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5299.Quest_5299_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5299_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5299_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5299(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DB1050604E1416577A2369AB704897D9();
	void OnFinished_4FF8D3A6409FA8C638B95587DC842535();
	void OnStop_4FF8D3A6409FA8C638B95587DC842535();
	void OnDlgClosed_FBF5DAAF457AE7AFC96286AA1CC0E610(int32 NPCId);
	void OnDlgSelectedOption_FBF5DAAF457AE7AFC96286AA1CC0E610(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5299_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5299_C")
	}
	static class UQuest_5299_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5299_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5299_C;

SDK_NAMESPACE_END
