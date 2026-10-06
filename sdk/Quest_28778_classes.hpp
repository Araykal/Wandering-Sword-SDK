#pragma once



// Package: Quest_28778

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28778.Quest_28778_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28778_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28778_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28778(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1B4DA03E442F98C318EECEAA55D59D1A();
	void OnFinished_0E9C89FC4E653600F18D11B52628B23A();
	void OnStop_0E9C89FC4E653600F18D11B52628B23A();
	void OnDlgClosed_BCF0DF324292170AA001ACBC34D2351F(int32 NPCId);
	void OnDlgSelectedOption_BCF0DF324292170AA001ACBC34D2351F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28778_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28778_C")
	}
	static class UQuest_28778_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28778_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28778_C;

SDK_NAMESPACE_END
