#pragma once



// Package: Quest_5252

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5252.Quest_5252_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5252_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5252_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5252(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_EC16A80444F3C2E3203F7695CD6D3147();
	void OnStop_EC16A80444F3C2E3203F7695CD6D3147();
	void OnDlgClosed_313A3EB6434CB1608A4758936A767C0C(int32 NPCId);
	void OnDlgSelectedOption_313A3EB6434CB1608A4758936A767C0C(int32 NPCId);
	void OnSuccess_7A4B7FD245172120C0AB489C0576F759(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5252_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5252_C")
	}
	static class UQuest_5252_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5252_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5252_C;

SDK_NAMESPACE_END
