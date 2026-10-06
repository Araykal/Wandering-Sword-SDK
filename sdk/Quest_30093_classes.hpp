#pragma once



// Package: Quest_30093

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30093.Quest_30093_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30093_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30093_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30093(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9928D4B74DF7E8571D9328AE1085A60F();
	void OnFinished_A37F532542C4BE7B512E1FB391165C3C();
	void OnStop_A37F532542C4BE7B512E1FB391165C3C();
	void OnDlgClosed_B3DE6972474467D84C234AA8757EBEAF(int32 NPCId);
	void OnDlgSelectedOption_B3DE6972474467D84C234AA8757EBEAF(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30093_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30093_C")
	}
	static class UQuest_30093_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30093_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30093_C;

SDK_NAMESPACE_END
