#pragma once



// Package: Quest_28716

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28716.Quest_28716_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28716_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28716_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28716(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_40063192451F27C195E533BFC686A543();
	void OnSuccess_FCED70F84FE7D03ADA591F9961F20BE4();
	void OnFinished_97596F5A48CE09933DAE0AB909D71918();
	void OnStop_97596F5A48CE09933DAE0AB909D71918();
	void OnDlgClosed_C88E71094DC41D31CFE2849DF7748D04(int32 NPCId);
	void OnDlgSelectedOption_C88E71094DC41D31CFE2849DF7748D04(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28716_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28716_C")
	}
	static class UQuest_28716_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28716_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28716_C;

SDK_NAMESPACE_END
