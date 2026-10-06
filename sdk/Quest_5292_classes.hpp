#pragma once



// Package: Quest_5292

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5292.Quest_5292_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5292_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5292_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5292(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_BB4748F045FEDDB47E07238F2F9E9C52(bool bWinOrLose);
	void OnSuccess_3B759F44401FE0787F037B84CA84F5B9(bool bWinOrLose);
	void OnSuccess_DF3BDA674E542353280696A7F74EEBB5(bool bWinOrLose);
	void OnFinished_762425E242EB2CEC5CA508BA88102658();
	void OnStop_762425E242EB2CEC5CA508BA88102658();
	void OnDlgClosed_601BE25449AB4203C7E8729301ABFA41(int32 NPCId);
	void OnDlgSelectedOption_601BE25449AB4203C7E8729301ABFA41(int32 NPCId);
	void OnSuccess_9BE7E7EE42BE2D6FF78CEAB70EC5666D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5292_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5292_C")
	}
	static class UQuest_5292_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5292_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5292_C;

SDK_NAMESPACE_END
