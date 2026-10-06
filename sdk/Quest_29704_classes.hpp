#pragma once



// Package: Quest_29704

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29704.Quest_29704_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29704_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29704_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29704(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6F4558344C7C2F5BD353969591AB2155(bool bWinOrLose);
	void OnFinished_3E6F15C14E20BC79C8845F973280E099();
	void OnStop_3E6F15C14E20BC79C8845F973280E099();
	void OnDlgClosed_8025DF8447D2D085021F0D9452BFDB0D(int32 NPCId);
	void OnDlgSelectedOption_8025DF8447D2D085021F0D9452BFDB0D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29704_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29704_C")
	}
	static class UQuest_29704_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29704_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29704_C;

SDK_NAMESPACE_END
