#pragma once



// Package: Quest_5426

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5426.Quest_5426_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5426_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5426_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5426(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_324DCD5441275E3693682C9953EB8A69();
	void OnStop_324DCD5441275E3693682C9953EB8A69();
	void OnDlgClosed_64D908C24F2BA14B9BE92BA05BD1C043(int32 NPCId);
	void OnDlgSelectedOption_64D908C24F2BA14B9BE92BA05BD1C043(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5426_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5426_C")
	}
	static class UQuest_5426_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5426_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5426_C;

SDK_NAMESPACE_END
