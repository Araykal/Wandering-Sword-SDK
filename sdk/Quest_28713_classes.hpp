#pragma once



// Package: Quest_28713

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28713.Quest_28713_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28713_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28713_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28713(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D8636E884D036530F43B168FA47AC64F();
	void OnStop_D8636E884D036530F43B168FA47AC64F();
	void OnDlgClosed_ABB836AC471B64819AA9B39CFCE7AEB3(int32 NPCId);
	void OnDlgSelectedOption_ABB836AC471B64819AA9B39CFCE7AEB3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28713_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28713_C")
	}
	static class UQuest_28713_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28713_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28713_C;

SDK_NAMESPACE_END
