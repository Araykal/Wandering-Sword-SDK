#pragma once



// Package: Quest_14058

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14058.Quest_14058_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_14058_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14058_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_14058(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3E2FCEA54831F102BCB56B8D9F8FC161();
	void OnStop_3E2FCEA54831F102BCB56B8D9F8FC161();
	void OnDlgClosed_0278422B40190013AFEA3EB0DCE06F53(int32 NPCId);
	void OnDlgSelectedOption_0278422B40190013AFEA3EB0DCE06F53(int32 NPCId);
	void OnSuccess_AEA97ADB4F8843FBACDBC7AE9BEDD81B(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14058_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14058_C")
	}
	static class UQuest_14058_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14058_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14058_C;

SDK_NAMESPACE_END
