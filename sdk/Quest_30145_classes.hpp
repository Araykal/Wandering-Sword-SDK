#pragma once



// Package: Quest_30145

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30145.Quest_30145_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_30145_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30145_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_30145(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_A54E0D6A4941AB7282C62A9474FE558F();
	void OnStop_A54E0D6A4941AB7282C62A9474FE558F();
	void OnDlgClosed_72489B3C4C1E6CFCB54A8EACF6563CE1(int32 NPCId);
	void OnDlgSelectedOption_72489B3C4C1E6CFCB54A8EACF6563CE1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30145_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30145_C")
	}
	static class UQuest_30145_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30145_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30145_C;

SDK_NAMESPACE_END
