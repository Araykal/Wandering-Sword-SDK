#pragma once



// Package: Quest_7061

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7061.Quest_7061_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7061_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7061_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7061(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AA64288E43D2A41153A27A9E03C929C3(bool bWinOrLose);
	void OnSuccess_1E4A286C4B30C7F26CD7F9A9E097977A(bool bWinOrLose);
	void OnFinished_CBF9D13743C079258D192BBD1A14BB79();
	void OnStop_CBF9D13743C079258D192BBD1A14BB79();
	void OnDlgClosed_937C975C4296B35A2BAC07963CD5EE69(int32 NPCId);
	void OnDlgSelectedOption_937C975C4296B35A2BAC07963CD5EE69(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7061_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7061_C")
	}
	static class UQuest_7061_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7061_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7061_C;

SDK_NAMESPACE_END
