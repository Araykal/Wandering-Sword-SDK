#pragma once



// Package: Quest_5569

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5569.Quest_5569_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5569_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5569_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5569(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EEE1AB024CCE2A35B00D69A59E2C7778();
	void OnFinished_D0A3F1B0470D7C8CCD84E9AFDC866C03();
	void OnStop_D0A3F1B0470D7C8CCD84E9AFDC866C03();
	void OnDlgClosed_3D83FC63488CBCE0614690AC523401F6(int32 NPCId);
	void OnDlgSelectedOption_3D83FC63488CBCE0614690AC523401F6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5569_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5569_C")
	}
	static class UQuest_5569_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5569_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5569_C;

SDK_NAMESPACE_END
