#pragma once



// Package: Quest_5003

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5003.Quest_5003_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5003_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5003_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5003(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AE53A04D4A5143CE222CECA43EAED28A();
	void OnStop_AE53A04D4A5143CE222CECA43EAED28A();
	void OnDlgClosed_095FEFB24ADF0620DE98AD8906FF5054(int32 NPCId);
	void OnDlgSelectedOption_095FEFB24ADF0620DE98AD8906FF5054(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5003_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5003_C")
	}
	static class UQuest_5003_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5003_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5003_C;

SDK_NAMESPACE_END
