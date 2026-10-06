#pragma once



// Package: Quest_5655

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5655.Quest_5655_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5655_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5655_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5655(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1C80051B4BBF5DA5BE1DAE92152DBF5D();
	void OnFinished_1BDA3F2B450C9119E9AD1AA4A1810A87();
	void OnStop_1BDA3F2B450C9119E9AD1AA4A1810A87();
	void OnDlgClosed_B847F2DC4943B04363955091D36CD466(int32 NPCId);
	void OnDlgSelectedOption_B847F2DC4943B04363955091D36CD466(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5655_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5655_C")
	}
	static class UQuest_5655_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5655_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5655_C;

SDK_NAMESPACE_END
