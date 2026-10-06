#pragma once



// Package: Quest_16669

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16669.Quest_16669_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_16669_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16669_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name1;                                // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16669(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_83C6D47B4AB4CCF704433BADE256EFDD();
	void OnFinished_F0FBACA14302F52215FFE6BA24B20EA8();
	void OnStop_F0FBACA14302F52215FFE6BA24B20EA8();
	void OnDlgClosed_BAA499F54C5529103A8CF2BAEC99BDC4(int32 NPCId);
	void OnDlgSelectedOption_BAA499F54C5529103A8CF2BAEC99BDC4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16669_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16669_C")
	}
	static class UQuest_16669_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16669_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16669_C;

SDK_NAMESPACE_END
