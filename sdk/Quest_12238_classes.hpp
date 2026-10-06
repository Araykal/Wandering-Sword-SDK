#pragma once



// Package: Quest_12238

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12238.Quest_12238_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12238_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12238_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12238(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6A72F37E4FC1D482E772CE951BA5B2A8();
	void OnStop_6A72F37E4FC1D482E772CE951BA5B2A8();
	void OnDlgClosed_8D94841B43AF48E33F1F2B967DC4566D(int32 NPCId);
	void OnDlgSelectedOption_8D94841B43AF48E33F1F2B967DC4566D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12238_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12238_C")
	}
	static class UQuest_12238_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12238_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12238_C;

SDK_NAMESPACE_END
