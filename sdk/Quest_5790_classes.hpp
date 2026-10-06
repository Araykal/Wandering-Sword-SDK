#pragma once



// Package: Quest_5790

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5790.Quest_5790_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5790_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5790_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5790(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_361CC9BC48F25823A7E0CA918F6E100C();
	void OnFinished_66AB0F1340399FF5B93010B51D3F28FD();
	void OnStop_66AB0F1340399FF5B93010B51D3F28FD();
	void OnDlgClosed_1AE4099E430D6E3590153B952585F1A1(int32 NPCId);
	void OnDlgSelectedOption_1AE4099E430D6E3590153B952585F1A1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5790_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5790_C")
	}
	static class UQuest_5790_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5790_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5790_C;

SDK_NAMESPACE_END
