#pragma once



// Package: Quest_5851

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5851.Quest_5851_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_5851_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5851_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                 Quest;                                             // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5851(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4577D3FA4588A4D5D4058A9F064F62EF();
	void OnStop_4577D3FA4588A4D5D4058A9F064F62EF();
	void OnDlgClosed_9797AC784DC0273462CECD9D5DF70803(int32 NPCId);
	void OnDlgSelectedOption_9797AC784DC0273462CECD9D5DF70803(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5851_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5851_C")
	}
	static class UQuest_5851_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5851_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5851_C;

SDK_NAMESPACE_END
