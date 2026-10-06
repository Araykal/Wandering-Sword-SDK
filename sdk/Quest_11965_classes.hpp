#pragma once



// Package: Quest_11965

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11965.Quest_11965_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11965_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11965_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11965(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B51A54034E8E252A6CEF9D93663B42F1();
	void OnStop_B51A54034E8E252A6CEF9D93663B42F1();
	void OnDlgClosed_7F7C0B264F4C08EE8C6D6591FCAC3DF2(int32 NPCId);
	void OnDlgSelectedOption_7F7C0B264F4C08EE8C6D6591FCAC3DF2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11965_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11965_C")
	}
	static class UQuest_11965_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11965_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11965_C;

SDK_NAMESPACE_END
