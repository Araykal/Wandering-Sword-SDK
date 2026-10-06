#pragma once



// Package: Quest_5782

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5782.Quest_5782_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_5782_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5782_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5782(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E026877E4625030DFDF3ADA7AFDD595B();
	void OnFinished_CDA2CCA943080BC17F95C7984D9D7D99();
	void OnStop_CDA2CCA943080BC17F95C7984D9D7D99();
	void OnDlgClosed_67CEC9344719D2F30397EA9E34E84357(int32 NPCId);
	void OnDlgSelectedOption_67CEC9344719D2F30397EA9E34E84357(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5782_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5782_C")
	}
	static class UQuest_5782_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5782_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5782_C;

SDK_NAMESPACE_END
