#pragma once



// Package: Quest_12529

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12529.Quest_12529_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12529_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12529_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12529(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0AE55B1A4EF166222DD33EB8FAD6D5F7();
	void OnFinished_1739F5CE41B1722F3D82E6B9AEF60237();
	void OnStop_1739F5CE41B1722F3D82E6B9AEF60237();
	void OnDlgClosed_6130D132400732F53AEF6BAB5A18FA21(int32 NPCId);
	void OnDlgSelectedOption_6130D132400732F53AEF6BAB5A18FA21(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12529_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12529_C")
	}
	static class UQuest_12529_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12529_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12529_C;

SDK_NAMESPACE_END
