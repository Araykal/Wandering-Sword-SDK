#pragma once



// Package: Quest_7075

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7075.Quest_7075_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_7075_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7075_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_7075(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DECDDCAE4D42D305212B89BC8A7D9EAF();
	void OnStop_DECDDCAE4D42D305212B89BC8A7D9EAF();
	void OnDlgClosed_6F22A4B9480E2F27AE251F913224D4FA(int32 NPCId);
	void OnDlgSelectedOption_6F22A4B9480E2F27AE251F913224D4FA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7075_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7075_C")
	}
	static class UQuest_7075_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7075_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7075_C;

SDK_NAMESPACE_END
