#pragma once



// Package: Quest_7044

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7044.Quest_7044_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7044_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7044_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7044(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_9AD34FF74AABFA04D3DF72B0F81D3EA5();
	void OnStop_9AD34FF74AABFA04D3DF72B0F81D3EA5();
	void OnDlgClosed_85882F6A42859EC9E8D159ABDE435721(int32 NPCId);
	void OnDlgSelectedOption_85882F6A42859EC9E8D159ABDE435721(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7044_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7044_C")
	}
	static class UQuest_7044_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7044_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7044_C;

SDK_NAMESPACE_END
