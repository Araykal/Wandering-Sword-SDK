#pragma once



// Package: Quest_28313

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28313.Quest_28313_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28313_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28313_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28313(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_ECE462DA430F64851B5332A5ECA7F81D();
	void OnFinished_4690B909437873EBDB5607A33B798DF5();
	void OnStop_4690B909437873EBDB5607A33B798DF5();
	void OnDlgClosed_F0BC27C64CFD362517D29898B7E7C9EE(int32 NPCId);
	void OnDlgSelectedOption_F0BC27C64CFD362517D29898B7E7C9EE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28313_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28313_C")
	}
	static class UQuest_28313_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28313_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28313_C;

SDK_NAMESPACE_END
