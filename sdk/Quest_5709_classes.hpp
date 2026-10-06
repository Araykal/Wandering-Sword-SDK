#pragma once



// Package: Quest_5709

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5709.Quest_5709_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5709_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5709_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5709(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0ABE5FAA4EBAD9A9F99E4991CEF96EF6();
	void OnStop_0ABE5FAA4EBAD9A9F99E4991CEF96EF6();
	void OnDlgClosed_9920D27743718CF6FDAD26987B2D02FA(int32 NPCId);
	void OnDlgSelectedOption_9920D27743718CF6FDAD26987B2D02FA(int32 NPCId);
	void OnSuccess_E6C7A58B4640B252B89FBF8E99A43428(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5709_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5709_C")
	}
	static class UQuest_5709_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5709_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5709_C;

SDK_NAMESPACE_END
