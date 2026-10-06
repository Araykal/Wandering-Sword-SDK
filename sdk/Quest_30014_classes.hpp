#pragma once



// Package: Quest_30014

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30014.Quest_30014_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30014_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30014_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30014(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A14D3B7642999019D3C16EB4499120F0(bool bWinOrLose);
	void OnFinished_86A8674946EC2A83BE1549B4643F467C();
	void OnStop_86A8674946EC2A83BE1549B4643F467C();
	void OnDlgClosed_C74E7E9643B97A39F03327B5EF72F441(int32 NPCId);
	void OnDlgSelectedOption_C74E7E9643B97A39F03327B5EF72F441(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30014_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30014_C")
	}
	static class UQuest_30014_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30014_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30014_C;

SDK_NAMESPACE_END
