#pragma once



// Package: Quest_28021

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28021.Quest_28021_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28021_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28021_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28021(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B7DA42234C7D7CB396A4CC9864016DD6();
	void OnFinished_2DE6F3F14F02AE14697E338E5981C636();
	void OnStop_2DE6F3F14F02AE14697E338E5981C636();
	void OnDlgClosed_5AA6B5364C6966ED8FADF693F7EB99A4(int32 NPCId);
	void OnDlgSelectedOption_5AA6B5364C6966ED8FADF693F7EB99A4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28021_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28021_C")
	}
	static class UQuest_28021_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28021_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28021_C;

SDK_NAMESPACE_END
