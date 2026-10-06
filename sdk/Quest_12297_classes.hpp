#pragma once



// Package: Quest_12297

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12297.Quest_12297_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12297_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12297_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12297(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D3E95EB04D4D24487091FB95BD176691(bool bWinOrLose);
	void OnSuccess_04D6484240DD30DEABB98EAE1CAD886B(bool bWinOrLose);
	void OnSuccess_452E25564F487771FF35968732545875(bool bWinOrLose);
	void OnFinished_31FF607147E18D7E4A21A48A457ADC9F();
	void OnStop_31FF607147E18D7E4A21A48A457ADC9F();
	void OnDlgClosed_6AAB42D040EA3162076DBEA105CD17DD(int32 NPCId);
	void OnDlgSelectedOption_6AAB42D040EA3162076DBEA105CD17DD(int32 NPCId);
	void OnSuccess_060608DA43B73BDF6EE5EBABFE661505(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12297_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12297_C")
	}
	static class UQuest_12297_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12297_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12297_C;

SDK_NAMESPACE_END
