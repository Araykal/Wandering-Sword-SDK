#pragma once



// Package: Quest_7054

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7054.Quest_7054_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7054_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7054_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7054(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_469D42F24DB3A16712D35F84C828B23E();
	void OnStop_469D42F24DB3A16712D35F84C828B23E();
	void OnDlgClosed_CFBF592540A027BF9D6B29B27B8AFAD8(int32 NPCId);
	void OnDlgSelectedOption_CFBF592540A027BF9D6B29B27B8AFAD8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7054_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7054_C")
	}
	static class UQuest_7054_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7054_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7054_C;

SDK_NAMESPACE_END
