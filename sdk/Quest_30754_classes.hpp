#pragma once



// Package: Quest_30754

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30754.Quest_30754_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30754_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30754_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30754(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7132D61645A7BE01E93B2CA47A8F8551();
	void OnFinished_569CE38F494FD05739E7689D59EA6138();
	void OnStop_569CE38F494FD05739E7689D59EA6138();
	void OnDlgClosed_0F7981D9495FBC332CDE34B667F369CD(int32 NPCId);
	void OnDlgSelectedOption_0F7981D9495FBC332CDE34B667F369CD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30754_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30754_C")
	}
	static class UQuest_30754_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30754_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30754_C;

SDK_NAMESPACE_END
