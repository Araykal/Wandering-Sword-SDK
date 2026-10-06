#pragma once



// Package: Quest_12266

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12266.Quest_12266_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12266_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12266_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12266(int32 EntryPoint);
	void 好感度();
	void HandleFinishing(int32 NPCId);
	void OnFinished_B5D261C84D8FB6F84BACA0B3785120BE();
	void OnStop_B5D261C84D8FB6F84BACA0B3785120BE();
	void OnDlgClosed_09BC868543C341773557078B1559AF91(int32 NPCId);
	void OnDlgSelectedOption_09BC868543C341773557078B1559AF91(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12266_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12266_C")
	}
	static class UQuest_12266_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12266_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12266_C;

SDK_NAMESPACE_END
