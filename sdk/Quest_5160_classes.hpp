#pragma once



// Package: Quest_5160

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5160.Quest_5160_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5160_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5160_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5160(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_81DCCB0C4A8E5233CF606E8F895DE644(bool bWinOrLose);
	void OnSuccess_E1B30F2B4714FD957EBA7A86B29FD6D3(bool bWinOrLose);
	void OnSuccess_80C8A6FB4D2833F98F68D08C1E231F0A(bool bWinOrLose);
	void OnFinished_7980FB424094C8666297DEBC38DE1D9F();
	void OnStop_7980FB424094C8666297DEBC38DE1D9F();
	void OnDlgClosed_5AA471BE46C133E4EFC41DB28ECF3A75(int32 NPCId);
	void OnDlgSelectedOption_5AA471BE46C133E4EFC41DB28ECF3A75(int32 NPCId);
	void OnSuccess_B8FE959947CAEF0D412446A198D2ADBE(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5160_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5160_C")
	}
	static class UQuest_5160_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5160_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5160_C;

SDK_NAMESPACE_END
