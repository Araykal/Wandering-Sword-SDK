#pragma once



// Package: Quest_31141

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_31141.Quest_31141_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_31141_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_31141_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Quest;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_31141(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_50FB941341035D47355422BD2CEE944D();
	void OnStop_50FB941341035D47355422BD2CEE944D();
	void OnDlgClosed_3515DBF844BE94BDE9F48891366D5ED7(int32 NPCId);
	void OnDlgSelectedOption_3515DBF844BE94BDE9F48891366D5ED7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_31141_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_31141_C")
	}
	static class UQuest_31141_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_31141_C>();
	}
};
DUMPER7_ASSERTS_UQuest_31141_C;

SDK_NAMESPACE_END
