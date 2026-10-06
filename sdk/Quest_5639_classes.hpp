#pragma once



// Package: Quest_5639

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5639.Quest_5639_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5639_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5639_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5639(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FC7B94954D8D9D041DB15C934546CCCE();
	void OnStop_FC7B94954D8D9D041DB15C934546CCCE();
	void OnDlgClosed_16F2FD4942CA3245E5EBD5AE6B6828B9(int32 NPCId);
	void OnDlgSelectedOption_16F2FD4942CA3245E5EBD5AE6B6828B9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5639_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5639_C")
	}
	static class UQuest_5639_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5639_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5639_C;

SDK_NAMESPACE_END
