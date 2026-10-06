#pragma once



// Package: Quest_5264

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5264.Quest_5264_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5264_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5264_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5264(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_27D4647E43612401D815749CCEFE87B6();
	void OnFinished_479ED5DB432DEB360247318FA81F0B4D();
	void OnStop_479ED5DB432DEB360247318FA81F0B4D();
	void OnDlgClosed_4FB2CD1A48674E04D2B76B94145A09DC(int32 NPCId);
	void OnDlgSelectedOption_4FB2CD1A48674E04D2B76B94145A09DC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5264_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5264_C")
	}
	static class UQuest_5264_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5264_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5264_C;

SDK_NAMESPACE_END
