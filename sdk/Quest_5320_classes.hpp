#pragma once



// Package: Quest_5320

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5320.Quest_5320_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5320_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5320_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5320(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DC51537940CAA4AABDFBF9976F142E34(bool bWinOrLose);
	void OnFinished_8D4E90004652457396221FA8C46BF646();
	void OnStop_8D4E90004652457396221FA8C46BF646();
	void OnDlgClosed_AD32E9F24EEDA1332EBD75B7A460D5EF(int32 NPCId);
	void OnDlgSelectedOption_AD32E9F24EEDA1332EBD75B7A460D5EF(int32 NPCId);
	void OnSuccess_0F48D4AA463E2D0F6E1002BA914C11A9(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5320_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5320_C")
	}
	static class UQuest_5320_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5320_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5320_C;

SDK_NAMESPACE_END
