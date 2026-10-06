#pragma once



// Package: Quest_1001

#include "Basic.hpp"

#include "DS_YuShui_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_1001.Quest_1001_C
// 0x0030 (0x0270 - 0x0240)
class UQuest_1001_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_1001_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FDS_YuShui>                     玉髓;                                              // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 概率;                                              // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Index_0;                                           // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_1001(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_1001_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_1001_C")
	}
	static class UQuest_1001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_1001_C>();
	}
};
DUMPER7_ASSERTS_UQuest_1001_C;

SDK_NAMESPACE_END
