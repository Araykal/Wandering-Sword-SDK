#pragma once



// Package: Quest_31115

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_31115.Quest_31115_C
// 0x0038 (0x0278 - 0x0240)
class UQuest_31115_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_31115_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Buffs;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OK;                                                // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RandBuff;                                          // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Buff;                                              // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quests;                                            // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_31115(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_64BA784E44EA47B2CF30E88DBBC475BB(int32 NPCId);
	void OnDlgSelectedOption_64BA784E44EA47B2CF30E88DBBC475BB(int32 NPCId);
	void OnFinished_74ABA73C43851C5F16A77CBA860C68E5();
	void OnStop_74ABA73C43851C5F16A77CBA860C68E5();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_31115_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_31115_C")
	}
	static class UQuest_31115_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_31115_C>();
	}
};
DUMPER7_ASSERTS_UQuest_31115_C;

SDK_NAMESPACE_END
