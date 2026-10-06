#pragma once



// Package: Quest_12269

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12269.Quest_12269_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12269_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12269_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12269(int32 EntryPoint);
	void 好感度();
	void HandleFinishing(int32 NPCId);
	void OnFinished_F812EDCA471BD2217B9C118D7FF25CC5();
	void OnStop_F812EDCA471BD2217B9C118D7FF25CC5();
	void OnDlgClosed_29C600E24C3B5838649A5BA89C5DF516(int32 NPCId);
	void OnDlgSelectedOption_29C600E24C3B5838649A5BA89C5DF516(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12269_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12269_C")
	}
	static class UQuest_12269_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12269_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12269_C;

SDK_NAMESPACE_END
