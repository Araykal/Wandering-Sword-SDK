#pragma once



// Package: Quest_5247

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5247.Quest_5247_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5247_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5247_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5247(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4309194444182D541BDD0D9B4590477B();
	void OnStop_4309194444182D541BDD0D9B4590477B();
	void OnDlgClosed_D399C08B4A18952D27E4FB8E6275A21A(int32 NPCId);
	void OnDlgSelectedOption_D399C08B4A18952D27E4FB8E6275A21A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5247_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5247_C")
	}
	static class UQuest_5247_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5247_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5247_C;

SDK_NAMESPACE_END
