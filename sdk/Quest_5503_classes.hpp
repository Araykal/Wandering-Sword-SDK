#pragma once



// Package: Quest_5503

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5503.Quest_5503_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5503_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5503_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5503(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6E76F5274F89DFF59EACE48CA6DC21DF(bool bWinOrLose);
	void OnSuccess_E009DDAA4E34B6CBC5E0059C58B3A09F(bool bWinOrLose);
	void OnSuccess_1A357CDE47BD5E9A03BB8A85ABFA989D(bool bWinOrLose);
	void OnFinished_6F85E33549A048B55E54459EC57D22F5();
	void OnStop_6F85E33549A048B55E54459EC57D22F5();
	void OnDlgClosed_1524807943C7A13B1083C6B2B1BD60D1(int32 NPCId);
	void OnDlgSelectedOption_1524807943C7A13B1083C6B2B1BD60D1(int32 NPCId);
	void OnSuccess_FCE2F5C5417634BB6F03FEA5D1E9B802(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5503_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5503_C")
	}
	static class UQuest_5503_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5503_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5503_C;

SDK_NAMESPACE_END
