#pragma once



// Package: Quest_14051

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14051.Quest_14051_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14051_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14051_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14051(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C5C65B2541F85043F52B4DB9328C0C58();
	void OnStop_C5C65B2541F85043F52B4DB9328C0C58();
	void OnDlgClosed_3D614506413A2155D6FF288930413C72(int32 NPCId);
	void OnDlgSelectedOption_3D614506413A2155D6FF288930413C72(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14051_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14051_C")
	}
	static class UQuest_14051_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14051_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14051_C;

SDK_NAMESPACE_END
