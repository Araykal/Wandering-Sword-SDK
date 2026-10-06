#pragma once



// Package: Quest_11371

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11371.Quest_11371_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11371_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11371_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11371(int32 EntryPoint);
	void HandleAcceptRequested(int32 NPCId);
	void OnFinished_45D1B1BB4AB453DC6B50B8A60D8A4711();
	void OnStop_45D1B1BB4AB453DC6B50B8A60D8A4711();
	void OnDlgClosed_CA94CC9F4CDF5F42EF7B3F86E03BAAAB(int32 NPCId);
	void OnDlgSelectedOption_CA94CC9F4CDF5F42EF7B3F86E03BAAAB(int32 NPCId);
	void OnSuccess_97EDD34442F1862E26384B9ABB3A4725(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11371_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11371_C")
	}
	static class UQuest_11371_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11371_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11371_C;

SDK_NAMESPACE_END
