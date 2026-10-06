#pragma once



// Package: Quest_5051

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5051.Quest_5051_C
// 0x0040 (0x0280 - 0x0240)
class UQuest_5051_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5051_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_248[0x8];                                      // 0x0248(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Spawn_Transform;                                   // 0x0250(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)

public:
	void ExecuteUbergraph_Quest_5051(int32 EntryPoint);
	void HandleAcceptRequested(int32 NPCId);
	bool CanFinish(int32 InQuestId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5051_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5051_C")
	}
	static class UQuest_5051_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5051_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5051_C;

SDK_NAMESPACE_END
