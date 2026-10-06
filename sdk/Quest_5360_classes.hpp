#pragma once



// Package: Quest_5360

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5360.Quest_5360_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5360_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5360_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5360(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8220251641A0DF2A47F38EB63641EE78();
	void OnFinished_7254B3AD4A881BA664371091687ED03E();
	void OnStop_7254B3AD4A881BA664371091687ED03E();
	void OnDlgClosed_69E57BD44424B5958B42D0AFC69F0B08(int32 NPCId);
	void OnDlgSelectedOption_69E57BD44424B5958B42D0AFC69F0B08(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5360_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5360_C")
	}
	static class UQuest_5360_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5360_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5360_C;

SDK_NAMESPACE_END
