#pragma once



// Package: Quest_5279

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5279.Quest_5279_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5279_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5279_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5279(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_126BFD5E48E746D4A3B87FB35B3471A2();
	void OnStop_126BFD5E48E746D4A3B87FB35B3471A2();
	void OnDlgClosed_787F83B6476B86CF1FEB37B52A591E26(int32 NPCId);
	void OnDlgSelectedOption_787F83B6476B86CF1FEB37B52A591E26(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5279_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5279_C")
	}
	static class UQuest_5279_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5279_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5279_C;

SDK_NAMESPACE_END
