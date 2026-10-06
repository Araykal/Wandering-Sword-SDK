#pragma once



// Package: Quest_12384

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12384.Quest_12384_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12384_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12384_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12384(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_5D6577D24499FBB1CB2EADB0294804C7();
	void OnFinished_90B247504373F9EFCDD55B89D480EF3E();
	void OnStop_90B247504373F9EFCDD55B89D480EF3E();
	void OnDlgClosed_B703F1D44DBC67717C0DED8ADBC5E8F6(int32 NPCId);
	void OnDlgSelectedOption_B703F1D44DBC67717C0DED8ADBC5E8F6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12384_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12384_C")
	}
	static class UQuest_12384_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12384_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12384_C;

SDK_NAMESPACE_END
