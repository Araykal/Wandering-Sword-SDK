#pragma once



// Package: Quest_5388

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5388.Quest_5388_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5388_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5388_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5388(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7EB066B74D3AEBEC5C476F962C9582E1();
	void OnFinished_5EA2F8C1496B22AB884B80BF15E5EE5F();
	void OnStop_5EA2F8C1496B22AB884B80BF15E5EE5F();
	void OnDlgClosed_090E029B4C9EF833D230BCBCC8A44964(int32 NPCId);
	void OnDlgSelectedOption_090E029B4C9EF833D230BCBCC8A44964(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5388_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5388_C")
	}
	static class UQuest_5388_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5388_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5388_C;

SDK_NAMESPACE_END
