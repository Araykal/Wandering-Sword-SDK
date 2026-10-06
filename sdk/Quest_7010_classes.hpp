#pragma once



// Package: Quest_7010

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7010.Quest_7010_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7010_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7010_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7010(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_2DC28ED84E3859A8BF3FABB71EA1C720();
	void OnStop_2DC28ED84E3859A8BF3FABB71EA1C720();
	void OnDlgClosed_2D4A81A84BCE4F8D8A273F8822BE7893(int32 NPCId);
	void OnDlgSelectedOption_2D4A81A84BCE4F8D8A273F8822BE7893(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7010_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7010_C")
	}
	static class UQuest_7010_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7010_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7010_C;

SDK_NAMESPACE_END
