#pragma once



// Package: Quest_30642

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30642.Quest_30642_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30642_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30642_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30642(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4B90C2314C7FC77E7436BCA51B3AA59C();
	void OnFinished_6174350549B9F101FAD3868502C29584();
	void OnStop_6174350549B9F101FAD3868502C29584();
	void OnDlgClosed_5CDF08CE484FB091022C5E84902D414C(int32 NPCId);
	void OnDlgSelectedOption_5CDF08CE484FB091022C5E84902D414C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30642_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30642_C")
	}
	static class UQuest_30642_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30642_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30642_C;

SDK_NAMESPACE_END
