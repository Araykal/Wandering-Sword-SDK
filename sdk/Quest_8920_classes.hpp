#pragma once



// Package: Quest_8920

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_8920.Quest_8920_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_8920_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_8920_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_8920(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_7BBBC22C4CA59762B3D064B785008153(int32 NPCId);
	void OnDlgSelectedOption_7BBBC22C4CA59762B3D064B785008153(int32 NPCId);
	void OnFinished_E033E9854CE65B38F6BDF4A1C29109A9();
	void OnStop_E033E9854CE65B38F6BDF4A1C29109A9();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_8920_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_8920_C")
	}
	static class UQuest_8920_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_8920_C>();
	}
};
DUMPER7_ASSERTS_UQuest_8920_C;

SDK_NAMESPACE_END
