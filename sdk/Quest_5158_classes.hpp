#pragma once



// Package: Quest_5158

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5158.Quest_5158_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5158_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5158_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5158(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DC5B9FDB4F2B8F17205A53970632A7BE();
	void OnFinished_98B6A15344A24A1861A4E28A2C013BB5();
	void OnStop_98B6A15344A24A1861A4E28A2C013BB5();
	void OnDlgClosed_A168BF6C4258412C1B0A46A2F049C4E7(int32 NPCId);
	void OnDlgSelectedOption_A168BF6C4258412C1B0A46A2F049C4E7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5158_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5158_C")
	}
	static class UQuest_5158_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5158_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5158_C;

SDK_NAMESPACE_END
