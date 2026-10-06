#pragma once



// Package: Quest_5506

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5506.Quest_5506_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5506_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5506_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5506(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9203FF63418811ED3BFFD894A358CC2E(bool bWinOrLose);
	void OnSuccess_265D6715436A6F639616F2ACDDECCCD3(bool bWinOrLose);
	void OnSuccess_13E947DC43ED2BE5518D6B8F2AC08317(bool bWinOrLose);
	void OnFinished_AF19538847186F5349887BA06AD94DAC();
	void OnStop_AF19538847186F5349887BA06AD94DAC();
	void OnDlgClosed_34ACCFC34875FC3E9324038EFB0F23DB(int32 NPCId);
	void OnDlgSelectedOption_34ACCFC34875FC3E9324038EFB0F23DB(int32 NPCId);
	void OnSuccess_101D9D5B48EA1FFFD2D173A3B7EC84E2(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5506_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5506_C")
	}
	static class UQuest_5506_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5506_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5506_C;

SDK_NAMESPACE_END
