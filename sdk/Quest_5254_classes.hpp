#pragma once



// Package: Quest_5254

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5254.Quest_5254_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5254_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5254_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5254(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_14D07F534BC36BDC8EE119B3E297DC4F();
	void OnStop_14D07F534BC36BDC8EE119B3E297DC4F();
	void OnDlgClosed_3D40D8F64C4D43739407F6AA889AD3A7(int32 NPCId);
	void OnDlgSelectedOption_3D40D8F64C4D43739407F6AA889AD3A7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5254_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5254_C")
	}
	static class UQuest_5254_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5254_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5254_C;

SDK_NAMESPACE_END
