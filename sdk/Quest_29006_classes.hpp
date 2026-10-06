#pragma once



// Package: Quest_29006

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29006.Quest_29006_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29006_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29006_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29006(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_0AD38E3D4DDD41B4D128CB95F2739173();
	void OnFinished_B82251FD41911F31F97A79B7E590ECED();
	void OnStop_B82251FD41911F31F97A79B7E590ECED();
	void OnDlgClosed_E75725184058A7663E6BC6AC9EC2BAB7(int32 NPCId);
	void OnDlgSelectedOption_E75725184058A7663E6BC6AC9EC2BAB7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29006_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29006_C")
	}
	static class UQuest_29006_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29006_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29006_C;

SDK_NAMESPACE_END
