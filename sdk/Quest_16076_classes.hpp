#pragma once



// Package: Quest_16076

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16076.Quest_16076_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16076_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16076_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16076(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_03AE098540B8FAE1F1225791E27D9E56();
	void OnStop_03AE098540B8FAE1F1225791E27D9E56();
	void OnDlgClosed_771AAB5B4BCFA65CFB5063BBCCBD64BE(int32 NPCId);
	void OnDlgSelectedOption_771AAB5B4BCFA65CFB5063BBCCBD64BE(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16076_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16076_C")
	}
	static class UQuest_16076_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16076_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16076_C;

SDK_NAMESPACE_END
