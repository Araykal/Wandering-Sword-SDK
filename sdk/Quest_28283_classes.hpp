#pragma once



// Package: Quest_28283

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28283.Quest_28283_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28283_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28283_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28283(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_66B9D41748D716CED72F64A05F0485E6();
	void OnStop_66B9D41748D716CED72F64A05F0485E6();
	void OnDlgClosed_BE12A5BE402CFF4188BBA3B3726D2760(int32 NPCId);
	void OnDlgSelectedOption_BE12A5BE402CFF4188BBA3B3726D2760(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28283_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28283_C")
	}
	static class UQuest_28283_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28283_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28283_C;

SDK_NAMESPACE_END
