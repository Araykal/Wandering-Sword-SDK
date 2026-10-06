#pragma once



// Package: Quest_30907

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30907.Quest_30907_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30907_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30907_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30907(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_20EDCBD24E39DAA5CEBD0ABB386BEA6F();
	void OnStop_20EDCBD24E39DAA5CEBD0ABB386BEA6F();
	void OnDlgClosed_5E4A3D91467843444DE1B2B5E097D309(int32 NPCId);
	void OnDlgSelectedOption_5E4A3D91467843444DE1B2B5E097D309(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30907_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30907_C")
	}
	static class UQuest_30907_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30907_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30907_C;

SDK_NAMESPACE_END
