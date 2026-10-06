#pragma once



// Package: Quest_5349

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5349.Quest_5349_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5349_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5349_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5349(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DDAD3452491D4F4AA658E09DBBF3CAE6();
	void OnFinished_8025B4C8407B5340A4953385B620B80C();
	void OnStop_8025B4C8407B5340A4953385B620B80C();
	void OnDlgClosed_0A986873481BE6D6EC1ACE965DC3B017(int32 NPCId);
	void OnDlgSelectedOption_0A986873481BE6D6EC1ACE965DC3B017(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5349_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5349_C")
	}
	static class UQuest_5349_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5349_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5349_C;

SDK_NAMESPACE_END
