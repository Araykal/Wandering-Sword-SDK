#pragma once



// Package: Quest_5250

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5250.Quest_5250_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5250_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5250_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5250(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_34DF7FFD4191E3568728EEAC6A3A3D26(bool bWinOrLose);
	void OnSuccess_CA721C8A4F4A187332B4ADB53DE56A78(bool bWinOrLose);
	void OnSuccess_1D6D032742567A9094AB45BBF00BCCC8(bool bWinOrLose);
	void OnFinished_8A128A654E2FD385DD1D9B984A7B46C9();
	void OnStop_8A128A654E2FD385DD1D9B984A7B46C9();
	void OnDlgClosed_18B37F934AB02C33DC13D38095ED64E1(int32 NPCId);
	void OnDlgSelectedOption_18B37F934AB02C33DC13D38095ED64E1(int32 NPCId);
	void OnSuccess_C67F179E44AC97BB4DFC54A30939F4B8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5250_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5250_C")
	}
	static class UQuest_5250_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5250_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5250_C;

SDK_NAMESPACE_END
