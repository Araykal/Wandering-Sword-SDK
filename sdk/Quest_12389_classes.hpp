#pragma once



// Package: Quest_12389

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12389.Quest_12389_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12389_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12389_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12389(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D3940FED422C99FFEEB9E9980F3D2A3E();
	void OnStop_D3940FED422C99FFEEB9E9980F3D2A3E();
	void OnDlgClosed_8C5B13CD4DEA445DD1B689837AD9D54C(int32 NPCId);
	void OnDlgSelectedOption_8C5B13CD4DEA445DD1B689837AD9D54C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12389_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12389_C")
	}
	static class UQuest_12389_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12389_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12389_C;

SDK_NAMESPACE_END
