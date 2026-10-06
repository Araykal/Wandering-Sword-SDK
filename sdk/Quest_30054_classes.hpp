#pragma once



// Package: Quest_30054

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30054.Quest_30054_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30054_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30054_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30054(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D99DDB8946E548CEBBA5BA992187E06D();
	void OnFinished_E8D123F645EC559067D431952F15F56F();
	void OnStop_E8D123F645EC559067D431952F15F56F();
	void OnDlgClosed_21A5939C430F2D6F47C9E7AB72457DB5(int32 NPCId);
	void OnDlgSelectedOption_21A5939C430F2D6F47C9E7AB72457DB5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30054_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30054_C")
	}
	static class UQuest_30054_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30054_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30054_C;

SDK_NAMESPACE_END
