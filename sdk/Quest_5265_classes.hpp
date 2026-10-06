#pragma once



// Package: Quest_5265

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5265.Quest_5265_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5265_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5265_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5265(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_40C44C204364F7E7CE732EB28B070162(bool bWinOrLose);
	void OnSuccess_F738F11640659C69B4D6D196CB5AD512(bool bWinOrLose);
	void OnSuccess_5817D1704B4FD19DA29E4D994610E15A(bool bWinOrLose);
	void OnFinished_9846E79D47323B970167F7BAFCBB7073();
	void OnStop_9846E79D47323B970167F7BAFCBB7073();
	void OnDlgClosed_E15DE8384EF2BB3A979A76AFA07A0A47(int32 NPCId);
	void OnDlgSelectedOption_E15DE8384EF2BB3A979A76AFA07A0A47(int32 NPCId);
	void OnSuccess_4E7AC497430D9D9AFD283DA1CB59D588(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5265_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5265_C")
	}
	static class UQuest_5265_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5265_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5265_C;

SDK_NAMESPACE_END
