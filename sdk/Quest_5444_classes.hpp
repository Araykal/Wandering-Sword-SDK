#pragma once



// Package: Quest_5444

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5444.Quest_5444_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5444_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5444_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5444(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_28A336A740A9AA57665360AAE25D3EF4();
	void OnStop_28A336A740A9AA57665360AAE25D3EF4();
	void OnDlgClosed_AE5193CC473B398A1DAB9592CD43A054(int32 NPCId);
	void OnDlgSelectedOption_AE5193CC473B398A1DAB9592CD43A054(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5444_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5444_C")
	}
	static class UQuest_5444_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5444_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5444_C;

SDK_NAMESPACE_END
