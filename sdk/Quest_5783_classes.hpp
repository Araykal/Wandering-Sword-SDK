#pragma once



// Package: Quest_5783

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5783.Quest_5783_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5783_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5783_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5783(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_117A7B804FC5CB8660B16CA515BE218F();
	void OnFinished_CA6FC7CB4D358751B8B44D8E96400E3E();
	void OnStop_CA6FC7CB4D358751B8B44D8E96400E3E();
	void OnDlgClosed_E17432B247B4ED3868BEA09125EAF5FC(int32 NPCId);
	void OnDlgSelectedOption_E17432B247B4ED3868BEA09125EAF5FC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5783_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5783_C")
	}
	static class UQuest_5783_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5783_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5783_C;

SDK_NAMESPACE_END
