#pragma once



// Package: Quest_5620

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5620.Quest_5620_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5620_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5620_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5620(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_33F6F8FD42809E1005B9A09E74E57B28(bool bWinOrLose);
	void OnFinished_E869F083477CAE34E531558C59A90334();
	void OnStop_E869F083477CAE34E531558C59A90334();
	void OnDlgClosed_5B8A478E424576D152C9E8A49D75076A(int32 NPCId);
	void OnDlgSelectedOption_5B8A478E424576D152C9E8A49D75076A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5620_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5620_C")
	}
	static class UQuest_5620_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5620_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5620_C;

SDK_NAMESPACE_END
