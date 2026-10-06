#pragma once



// Package: Quest_28282

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28282.Quest_28282_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28282_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28282_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28282(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FFFA68864F18B1ECF1694A86CECF514D();
	void OnStop_FFFA68864F18B1ECF1694A86CECF514D();
	void OnDlgClosed_6AB1B14848F102B61CC95ABD352C6A15(int32 NPCId);
	void OnDlgSelectedOption_6AB1B14848F102B61CC95ABD352C6A15(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28282_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28282_C")
	}
	static class UQuest_28282_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28282_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28282_C;

SDK_NAMESPACE_END
