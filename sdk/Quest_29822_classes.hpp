#pragma once



// Package: Quest_29822

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29822.Quest_29822_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29822_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29822_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29822(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_35B8605F4A2577CBD284229632CB50A0(bool bWinOrLose);
	void OnFinished_93CD9F6447B0C446BF9DCAA5EA497CD8();
	void OnStop_93CD9F6447B0C446BF9DCAA5EA497CD8();
	void OnDlgClosed_3F63D0B74D5F0D2D84118E88E71B4EC3(int32 NPCId);
	void OnDlgSelectedOption_3F63D0B74D5F0D2D84118E88E71B4EC3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29822_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29822_C")
	}
	static class UQuest_29822_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29822_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29822_C;

SDK_NAMESPACE_END
