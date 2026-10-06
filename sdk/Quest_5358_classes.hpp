#pragma once



// Package: Quest_5358

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5358.Quest_5358_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_5358_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5358_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name_0;                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5358(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_99AA78644F9D055AC6DFFAA406029551();
	void OnSuccess_53D5774D439E0CFC4C04DDB57AF68F51();
	void OnFinished_5EDAF4394AD4F3B570DA86A0D5DFCBF5();
	void OnStop_5EDAF4394AD4F3B570DA86A0D5DFCBF5();
	void OnDlgClosed_E9BF98CE4C75BAA6A524B7BA2081190C(int32 NPCId);
	void OnDlgSelectedOption_E9BF98CE4C75BAA6A524B7BA2081190C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5358_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5358_C")
	}
	static class UQuest_5358_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5358_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5358_C;

SDK_NAMESPACE_END
