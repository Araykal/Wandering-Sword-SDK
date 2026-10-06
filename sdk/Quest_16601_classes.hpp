#pragma once



// Package: Quest_16601

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16601.Quest_16601_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16601_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16601_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16601(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6FD43ED14172DEFE9A4C23ADEF49918C(bool bWinOrLose);
	void OnFinished_47A6FE2344D27A6A25F82B9409EE804E();
	void OnStop_47A6FE2344D27A6A25F82B9409EE804E();
	void OnDlgClosed_818A88D242389A4BA0449F9FFC1A1329(int32 NPCId);
	void OnDlgSelectedOption_818A88D242389A4BA0449F9FFC1A1329(int32 NPCId);
	void OnSuccess_2BE7EF04465DE251A7BD2981F295077B(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16601_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16601_C")
	}
	static class UQuest_16601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16601_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16601_C;

SDK_NAMESPACE_END
