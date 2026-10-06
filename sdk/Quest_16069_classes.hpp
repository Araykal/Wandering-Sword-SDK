#pragma once



// Package: Quest_16069

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16069.Quest_16069_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16069_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16069_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16069(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0BC317244FBA1E5EE86E7DA0E8637F68(bool bWinOrLose);
	void OnSuccess_7C3E3C574646425FBA70CA99562C1AB7(bool bWinOrLose);
	void OnSuccess_7911E3F348ECB8CC29BE7E8705939175(bool bWinOrLose);
	void OnSuccess_2733AEBA4DBE0925D27A1FBE3DA531D1(bool bWinOrLose);
	void OnFinished_380592134D2AC8004FDD3C8EC77CF2C8();
	void OnStop_380592134D2AC8004FDD3C8EC77CF2C8();
	void OnDlgClosed_58098C684E444F512FAF08AF75E563D3(int32 NPCId);
	void OnDlgSelectedOption_58098C684E444F512FAF08AF75E563D3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16069_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16069_C")
	}
	static class UQuest_16069_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16069_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16069_C;

SDK_NAMESPACE_END
