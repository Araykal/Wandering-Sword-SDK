#pragma once



// Package: Quest_5111

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5111.Quest_5111_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5111_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5111_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5111(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_32EDA380448F386340BE61AF10547B56();
	void OnStop_32EDA380448F386340BE61AF10547B56();
	void OnDlgClosed_7BF8BC0441B8B151C3D785B07A5F8041(int32 NPCId);
	void OnDlgSelectedOption_7BF8BC0441B8B151C3D785B07A5F8041(int32 NPCId);
	void OnSuccess_B8C806F049213E46C03851A39582CCC6(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5111_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5111_C")
	}
	static class UQuest_5111_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5111_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5111_C;

SDK_NAMESPACE_END
