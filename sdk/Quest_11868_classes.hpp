#pragma once



// Package: Quest_11868

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11868.Quest_11868_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11868_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11868_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11868(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6CD851384DFD1799575DEFB8D42FEFA8(bool bWinOrLose);
	void OnFinished_5BA1E1DC4AE42516981929811655FFB7();
	void OnStop_5BA1E1DC4AE42516981929811655FFB7();
	void OnDlgClosed_7D30E18F49394302E39CF496A3429AED(int32 NPCId);
	void OnDlgSelectedOption_7D30E18F49394302E39CF496A3429AED(int32 NPCId);
	void OnSuccess_B438F8364D4B20E2AAC86CA9754C4CC1(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11868_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11868_C")
	}
	static class UQuest_11868_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11868_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11868_C;

SDK_NAMESPACE_END
