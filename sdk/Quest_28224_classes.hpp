#pragma once



// Package: Quest_28224

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28224.Quest_28224_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28224_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28224_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28224(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_18A6408D48368AA2D976AB828FF56886();
	void OnStop_18A6408D48368AA2D976AB828FF56886();
	void OnDlgClosed_611D1C3943D9C0A3496979BA3278A8A5(int32 NPCId);
	void OnDlgSelectedOption_611D1C3943D9C0A3496979BA3278A8A5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28224_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28224_C")
	}
	static class UQuest_28224_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28224_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28224_C;

SDK_NAMESPACE_END
