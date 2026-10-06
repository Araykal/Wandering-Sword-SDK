#pragma once



// Package: Quest_5310

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5310.Quest_5310_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5310_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5310_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5310(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_846BB56748993D81069D53B637AB1233();
	void OnFinished_B39281EA4D0C9AAFAC85BCA921AF94FD();
	void OnStop_B39281EA4D0C9AAFAC85BCA921AF94FD();
	void OnDlgClosed_23ECEC5C48C9945170EE5D8C498397B6(int32 NPCId);
	void OnDlgSelectedOption_23ECEC5C48C9945170EE5D8C498397B6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5310_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5310_C")
	}
	static class UQuest_5310_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5310_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5310_C;

SDK_NAMESPACE_END
