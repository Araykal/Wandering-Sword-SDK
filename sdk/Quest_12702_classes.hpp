#pragma once



// Package: Quest_12702

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12702.Quest_12702_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12702_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12702_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12702(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_F7A2A43C41510B79568075B338919105();
	void OnFinished_C94EEC864A4D6A2B70FF86B24803066B();
	void OnStop_C94EEC864A4D6A2B70FF86B24803066B();
	void OnDlgClosed_99914AB249897B63601A27A6CBFE5BE3(int32 NPCId);
	void OnDlgSelectedOption_99914AB249897B63601A27A6CBFE5BE3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12702_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12702_C")
	}
	static class UQuest_12702_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12702_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12702_C;

SDK_NAMESPACE_END
