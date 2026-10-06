#pragma once



// Package: Quest_5726

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5726.Quest_5726_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5726_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5726_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5726(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void HandleRequesting(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5726_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5726_C")
	}
	static class UQuest_5726_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5726_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5726_C;

SDK_NAMESPACE_END
