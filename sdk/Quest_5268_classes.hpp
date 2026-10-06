#pragma once



// Package: Quest_5268

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5268.Quest_5268_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5268_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5268_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5268(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_89A713E7487C0A449A8C679B95DCA73C();
	void OnFinished_BABC2A43487A3FB2954471A20D11BB99();
	void OnStop_BABC2A43487A3FB2954471A20D11BB99();
	void OnDlgClosed_BF3CE630402A83E3B66F3BB442AC5646(int32 NPCId);
	void OnDlgSelectedOption_BF3CE630402A83E3B66F3BB442AC5646(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5268_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5268_C")
	}
	static class UQuest_5268_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5268_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5268_C;

SDK_NAMESPACE_END
