#pragma once



// Package: Quest_5804

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5804.Quest_5804_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5804_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5804_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5804(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_CF48352242D706E8B52DFDA9AC6E9BFE();
	void OnFinished_3D83B0FF462F3C1AC181FC80E66754F9();
	void OnStop_3D83B0FF462F3C1AC181FC80E66754F9();
	void OnDlgClosed_94B2DDD742551D4E256554925D86B00C(int32 NPCId);
	void OnDlgSelectedOption_94B2DDD742551D4E256554925D86B00C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5804_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5804_C")
	}
	static class UQuest_5804_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5804_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5804_C;

SDK_NAMESPACE_END
