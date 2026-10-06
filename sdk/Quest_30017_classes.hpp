#pragma once



// Package: Quest_30017

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30017.Quest_30017_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30017_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30017_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30017(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C901740145C72F70682EE9A5DB98AF13(bool bWinOrLose);
	void OnFinished_D56C3F6E4C3565F8FA793FAC643FC546();
	void OnStop_D56C3F6E4C3565F8FA793FAC643FC546();
	void OnDlgClosed_D8FA03B846F853DB13257481E99934E1(int32 NPCId);
	void OnDlgSelectedOption_D8FA03B846F853DB13257481E99934E1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30017_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30017_C")
	}
	static class UQuest_30017_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30017_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30017_C;

SDK_NAMESPACE_END
