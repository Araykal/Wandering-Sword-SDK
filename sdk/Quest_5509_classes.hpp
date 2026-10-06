#pragma once



// Package: Quest_5509

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5509.Quest_5509_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5509_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5509_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5509(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C417D4004207663DAD7D31901679B10A();
	void OnStop_C417D4004207663DAD7D31901679B10A();
	void OnDlgClosed_F59D38D74F38601F1BA595940E5026C6(int32 NPCId);
	void OnDlgSelectedOption_F59D38D74F38601F1BA595940E5026C6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5509_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5509_C")
	}
	static class UQuest_5509_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5509_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5509_C;

SDK_NAMESPACE_END
