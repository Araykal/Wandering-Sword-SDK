#pragma once



// Package: Quest_5830

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5830.Quest_5830_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5830_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5830_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5830(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_59DF7080447A1741C18F23A233E13000();
	void OnFinished_6AB9167349D81CE97296948779935F94();
	void OnStop_6AB9167349D81CE97296948779935F94();
	void OnDlgClosed_663337FE400E5FD9E94DE090A5BE64D0(int32 NPCId);
	void OnDlgSelectedOption_663337FE400E5FD9E94DE090A5BE64D0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5830_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5830_C")
	}
	static class UQuest_5830_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5830_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5830_C;

SDK_NAMESPACE_END
