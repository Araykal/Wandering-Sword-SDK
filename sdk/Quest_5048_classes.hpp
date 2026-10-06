#pragma once



// Package: Quest_5048

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5048.Quest_5048_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5048_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5048_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5048(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_328BB33E43FAF013232D9EAE6668A866();
	void OnStop_328BB33E43FAF013232D9EAE6668A866();
	void OnDlgClosed_691B98AD4A34DC0CCA9A8B807C9FE21E(int32 NPCId);
	void OnDlgSelectedOption_691B98AD4A34DC0CCA9A8B807C9FE21E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5048_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5048_C")
	}
	static class UQuest_5048_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5048_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5048_C;

SDK_NAMESPACE_END
