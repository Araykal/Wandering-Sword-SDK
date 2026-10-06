#pragma once



// Package: Quest_5340

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5340.Quest_5340_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5340_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5340_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5340(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0F3C0FAB4899B7E044DEB090F3952642();
	void OnStop_0F3C0FAB4899B7E044DEB090F3952642();
	void OnDlgClosed_1F4E8FED4B1F5491E2F26EB4C2523967(int32 NPCId);
	void OnDlgSelectedOption_1F4E8FED4B1F5491E2F26EB4C2523967(int32 NPCId);
	void OnSuccess_6270728D4666168B6AF7CDB85174B340(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5340_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5340_C")
	}
	static class UQuest_5340_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5340_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5340_C;

SDK_NAMESPACE_END
