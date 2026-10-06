#pragma once



// Package: Quest_16610

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16610.Quest_16610_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16610_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16610_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16610(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_0B4098E649BF31041E2BD2B50ACB9C76();
	void OnStop_0B4098E649BF31041E2BD2B50ACB9C76();
	void OnDlgClosed_C7ACA48A4E607B051578DEAF0ADEAC3D(int32 NPCId);
	void OnDlgSelectedOption_C7ACA48A4E607B051578DEAF0ADEAC3D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16610_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16610_C")
	}
	static class UQuest_16610_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16610_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16610_C;

SDK_NAMESPACE_END
