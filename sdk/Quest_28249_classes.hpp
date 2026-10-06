#pragma once



// Package: Quest_28249

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28249.Quest_28249_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28249_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28249_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28249(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_57DC33674771B765EE6D52A6C040D371();
	void OnStop_57DC33674771B765EE6D52A6C040D371();
	void OnDlgClosed_6EBBDF6C45159E0F553025852A7E094B(int32 NPCId);
	void OnDlgSelectedOption_6EBBDF6C45159E0F553025852A7E094B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28249_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28249_C")
	}
	static class UQuest_28249_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28249_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28249_C;

SDK_NAMESPACE_END
