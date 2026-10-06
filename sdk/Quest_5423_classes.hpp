#pragma once



// Package: Quest_5423

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5423.Quest_5423_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5423_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5423_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5423(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8227CC8B4D802798F154D2B868700499(bool bWinOrLose);
	void OnSuccess_8CDD7F444F850D364C14D2969A337B10(bool bWinOrLose);
	void OnSuccess_F72E9CCD4C1EEEA2CF358DAE5241EFDF(bool bWinOrLose);
	void OnFinished_46DC369B40041268E40DBC8D30460267();
	void OnStop_46DC369B40041268E40DBC8D30460267();
	void OnDlgClosed_2526997742A3CFDEBDC5B2848989C1B8(int32 NPCId);
	void OnDlgSelectedOption_2526997742A3CFDEBDC5B2848989C1B8(int32 NPCId);
	void OnSuccess_E4415EBC49F64F3EC2CAF28723F71ED9(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5423_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5423_C")
	}
	static class UQuest_5423_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5423_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5423_C;

SDK_NAMESPACE_END
