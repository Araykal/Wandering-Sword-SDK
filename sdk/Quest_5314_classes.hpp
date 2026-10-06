#pragma once



// Package: Quest_5314

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5314.Quest_5314_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5314_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5314_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5314(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_141ABA4A48B3C41F068D8085BE528044(bool bWinOrLose);
	void OnFinished_EB64B591408DD699E47D279AFD3CB875();
	void OnStop_EB64B591408DD699E47D279AFD3CB875();
	void OnDlgClosed_51F94E3A4F042916B32A229F874F2D66(int32 NPCId);
	void OnDlgSelectedOption_51F94E3A4F042916B32A229F874F2D66(int32 NPCId);
	void OnSuccess_378768A640A6C4880D2699B26BECD55C(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5314_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5314_C")
	}
	static class UQuest_5314_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5314_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5314_C;

SDK_NAMESPACE_END
