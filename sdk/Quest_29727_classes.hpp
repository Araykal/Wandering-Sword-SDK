#pragma once



// Package: Quest_29727

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29727.Quest_29727_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29727_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29727_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29727(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A4DE32BD4F7FCC1C9830F4A19C5A6F85();
	void OnFinished_3C3F67A444FF7C057F1109B5913E318B();
	void OnStop_3C3F67A444FF7C057F1109B5913E318B();
	void OnDlgClosed_7650651C465A47F1A46A0D9C88384DB0(int32 NPCId);
	void OnDlgSelectedOption_7650651C465A47F1A46A0D9C88384DB0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29727_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29727_C")
	}
	static class UQuest_29727_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29727_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29727_C;

SDK_NAMESPACE_END
