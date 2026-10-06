#pragma once



// Package: Quest_30399

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30399.Quest_30399_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30399_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30399_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30399(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_827B97D0474239196187AD8C055D47AB();
	void OnFinished_1982E2764EE70D0E6232F3BB23D5590B();
	void OnStop_1982E2764EE70D0E6232F3BB23D5590B();
	void OnDlgClosed_F4DA752744030A5509133C8EEBF94DCC(int32 NPCId);
	void OnDlgSelectedOption_F4DA752744030A5509133C8EEBF94DCC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30399_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30399_C")
	}
	static class UQuest_30399_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30399_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30399_C;

SDK_NAMESPACE_END
