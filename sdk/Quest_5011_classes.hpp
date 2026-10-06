#pragma once



// Package: Quest_5011

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5011.Quest_5011_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5011_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5011_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5011(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_878311B246A787223BDF8482DC0AE0FD();
	void OnFinished_6662E9874215296FFA248D81B1E7372A();
	void OnStop_6662E9874215296FFA248D81B1E7372A();
	void OnDlgClosed_A8AB4350433BBE1310E699872E578E2F(int32 NPCId);
	void OnDlgSelectedOption_A8AB4350433BBE1310E699872E578E2F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5011_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5011_C")
	}
	static class UQuest_5011_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5011_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5011_C;

SDK_NAMESPACE_END
