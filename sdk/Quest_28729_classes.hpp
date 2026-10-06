#pragma once



// Package: Quest_28729

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28729.Quest_28729_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28729_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28729_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Quest_Id;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28729(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FA6F5BBF45668496EE925F8CD9093E8F();
	void OnSuccess_7000E5C54C25340CD87FB3B32E346CB4();
	void OnFinished_442D86EA4A741C892510A5943DDC900B();
	void OnStop_442D86EA4A741C892510A5943DDC900B();
	void OnDlgClosed_8D74D499499BA9C5E5563BB30269EFC9(int32 NPCId);
	void OnDlgSelectedOption_8D74D499499BA9C5E5563BB30269EFC9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28729_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28729_C")
	}
	static class UQuest_28729_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28729_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28729_C;

SDK_NAMESPACE_END
