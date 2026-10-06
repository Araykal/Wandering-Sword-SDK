#pragma once



// Package: Quest_12665

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12665.Quest_12665_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12665_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12665_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12665(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_42F699E14382348936472BA5008D34F0();
	void OnFinished_4CA942C4440ABF143E9BFAB3506BA1F6();
	void OnStop_4CA942C4440ABF143E9BFAB3506BA1F6();
	void OnDlgClosed_387185AB4FD0F98B20869C9AF12D18A6(int32 NPCId);
	void OnDlgSelectedOption_387185AB4FD0F98B20869C9AF12D18A6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12665_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12665_C")
	}
	static class UQuest_12665_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12665_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12665_C;

SDK_NAMESPACE_END
