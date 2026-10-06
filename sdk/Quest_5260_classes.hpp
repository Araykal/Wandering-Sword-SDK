#pragma once



// Package: Quest_5260

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5260.Quest_5260_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5260_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5260_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5260(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_61080B0840E358BD4955CFA1EE8B61B5();
	void OnFinished_3D2172C84216EAD6B2DCFBA2779F17DA();
	void OnStop_3D2172C84216EAD6B2DCFBA2779F17DA();
	void OnDlgClosed_9133EABF42D6916BC7541EB044561EF5(int32 NPCId);
	void OnDlgSelectedOption_9133EABF42D6916BC7541EB044561EF5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5260_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5260_C")
	}
	static class UQuest_5260_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5260_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5260_C;

SDK_NAMESPACE_END
