#pragma once



// Package: Quest_30002

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30002.Quest_30002_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30002_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30002_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30002(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1CAD468E4DE38C3F940453AF5295A5EE(bool bWinOrLose);
	void OnFinished_B66A068C401703DB065C269EA33C1C67();
	void OnStop_B66A068C401703DB065C269EA33C1C67();
	void OnDlgClosed_3DD8288E452B1811E5548F901B296D1E(int32 NPCId);
	void OnDlgSelectedOption_3DD8288E452B1811E5548F901B296D1E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30002_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30002_C")
	}
	static class UQuest_30002_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30002_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30002_C;

SDK_NAMESPACE_END
