#pragma once



// Package: Quest_5173

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5173.Quest_5173_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5173_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5173_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5173(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DBF148214242DB0A11B7A6A77F7FA526();
	void OnFinished_457D21B9455D888B4C96078FAA535DD4();
	void OnStop_457D21B9455D888B4C96078FAA535DD4();
	void OnDlgClosed_69F5FF43406EDDB5CB5591B01C2EA36E(int32 NPCId);
	void OnDlgSelectedOption_69F5FF43406EDDB5CB5591B01C2EA36E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5173_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5173_C")
	}
	static class UQuest_5173_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5173_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5173_C;

SDK_NAMESPACE_END
