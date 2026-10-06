#pragma once



// Package: Quest_5809

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5809.Quest_5809_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5809_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5809_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5809(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D7D8DBB046D71BC0718D0D9FDBF17497();
	void OnFinished_8155E4DA45A6A770A3E29F98BF6F7A72();
	void OnStop_8155E4DA45A6A770A3E29F98BF6F7A72();
	void OnDlgClosed_D6972C334EF6B5E5A018ADBCAECB9355(int32 NPCId);
	void OnDlgSelectedOption_D6972C334EF6B5E5A018ADBCAECB9355(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5809_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5809_C")
	}
	static class UQuest_5809_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5809_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5809_C;

SDK_NAMESPACE_END
