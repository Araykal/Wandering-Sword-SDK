#pragma once



// Package: Quest_28915

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28915.Quest_28915_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28915_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28915_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28915(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5F34163045E7375EE4009E983AF41C2D();
	void OnStop_5F34163045E7375EE4009E983AF41C2D();
	void OnDlgClosed_DE1858E44B9A21BBB70B5A982CDA1C3A(int32 NPCId);
	void OnDlgSelectedOption_DE1858E44B9A21BBB70B5A982CDA1C3A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28915_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28915_C")
	}
	static class UQuest_28915_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28915_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28915_C;

SDK_NAMESPACE_END
