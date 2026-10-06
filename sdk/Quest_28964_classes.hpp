#pragma once



// Package: Quest_28964

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28964.Quest_28964_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28964_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28964_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28964(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8EFF481743413930463B6C9D9E32DDAA();
	void OnStop_8EFF481743413930463B6C9D9E32DDAA();
	void OnDlgClosed_CB7F083144BFBCD629201F8C36B86EF2(int32 NPCId);
	void OnDlgSelectedOption_CB7F083144BFBCD629201F8C36B86EF2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28964_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28964_C")
	}
	static class UQuest_28964_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28964_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28964_C;

SDK_NAMESPACE_END
