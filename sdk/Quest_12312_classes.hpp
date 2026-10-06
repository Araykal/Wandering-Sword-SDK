#pragma once



// Package: Quest_12312

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12312.Quest_12312_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12312_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12312_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12312(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8E3B1ABB495889854EFA7BA20251C110();
	void OnStop_8E3B1ABB495889854EFA7BA20251C110();
	void OnDlgClosed_A96C2E6746079FC8379B7BBA8A5AEF20(int32 NPCId);
	void OnDlgSelectedOption_A96C2E6746079FC8379B7BBA8A5AEF20(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12312_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12312_C")
	}
	static class UQuest_12312_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12312_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12312_C;

SDK_NAMESPACE_END
