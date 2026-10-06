#pragma once



// Package: Quest_5082

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5082.Quest_5082_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5082_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5082_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EJHNeoUI_GuidanceStepConfigClusterType        CType;                                             // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5082(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F277715042F5ECE2554C589D560CF0FA();
	void OnStop_F277715042F5ECE2554C589D560CF0FA();
	void OnDlgClosed_3CAE414047C672E317A6C8BB085AE562(int32 NPCId);
	void OnDlgSelectedOption_3CAE414047C672E317A6C8BB085AE562(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5082_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5082_C")
	}
	static class UQuest_5082_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5082_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5082_C;

SDK_NAMESPACE_END
