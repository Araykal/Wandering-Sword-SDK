#pragma once



// Package: Quest_5281

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5281.Quest_5281_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5281_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5281_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5281(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_646532C24928C618B738B691F2C04B47();
	void OnStop_646532C24928C618B738B691F2C04B47();
	void OnDlgClosed_F15D5CCD405AEA072F2342B692CE819C(int32 NPCId);
	void OnDlgSelectedOption_F15D5CCD405AEA072F2342B692CE819C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5281_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5281_C")
	}
	static class UQuest_5281_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5281_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5281_C;

SDK_NAMESPACE_END
