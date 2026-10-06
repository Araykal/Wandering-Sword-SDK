#pragma once



// Package: Quest_12085

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12085.Quest_12085_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12085_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12085_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12085(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4A3E47234535DDB111CE118EC767415E();
	void OnStop_4A3E47234535DDB111CE118EC767415E();
	void OnDlgClosed_E34014E241D5A035A4C3689A14E92A54(int32 NPCId);
	void OnDlgSelectedOption_E34014E241D5A035A4C3689A14E92A54(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12085_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12085_C")
	}
	static class UQuest_12085_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12085_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12085_C;

SDK_NAMESPACE_END
