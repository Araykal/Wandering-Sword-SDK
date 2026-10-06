#pragma once



// Package: Quest_32731

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_32731.Quest_32731_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_32731_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_32731_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_32731(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_60572CBE4A38AD491A7473B79C79024E();
	void OnStop_60572CBE4A38AD491A7473B79C79024E();
	void OnDlgClosed_F3A1CF7547F5611F805447AA004B76DD(int32 NPCId);
	void OnDlgSelectedOption_F3A1CF7547F5611F805447AA004B76DD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_32731_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_32731_C")
	}
	static class UQuest_32731_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_32731_C>();
	}
};
DUMPER7_ASSERTS_UQuest_32731_C;

SDK_NAMESPACE_END
