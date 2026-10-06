#pragma once



// Package: Quest_5417

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5417.Quest_5417_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5417_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5417_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5417(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_78B1B4B14BD0634667984597E5D946C1();
	void OnFinished_079A9C5C4892EF6FDDC74986018FC09B();
	void OnStop_079A9C5C4892EF6FDDC74986018FC09B();
	void OnDlgClosed_9A052DAE47BF771FAF8B8B90E08A33F5(int32 NPCId);
	void OnDlgSelectedOption_9A052DAE47BF771FAF8B8B90E08A33F5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5417_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5417_C")
	}
	static class UQuest_5417_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5417_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5417_C;

SDK_NAMESPACE_END
