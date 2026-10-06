#pragma once



// Package: Quest_5528

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5528.Quest_5528_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5528_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5528_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5528(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_01F835464C37A542B5CA94A3F49CC552(bool bWinOrLose);
	void OnSuccess_3185A8CC4EEDA56D608CEA88BC876C1E(bool bWinOrLose);
	void OnSuccess_731B1145431EEABF4A91578ED8606993(bool bWinOrLose);
	void OnFinished_187CC1AC4863B650B8C1739C02EC7518();
	void OnStop_187CC1AC4863B650B8C1739C02EC7518();
	void OnDlgClosed_8225C2014EEA6CD340F593B028AC42D2(int32 NPCId);
	void OnDlgSelectedOption_8225C2014EEA6CD340F593B028AC42D2(int32 NPCId);
	void OnSuccess_25C3D00943CBE639A206DA9EFE2E6593(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5528_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5528_C")
	}
	static class UQuest_5528_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5528_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5528_C;

SDK_NAMESPACE_END
