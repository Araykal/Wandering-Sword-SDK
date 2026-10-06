#pragma once



// Package: Quest_29533

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29533.Quest_29533_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_29533_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29533_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29533(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_02B59FEF46734B359EF2BEAA71C77C48();
	void OnFinished_BFAF3E754F6B3D03F1982098234147FF();
	void OnStop_BFAF3E754F6B3D03F1982098234147FF();
	void OnDlgClosed_85DAB8094EFB95CABEF9B6A08F0708B4(int32 NPCId);
	void OnDlgSelectedOption_85DAB8094EFB95CABEF9B6A08F0708B4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29533_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29533_C")
	}
	static class UQuest_29533_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29533_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29533_C;

SDK_NAMESPACE_END
