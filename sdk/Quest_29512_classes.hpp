#pragma once



// Package: Quest_29512

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29512.Quest_29512_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29512_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29512_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29512(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_2B7A216A4BA316D61B4E56B009D07BEF();
	void OnStop_2B7A216A4BA316D61B4E56B009D07BEF();
	void OnDlgClosed_948D76424A5710C4397095B41F7415EE(int32 NPCId);
	void OnDlgSelectedOption_948D76424A5710C4397095B41F7415EE(int32 NPCId);
	void OnSuccess_0303C74C4CAE7BC38FA4C3A0DC7836C5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29512_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29512_C")
	}
	static class UQuest_29512_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29512_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29512_C;

SDK_NAMESPACE_END
