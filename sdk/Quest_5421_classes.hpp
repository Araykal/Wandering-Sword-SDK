#pragma once



// Package: Quest_5421

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5421.Quest_5421_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5421_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5421_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5421(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2DAD13C745305DA4A87775A92C0DE24A(bool bWinOrLose);
	void OnSuccess_219B5AE44A1836C8295B548CA3F87FB3(bool bWinOrLose);
	void OnSuccess_E380CE03405BDE05C067F0B146B4DD1D(bool bWinOrLose);
	void OnFinished_081E66E34CE75A5367766E953312171B();
	void OnStop_081E66E34CE75A5367766E953312171B();
	void OnDlgClosed_C84338F249D96A032A4380819B05E2B4(int32 NPCId);
	void OnDlgSelectedOption_C84338F249D96A032A4380819B05E2B4(int32 NPCId);
	void OnSuccess_B0109FD043342D1EAEA9C788E151BBC5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5421_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5421_C")
	}
	static class UQuest_5421_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5421_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5421_C;

SDK_NAMESPACE_END
