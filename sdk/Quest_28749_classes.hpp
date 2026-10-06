#pragma once



// Package: Quest_28749

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28749.Quest_28749_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28749_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28749_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28749(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_932E621745CF41E4F1D1049954FED189();
	void OnFinished_DAC05C4D4E33F6273B16A181F7DE760E();
	void OnStop_DAC05C4D4E33F6273B16A181F7DE760E();
	void OnDlgClosed_A96190F24A2CF98D1682D2934A95310C(int32 NPCId);
	void OnDlgSelectedOption_A96190F24A2CF98D1682D2934A95310C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28749_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28749_C")
	}
	static class UQuest_28749_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28749_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28749_C;

SDK_NAMESPACE_END
