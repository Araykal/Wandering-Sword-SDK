#pragma once



// Package: Quest_28314

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28314.Quest_28314_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28314_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28314_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28314(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E6B00F3E4B7DEB946288CA8A677FDB50();
	void OnFinished_C82B7D8A4888F6A595E705A9FD018FDA();
	void OnStop_C82B7D8A4888F6A595E705A9FD018FDA();
	void OnDlgClosed_BF1604A146F2D6BE1101CEA5A8256D85(int32 NPCId);
	void OnDlgSelectedOption_BF1604A146F2D6BE1101CEA5A8256D85(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28314_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28314_C")
	}
	static class UQuest_28314_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28314_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28314_C;

SDK_NAMESPACE_END
