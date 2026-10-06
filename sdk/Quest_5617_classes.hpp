#pragma once



// Package: Quest_5617

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5617.Quest_5617_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5617_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5617_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_NpcPos_C*                           NewVar_0;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5617(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6EC1AEF9478A0A5D44B055A657D5FF7B(bool bWinOrLose);
	void OnFinished_26CF074D4FEA89370FE799A51914AD1A();
	void OnStop_26CF074D4FEA89370FE799A51914AD1A();
	void OnDlgClosed_FAC4BA4D46D3F8D649E477B45E843DD7(int32 NPCId);
	void OnDlgSelectedOption_FAC4BA4D46D3F8D649E477B45E843DD7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5617_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5617_C")
	}
	static class UQuest_5617_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5617_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5617_C;

SDK_NAMESPACE_END
