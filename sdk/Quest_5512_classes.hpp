#pragma once



// Package: Quest_5512

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5512.Quest_5512_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5512_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5512_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5512(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FEC3DF8D409755A507A48D8AB5743518();
	void OnFinished_D5F4B43B477DB2B6B165B6A34BFE5504();
	void OnStop_D5F4B43B477DB2B6B165B6A34BFE5504();
	void OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A(int32 NPCId);
	void OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5512_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5512_C")
	}
	static class UQuest_5512_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5512_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5512_C;

SDK_NAMESPACE_END
