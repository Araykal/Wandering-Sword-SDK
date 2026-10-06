#pragma once



// Package: Quest_28934

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28934.Quest_28934_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28934_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28934_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28934(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1C76A1644A1022F43CDA09B26824559A(bool bWinOrLose);
	void OnSuccess_88F6064944B891C88E098B81CB262B54(bool bWinOrLose);
	void OnSuccess_F5CECE134EB4BF772E5B188152E5D27C(bool bWinOrLose);
	void OnSuccess_53126DCF4887F4135A3159B2495D6194(bool bWinOrLose);
	void OnFinished_2FB025FA47CB4F3A57C3B6BB5A1BA0DC();
	void OnStop_2FB025FA47CB4F3A57C3B6BB5A1BA0DC();
	void OnDlgClosed_8CA576BE4BE666C070EAB4A060E94516(int32 NPCId);
	void OnDlgSelectedOption_8CA576BE4BE666C070EAB4A060E94516(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28934_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28934_C")
	}
	static class UQuest_28934_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28934_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28934_C;

SDK_NAMESPACE_END
