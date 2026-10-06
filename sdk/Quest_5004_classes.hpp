#pragma once



// Package: Quest_5004

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5004.Quest_5004_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5004_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5004_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5004(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7FCCED554A33344C535734810D7955A4();
	void OnStop_7FCCED554A33344C535734810D7955A4();
	void OnDlgClosed_154272474FE2735087A38A896F5F6BD9(int32 NPCId);
	void OnDlgSelectedOption_154272474FE2735087A38A896F5F6BD9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5004_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5004_C")
	}
	static class UQuest_5004_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5004_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5004_C;

SDK_NAMESPACE_END
