#pragma once



// Package: Quest_29506

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29506.Quest_29506_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_29506_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29506_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29506(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_182E89844C53B323DD1017AA2DCDC0CC();
	void OnStop_182E89844C53B323DD1017AA2DCDC0CC();
	void OnDlgClosed_A54CB8724D1F7FE0DDAFAB9DB24A5263(int32 NPCId);
	void OnDlgSelectedOption_A54CB8724D1F7FE0DDAFAB9DB24A5263(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29506_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29506_C")
	}
	static class UQuest_29506_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29506_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29506_C;

SDK_NAMESPACE_END
