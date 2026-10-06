#pragma once



// Package: Quest_7056

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7056.Quest_7056_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_7056_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7056_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_7056(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3BD985414044DEDB9A161DB4705925B2();
	void OnStop_3BD985414044DEDB9A161DB4705925B2();
	void OnDlgClosed_0CDBA1CA48163EBB8C5530BC6A5B4A73(int32 NPCId);
	void OnDlgSelectedOption_0CDBA1CA48163EBB8C5530BC6A5B4A73(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7056_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7056_C")
	}
	static class UQuest_7056_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7056_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7056_C;

SDK_NAMESPACE_END
