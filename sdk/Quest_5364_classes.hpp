#pragma once



// Package: Quest_5364

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5364.Quest_5364_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5364_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5364_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5364(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3D08FD004E4D33CBA29771B740A9AAA5(bool bWinOrLose);
	void OnFinished_96678A7D484AB91DEAAD82BDBD05B5C8();
	void OnStop_96678A7D484AB91DEAAD82BDBD05B5C8();
	void OnDlgClosed_86D9E25143F5AE7281B68597574F631E(int32 NPCId);
	void OnDlgSelectedOption_86D9E25143F5AE7281B68597574F631E(int32 NPCId);
	void OnSuccess_07DB1CF042A3AA7319D83E8FC647A0E5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5364_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5364_C")
	}
	static class UQuest_5364_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5364_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5364_C;

SDK_NAMESPACE_END
