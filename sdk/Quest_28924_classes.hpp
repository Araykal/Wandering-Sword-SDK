#pragma once



// Package: Quest_28924

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28924.Quest_28924_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28924_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28924_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28924(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2BF4CA164BBBA9C4804F468F5B57A8B7(bool bWinOrLose);
	void OnSuccess_10E1AAA34A83FF93273F7180EADC6FAC(bool bWinOrLose);
	void OnSuccess_10C3D4404F2ABDEFB0186F8F522A088E(bool bWinOrLose);
	void OnSuccess_5979FF77428A464A6EF0E9B1279D4FCE(bool bWinOrLose);
	void OnFinished_120F9AF8413C677C9FF6B58FB9F42AD3();
	void OnStop_120F9AF8413C677C9FF6B58FB9F42AD3();
	void OnDlgClosed_A0F814254F8655F53F31579481832BF9(int32 NPCId);
	void OnDlgSelectedOption_A0F814254F8655F53F31579481832BF9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28924_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28924_C")
	}
	static class UQuest_28924_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28924_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28924_C;

SDK_NAMESPACE_END
