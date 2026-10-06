#pragma once



// Package: Quest_5806

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5806.Quest_5806_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5806_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5806_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5806(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D5413C1448A42F7DAC2B81A04A82A06D(bool bWinOrLose);
	void OnSuccess_11A4E11E43B36796B812A89C14ADC063(bool bWinOrLose);
	void OnSuccess_F3BDCC834DAE8B6574D7918AAE6EE1A0(bool bWinOrLose);
	void OnFinished_A355E10F453DB721D642BDB51E0A9878();
	void OnStop_A355E10F453DB721D642BDB51E0A9878();
	void OnDlgClosed_AA6AF6F747860E199296B59C7103E9A1(int32 NPCId);
	void OnDlgSelectedOption_AA6AF6F747860E199296B59C7103E9A1(int32 NPCId);
	void OnSuccess_0F6918CE431A30AF660F0B9272D4AFB5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5806_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5806_C")
	}
	static class UQuest_5806_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5806_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5806_C;

SDK_NAMESPACE_END
