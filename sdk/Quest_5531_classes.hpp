#pragma once



// Package: Quest_5531

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5531.Quest_5531_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5531_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5531_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5531(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A811420048EECD8EA19BA3A305B875D2();
	void OnFinished_53A7F10648C7658DB0D31FB3A0839075();
	void OnStop_53A7F10648C7658DB0D31FB3A0839075();
	void OnDlgClosed_1F00F4594F65ADFC6F21EBB672924308(int32 NPCId);
	void OnDlgSelectedOption_1F00F4594F65ADFC6F21EBB672924308(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5531_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5531_C")
	}
	static class UQuest_5531_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5531_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5531_C;

SDK_NAMESPACE_END
