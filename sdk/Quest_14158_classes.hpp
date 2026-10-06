#pragma once



// Package: Quest_14158

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14158.Quest_14158_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14158_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14158_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14158(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D661D6E0479FA98059BB938AA6100D15();
	void OnStop_D661D6E0479FA98059BB938AA6100D15();
	void OnDlgClosed_865AEAF0403A98D16AEBED87E38BA568(int32 NPCId);
	void OnDlgSelectedOption_865AEAF0403A98D16AEBED87E38BA568(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14158_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14158_C")
	}
	static class UQuest_14158_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14158_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14158_C;

SDK_NAMESPACE_END
