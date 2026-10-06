#pragma once



// Package: Quest_5802

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5802.Quest_5802_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5802_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5802_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5802(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DF8B224B400FA983C2207D86713E23AD();
	void OnFinished_274A968B4E51656633AB3FAAA59FCAD2();
	void OnStop_274A968B4E51656633AB3FAAA59FCAD2();
	void OnDlgClosed_3430D4A24C76E761578F17829A0F63C0(int32 NPCId);
	void OnDlgSelectedOption_3430D4A24C76E761578F17829A0F63C0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5802_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5802_C")
	}
	static class UQuest_5802_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5802_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5802_C;

SDK_NAMESPACE_END
