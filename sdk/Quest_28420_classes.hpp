#pragma once



// Package: Quest_28420

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28420.Quest_28420_C
// 0x0028 (0x0268 - 0x0240)
class UQuest_28420_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28420_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Msg;                                               // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_28420(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_F4FC95CE4392A41177DD6FBC9202F8A4(int32 NPCId);
	void OnDlgSelectedOption_F4FC95CE4392A41177DD6FBC9202F8A4(int32 NPCId);
	void OnFinished_2943CE084CB44B792BF29A95C3326B50();
	void OnStop_2943CE084CB44B792BF29A95C3326B50();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28420_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28420_C")
	}
	static class UQuest_28420_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28420_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28420_C;

SDK_NAMESPACE_END
