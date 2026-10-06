#pragma once



// Package: Quest_28745

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28745.Quest_28745_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28745_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28745_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28745(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E13996C24F0DE8AA33CD1280536D34D2();
	void OnFinished_EA5A6CB84B144BECB2226B9E0502EE84();
	void OnStop_EA5A6CB84B144BECB2226B9E0502EE84();
	void OnDlgClosed_9E8F455844B461F98128908B77986DB9(int32 NPCId);
	void OnDlgSelectedOption_9E8F455844B461F98128908B77986DB9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28745_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28745_C")
	}
	static class UQuest_28745_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28745_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28745_C;

SDK_NAMESPACE_END
