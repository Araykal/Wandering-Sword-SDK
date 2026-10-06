#pragma once



// Package: Quest_12672

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12672.Quest_12672_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12672_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12672_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12672(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4262BC214D149EBDD8A6B8AF5A747459(bool bWinOrLose);
	void OnFinished_C42BE2D24C30CB15194531B8DDE469C1();
	void OnStop_C42BE2D24C30CB15194531B8DDE469C1();
	void OnDlgClosed_BEAC4A2748C0A3AD40EEEFA22D2CFDE3(int32 NPCId);
	void OnDlgSelectedOption_BEAC4A2748C0A3AD40EEEFA22D2CFDE3(int32 NPCId);
	void OnSuccess_4FC7ED10499244A699A231A2D40B052E(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12672_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12672_C")
	}
	static class UQuest_12672_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12672_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12672_C;

SDK_NAMESPACE_END
