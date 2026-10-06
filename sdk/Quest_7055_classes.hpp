#pragma once



// Package: Quest_7055

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7055.Quest_7055_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_7055_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7055_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_7055(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1A9AC3C846456790324417929A1B4AD4();
	void OnFinished_E43B870C44C10869FD79BD9C07FF76E5();
	void OnStop_E43B870C44C10869FD79BD9C07FF76E5();
	void OnDlgClosed_665336474C15AC368A4A4D858FA00BA2(int32 NPCId);
	void OnDlgSelectedOption_665336474C15AC368A4A4D858FA00BA2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7055_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7055_C")
	}
	static class UQuest_7055_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7055_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7055_C;

SDK_NAMESPACE_END
