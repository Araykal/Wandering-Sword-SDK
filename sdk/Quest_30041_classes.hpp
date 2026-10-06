#pragma once



// Package: Quest_30041

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30041.Quest_30041_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30041_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30041_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30041(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AB8C0D59437BE2FD9F2C4E83F6CC5523();
	void OnFinished_A537180042D2B941CA6A0AAC684D00A7();
	void OnStop_A537180042D2B941CA6A0AAC684D00A7();
	void OnDlgClosed_BBDB251545DCB09536FAD19C6ED12E58(int32 NPCId);
	void OnDlgSelectedOption_BBDB251545DCB09536FAD19C6ED12E58(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30041_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30041_C")
	}
	static class UQuest_30041_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30041_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30041_C;

SDK_NAMESPACE_END
