#pragma once



// Package: Quest_12386

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12386.Quest_12386_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12386_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12386_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12386(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CE300D254BB492FDBD9DA0BA45A6488D();
	void OnStop_CE300D254BB492FDBD9DA0BA45A6488D();
	void OnDlgClosed_48691457455DA66671F8A7AD88E6DD3A(int32 NPCId);
	void OnDlgSelectedOption_48691457455DA66671F8A7AD88E6DD3A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12386_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12386_C")
	}
	static class UQuest_12386_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12386_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12386_C;

SDK_NAMESPACE_END
