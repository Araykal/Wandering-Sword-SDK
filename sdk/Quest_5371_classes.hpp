#pragma once



// Package: Quest_5371

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5371.Quest_5371_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5371_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5371_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5371(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F5AA3DB84B8B70F6527DC291B582C4F7();
	void OnStop_F5AA3DB84B8B70F6527DC291B582C4F7();
	void OnDlgClosed_CBC3D51A47CAF4E8C50FDE9556B7B3F5(int32 NPCId);
	void OnDlgSelectedOption_CBC3D51A47CAF4E8C50FDE9556B7B3F5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5371_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5371_C")
	}
	static class UQuest_5371_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5371_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5371_C;

SDK_NAMESPACE_END
