#pragma once



// Package: Quest_16131

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16131.Quest_16131_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16131_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16131_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16131(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_84B07E154E7A9093A3A58A94A3C348AE();
	void OnStop_84B07E154E7A9093A3A58A94A3C348AE();
	void OnDlgClosed_9458D7734C74B276909FB78E0601854E(int32 NPCId);
	void OnDlgSelectedOption_9458D7734C74B276909FB78E0601854E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16131_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16131_C")
	}
	static class UQuest_16131_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16131_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16131_C;

SDK_NAMESPACE_END
