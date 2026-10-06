#pragma once



// Package: Quest_30086

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30086.Quest_30086_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30086_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30086_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30086(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0A1EF6D94B3E5F1A7B6B5EA67BCC64F3();
	void OnFinished_8A76FB714D1BDA5C709AD6928BE4B25F();
	void OnStop_8A76FB714D1BDA5C709AD6928BE4B25F();
	void OnDlgClosed_642030BF4304944CE669A69CA783B37D(int32 NPCId);
	void OnDlgSelectedOption_642030BF4304944CE669A69CA783B37D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30086_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30086_C")
	}
	static class UQuest_30086_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30086_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30086_C;

SDK_NAMESPACE_END
