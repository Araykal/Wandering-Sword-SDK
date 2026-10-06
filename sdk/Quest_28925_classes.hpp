#pragma once



// Package: Quest_28925

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28925.Quest_28925_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28925_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28925_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28925(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E5CDB0F5417D73DC4C233FAEA074A8B0();
	void OnFinished_5286B64E43D3D63D6DECC38AF96B54F9();
	void OnStop_5286B64E43D3D63D6DECC38AF96B54F9();
	void OnDlgClosed_121B6F554CC3A0F648D47881BF9F5014(int32 NPCId);
	void OnDlgSelectedOption_121B6F554CC3A0F648D47881BF9F5014(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28925_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28925_C")
	}
	static class UQuest_28925_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28925_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28925_C;

SDK_NAMESPACE_END
