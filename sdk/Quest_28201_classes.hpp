#pragma once



// Package: Quest_28201

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28201.Quest_28201_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28201_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28201_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28201(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0C4DF2A84EDDB6C3D3DD71A460FD749A();
	void OnFinished_C6B954E0433944D4309B49B745C4A589();
	void OnStop_C6B954E0433944D4309B49B745C4A589();
	void OnDlgClosed_C9E66B3D4DDF4975F3E1DAA2CD0D5569(int32 NPCId);
	void OnDlgSelectedOption_C9E66B3D4DDF4975F3E1DAA2CD0D5569(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28201_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28201_C")
	}
	static class UQuest_28201_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28201_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28201_C;

SDK_NAMESPACE_END
