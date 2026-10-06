#pragma once



// Package: Quest_30092

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30092.Quest_30092_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30092_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30092_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30092(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2F2A7F274C2A4B2969FEEC9E26A83FB4();
	void OnFinished_DB4A15364E220BCDCC2CA687AC7E3912();
	void OnStop_DB4A15364E220BCDCC2CA687AC7E3912();
	void OnDlgClosed_817F65064A2CC9A2121CC89B15C0AA2D(int32 NPCId);
	void OnDlgSelectedOption_817F65064A2CC9A2121CC89B15C0AA2D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30092_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30092_C")
	}
	static class UQuest_30092_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30092_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30092_C;

SDK_NAMESPACE_END
