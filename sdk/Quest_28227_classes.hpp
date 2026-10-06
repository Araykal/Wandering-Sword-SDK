#pragma once



// Package: Quest_28227

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28227.Quest_28227_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28227_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28227_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28227(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_99C70B2847C3A4C4B746C68ADE50D5D2();
	void OnStop_99C70B2847C3A4C4B746C68ADE50D5D2();
	void OnDlgClosed_E34D38B344E5DA1046801999807F3458(int32 NPCId);
	void OnDlgSelectedOption_E34D38B344E5DA1046801999807F3458(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28227_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28227_C")
	}
	static class UQuest_28227_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28227_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28227_C;

SDK_NAMESPACE_END
