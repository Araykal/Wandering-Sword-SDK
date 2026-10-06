#pragma once



// Package: Quest_5205

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5205.Quest_5205_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5205_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5205_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5205(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F4F2E6134EDFAAD4CAB383A61B1009DE();
	void OnStop_F4F2E6134EDFAAD4CAB383A61B1009DE();
	void OnDlgClosed_B8A719284A27D5206BBC329A8280A28A(int32 NPCId);
	void OnDlgSelectedOption_B8A719284A27D5206BBC329A8280A28A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5205_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5205_C")
	}
	static class UQuest_5205_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5205_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5205_C;

SDK_NAMESPACE_END
