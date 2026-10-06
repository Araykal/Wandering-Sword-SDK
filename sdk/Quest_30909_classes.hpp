#pragma once



// Package: Quest_30909

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30909.Quest_30909_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30909_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30909_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30909(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_642F6CE746F3FFCCFEAFDA9CA5511D63();
	void OnStop_642F6CE746F3FFCCFEAFDA9CA5511D63();
	void OnDlgClosed_2C96BFC441DF639C0FDB9D96F6E30461(int32 NPCId);
	void OnDlgSelectedOption_2C96BFC441DF639C0FDB9D96F6E30461(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30909_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30909_C")
	}
	static class UQuest_30909_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30909_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30909_C;

SDK_NAMESPACE_END
