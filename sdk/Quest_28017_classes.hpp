#pragma once



// Package: Quest_28017

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28017.Quest_28017_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28017_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28017_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28017(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_34008A95471C97C29A060BB5D170DE28();
	void OnFinished_9AD5C7214C260AA1FF3E609A1A2095D0();
	void OnStop_9AD5C7214C260AA1FF3E609A1A2095D0();
	void OnDlgClosed_824FD6C4457450627FF398B37102270B(int32 NPCId);
	void OnDlgSelectedOption_824FD6C4457450627FF398B37102270B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28017_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28017_C")
	}
	static class UQuest_28017_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28017_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28017_C;

SDK_NAMESPACE_END
