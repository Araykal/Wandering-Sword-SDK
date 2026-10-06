#pragma once



// Package: Quest_5154

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5154.Quest_5154_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5154_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5154_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5154(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_92F9D9D844490C204ED091B66CDAF1DE();
	void OnStop_92F9D9D844490C204ED091B66CDAF1DE();
	void OnDlgClosed_929B9A64492133F242245CB131F8DDE9(int32 NPCId);
	void OnDlgSelectedOption_929B9A64492133F242245CB131F8DDE9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5154_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5154_C")
	}
	static class UQuest_5154_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5154_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5154_C;

SDK_NAMESPACE_END
