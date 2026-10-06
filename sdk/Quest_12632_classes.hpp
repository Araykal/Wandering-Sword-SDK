#pragma once



// Package: Quest_12632

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12632.Quest_12632_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12632_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12632_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12632(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D122B93F45F1C225951B0A9F96B87402();
	void OnStop_D122B93F45F1C225951B0A9F96B87402();
	void OnDlgClosed_9CA688B942853C99786EC6A967371EB9(int32 NPCId);
	void OnDlgSelectedOption_9CA688B942853C99786EC6A967371EB9(int32 NPCId);
	void OnSuccess_AFFE1EE1476E861760932AAF45C559A8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12632_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12632_C")
	}
	static class UQuest_12632_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12632_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12632_C;

SDK_NAMESPACE_END
