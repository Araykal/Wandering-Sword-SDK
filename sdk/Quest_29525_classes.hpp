#pragma once



// Package: Quest_29525

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29525.Quest_29525_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29525_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29525_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29525(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_51209E5D4FBFCC927D32F29195BACFEA();
	void OnStop_51209E5D4FBFCC927D32F29195BACFEA();
	void OnDlgClosed_2E17B6854D2B0AFEC04590A0B7EF7029(int32 NPCId);
	void OnDlgSelectedOption_2E17B6854D2B0AFEC04590A0B7EF7029(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29525_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29525_C")
	}
	static class UQuest_29525_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29525_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29525_C;

SDK_NAMESPACE_END
