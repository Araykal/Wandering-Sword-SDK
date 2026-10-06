#pragma once



// Package: Quest_11807

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11807.Quest_11807_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11807_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11807_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11807(int32 EntryPoint);
	void End(const class FString& GuidanceType);
	void HandleFinishing(int32 NPCId);
	void OnFinished_DA748DCE42EBA03FDF5FBC8D4DE5ACA1();
	void OnStop_DA748DCE42EBA03FDF5FBC8D4DE5ACA1();
	void OnDlgClosed_A31559E34A5528C88C3E67A0022FA331(int32 NPCId);
	void OnDlgSelectedOption_A31559E34A5528C88C3E67A0022FA331(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11807_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11807_C")
	}
	static class UQuest_11807_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11807_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11807_C;

SDK_NAMESPACE_END
