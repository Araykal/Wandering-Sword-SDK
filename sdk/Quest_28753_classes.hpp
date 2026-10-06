#pragma once



// Package: Quest_28753

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28753.Quest_28753_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28753_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28753_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28753(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A5B80FB0474302D39ABFB3B1BADCB14B();
	void OnFinished_6070E39143C0E66CC1BDAA9B63FD3636();
	void OnStop_6070E39143C0E66CC1BDAA9B63FD3636();
	void OnDlgClosed_5D3C343B4D2CD0D8A3E5E5A6F89F2D64(int32 NPCId);
	void OnDlgSelectedOption_5D3C343B4D2CD0D8A3E5E5A6F89F2D64(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28753_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28753_C")
	}
	static class UQuest_28753_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28753_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28753_C;

SDK_NAMESPACE_END
