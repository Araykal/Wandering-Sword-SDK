#pragma once



// Package: Quest_7083

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7083.Quest_7083_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7083_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7083_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7083(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7F22FB684B923807C16EEB96C305AC1D(bool bWinOrLose);
	void OnSuccess_A1EAC3C147D4A0C383C42C90CF3BFBE8(bool bWinOrLose);
	void OnSuccess_9097878A480B7EA7D4CF05858D4440A0(bool bWinOrLose);
	void OnFinished_6A003E1F450C134BF0B8CEA9BD200942();
	void OnStop_6A003E1F450C134BF0B8CEA9BD200942();
	void OnDlgClosed_A43C6307472786F2A89E50BD2C43CFCA(int32 NPCId);
	void OnDlgSelectedOption_A43C6307472786F2A89E50BD2C43CFCA(int32 NPCId);
	void OnSuccess_3A5868B8418CC562EA08CEAFE527D523(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7083_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7083_C")
	}
	static class UQuest_7083_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7083_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7083_C;

SDK_NAMESPACE_END
