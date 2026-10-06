#pragma once



// Package: Quest_5394

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5394.Quest_5394_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5394_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5394_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5394(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DF90966B4B8B287FCE24E994DCE475E6();
	void OnStop_DF90966B4B8B287FCE24E994DCE475E6();
	void OnDlgClosed_6A17C2E345130EE1D3207DACB33FC101(int32 NPCId);
	void OnDlgSelectedOption_6A17C2E345130EE1D3207DACB33FC101(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5394_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5394_C")
	}
	static class UQuest_5394_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5394_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5394_C;

SDK_NAMESPACE_END
