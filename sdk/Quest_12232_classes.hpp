#pragma once



// Package: Quest_12232

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12232.Quest_12232_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12232_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12232_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12232(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DF4D50934568F3CBDE3E6C8FECF406B8();
	void OnStop_DF4D50934568F3CBDE3E6C8FECF406B8();
	void OnDlgClosed_77F6BE044BA523F056C03684839030C6(int32 NPCId);
	void OnDlgSelectedOption_77F6BE044BA523F056C03684839030C6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12232_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12232_C")
	}
	static class UQuest_12232_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12232_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12232_C;

SDK_NAMESPACE_END
