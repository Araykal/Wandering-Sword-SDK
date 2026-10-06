#pragma once



// Package: Quest_12521

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12521.Quest_12521_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12521_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12521_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12521(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_969499004D4DD4CB80AE49AB04986DDF();
	void OnFinished_6F6D368C4D19681F73F28D8C09F343D2();
	void OnStop_6F6D368C4D19681F73F28D8C09F343D2();
	void OnDlgClosed_F73833784E804DF5C0AC6A9B81A66056(int32 NPCId);
	void OnDlgSelectedOption_F73833784E804DF5C0AC6A9B81A66056(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12521_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12521_C")
	}
	static class UQuest_12521_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12521_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12521_C;

SDK_NAMESPACE_END
