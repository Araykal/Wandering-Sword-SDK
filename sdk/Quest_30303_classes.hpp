#pragma once



// Package: Quest_30303

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30303.Quest_30303_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30303_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30303_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30303(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_000DD28843E2ECC212817DBE69100552();
	void OnStop_000DD28843E2ECC212817DBE69100552();
	void OnDlgClosed_FAB78A364B652776EB025D954C1220C0(int32 NPCId);
	void OnDlgSelectedOption_FAB78A364B652776EB025D954C1220C0(int32 NPCId);
	void OnSuccess_FB0B15DD4AF1FDAD6F323082A18FFDB8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30303_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30303_C")
	}
	static class UQuest_30303_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30303_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30303_C;

SDK_NAMESPACE_END
