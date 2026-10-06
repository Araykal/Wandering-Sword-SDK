#pragma once



// Package: Quest_5582

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5582.Quest_5582_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5582_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5582_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5582(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_5FCE8D654A0DE7C9BC354EB92C8D224A();
	void OnFinished_32E3F1404E3F01975AE240BDFE3EFD17();
	void OnStop_32E3F1404E3F01975AE240BDFE3EFD17();
	void OnDlgClosed_1ED552B64E5387F8FC01B1A3D4C0597A(int32 NPCId);
	void OnDlgSelectedOption_1ED552B64E5387F8FC01B1A3D4C0597A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5582_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5582_C")
	}
	static class UQuest_5582_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5582_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5582_C;

SDK_NAMESPACE_END
