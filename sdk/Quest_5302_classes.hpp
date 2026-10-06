#pragma once



// Package: Quest_5302

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5302.Quest_5302_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5302_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5302_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5302(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A395664247CFF15E1925C2A65A54602B();
	void OnFinished_B8E4AF74435B6560B9351E90D206EB05();
	void OnStop_B8E4AF74435B6560B9351E90D206EB05();
	void OnDlgClosed_3BECBE6748062957F616DBB6E7F3C5A3(int32 NPCId);
	void OnDlgSelectedOption_3BECBE6748062957F616DBB6E7F3C5A3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5302_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5302_C")
	}
	static class UQuest_5302_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5302_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5302_C;

SDK_NAMESPACE_END
