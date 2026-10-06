#pragma once



// Package: Quest_30047

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30047.Quest_30047_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30047_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30047_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30047(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7199B0EB44B3BEA2C901289EE7233657();
	void OnFinished_3005B72D4BD6D137EA3BEEB1BB7545FD();
	void OnStop_3005B72D4BD6D137EA3BEEB1BB7545FD();
	void OnDlgClosed_54BEB090489FC07387E11CB3BF42C084(int32 NPCId);
	void OnDlgSelectedOption_54BEB090489FC07387E11CB3BF42C084(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30047_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30047_C")
	}
	static class UQuest_30047_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30047_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30047_C;

SDK_NAMESPACE_END
