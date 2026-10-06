#pragma once



// Package: Quest_5784

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5784.Quest_5784_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5784_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5784_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5784(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_797207004B3E96F49B45FABC2C3E7BCB();
	void OnFinished_6B16383E419C7BED0800059F605B7175();
	void OnStop_6B16383E419C7BED0800059F605B7175();
	void OnDlgClosed_67C8B5714167032D63DAE29132B20C79(int32 NPCId);
	void OnDlgSelectedOption_67C8B5714167032D63DAE29132B20C79(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5784_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5784_C")
	}
	static class UQuest_5784_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5784_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5784_C;

SDK_NAMESPACE_END
