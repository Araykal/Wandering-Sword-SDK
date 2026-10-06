#pragma once



// Package: Quest_16600

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16600.Quest_16600_C
// 0x0040 (0x0280 - 0x0240)
class UQuest_16600_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16600_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name1;                                // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_0;                                          // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_1;                                          // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   NewVar_2;                                          // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16600(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_ABF1A9B14E7175B46068B6AD0AD0540A();
	void OnSuccess_1D677E5745947E02B333108F93E2E8A9();
	void OnSuccess_49BA55E74FD5CBFDD242178DA59B0D81();
	void OnSuccess_0EBCFF914201C3B20FD1D7BA63A4C984();
	void OnSuccess_AE2383FE4B3436127FC30B8AD189042D();
	void OnFinished_C2D1D0AE4C43548044853B88DA814BE9();
	void OnStop_C2D1D0AE4C43548044853B88DA814BE9();
	void OnDlgClosed_8557074C404F8D5B8315A8B9708E3788(int32 NPCId);
	void OnDlgSelectedOption_8557074C404F8D5B8315A8B9708E3788(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16600_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16600_C")
	}
	static class UQuest_16600_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16600_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16600_C;

SDK_NAMESPACE_END
