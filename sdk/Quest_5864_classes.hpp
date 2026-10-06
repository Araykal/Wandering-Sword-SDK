#pragma once



// Package: Quest_5864

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5864.Quest_5864_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5864_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5864_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5864(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_16D5BAAF4E920279340CB687E2929640();
	void OnStop_16D5BAAF4E920279340CB687E2929640();
	void OnDlgClosed_D46693FC4915261E13B8F9BD7B98F28C(int32 NPCId);
	void OnDlgSelectedOption_D46693FC4915261E13B8F9BD7B98F28C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5864_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5864_C")
	}
	static class UQuest_5864_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5864_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5864_C;

SDK_NAMESPACE_END
