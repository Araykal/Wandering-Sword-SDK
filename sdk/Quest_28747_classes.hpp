#pragma once



// Package: Quest_28747

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28747.Quest_28747_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28747_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28747_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target_Level_Name_0;                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28747(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_27AA646648EFFD047C722FB0C7040100(bool bWinOrLose);
	void OnSuccess_773603F04411BBCA407E2F808777C7A7();
	void OnSuccess_6F32E80A472BA1B9297E05BF33602088();
	void OnSuccess_8A3EC7F74C1FF74FADC449B15B27C89F();
	void OnFinished_946F4A46491D6CEFC9AF31AF76DF1C7E();
	void OnStop_946F4A46491D6CEFC9AF31AF76DF1C7E();
	void OnDlgClosed_E7DE56A242F4E01263AB8F865D625417(int32 NPCId);
	void OnDlgSelectedOption_E7DE56A242F4E01263AB8F865D625417(int32 NPCId);
	void OnSuccess_26D9E37149C71109782DF49CDB6C58FD(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28747_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28747_C")
	}
	static class UQuest_28747_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28747_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28747_C;

SDK_NAMESPACE_END
