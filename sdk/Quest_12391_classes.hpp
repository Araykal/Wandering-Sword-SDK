#pragma once



// Package: Quest_12391

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12391.Quest_12391_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12391_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12391_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12391(int32 EntryPoint);
	void 好感度();
	void HandleFinishing(int32 NPCId);
	void OnFinished_6AC545C84624E5E1B905C7A294DC256A();
	void OnStop_6AC545C84624E5E1B905C7A294DC256A();
	void OnDlgClosed_536E16A443CFA91B7EEB49B304393422(int32 NPCId);
	void OnDlgSelectedOption_536E16A443CFA91B7EEB49B304393422(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12391_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12391_C")
	}
	static class UQuest_12391_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12391_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12391_C;

SDK_NAMESPACE_END
