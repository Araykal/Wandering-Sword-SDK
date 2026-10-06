#pragma once



// Package: Quest_5419

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5419.Quest_5419_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5419_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5419_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5419(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6C7814154A9588FD5252FEB131EFEC73(bool bWinOrLose);
	void OnSuccess_E04B274B4212E794DA88558148417010(bool bWinOrLose);
	void OnSuccess_5020783B473FB3C22EF36A8FA970BB51(bool bWinOrLose);
	void OnFinished_D8DE3BA747577CBA336B7C9F3DAFD4EB();
	void OnStop_D8DE3BA747577CBA336B7C9F3DAFD4EB();
	void OnDlgClosed_5052498B4AA522775DDEDF9C67F20FF1(int32 NPCId);
	void OnDlgSelectedOption_5052498B4AA522775DDEDF9C67F20FF1(int32 NPCId);
	void OnSuccess_B050A5304EA68279BE05EDB5569F62F6(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5419_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5419_C")
	}
	static class UQuest_5419_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5419_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5419_C;

SDK_NAMESPACE_END
