#pragma once



// Package: Quest_16016

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16016.Quest_16016_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16016_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16016_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16016(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F911EAD242B226CB51B322A039B0836F();
	void OnStop_F911EAD242B226CB51B322A039B0836F();
	void OnDlgClosed_8FC2FB1148CB4C954C3EBB90D426A22A(int32 NPCId);
	void OnDlgSelectedOption_8FC2FB1148CB4C954C3EBB90D426A22A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16016_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16016_C")
	}
	static class UQuest_16016_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16016_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16016_C;

SDK_NAMESPACE_END
