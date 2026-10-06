#pragma once



// Package: Quest_7007

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7007.Quest_7007_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_7007_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7007_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_7007(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F0190BC949F2B9DF1D81CF9A5E6B564E();
	void OnStop_F0190BC949F2B9DF1D81CF9A5E6B564E();
	void OnDlgClosed_0F83C4F24E042856D1A6FEA439BB7036(int32 NPCId);
	void OnDlgSelectedOption_0F83C4F24E042856D1A6FEA439BB7036(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7007_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7007_C")
	}
	static class UQuest_7007_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7007_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7007_C;

SDK_NAMESPACE_END
