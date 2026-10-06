#pragma once



// Package: Quest_5263

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5263.Quest_5263_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5263_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5263_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   LV_26_P2;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5263(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5F74614D40862483C23AD5898DF74F87();
	void OnStop_5F74614D40862483C23AD5898DF74F87();
	void OnDlgClosed_C25AA0DB447E82370F8DE3928B148C24(int32 NPCId);
	void OnDlgSelectedOption_C25AA0DB447E82370F8DE3928B148C24(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5263_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5263_C")
	}
	static class UQuest_5263_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5263_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5263_C;

SDK_NAMESPACE_END
