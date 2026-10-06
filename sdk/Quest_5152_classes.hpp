#pragma once



// Package: Quest_5152

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5152.Quest_5152_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5152_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5152_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5152(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FDAC524849E221665A1053B573949A31();
	void OnFinished_5F128FB54F0C5414193899B88B5475DC();
	void OnStop_5F128FB54F0C5414193899B88B5475DC();
	void OnDlgClosed_F1C10BFF4F6DCBF6D889A6BBCE07134B(int32 NPCId);
	void OnDlgSelectedOption_F1C10BFF4F6DCBF6D889A6BBCE07134B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5152_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5152_C")
	}
	static class UQuest_5152_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5152_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5152_C;

SDK_NAMESPACE_END
