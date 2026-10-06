#pragma once



// Package: Quest_28018

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28018.Quest_28018_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28018_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28018_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28018(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7E4231D94232F058A56CA898FF91A0ED();
	void OnStop_7E4231D94232F058A56CA898FF91A0ED();
	void OnDlgClosed_2887D64E4BF17E3E91A5F38681EB9BED(int32 NPCId);
	void OnDlgSelectedOption_2887D64E4BF17E3E91A5F38681EB9BED(int32 NPCId);
	void OnSuccess_7BAEBCFE46C24761E866DDA00FACCCAD(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28018_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28018_C")
	}
	static class UQuest_28018_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28018_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28018_C;

SDK_NAMESPACE_END
