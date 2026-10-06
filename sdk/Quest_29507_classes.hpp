#pragma once



// Package: Quest_29507

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29507.Quest_29507_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29507_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29507_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29507(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_75BD064D4356EC7734FC789A43538AEB();
	void OnStop_75BD064D4356EC7734FC789A43538AEB();
	void OnDlgClosed_570DB5C64FBF20004092EBAAF5F28251(int32 NPCId);
	void OnDlgSelectedOption_570DB5C64FBF20004092EBAAF5F28251(int32 NPCId);
	void OnSuccess_D448A1844B5E571F1D17A2BABD0E7A10(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29507_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29507_C")
	}
	static class UQuest_29507_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29507_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29507_C;

SDK_NAMESPACE_END
