#pragma once



// Package: Quest_11870

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11870.Quest_11870_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11870_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11870_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11870(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F4E76AD34E18CEE6AFCE69A32A01CA5F();
	void OnStop_F4E76AD34E18CEE6AFCE69A32A01CA5F();
	void OnDlgClosed_7BF0321A41450FD055D11DAEC3EA1D88(int32 NPCId);
	void OnDlgSelectedOption_7BF0321A41450FD055D11DAEC3EA1D88(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11870_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11870_C")
	}
	static class UQuest_11870_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11870_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11870_C;

SDK_NAMESPACE_END
