#pragma once



// Package: Quest_5601

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5601.Quest_5601_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_5601_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5601_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Quest;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5601(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E64492194F2827B0096EFF9230714520();
	void OnStop_E64492194F2827B0096EFF9230714520();
	void OnDlgClosed_60F10441468EB34005E53AB34206F6E7(int32 NPCId);
	void OnDlgSelectedOption_60F10441468EB34005E53AB34206F6E7(int32 NPCId);
	void OnSuccess_575613964040337C4017AB9F19D54772(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5601_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5601_C")
	}
	static class UQuest_5601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5601_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5601_C;

SDK_NAMESPACE_END
