#pragma once



// Package: Quest_5001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5001.Quest_5001_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5001_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5001_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5001(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_55A9AC9643B2FED9E03448A0B24CAA8D();
	void OnFinished_CCBF72E54D503979802F7EA62ADAC563();
	void OnStop_CCBF72E54D503979802F7EA62ADAC563();
	void OnDlgClosed_6D5F36DC472F274E6DCA759446A2A30A(int32 NPCId);
	void OnDlgSelectedOption_6D5F36DC472F274E6DCA759446A2A30A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5001_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5001_C")
	}
	static class UQuest_5001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5001_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5001_C;

SDK_NAMESPACE_END
