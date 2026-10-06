#pragma once



// Package: Quest_5862

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5862.Quest_5862_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5862_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5862_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5862(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D460C94F4FD018DA1FD00B94655FC04C();
	void OnStop_D460C94F4FD018DA1FD00B94655FC04C();
	void OnDlgClosed_63B8E1E44D506ED67B3E6A923876C516(int32 NPCId);
	void OnDlgSelectedOption_63B8E1E44D506ED67B3E6A923876C516(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5862_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5862_C")
	}
	static class UQuest_5862_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5862_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5862_C;

SDK_NAMESPACE_END
