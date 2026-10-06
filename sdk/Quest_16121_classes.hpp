#pragma once



// Package: Quest_16121

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16121.Quest_16121_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16121_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16121_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16121(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C889BD6349879B72BACE56B9E08745E0();
	void OnFinished_C0D7D3A641E26FD8D7BC82908D348404();
	void OnStop_C0D7D3A641E26FD8D7BC82908D348404();
	void OnDlgClosed_D88E1B0446826DE63E4E11B05795371F(int32 NPCId);
	void OnDlgSelectedOption_D88E1B0446826DE63E4E11B05795371F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16121_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16121_C")
	}
	static class UQuest_16121_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16121_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16121_C;

SDK_NAMESPACE_END
