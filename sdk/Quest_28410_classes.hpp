#pragma once



// Package: Quest_28410

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28410.Quest_28410_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28410_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28410_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28410(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_112DDC2443E443DB46C78CB74A4243FB();
	void OnStop_112DDC2443E443DB46C78CB74A4243FB();
	void OnDlgClosed_49E48BB14F551D66415513B516633F47(int32 NPCId);
	void OnDlgSelectedOption_49E48BB14F551D66415513B516633F47(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28410_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28410_C")
	}
	static class UQuest_28410_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28410_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28410_C;

SDK_NAMESPACE_END
