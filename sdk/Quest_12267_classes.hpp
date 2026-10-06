#pragma once



// Package: Quest_12267

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12267.Quest_12267_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12267_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12267_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12267(int32 EntryPoint);
	void 好感度();
	void HandleFinishing(int32 NPCId);
	void OnFinished_C613A21A40E8C239825549AFE5F1B9A0();
	void OnStop_C613A21A40E8C239825549AFE5F1B9A0();
	void OnDlgClosed_C24254C14E113D67A8B34CAF2E7A9A6E(int32 NPCId);
	void OnDlgSelectedOption_C24254C14E113D67A8B34CAF2E7A9A6E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12267_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12267_C")
	}
	static class UQuest_12267_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12267_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12267_C;

SDK_NAMESPACE_END
