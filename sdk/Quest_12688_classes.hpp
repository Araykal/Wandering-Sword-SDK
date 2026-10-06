#pragma once



// Package: Quest_12688

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12688.Quest_12688_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12688_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12688_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12688(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7DB8C3F54BDDF9FC62DBCE9D1AD74058();
	void OnStop_7DB8C3F54BDDF9FC62DBCE9D1AD74058();
	void OnDlgClosed_9DF61EE747277A408DB1BC89CBB6A3B0(int32 NPCId);
	void OnDlgSelectedOption_9DF61EE747277A408DB1BC89CBB6A3B0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12688_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12688_C")
	}
	static class UQuest_12688_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12688_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12688_C;

SDK_NAMESPACE_END
