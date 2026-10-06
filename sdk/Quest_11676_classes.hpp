#pragma once



// Package: Quest_11676

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11676.Quest_11676_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11676_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11676_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11676(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_44C0AC96454A3C25138F869AE0F08EB8();
	void OnStop_44C0AC96454A3C25138F869AE0F08EB8();
	void OnDlgClosed_7B771B7D437DF8870FE65E8533FB144C(int32 NPCId);
	void OnDlgSelectedOption_7B771B7D437DF8870FE65E8533FB144C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11676_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11676_C")
	}
	static class UQuest_11676_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11676_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11676_C;

SDK_NAMESPACE_END
