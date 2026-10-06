#pragma once



// Package: Quest_11607

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11607.Quest_11607_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11607_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11607_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11607(int32 EntryPoint);
	void CustomEvent(int32 NPCId);
	void HandleFinishing(int32 NPCId);
	void OnFinished_282FA8324D6D3464E3B66885A45EA7B1();
	void OnStop_282FA8324D6D3464E3B66885A45EA7B1();
	void OnDlgClosed_9A4A05E149B5A4A373A225BDEBFD949C(int32 NPCId);
	void OnDlgSelectedOption_9A4A05E149B5A4A373A225BDEBFD949C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11607_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11607_C")
	}
	static class UQuest_11607_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11607_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11607_C;

SDK_NAMESPACE_END
