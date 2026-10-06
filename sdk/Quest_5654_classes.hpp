#pragma once



// Package: Quest_5654

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5654.Quest_5654_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5654_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5654_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5654(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_83A8AFB643A974A45DECCFAE9846B861();
	void OnFinished_5F615B494DB32A383955C3A2F82A631F();
	void OnStop_5F615B494DB32A383955C3A2F82A631F();
	void OnDlgClosed_CA173910482901F18500A8BAC53B02B1(int32 NPCId);
	void OnDlgSelectedOption_CA173910482901F18500A8BAC53B02B1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5654_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5654_C")
	}
	static class UQuest_5654_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5654_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5654_C;

SDK_NAMESPACE_END
