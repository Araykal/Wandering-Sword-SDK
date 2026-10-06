#pragma once



// Package: Quest_5558

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5558.Quest_5558_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5558_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5558_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5558(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_CA03630A47DAB1E2504CD29998B70866();
	void OnFinished_128F39F948FBDE9CD58289AEB2DF39A2();
	void OnStop_128F39F948FBDE9CD58289AEB2DF39A2();
	void OnDlgClosed_618E0EC2495F5826A2EFFE874884E83F(int32 NPCId);
	void OnDlgSelectedOption_618E0EC2495F5826A2EFFE874884E83F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5558_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5558_C")
	}
	static class UQuest_5558_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5558_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5558_C;

SDK_NAMESPACE_END
