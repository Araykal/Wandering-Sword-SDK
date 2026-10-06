#pragma once



// Package: Quest_30065

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30065.Quest_30065_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30065_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30065_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30065(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_051058274C179615639D27A82D1690E0();
	void OnFinished_03D257034EE8AE6C90AF4B93A4CC9E59();
	void OnStop_03D257034EE8AE6C90AF4B93A4CC9E59();
	void OnDlgClosed_9788C2E34EFC24F4C7B8FEBB6D165E63(int32 NPCId);
	void OnDlgSelectedOption_9788C2E34EFC24F4C7B8FEBB6D165E63(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30065_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30065_C")
	}
	static class UQuest_30065_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30065_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30065_C;

SDK_NAMESPACE_END
