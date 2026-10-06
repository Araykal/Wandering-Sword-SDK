#pragma once



// Package: Quest_14076

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14076.Quest_14076_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14076_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14076_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14076(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_506D256448CBFB0DBC92A0B9B1812618();
	void OnStop_506D256448CBFB0DBC92A0B9B1812618();
	void OnDlgClosed_9129B88E4B19810D24D9B9BFFC9095B8(int32 NPCId);
	void OnDlgSelectedOption_9129B88E4B19810D24D9B9BFFC9095B8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14076_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14076_C")
	}
	static class UQuest_14076_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14076_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14076_C;

SDK_NAMESPACE_END
