#pragma once



// Package: Quest_5354

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5354.Quest_5354_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5354_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5354_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5354(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_58F2721B4087C3829BDE81BD81D6E69F();
	void OnFinished_07BBAF7A4F49C1A91BFD70B07884CC2F();
	void OnStop_07BBAF7A4F49C1A91BFD70B07884CC2F();
	void OnDlgClosed_E66401E54118B93B31A0F598ECBC13F6(int32 NPCId);
	void OnDlgSelectedOption_E66401E54118B93B31A0F598ECBC13F6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5354_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5354_C")
	}
	static class UQuest_5354_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5354_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5354_C;

SDK_NAMESPACE_END
