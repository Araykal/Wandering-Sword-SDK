#pragma once



// Package: Quest_11375

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11375.Quest_11375_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11375_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11375_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11375(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AF01B16E40C200FD382C0C98780BD933();
	void OnStop_AF01B16E40C200FD382C0C98780BD933();
	void OnDlgClosed_F155A91C408569EF0569B6A16BCF856D(int32 NPCId);
	void OnDlgSelectedOption_F155A91C408569EF0569B6A16BCF856D(int32 NPCId);
	void OnSuccess_7F0398344A293C3C36536A87C3C00BF8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11375_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11375_C")
	}
	static class UQuest_11375_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11375_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11375_C;

SDK_NAMESPACE_END
