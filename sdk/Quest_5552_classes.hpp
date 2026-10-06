#pragma once



// Package: Quest_5552

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5552.Quest_5552_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5552_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5552_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5552(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8AD2474E4493A67D8FC9CAA5ED62826B();
	void OnFinished_A2D4AC3741CA9D443A40CBB6A203F593();
	void OnStop_A2D4AC3741CA9D443A40CBB6A203F593();
	void OnDlgClosed_911B9BDD418407A3110E88B445AEAA46(int32 NPCId);
	void OnDlgSelectedOption_911B9BDD418407A3110E88B445AEAA46(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5552_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5552_C")
	}
	static class UQuest_5552_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5552_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5552_C;

SDK_NAMESPACE_END
