#pragma once



// Package: Quest_5410

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5410.Quest_5410_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_5410_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5410_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 NewVar_0;                                          // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5410(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_447AD5B54B1F209B33CEA29E878B5BCD();
	void OnFinished_0445E7C74DB2C9361DAC53915F7B88E0();
	void OnStop_0445E7C74DB2C9361DAC53915F7B88E0();
	void OnDlgClosed_304631B744556CE913C0D291DE35C027(int32 NPCId);
	void OnDlgSelectedOption_304631B744556CE913C0D291DE35C027(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5410_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5410_C")
	}
	static class UQuest_5410_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5410_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5410_C;

SDK_NAMESPACE_END
