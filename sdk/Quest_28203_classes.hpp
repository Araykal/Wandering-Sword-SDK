#pragma once



// Package: Quest_28203

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28203.Quest_28203_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28203_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28203_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28203(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_076A6D4E446E804C6CC76CB1B002C08A();
	void OnFinished_3CA43AF24DB394C1B5B2C69DDBAAA234();
	void OnStop_3CA43AF24DB394C1B5B2C69DDBAAA234();
	void OnDlgClosed_26E78AF74DFC62F43AC9E89EF50856E5(int32 NPCId);
	void OnDlgSelectedOption_26E78AF74DFC62F43AC9E89EF50856E5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28203_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28203_C")
	}
	static class UQuest_28203_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28203_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28203_C;

SDK_NAMESPACE_END
