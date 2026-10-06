#pragma once



// Package: Quest_28402

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28402.Quest_28402_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28402_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28402_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28402(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_09F18C414DD6683DF97AF091D81ED9D9();
	void OnStop_09F18C414DD6683DF97AF091D81ED9D9();
	void OnDlgClosed_B515819546D4B560D7901D8A302FBBC7(int32 NPCId);
	void OnDlgSelectedOption_B515819546D4B560D7901D8A302FBBC7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28402_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28402_C")
	}
	static class UQuest_28402_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28402_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28402_C;

SDK_NAMESPACE_END
