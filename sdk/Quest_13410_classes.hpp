#pragma once



// Package: Quest_13410

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_13410.Quest_13410_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_13410_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_13410_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_13410(int32 EntryPoint);
	void HandleRequesting(int32 NPCId);
	void OnFinished_F8A2B6C34342E993F63EB5BA386E4F89();
	void OnStop_F8A2B6C34342E993F63EB5BA386E4F89();
	void OnDlgClosed_D861132D42153474BA4B12B661D9DAD5(int32 NPCId);
	void OnDlgSelectedOption_D861132D42153474BA4B12B661D9DAD5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_13410_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_13410_C")
	}
	static class UQuest_13410_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_13410_C>();
	}
};
DUMPER7_ASSERTS_UQuest_13410_C;

SDK_NAMESPACE_END
