#pragma once



// Package: Quest_28931

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28931.Quest_28931_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28931_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28931_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28931(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4C055969498A6B4D77E35CAE9959E403();
	void OnStop_4C055969498A6B4D77E35CAE9959E403();
	void OnDlgClosed_5B5059354F04D0374A80A5B62D74802B(int32 NPCId);
	void OnDlgSelectedOption_5B5059354F04D0374A80A5B62D74802B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28931_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28931_C")
	}
	static class UQuest_28931_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28931_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28931_C;

SDK_NAMESPACE_END
