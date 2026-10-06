#pragma once



// Package: Quest_30153

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30153.Quest_30153_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30153_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30153_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30153(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2E58843647B097B75DFEF0A98F7CE5F3();
	void OnFinished_9F2EA734467079457A4EF4A8A986017F();
	void OnStop_9F2EA734467079457A4EF4A8A986017F();
	void OnDlgClosed_B8FC344045AD8CD903655ABE43E13E87(int32 NPCId);
	void OnDlgSelectedOption_B8FC344045AD8CD903655ABE43E13E87(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30153_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30153_C")
	}
	static class UQuest_30153_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30153_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30153_C;

SDK_NAMESPACE_END
