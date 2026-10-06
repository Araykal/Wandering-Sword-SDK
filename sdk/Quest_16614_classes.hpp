#pragma once



// Package: Quest_16614

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16614.Quest_16614_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_16614_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16614_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name1;                                // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16614(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9017AEB94A84C11F974B6EA0DBD93A15();
	void OnFinished_0A100DB54647BEDCB240E09170516902();
	void OnStop_0A100DB54647BEDCB240E09170516902();
	void OnDlgClosed_324FE78A4738EA576A09659C0A2ECD56(int32 NPCId);
	void OnDlgSelectedOption_324FE78A4738EA576A09659C0A2ECD56(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16614_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16614_C")
	}
	static class UQuest_16614_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16614_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16614_C;

SDK_NAMESPACE_END
