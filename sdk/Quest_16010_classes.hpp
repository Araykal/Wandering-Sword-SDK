#pragma once



// Package: Quest_16010

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16010.Quest_16010_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16010_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16010_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16010(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CED119A142B3A64BADF09EB50D42B906();
	void OnStop_CED119A142B3A64BADF09EB50D42B906();
	void OnDlgClosed_168D90BB4DB2423744D81A80EAC7E57F(int32 NPCId);
	void OnDlgSelectedOption_168D90BB4DB2423744D81A80EAC7E57F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16010_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16010_C")
	}
	static class UQuest_16010_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16010_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16010_C;

SDK_NAMESPACE_END
