#pragma once



// Package: Quest_28231

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28231.Quest_28231_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28231_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28231_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28231(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_85119D1848ECAA0F080FF68FE5126492();
	void OnStop_85119D1848ECAA0F080FF68FE5126492();
	void OnDlgClosed_EE98888E49DCA870BC2D6E8B66C3D90B(int32 NPCId);
	void OnDlgSelectedOption_EE98888E49DCA870BC2D6E8B66C3D90B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28231_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28231_C")
	}
	static class UQuest_28231_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28231_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28231_C;

SDK_NAMESPACE_END
