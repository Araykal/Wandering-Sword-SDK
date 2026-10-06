#pragma once



// Package: Quest_11878

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11878.Quest_11878_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11878_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11878_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11878(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2EC30DBA45A260522BC30FB4D8B62E86(bool bWinOrLose);
	void OnFinished_6361F41D45D69F518982BB98D5673089();
	void OnStop_6361F41D45D69F518982BB98D5673089();
	void OnDlgClosed_E1A24FBD4B8025404026CEA798133C5A(int32 NPCId);
	void OnDlgSelectedOption_E1A24FBD4B8025404026CEA798133C5A(int32 NPCId);
	void OnSuccess_8C2D350E4BE9758F8204BAAF0EFF63E8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11878_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11878_C")
	}
	static class UQuest_11878_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11878_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11878_C;

SDK_NAMESPACE_END
