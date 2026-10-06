#pragma once



// Package: Quest_7034

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7034.Quest_7034_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7034_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7034_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7034(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AB9C7F92415A19E13BC19FB776AD7BFB();
	void OnStop_AB9C7F92415A19E13BC19FB776AD7BFB();
	void OnDlgClosed_D662E365445071E42E3C59AF0EDDA8FC(int32 NPCId);
	void OnDlgSelectedOption_D662E365445071E42E3C59AF0EDDA8FC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7034_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7034_C")
	}
	static class UQuest_7034_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7034_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7034_C;

SDK_NAMESPACE_END
