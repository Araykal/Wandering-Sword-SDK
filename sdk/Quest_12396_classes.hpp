#pragma once



// Package: Quest_12396

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12396.Quest_12396_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12396_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12396_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12396(int32 EntryPoint);
	void 好感度();
	void HandleFinishing(int32 NPCId);
	void OnFinished_EFAE845840B16D59D24E0E8F9C9C5D79();
	void OnStop_EFAE845840B16D59D24E0E8F9C9C5D79();
	void OnDlgClosed_581A0F3D441BE111BA4880B841D9BD43(int32 NPCId);
	void OnDlgSelectedOption_581A0F3D441BE111BA4880B841D9BD43(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12396_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12396_C")
	}
	static class UQuest_12396_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12396_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12396_C;

SDK_NAMESPACE_END
