#pragma once



// Package: Quest_12634

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12634.Quest_12634_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12634_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12634_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12634(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D3DAAFB643318F71C88F838DCF9C44FF();
	void OnStop_D3DAAFB643318F71C88F838DCF9C44FF();
	void OnDlgClosed_12E4EF3C4EBEF9CF63DCECA79280E36E(int32 NPCId);
	void OnDlgSelectedOption_12E4EF3C4EBEF9CF63DCECA79280E36E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12634_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12634_C")
	}
	static class UQuest_12634_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12634_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12634_C;

SDK_NAMESPACE_END
