#pragma once



// Package: Quest_28421

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28421.Quest_28421_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28421_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28421_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28421(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1AAF3E974544056B82A3BDA52F149A82();
	void OnStop_1AAF3E974544056B82A3BDA52F149A82();
	void OnDlgClosed_EBF301514C0B58D64BBB9CA55C261191(int32 NPCId);
	void OnDlgSelectedOption_EBF301514C0B58D64BBB9CA55C261191(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28421_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28421_C")
	}
	static class UQuest_28421_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28421_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28421_C;

SDK_NAMESPACE_END
