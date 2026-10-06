#pragma once



// Package: Quest_28718

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28718.Quest_28718_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28718_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28718_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28718(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_24DB701649F0BA849F90ECB346786CE2();
	void OnStop_24DB701649F0BA849F90ECB346786CE2();
	void OnDlgClosed_2DD712C64E17F6BD542BC497CF412A33(int32 NPCId);
	void OnDlgSelectedOption_2DD712C64E17F6BD542BC497CF412A33(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28718_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28718_C")
	}
	static class UQuest_28718_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28718_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28718_C;

SDK_NAMESPACE_END
