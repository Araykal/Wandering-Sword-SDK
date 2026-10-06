#pragma once



// Package: Quest_30141

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30141.Quest_30141_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_30141_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30141_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_30141(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_89621608486A230E77BBC789436D8CFD();
	void OnStop_89621608486A230E77BBC789436D8CFD();
	void OnDlgClosed_5DAEA39144790631463D6C9F9368B4C2(int32 NPCId);
	void OnDlgSelectedOption_5DAEA39144790631463D6C9F9368B4C2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30141_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30141_C")
	}
	static class UQuest_30141_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30141_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30141_C;

SDK_NAMESPACE_END
