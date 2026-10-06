#pragma once



// Package: Quest_14151

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_14151.Quest_14151_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_14151_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_14151_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_14151(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_12DA74B74BFF815ED04B5F807AA0D4C5();
	void OnStop_12DA74B74BFF815ED04B5F807AA0D4C5();
	void OnDlgClosed_F8323B4447E9436D222F488A88D3A040(int32 NPCId);
	void OnDlgSelectedOption_F8323B4447E9436D222F488A88D3A040(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_14151_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_14151_C")
	}
	static class UQuest_14151_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_14151_C>();
	}
};
DUMPER7_ASSERTS_UQuest_14151_C;

SDK_NAMESPACE_END
