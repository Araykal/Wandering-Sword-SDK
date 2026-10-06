#pragma once



// Package: Quest_12265

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12265.Quest_12265_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12265_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12265_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12265(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_108C615841CF539B02BAF99CFD679B13(bool bWinOrLose);
	void OnDlgClosed_46E6DFF1480D6C1833788491598154C8(int32 NPCId);
	void OnDlgSelectedOption_46E6DFF1480D6C1833788491598154C8(int32 NPCId);
	void OnFinished_C9A32A064DA8431E281A4D81B2A29ED3();
	void OnStop_C9A32A064DA8431E281A4D81B2A29ED3();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12265_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12265_C")
	}
	static class UQuest_12265_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12265_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12265_C;

SDK_NAMESPACE_END
