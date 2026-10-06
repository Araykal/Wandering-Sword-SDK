#pragma once



// Package: Quest_5161

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5161.Quest_5161_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5161_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5161_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5161(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_391DB4D14CF62D4634D69695770E0A4E();
	void OnFinished_2B3C7143445E9517E426D69FCFDB4D30();
	void OnStop_2B3C7143445E9517E426D69FCFDB4D30();
	void OnDlgClosed_2465B91F4C75F33B78904CB6AFABF7FB(int32 NPCId);
	void OnDlgSelectedOption_2465B91F4C75F33B78904CB6AFABF7FB(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5161_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5161_C")
	}
	static class UQuest_5161_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5161_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5161_C;

SDK_NAMESPACE_END
