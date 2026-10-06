#pragma once



// Package: Quest_30051

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30051.Quest_30051_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30051_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30051_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30051(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AC9468A24FE2A347707127AA3DA653E3();
	void OnStop_AC9468A24FE2A347707127AA3DA653E3();
	void OnDlgClosed_7FA05AC14F4DA6FFAF6FFA800301F638(int32 NPCId);
	void OnDlgSelectedOption_7FA05AC14F4DA6FFAF6FFA800301F638(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30051_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30051_C")
	}
	static class UQuest_30051_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30051_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30051_C;

SDK_NAMESPACE_END
