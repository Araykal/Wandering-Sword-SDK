#pragma once



// Package: Quest_5337

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5337.Quest_5337_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5337_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5337_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5337(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_990149BC464951F45E69029FDEBF7EC6();
	void OnStop_990149BC464951F45E69029FDEBF7EC6();
	void OnDlgClosed_0C44A87A4DCB9DB730150088F483858F(int32 NPCId);
	void OnDlgSelectedOption_0C44A87A4DCB9DB730150088F483858F(int32 NPCId);
	void OnSuccess_964BDC85431DE986757930BC1EE7A1FE(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5337_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5337_C")
	}
	static class UQuest_5337_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5337_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5337_C;

SDK_NAMESPACE_END
