#pragma once



// Package: Quest_28041

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28041.Quest_28041_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28041_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28041_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isWear4066;                                        // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isWear4065;                                        // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Quest_28041(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId);
	void OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId);
	void OnFinished_27543BA14483D629EC86D8A8AD63777A();
	void OnStop_27543BA14483D629EC86D8A8AD63777A();
	void OnSuccess_4FC58BD14A64C51722F048A437A00352();
	void OnSuccess_428C00044CB40FC28F2BEA884220AA6C();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28041_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28041_C")
	}
	static class UQuest_28041_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28041_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28041_C;

SDK_NAMESPACE_END
