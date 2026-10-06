#pragma once



// Package: Quest_28777

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28777.Quest_28777_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28777_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28777_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name_0;                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28777(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_03D91C864B7B3C2CAAD5A9B54FBD5F72();
	void OnSuccess_F9BF87144456FC7F68C9798B711CF5A8(bool bWinOrLose);
	void OnSuccess_5F710C2542C71D8D03129CAA65E5EB44();
	void OnFinished_260BFB164DEB9D6AF28D98B7F6BD314F();
	void OnStop_260BFB164DEB9D6AF28D98B7F6BD314F();
	void OnDlgClosed_308571F44CCE8BC1794865A19B0B8241(int32 NPCId);
	void OnDlgSelectedOption_308571F44CCE8BC1794865A19B0B8241(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28777_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28777_C")
	}
	static class UQuest_28777_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28777_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28777_C;

SDK_NAMESPACE_END
