#pragma once



// Package: Quest_11387

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11387.Quest_11387_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11387_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11387_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11387(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C9C69C7A4F6B92109585B69D2C06774B();
	void OnStop_C9C69C7A4F6B92109585B69D2C06774B();
	void OnDlgClosed_4ACC46914154E81D8FAD52822A76927C(int32 NPCId);
	void OnDlgSelectedOption_4ACC46914154E81D8FAD52822A76927C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11387_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11387_C")
	}
	static class UQuest_11387_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11387_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11387_C;

SDK_NAMESPACE_END
