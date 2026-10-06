#pragma once



// Package: Quest_12673

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12673.Quest_12673_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12673_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12673_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12673(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3D04511549A678E71B3FB9BB7836CAEE();
	void OnFinished_4CBE018F4E39DC280CBC9186A4ABC49B();
	void OnStop_4CBE018F4E39DC280CBC9186A4ABC49B();
	void OnDlgClosed_D73D4CD543880D8FEF787DA5ABD7D031(int32 NPCId);
	void OnDlgSelectedOption_D73D4CD543880D8FEF787DA5ABD7D031(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12673_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12673_C")
	}
	static class UQuest_12673_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12673_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12673_C;

SDK_NAMESPACE_END
