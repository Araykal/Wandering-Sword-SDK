#pragma once



// Package: Quest_5236

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5236.Quest_5236_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5236_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5236_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5236(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D780CD5A451261E4F1C2AA91D3E75100(bool bWinOrLose);
	void OnSuccess_7DDDF5A24A25FA9DCE5795A48116C6FF(bool bWinOrLose);
	void OnSuccess_5EBB76D349DD20B7FD391784CF3B3B65(bool bWinOrLose);
	void OnFinished_08BF15424480A3C2EC37F4935C2DA8EE();
	void OnStop_08BF15424480A3C2EC37F4935C2DA8EE();
	void OnDlgClosed_FB77EF4A49D07CC7A4A4888982324B65(int32 NPCId);
	void OnDlgSelectedOption_FB77EF4A49D07CC7A4A4888982324B65(int32 NPCId);
	void OnSuccess_F2CE126840CC6474E629589EED9AA588(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5236_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5236_C")
	}
	static class UQuest_5236_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5236_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5236_C;

SDK_NAMESPACE_END
