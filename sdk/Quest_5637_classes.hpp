#pragma once



// Package: Quest_5637

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5637.Quest_5637_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5637_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5637_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5637(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_30033AB3469FF8897216BF9BD5281D91();
	void OnStop_30033AB3469FF8897216BF9BD5281D91();
	void OnDlgClosed_7B52490D45C21843D0A988BE6EA58174(int32 NPCId);
	void OnDlgSelectedOption_7B52490D45C21843D0A988BE6EA58174(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5637_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5637_C")
	}
	static class UQuest_5637_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5637_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5637_C;

SDK_NAMESPACE_END
