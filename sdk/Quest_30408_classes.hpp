#pragma once



// Package: Quest_30408

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30408.Quest_30408_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30408_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30408_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30408(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_31FA3DF3485A1E8CE9B00BB20FE04F79();
	void OnStop_31FA3DF3485A1E8CE9B00BB20FE04F79();
	void OnDlgClosed_2BD4751947D2A0C41C4FB088F20C0122(int32 NPCId);
	void OnDlgSelectedOption_2BD4751947D2A0C41C4FB088F20C0122(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30408_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30408_C")
	}
	static class UQuest_30408_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30408_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30408_C;

SDK_NAMESPACE_END
